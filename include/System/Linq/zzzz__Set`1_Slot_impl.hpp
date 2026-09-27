#pragma once
// IWYU pragma private; include "System/Linq/Set`1_Slot.hpp"
#include "System/Linq/zzzz__Set`1_Slot_def.hpp"
// Ctor Parameters [CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "value", ty: "TElement", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "next", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TElement>
constexpr ::GlobalNamespace::Set_1_Slot<TElement>::Set_1_Slot(int32_t  hashCode, TElement  value, int32_t  next) noexcept  {
this->hashCode = hashCode;
this->value = value;
this->next = next;
}
// Ctor Parameters []
template<typename TElement>
constexpr ::GlobalNamespace::Set_1_Slot<TElement>::Set_1_Slot()   {
}
