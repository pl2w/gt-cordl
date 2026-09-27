#pragma once
// IWYU pragma private; include "System/Collections/Generic/HashSet`1_Slot.hpp"
#include "System/Collections/Generic/zzzz__HashSet`1_Slot_def.hpp"
// Ctor Parameters [CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "next", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "value", ty: "T", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::HashSet_1_Slot<T>::HashSet_1_Slot(int32_t  hashCode, int32_t  next, T  value) noexcept  {
this->hashCode = hashCode;
this->next = next;
this->value = value;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::HashSet_1_Slot<T>::HashSet_1_Slot()   {
}
