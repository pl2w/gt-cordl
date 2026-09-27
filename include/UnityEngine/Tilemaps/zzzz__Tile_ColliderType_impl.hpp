#pragma once
// IWYU pragma private; include "UnityEngine/Tilemaps/Tile_ColliderType.hpp"
#include "UnityEngine/Tilemaps/zzzz__Tile_ColliderType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Tile_ColliderType::Tile_ColliderType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Tile_ColliderType::Tile_ColliderType()   {
}
constexpr ::GlobalNamespace::Tile_ColliderType  GlobalNamespace::Tile_ColliderType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Tile_ColliderType  GlobalNamespace::Tile_ColliderType::Sprite{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Tile_ColliderType  GlobalNamespace::Tile_ColliderType::Grid{static_cast<int32_t>(0x2)};
