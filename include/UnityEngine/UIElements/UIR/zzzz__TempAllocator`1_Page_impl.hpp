#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/TempAllocator`1_Page.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TempAllocator`1_Page_def.hpp"
// Ctor Parameters [CppParam { name: "array", ty: "::Unity::Collections::NativeArray_1<T>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "used", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::TempAllocator_1_Page<T>::TempAllocator_1_Page(::Unity::Collections::NativeArray_1<T>  array, int32_t  used) noexcept  {
this->array = array;
this->used = used;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::TempAllocator_1_Page<T>::TempAllocator_1_Page()   {
}
