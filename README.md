# Audacity Sapphire Edition

[**Audacity**](https://www.audacityteam.org) is an easy-to-use, multi-track audio editor and recorder for Windows, macOS, GNU/Linux and other operating systems.

- **Recording** from any real or virtual audio device that is available to the host system.
- **Export / Import** a wide range of audio formats, extensible with FFmpeg.
- **High quality** using 32-bit float audio processing.
- **Plugin Support** for multiple audio plugin formats, including VST, LV2, and AU.
- **Macros** for chaining commands and batch processing.
- **Scripting** in Python, Perl, or any other language that supports named pipes.
- **Nyquist** a powerful built-in scripting language that may also be used to create plugins.
- **Editing** multi-track editing with sample accuracy and arbitrary sample rates.
- **Accessibility** for its users.
- **Analysis and visualization** tools to analyze audio or other signal data.

## Changes

The *Sapphire* version includes quality of life changes that helps me in my workflow, including:

- File explorer prompt on audio rendering before the actual export dialog.
- Audio cursor line extends to multiple tracks below.
- Added scrolling to the left of the zero.
- Non-modal dialogs for non-realtime effects.

## Building

Audacity uses [Conan 2](https://conan.io/) to manage dependencies.

### Prerequisites

* **python3** >= 3.8
* **cmake** >= 3.16
* A working C++ 17 compiler
* Graphviz (optional)

### Windows

Audacity only supports [Microsoft Visual Studio](https://visualstudio.microsoft.com/vs/community/) 2019 and 2022.

```
$ cmake -Wno-dev -DCMAKE_BUILD_TYPE=Release -DAUDACITY_BUILD_LEVEL=2 -Daudacity_has_tests=OFF -Daudacity_has_networking=[ON|OFF] -Daudacity_has_asio_support=[ON|OFF]
$ nmake
```

### Mac OS

Audacity uses XCode versions 12 and later. However, it is likely possible to build it with XCode 7.

### Linux

Audacity supports GCC 9 and later, but any C++17 compliant compiler should work.

Here are the dependencies you need to install on various distribution families.

#### Debian and Ubuntu

```
$ sudo apt-get update
$ sudo apt-get install -y build-essential cmake git python3-pip
$ sudo pip3 install conan
$ sudo apt-get install libgtk2.0-dev libasound2-dev libjack-jackd2-dev uuid-dev
```

#### openSUSE

```
$ sudo zypper refresh
$ sudo zypper install patterns-devel-C-C++-devel_C_C++ cmake git python3-pip gtk2-devel libjack-devel uuid-devel libSM-devel
$ sudo pip3 install conan
```

#### Fedora Workstation

```
$ sudo dnf update
$ sudo dnf install gcc-c++ cmake git python3-pip perl-core gtk2-devel gtk3-devel alsa-lib-devel jack-audio-connection-kit-devel uuid-devel libSM-devel
$ sudo pip3 install conan
```

## License

Audacity is open source software licensed GPLv3. Most code files are GPLv2-or-later, with the notable exceptions being /lib-src (which contains third party libraries), as well as VST3-related code. Documentation is licensed CC-by 3.0 unless otherwise noted. Details can be found in the [license file](LICENSE.txt).
