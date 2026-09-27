#pragma once
// IWYU pragma private; include "Fusion/DynamicHeap_Block.hpp"
#include "Fusion/zzzz__DynamicHeap_PageList_impl.hpp"
#include "Fusion/zzzz__DynamicHeap_Block_def.hpp"
#include "Fusion/zzzz__DynamicHeap_Page_def.hpp"
// Ctor Parameters [CppParam { name: "Index", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Prev", ty: "::GlobalNamespace::DynamicHeap_Block*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Next", ty: "::GlobalNamespace::DynamicHeap_Block*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Pages", ty: "::GlobalNamespace::DynamicHeap_Page*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PagesFree", ty: "::GlobalNamespace::DynamicHeap_PageList", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Memory", ty: "uint8_t*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DynamicHeap_Block::DynamicHeap_Block(uint8_t  Index, ::GlobalNamespace::DynamicHeap_Block*  Prev, ::GlobalNamespace::DynamicHeap_Block*  Next, ::GlobalNamespace::DynamicHeap_Page*  Pages, ::GlobalNamespace::DynamicHeap_PageList  PagesFree, uint8_t*  Memory) noexcept  {
this->Index = Index;
this->Prev = Prev;
this->Next = Next;
this->Pages = Pages;
this->PagesFree = PagesFree;
this->Memory = Memory;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DynamicHeap_Block::DynamicHeap_Block()   {
}
