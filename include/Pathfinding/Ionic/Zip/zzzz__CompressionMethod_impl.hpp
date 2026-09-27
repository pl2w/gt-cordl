#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/CompressionMethod.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__CompressionMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::Ionic::Zip::CompressionMethod::CompressionMethod(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zip::CompressionMethod::CompressionMethod()   {
}
constexpr ::Pathfinding::Ionic::Zip::CompressionMethod  Pathfinding::Ionic::Zip::CompressionMethod::None{static_cast<int32_t>(0x0)};
constexpr ::Pathfinding::Ionic::Zip::CompressionMethod  Pathfinding::Ionic::Zip::CompressionMethod::Deflate{static_cast<int32_t>(0x8)};
