#pragma once
// IWYU pragma private; include "Fusion/SerializableDictionary`2_Entry.hpp"
#include "Fusion/zzzz__SerializableDictionary`2_Entry_def.hpp"
// Ctor Parameters [CppParam { name: "Key", ty: "TKey", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Value", ty: "TValue", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TKey,typename TValue>
constexpr ::GlobalNamespace::SerializableDictionary_2_Entry<TKey,TValue>::SerializableDictionary_2_Entry(TKey  Key, TValue  Value) noexcept  {
this->Key = Key;
this->Value = Value;
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::GlobalNamespace::SerializableDictionary_2_Entry<TKey,TValue>::SerializableDictionary_2_Entry()   {
}
