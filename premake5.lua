workspace "PremakeExample"
    architecture "x86_64"

    configurations {
        "Debug",
        "Release"
    }

    startproject "ExampleProject"

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

include "ExampleProject"