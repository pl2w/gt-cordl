#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutDataStore_Data.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutDataStore_Data_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutDataStore_ComponentDataStore_def.hpp"
// Ctor Parameters [CppParam { name: "Capacity", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NextFreeIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ComponentCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Versions", ty: "int32_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Components", ty: "::GlobalNamespace::LayoutDataStore_ComponentDataStore*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LayoutDataStore_Data::LayoutDataStore_Data(int32_t  Capacity, int32_t  NextFreeIndex, int32_t  ComponentCount, int32_t*  Versions, ::GlobalNamespace::LayoutDataStore_ComponentDataStore*  Components) noexcept  {
this->Capacity = Capacity;
this->NextFreeIndex = NextFreeIndex;
this->ComponentCount = ComponentCount;
this->Versions = Versions;
this->Components = Components;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LayoutDataStore_Data::LayoutDataStore_Data()   {
}
