add_rules("mode.debug", "mode.release")

target("podro")
set_kind("binary")
add_files("src/*.cpp")
add_files("src/core/**.cpp")

add_includedirs("src/head")

set_optimize("none")
