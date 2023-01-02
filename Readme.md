![assimp](https://raw.githubusercontent.com/StirlingLabs/assimp/master/doc/assimp.jpg)

![C/C++ CI](https://github.com/StirlingLabs/assimp/workflows/C/C++%20CI/badge.svg)
[![Codacy Badge](https://app.codacy.com/project/badge/Grade/5fe5c626067f422da6736dcec209a199)](https://www.codacy.com/gh/StirlingLabs/assimp/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=StirlingLabs/assimp&amp;utm_campaign=Badge_Grade)
![GitHub release (latest SemVer)](https://img.shields.io/github/v/release/StirlingLabs/assimp?sort=semver)

This is a closely-tracking [fork of assimp](https://github.com/assimp/assimp), a library to import and export various 3d-model-formats including scene-post-processing to generate missing render data.


# Open Asset Import Library (assimp)

assimp provides APIs for C and C++ and this repo builds [native libraries exported as NuPkg](https://www.nuget.org/packages?q=Stirlinglabs.assimp.native) for 64-bit Windows, Linux (Ubuntu) & MacOS (fat binary for Intel & Apple Silicon). These packages are used by [Assimp.Net](https://github.com/StirlingLabs/Assimp.Net), our fork of [Starnick's .Net wrapper](https://bitbucket.org/Starnick/assimpnet).

Additionally, assimp features various __mesh post processing tools__: normals and tangent space generation, triangulation, vertex cache locality optimization, removal of degenerate primitives and duplicate vertices, sorting by primitive type, merging of redundant materials and many more.


## Latest Docs

- Offical documentation is at [ReadTheDocs](https://assimp-docs.readthedocs.io/en/latest/). 
- You can find the complete list of supported file-formats [here](https://github.com/assimp/assimp/blob/master/doc/Fileformats.md).
- [assimp Wiki](https://github.com/assimp/assimp/wiki) might be useful as well.
- There is also a [model database](https://github.com/assimp/assimp-mdb) that is useful for testing.

If the docs don't solve your problem, ask on [StackOverflow with the assimp-tag](http://stackoverflow.com/questions/tagged/assimp?sort=newest). If you think you found a bug, please open an issue.


## Contributors

Contributions to [assimp](https://github.com/assimp/assimp) are highly appreciated. The easiest way to get involved is to submit a pull request with your changes against the main repository's `master` branch.

<a href="https://github.com/assimp/assimp/graphs/contributors"><img src="https://opencollective.com/assimp/contributors.svg?width=890&button=false" /></a>
