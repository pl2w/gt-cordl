#pragma once
// IWYU pragma private; include "Liv/NativeGalleryBridge/NativeGallery_MediaType.hpp"
#include "Liv/NativeGalleryBridge/zzzz__NativeGallery_MediaType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NativeGallery_MediaType::NativeGallery_MediaType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NativeGallery_MediaType::NativeGallery_MediaType()   {
}
constexpr ::GlobalNamespace::NativeGallery_MediaType  GlobalNamespace::NativeGallery_MediaType::Video{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::NativeGallery_MediaType  GlobalNamespace::NativeGallery_MediaType::Image{static_cast<int32_t>(0x4)};
