#pragma once
// IWYU pragma private; include "Fusion/DynamicHeap_Page.hpp"
#include "Fusion/zzzz__DynamicHeap_Page_def.hpp"
#include "Fusion/zzzz__DynamicHeap_Block_def.hpp"
#include "Fusion/zzzz__DynamicHeap_ObjectFree_def.hpp"
// Ctor Parameters [CppParam { name: "Block", ty: "::GlobalNamespace::DynamicHeap_Block*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Prev", ty: "::GlobalNamespace::DynamicHeap_Page*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Next", ty: "::GlobalNamespace::DynamicHeap_Page*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Bin", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Use", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Memory", ty: "uint8_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ObjectsFree", ty: "::GlobalNamespace::DynamicHeap_ObjectFree*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ObjectsFreeCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ObjectsComitted", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ObjectsAllocated", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DynamicHeap_Page::DynamicHeap_Page(::GlobalNamespace::DynamicHeap_Block*  Block, int32_t  Index, ::GlobalNamespace::DynamicHeap_Page*  Prev, ::GlobalNamespace::DynamicHeap_Page*  Next, int32_t  Bin, int32_t  Use, uint8_t*  Memory, ::GlobalNamespace::DynamicHeap_ObjectFree*  ObjectsFree, int32_t  ObjectsFreeCount, int32_t  ObjectsComitted, int32_t  ObjectsAllocated) noexcept  {
this->Block = Block;
this->Index = Index;
this->Prev = Prev;
this->Next = Next;
this->Bin = Bin;
this->Use = Use;
this->Memory = Memory;
this->ObjectsFree = ObjectsFree;
this->ObjectsFreeCount = ObjectsFreeCount;
this->ObjectsComitted = ObjectsComitted;
this->ObjectsAllocated = ObjectsAllocated;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DynamicHeap_Page::DynamicHeap_Page()   {
}
