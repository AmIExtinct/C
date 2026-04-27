add_rules("mode.debug", "mode.release")

target("slay")
    set_kind("binary")
    add_files("src/*.c")

