#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/CustomRopeNode.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__CustomRopeNode_def.hpp"
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::CustomRopeNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::CustomRopeNode::*)()>(&::GorillaLocomotion::Gameplay::CustomRopeNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ce8bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::CustomRopeNode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GorillaLocomotion::Gameplay::CustomRopeNode::__cordl_internal_get_previousPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousPos;
}
constexpr ::UnityEngine::Vector3 const& GorillaLocomotion::Gameplay::CustomRopeNode::__cordl_internal_get_previousPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousPos;
}
constexpr void GorillaLocomotion::Gameplay::CustomRopeNode::__cordl_internal_set_previousPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousPos = value;
}
inline void GorillaLocomotion::Gameplay::CustomRopeNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::CustomRopeNode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaLocomotion::Gameplay::CustomRopeNode* GorillaLocomotion::Gameplay::CustomRopeNode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaLocomotion::Gameplay::CustomRopeNode*>());
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::Gameplay::CustomRopeNode::CustomRopeNode()   {
}
