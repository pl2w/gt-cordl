#pragma once
// IWYU pragma private; include "Liv/NativeGalleryBridge/NativeGallery_PermissionType.hpp"
#include "Liv/NativeGalleryBridge/zzzz__NativeGallery_PermissionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NativeGallery_PermissionType::NativeGallery_PermissionType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NativeGallery_PermissionType::NativeGallery_PermissionType()   {
}
constexpr ::GlobalNamespace::NativeGallery_PermissionType  GlobalNamespace::NativeGallery_PermissionType::Read{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::NativeGallery_PermissionType  GlobalNamespace::NativeGallery_PermissionType::Write{static_cast<int32_t>(0x1)};
