#include "../../include/assimp/DefaultLogger.hpp"
#include "UnitTestPCH.h"
#include <math.h>
#include <time.h>

int main(int argc, char *argv[]) {

#ifdef _MSC_VER
    _putenv("GTEST_BREAK_ON_FAILURE=1");
    _set_abort_behavior(_WRITE_ABORT_MSG, _WRITE_ABORT_MSG | _CALL_REPORTFAULT);
#endif

    ::testing::InitGoogleTest(&argc, argv);

    // seed the randomizer with the current system time
    time_t t;
    time(&t);
    srand((unsigned int)t);

    // ............................................................................

    // create a logger from both CPP
    Assimp::DefaultLogger::create("AssimpLog_Cpp.txt", Assimp::Logger::VERBOSE,
            aiDefaultLogStream_STDOUT | aiDefaultLogStream_DEBUGGER | aiDefaultLogStream_FILE);

    // .. and C. They should smoothly work together
    aiEnableVerboseLogging(AI_TRUE);
    aiLogStream logstream = aiGetPredefinedLogStream(aiDefaultLogStream_FILE, "AssimpLog_C.txt");
    aiAttachLogStream(&logstream);

    int result = RUN_ALL_TESTS();

    // ............................................................................
    // but shutdown must be done from C to ensure proper deallocation
    aiDetachAllLogStreams();

    return result;
}
