#pragma once
// IWYU pragma private; include "GlobalNamespace/GlobalObjectRefType.hpp"
#include "GlobalNamespace/zzzz__GlobalObjectRefType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GlobalObjectRefType::GlobalObjectRefType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GlobalObjectRefType::GlobalObjectRefType()   {
}
constexpr ::GlobalNamespace::GlobalObjectRefType  GlobalNamespace::GlobalObjectRefType::Null{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GlobalObjectRefType  GlobalNamespace::GlobalObjectRefType::ImportedAsset{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GlobalObjectRefType  GlobalNamespace::GlobalObjectRefType::SceneObject{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GlobalObjectRefType  GlobalNamespace::GlobalObjectRefType::SourceAsset{static_cast<int32_t>(0x3)};
