#pragma once
// IWYU pragma private; include "System/Xml/Linq/XHashtable`1_XHashtableState_Entry.hpp"
#include "System/Xml/Linq/zzzz__XHashtable`1_XHashtableState_Entry_def.hpp"
// Ctor Parameters [CppParam { name: "Value", ty: "TValue", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "HashCode", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Next", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TValue>
constexpr ::GlobalNamespace::XHashtableState_XHashtable_1_Entry<TValue>::XHashtableState_XHashtable_1_Entry(TValue  Value, int32_t  HashCode, int32_t  Next) noexcept  {
this->Value = Value;
this->HashCode = HashCode;
this->Next = Next;
}
// Ctor Parameters []
template<typename TValue>
constexpr ::GlobalNamespace::XHashtableState_XHashtable_1_Entry<TValue>::XHashtableState_XHashtable_1_Entry()   {
}
