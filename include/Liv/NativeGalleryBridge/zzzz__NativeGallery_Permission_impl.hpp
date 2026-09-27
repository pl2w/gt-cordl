#pragma once
// IWYU pragma private; include "Liv/NativeGalleryBridge/NativeGallery_Permission.hpp"
#include "Liv/NativeGalleryBridge/zzzz__NativeGallery_Permission_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NativeGallery_Permission::NativeGallery_Permission(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NativeGallery_Permission::NativeGallery_Permission()   {
}
constexpr ::GlobalNamespace::NativeGallery_Permission  GlobalNamespace::NativeGallery_Permission::Denied{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::NativeGallery_Permission  GlobalNamespace::NativeGallery_Permission::Granted{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::NativeGallery_Permission  GlobalNamespace::NativeGallery_Permission::ShouldAsk{static_cast<int32_t>(0x2)};
