#pragma once
// IWYU pragma private; include "Fusion/Allocator_Segment.hpp"
#include "Fusion/zzzz__Ptr_impl.hpp"
#include "Fusion/zzzz__Allocator_Segment_def.hpp"
constexpr ::Fusion::Ptr& GlobalNamespace::Allocator_Segment::__cordl_internal_get_Next()  {
return this->___Next;
}
constexpr ::Fusion::Ptr const& GlobalNamespace::Allocator_Segment::__cordl_internal_get_Next() const {
return this->___Next;
}
constexpr void GlobalNamespace::Allocator_Segment::__cordl_internal_set_Next(::Fusion::Ptr  value)  {
this->___Next = value;
}
// Ctor Parameters [CppParam { name: "Next", ty: "::Fusion::Ptr", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Allocator_Segment::Allocator_Segment(::Fusion::Ptr  Next) noexcept  {
this->Next = Next;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Allocator_Segment::Allocator_Segment()   {
}
