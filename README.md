fann-lite
=========
pure javascript version of [fann](http://leenissen.dk/fann/) (fast artificial neural net library) with zero npm-dependencies (compiled from emscripten)

[![NPM](https://img.shields.io/npm/v/fann-lite.svg?style=flat-square)](https://www.npmjs.org/package/fann-lite)



# build-status [![travis-ci.org build-status](https://api.travis-ci.org/kaizhu256/node-fann-lite.svg)](https://travis-ci.org/kaizhu256/node-fann-lite)

| git-branch : | [master](https://github.com/kaizhu256/node-fann-lite/tree/master) | [beta](https://github.com/kaizhu256/node-fann-lite/tree/beta) | [alpha](https://github.com/kaizhu256/node-fann-lite/tree/alpha)|
|--:|:--|:--|:--|
| build-artifacts : | [![build-artifacts](https://kaizhu256.github.io/node-fann-lite/glyphicons_144_folder_open.png)](https://github.com/kaizhu256/node-fann-lite/tree/gh-pages/build..master..travis-ci.org) | [![build-artifacts](https://kaizhu256.github.io/node-fann-lite/glyphicons_144_folder_open.png)](https://github.com/kaizhu256/node-fann-lite/tree/gh-pages/build..beta..travis-ci.org) | [![build-artifacts](https://kaizhu256.github.io/node-fann-lite/glyphicons_144_folder_open.png)](https://github.com/kaizhu256/node-fann-lite/tree/gh-pages/build..alpha..travis-ci.org)|

#### master branch
- stable branch
- HEAD should be tagged, npm-published package

#### beta branch
- stable branch
- HEAD should be latest, npm-published package

#### alpha branch
- unstable branch
- HEAD is arbitrary
- commit history may be rewritten



# npm-dependencies
- none



# package-listing
[![screen-capture](https://kaizhu256.github.io/node-fann-lite/build/screen-capture.gitLsTree.png)](https://github.com/kaizhu256/node-fann-lite)



# package.json
```json
{
    "author": "kai zhu <kaizhu256@gmail.com>",
    "description": "pure javascript version of fann \
(fast artificial neural net library) with zero npm-dependencies \
(compiled from emscripten)",
    "devDependencies": {
        "phantomjs-lite": "^1.9.8-2015.6.1-b",
        "utility2": "2015.6.1-b"
    },
    "keywords": [
        "ann",
        "fann",
        "neural-net", "nn"
    ],
    "license": "MIT",
    "name": "fann-lite",
    "os": ["darwin", "linux"],
    "repository" : {
        "type" : "git",
        "url" : "https://github.com/kaizhu256/node-fann-lite.git"
    },
    "scripts": {
        "build-ci": "node_modules/.bin/utility2 shRun shReadmeBuild",
        "test": "node_modules/.bin/utility2 shRun shReadmeExportPackageJson"
    },
    "version": "2015.6.1-a"
}
```



# todo
- none



# change since 1d8c8699
- npm publish 2015.6.1-a
- add compiled doublefann.js from emscripten
- none



# changelog of last 50 commits
[![screen-capture](https://kaizhu256.github.io/node-fann-lite/build/screen-capture.gitLog.png)](https://github.com/kaizhu256/node-fann-lite/commits)



# internal build-script
- build.sh

```shell
# build.sh

# this shell script will run the build for this package
shBuild() {
    # this function will run the main build
    # init env
    export npm_config_mode_slimerjs=1 || return $?
    . node_modules/.bin/utility2 && shInit || return $?

    # run npm-test on published package
    shNpmTestPublished || return $?

    # run npm-test
    MODE_BUILD=npmTest shRunScreenCapture npm test || return $?

    # if running legacy-node, then do not continue
    [ "$(node --version)" \< "v0.12" ] && return

    # if number of commits > 1024, then squash older commits
    shGitBackupAndSquashAndPush 1024 > /dev/null || return $?
}
shBuild

# save exit-code
EXIT_CODE=$?

shBuildCleanup() {
    # this function will cleanup build-artifacts in local build dir
    # create package-listing
    MODE_BUILD=gitLsTree shRunScreenCapture shGitLsTree || return $?
    # create recent changelog of last 50 commits
    MODE_BUILD=gitLog shRunScreenCapture git log -50 --pretty="%ai\u000a%B" || \
        return $?
}
shBuildCleanup || exit $?

shBuildGithubUploadCleanup() {
    # this function will cleanup build-artifacts in local gh-pages repo
    return
}

# if running legacy-node, then do not continue
[ "$(node --version)" \< "v0.12" ] && exit $EXIT_CODE

# upload build-artifacts to github,
# and if number of commits > 16, then squash older commits
COMMIT_LIMIT=16 shBuildGithubUpload || exit $?

# exit with $EXIT_CODE
exit $EXIT_CODE
```
