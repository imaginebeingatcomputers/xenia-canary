group("third_party")
project("lz4")
  uuid("debf20f8-a861-4426-b1c9-8624c20b618b")
  kind("StaticLib")
  language("C")
  defines({
  })
  includedirs({
    "lz4/lib",
  })
  files({
    "lz4/lib/*.h",
    "lz4/lib/*.c",
  })