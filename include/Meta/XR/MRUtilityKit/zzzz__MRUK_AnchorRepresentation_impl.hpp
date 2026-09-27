#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUK_AnchorRepresentation.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_AnchorRepresentation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MRUK_AnchorRepresentation::MRUK_AnchorRepresentation(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MRUK_AnchorRepresentation::MRUK_AnchorRepresentation()   {
}
constexpr ::GlobalNamespace::MRUK_AnchorRepresentation  GlobalNamespace::MRUK_AnchorRepresentation::PLANE{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MRUK_AnchorRepresentation  GlobalNamespace::MRUK_AnchorRepresentation::VOLUME{static_cast<int32_t>(0x2)};
