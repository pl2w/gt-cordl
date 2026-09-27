#pragma once
// IWYU pragma private; include "Fusion/DynamicHeap_Bin.hpp"
#include "Fusion/zzzz__DynamicHeap_PageList_impl.hpp"
#include "Fusion/zzzz__DynamicHeap_Bin_def.hpp"
// Ctor Parameters [CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Pages", ty: "::GlobalNamespace::DynamicHeap_PageList", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ObjectWords", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ObjectStride", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ObjectCapacity", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DynamicHeap_Bin::DynamicHeap_Bin(int32_t  Index, ::GlobalNamespace::DynamicHeap_PageList  Pages, int32_t  ObjectWords, int32_t  ObjectStride, int32_t  ObjectCapacity) noexcept  {
this->Index = Index;
this->Pages = Pages;
this->ObjectWords = ObjectWords;
this->ObjectStride = ObjectStride;
this->ObjectCapacity = ObjectCapacity;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DynamicHeap_Bin::DynamicHeap_Bin()   {
}
