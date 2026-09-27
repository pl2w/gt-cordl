#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUK_SurfaceType.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_SurfaceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MRUK_SurfaceType::MRUK_SurfaceType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MRUK_SurfaceType::MRUK_SurfaceType()   {
}
constexpr ::GlobalNamespace::MRUK_SurfaceType  GlobalNamespace::MRUK_SurfaceType::FACING_UP{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MRUK_SurfaceType  GlobalNamespace::MRUK_SurfaceType::FACING_DOWN{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::MRUK_SurfaceType  GlobalNamespace::MRUK_SurfaceType::VERTICAL{static_cast<int32_t>(0x4)};
