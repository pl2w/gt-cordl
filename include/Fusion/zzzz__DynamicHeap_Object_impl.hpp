#pragma once
// IWYU pragma private; include "Fusion/DynamicHeap_Object.hpp"
#include "Fusion/zzzz__DynamicHeap_ObjectFlags_impl.hpp"
#include "Fusion/zzzz__DynamicHeap_Object_def.hpp"
constexpr ::GlobalNamespace::DynamicHeap_ObjectFlags& GlobalNamespace::DynamicHeap_Object::__cordl_internal_get_Flags()  {
return this->___Flags;
}
constexpr ::GlobalNamespace::DynamicHeap_ObjectFlags const& GlobalNamespace::DynamicHeap_Object::__cordl_internal_get_Flags() const {
return this->___Flags;
}
constexpr void GlobalNamespace::DynamicHeap_Object::__cordl_internal_set_Flags(::GlobalNamespace::DynamicHeap_ObjectFlags  value)  {
this->___Flags = value;
}
constexpr uint8_t& GlobalNamespace::DynamicHeap_Object::__cordl_internal_get_Block()  {
return this->___Block;
}
constexpr uint8_t const& GlobalNamespace::DynamicHeap_Object::__cordl_internal_get_Block() const {
return this->___Block;
}
constexpr void GlobalNamespace::DynamicHeap_Object::__cordl_internal_set_Block(uint8_t  value)  {
this->___Block = value;
}
constexpr uint16_t& GlobalNamespace::DynamicHeap_Object::__cordl_internal_get_Gen()  {
return this->___Gen;
}
constexpr uint16_t const& GlobalNamespace::DynamicHeap_Object::__cordl_internal_get_Gen() const {
return this->___Gen;
}
constexpr void GlobalNamespace::DynamicHeap_Object::__cordl_internal_set_Gen(uint16_t  value)  {
this->___Gen = value;
}
constexpr uint16_t& GlobalNamespace::DynamicHeap_Object::__cordl_internal_get_Type()  {
return this->___Type;
}
constexpr uint16_t const& GlobalNamespace::DynamicHeap_Object::__cordl_internal_get_Type() const {
return this->___Type;
}
constexpr void GlobalNamespace::DynamicHeap_Object::__cordl_internal_set_Type(uint16_t  value)  {
this->___Type = value;
}
constexpr uint16_t& GlobalNamespace::DynamicHeap_Object::__cordl_internal_get_Array()  {
return this->___Array;
}
constexpr uint16_t const& GlobalNamespace::DynamicHeap_Object::__cordl_internal_get_Array() const {
return this->___Array;
}
constexpr void GlobalNamespace::DynamicHeap_Object::__cordl_internal_set_Array(uint16_t  value)  {
this->___Array = value;
}
// Ctor Parameters [CppParam { name: "Flags", ty: "::GlobalNamespace::DynamicHeap_ObjectFlags", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Block", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Gen", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Type", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Array", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DynamicHeap_Object::DynamicHeap_Object(::GlobalNamespace::DynamicHeap_ObjectFlags  Flags, uint8_t  Block, uint16_t  Gen, uint16_t  Type, uint16_t  Array) noexcept  {
this->Flags = Flags;
this->Block = Block;
this->Gen = Gen;
this->Type = Type;
this->Array = Array;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DynamicHeap_Object::DynamicHeap_Object()   {
}
