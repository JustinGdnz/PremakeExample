workspace "PremakeExample"
    configurations { "Debug", "Release" }
    platforms { "Win32", "Win64" }

    startproject "ExampleProject"

    filter { "platforms:Win32" }
        architecture "x86"

    filter { "platforms:Win64" }
        architecture "x86_64"
    
    filter {}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

include "ExampleProject"
include "LibraryProject"

newaction {
    trigger = "clean",
    description = "Remove all binaries and intermediate binaries, and vs files.",
    execute = function()
        print("Removing binaries")
        os.rmdir("./bin")
        print("Removing intermediate binaries")
        os.rmdir("./bin-int")
        print("Removing project files")
        os.rmdir("./.vs")
        os.remove("**.sln")
        os.remove("**.vcxproj")
        os.remove("**.vcxproj.filters")
        os.remove("**.vcxproj.user")
        print("Done")
    end
}