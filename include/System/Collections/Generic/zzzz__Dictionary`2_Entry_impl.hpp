#pragma once
// IWYU pragma private; include "System/Collections/Generic/Dictionary`2_Entry.hpp"
#include "System/Collections/Generic/zzzz__Dictionary`2_Entry_def.hpp"
// Ctor Parameters [CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "next", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TKey,typename TValue>
constexpr ::GlobalNamespace::Dictionary_2_Entry<TKey,TValue>::Dictionary_2_Entry(int32_t  hashCode, int32_t  next, TKey  key, TValue  value) noexcept  {
this->hashCode = hashCode;
this->next = next;
this->key = key;
this->value = value;
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::GlobalNamespace::Dictionary_2_Entry<TKey,TValue>::Dictionary_2_Entry()   {
}
