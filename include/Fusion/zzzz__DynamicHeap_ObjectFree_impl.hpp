#pragma once
// IWYU pragma private; include "Fusion/DynamicHeap_ObjectFree.hpp"
#include "Fusion/zzzz__DynamicHeap_ObjectFree_def.hpp"
constexpr int32_t& GlobalNamespace::DynamicHeap_ObjectFree::__cordl_internal_get_Next()  {
return this->___Next;
}
constexpr int32_t const& GlobalNamespace::DynamicHeap_ObjectFree::__cordl_internal_get_Next() const {
return this->___Next;
}
constexpr void GlobalNamespace::DynamicHeap_ObjectFree::__cordl_internal_set_Next(int32_t  value)  {
this->___Next = value;
}
// Ctor Parameters [CppParam { name: "Next", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DynamicHeap_ObjectFree::DynamicHeap_ObjectFree(int32_t  Next) noexcept  {
this->Next = Next;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DynamicHeap_ObjectFree::DynamicHeap_ObjectFree()   {
}
