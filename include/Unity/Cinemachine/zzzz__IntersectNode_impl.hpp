#pragma once
// IWYU pragma private; include "Unity/Cinemachine/IntersectNode.hpp"
#include "Unity/Cinemachine/zzzz__Point64_impl.hpp"
#include "Unity/Cinemachine/zzzz__IntersectNode_def.hpp"
#include "Unity/Cinemachine/zzzz__Active_def.hpp"
#include "Unity/Cinemachine/zzzz__Point64_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::IntersectNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::IntersectNode::*)(::Unity::Cinemachine::Point64, ::Unity::Cinemachine::Active*, ::Unity::Cinemachine::Active*)>(&::Unity::Cinemachine::IntersectNode::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xaeef320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::IntersectNode>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::IntersectNode::_ctor(::Unity::Cinemachine::Point64  pt, ::Unity::Cinemachine::Active*  edge1, ::Unity::Cinemachine::Active*  edge2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::IntersectNode>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Cinemachine::Point64>(), ::i2c::type_of<::Unity::Cinemachine::Active*>(), ::i2c::type_of<::Unity::Cinemachine::Active*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pt, edge1, edge2);
}
// Ctor Parameters [CppParam { name: "pt", ty: "::Unity::Cinemachine::Point64", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "edge1", ty: "::Unity::Cinemachine::Active*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "edge2", ty: "::Unity::Cinemachine::Active*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Cinemachine::IntersectNode::IntersectNode(::Unity::Cinemachine::Point64  pt, ::Unity::Cinemachine::Active*  edge1, ::Unity::Cinemachine::Active*  edge2) noexcept  {
this->pt = pt;
this->edge1 = edge1;
this->edge2 = edge2;
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::IntersectNode::IntersectNode()   {
}
