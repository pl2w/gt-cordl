#pragma once
// IWYU pragma private; include "System/Collections/Generic/HashSet`1_ElementCount.hpp"
#include "System/Collections/Generic/zzzz__HashSet`1_ElementCount_def.hpp"
// Ctor Parameters [CppParam { name: "uniqueCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "unfoundCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::HashSet_1_ElementCount<T>::HashSet_1_ElementCount(int32_t  uniqueCount, int32_t  unfoundCount) noexcept  {
this->uniqueCount = uniqueCount;
this->unfoundCount = unfoundCount;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::HashSet_1_ElementCount<T>::HashSet_1_ElementCount()   {
}
