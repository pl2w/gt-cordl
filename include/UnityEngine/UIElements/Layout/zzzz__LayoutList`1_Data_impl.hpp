#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutList`1_Data.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutList`1_Data_def.hpp"
// Ctor Parameters [CppParam { name: "Capacity", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Values", ty: "T*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::LayoutList_1_Data<T>::LayoutList_1_Data(int32_t  Capacity, int32_t  Count, T*  Values) noexcept  {
this->Capacity = Capacity;
this->Count = Count;
this->Values = Values;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::LayoutList_1_Data<T>::LayoutList_1_Data()   {
}
