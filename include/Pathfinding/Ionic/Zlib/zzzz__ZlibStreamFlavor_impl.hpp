#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zlib/ZlibStreamFlavor.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__ZlibStreamFlavor_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::Ionic::Zlib::ZlibStreamFlavor::ZlibStreamFlavor(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zlib::ZlibStreamFlavor::ZlibStreamFlavor()   {
}
constexpr ::Pathfinding::Ionic::Zlib::ZlibStreamFlavor  Pathfinding::Ionic::Zlib::ZlibStreamFlavor::ZLIB{static_cast<int32_t>(0x79e)};
constexpr ::Pathfinding::Ionic::Zlib::ZlibStreamFlavor  Pathfinding::Ionic::Zlib::ZlibStreamFlavor::DEFLATE{static_cast<int32_t>(0x79f)};
constexpr ::Pathfinding::Ionic::Zlib::ZlibStreamFlavor  Pathfinding::Ionic::Zlib::ZlibStreamFlavor::GZIP{static_cast<int32_t>(0x7a0)};
