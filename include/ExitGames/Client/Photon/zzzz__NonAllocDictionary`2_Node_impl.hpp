#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/NonAllocDictionary`2_Node.hpp"
#include "ExitGames/Client/Photon/zzzz__NonAllocDictionary`2_Node_def.hpp"
// Ctor Parameters [CppParam { name: "Used", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Next", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Hash", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Key", ty: "K", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Val", ty: "V", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename K,typename V>
constexpr ::GlobalNamespace::NonAllocDictionary_2_Node<K,V>::NonAllocDictionary_2_Node(bool  Used, int32_t  Next, uint32_t  Hash, K  Key, V  Val) noexcept  {
this->Used = Used;
this->Next = Next;
this->Hash = Hash;
this->Key = Key;
this->Val = Val;
}
// Ctor Parameters []
template<typename K,typename V>
constexpr ::GlobalNamespace::NonAllocDictionary_2_Node<K,V>::NonAllocDictionary_2_Node()   {
}
