#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ClipperBase_IntersectListSort.hpp"
#include "Unity/Cinemachine/zzzz__ClipperBase_IntersectListSort_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "Unity/Cinemachine/zzzz__IntersectNode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ClipperBase_IntersectListSort.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ClipperBase_IntersectListSort::*)(::Unity::Cinemachine::IntersectNode, ::Unity::Cinemachine::IntersectNode)>(&::GlobalNamespace::ClipperBase_IntersectListSort::Compare)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xaefa030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClipperBase_IntersectListSort>(),
                        {"Compare", {}, {::i2c::type_of<::Unity::Cinemachine::IntersectNode>(), ::i2c::type_of<::Unity::Cinemachine::IntersectNode>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::ClipperBase_IntersectListSort::Compare(::Unity::Cinemachine::IntersectNode  a, ::Unity::Cinemachine::IntersectNode  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClipperBase_IntersectListSort>(),
                        {"Compare", {}, {::i2c::type_of<::Unity::Cinemachine::IntersectNode>(), ::i2c::type_of<::Unity::Cinemachine::IntersectNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, a, b);
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Unity::Cinemachine::IntersectNode>"
constexpr  GlobalNamespace::ClipperBase_IntersectListSort::operator ::System::Collections::Generic::IComparer_1<::Unity::Cinemachine::IntersectNode>*()  {
return static_cast<::System::Collections::Generic::IComparer_1<::Unity::Cinemachine::IntersectNode>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::Unity::Cinemachine::IntersectNode>"
constexpr ::System::Collections::Generic::IComparer_1<::Unity::Cinemachine::IntersectNode>* GlobalNamespace::ClipperBase_IntersectListSort::i___System__Collections__Generic__IComparer_1___Unity__Cinemachine__IntersectNode_()  {
return static_cast<::System::Collections::Generic::IComparer_1<::Unity::Cinemachine::IntersectNode>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ClipperBase_IntersectListSort::ClipperBase_IntersectListSort()   {
}
