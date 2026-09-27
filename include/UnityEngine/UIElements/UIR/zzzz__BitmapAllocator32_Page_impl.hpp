#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/BitmapAllocator32_Page.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BitmapAllocator32_Page_def.hpp"
// Ctor Parameters [CppParam { name: "x", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "y", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "freeSlots", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BitmapAllocator32_Page::BitmapAllocator32_Page(uint16_t  x, uint16_t  y, int32_t  freeSlots) noexcept  {
this->x = x;
this->y = y;
this->freeSlots = freeSlots;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BitmapAllocator32_Page::BitmapAllocator32_Page()   {
}
