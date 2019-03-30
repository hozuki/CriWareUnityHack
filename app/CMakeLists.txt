# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.4.1)

# Creates and names a library, sets it as either STATIC
# or SHARED, and provides the relative paths to its source code.
# You can define multiple libraries, and CMake builds them for you.
# Gradle automatically packages shared libraries with your APK.

set(CMAKE_CXX_STANDARD 11)

add_library( # Sets the name of the library.
             cri_ware_unity

             # Sets the library as a shared library.
             SHARED

             # Provides a relative path to your source file(s).
             src/main/cpp/hacklib.cpp

             src/main/cpp/lib/criware_atom.cpp
             src/main/cpp/lib/criware_atom_dec_hca.cpp
             src/main/cpp/lib/criware_atomex.cpp
             src/main/cpp/lib/criware_atomex_3d_listener.cpp
             src/main/cpp/lib/criware_atomex_3d_source.cpp
             src/main/cpp/lib/criware_atomex_acb.cpp
             src/main/cpp/lib/criware_atomex_asr.cpp
             src/main/cpp/lib/criware_atomex_category.cpp
             src/main/cpp/lib/criware_atomex_latency_estimator.cpp
             src/main/cpp/lib/criware_atomex_playback.cpp
             src/main/cpp/lib/criware_atomex_player.cpp
             src/main/cpp/lib/criware_atomex_player_output_analyzer.cpp
             src/main/cpp/lib/criware_atomex_voice_pool.cpp
             src/main/cpp/lib/criware_error_handler.cpp
             src/main/cpp/lib/criware_fs.cpp
             src/main/cpp/lib/criware_fs_binder.cpp
             src/main/cpp/lib/criware_fs_installer.cpp
             src/main/cpp/lib/criware_fs_loader.cpp
             src/main/cpp/lib/criware_mana.cpp
             src/main/cpp/lib/criware_misc.cpp
             src/main/cpp/lib/criware_unity_plugin.cpp
             src/main/cpp/lib/criware_unknown.cpp
        )

# Searches for a specified prebuilt library and stores the path as a
# variable. Because CMake includes system libraries in the search path by
# default, you only need to specify the name of the public NDK library
# you want to add. CMake verifies that the library exists before
# completing its build.

find_library( # Sets the name of the path variable.
              log-lib

              # Specifies the name of the NDK library that
              # you want CMake to locate.
              log )

# Specifies libraries CMake should link to your target library. You
# can link multiple libraries, such as libraries you define in this
# build script, prebuilt third-party libraries, or system libraries.

target_link_libraries( # Specifies the target library.
                       cri_ware_unity

                       # Links the target library to the log library
                       # included in the NDK.
                       ${log-lib} )