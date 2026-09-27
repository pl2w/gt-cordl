#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zlib/CompressionMode.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__CompressionMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::Ionic::Zlib::CompressionMode::CompressionMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zlib::CompressionMode::CompressionMode()   {
}
constexpr ::Pathfinding::Ionic::Zlib::CompressionMode  Pathfinding::Ionic::Zlib::CompressionMode::Compress{static_cast<int32_t>(0x0)};
constexpr ::Pathfinding::Ionic::Zlib::CompressionMode  Pathfinding::Ionic::Zlib::CompressionMode::Decompress{static_cast<int32_t>(0x1)};
