#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zlib/CompressionStrategy.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__CompressionStrategy_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::Ionic::Zlib::CompressionStrategy::CompressionStrategy(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zlib::CompressionStrategy::CompressionStrategy()   {
}
constexpr ::Pathfinding::Ionic::Zlib::CompressionStrategy  Pathfinding::Ionic::Zlib::CompressionStrategy::Default{static_cast<int32_t>(0x0)};
constexpr ::Pathfinding::Ionic::Zlib::CompressionStrategy  Pathfinding::Ionic::Zlib::CompressionStrategy::Filtered{static_cast<int32_t>(0x1)};
constexpr ::Pathfinding::Ionic::Zlib::CompressionStrategy  Pathfinding::Ionic::Zlib::CompressionStrategy::HuffmanOnly{static_cast<int32_t>(0x2)};
