#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Collections/SerializableDictionary`2_Item.hpp"
#include "Unity/XR/CoreUtils/Collections/zzzz__SerializableDictionary`2_Item_def.hpp"
// Ctor Parameters [CppParam { name: "Key", ty: "TKey", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Value", ty: "TValue", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TKey,typename TValue>
constexpr ::GlobalNamespace::SerializableDictionary_2_Item<TKey,TValue>::SerializableDictionary_2_Item(TKey  Key, TValue  Value) noexcept  {
this->Key = Key;
this->Value = Value;
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::GlobalNamespace::SerializableDictionary_2_Item<TKey,TValue>::SerializableDictionary_2_Item()   {
}
