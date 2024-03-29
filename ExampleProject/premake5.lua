project "ExampleProject"
    kind "ConsoleApp"
    language "C++"
    cppdialect "C++20"
    staticruntime "on"

    targetdir("../bin/" .. outputdir .. "/%{prj.name}")
    objdir("../bin-int/" .. outputdir .. "/%{prj.name}")

    files {
        "src/**.cpp",
        "src/**.h",
        "src/**.hpp"
    }

    includedirs {
        "../LibraryProject/src"
    }

    links {
        "LibraryProject"
    }

    defines {
        "WINDOWS"
    }

    filter { "configurations:Debug "}
        buildoptions "/MTd"
        runtime "Debug"
        symbols "on"
    
    filter { "configurations:Release" }
        buildoptions "/MT"
        runtime "Release"
        optimize "on"