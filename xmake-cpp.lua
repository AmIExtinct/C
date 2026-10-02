add_rules("mode.debug", "mode.release")

set_languages("cxx17")

target("slay_cpp")
    set_kind("binary")
    add_files("src/**.cpp", "src/**.cc", "src/**.cxx")
    add_includedirs("src/heads")