#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/GorillaRopeSegment.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__GorillaRopeSegment_def.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__GorillaRopeSwing_def.hpp"
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaRopeSegment._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::GorillaRopeSegment::*)()>(&::GorillaLocomotion::Gameplay::GorillaRopeSegment::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ce94c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSegment*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>& GorillaLocomotion::Gameplay::GorillaRopeSegment::__cordl_internal_get_swing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swing;
}
constexpr ::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing> const& GorillaLocomotion::Gameplay::GorillaRopeSegment::__cordl_internal_get_swing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swing;
}
constexpr void GorillaLocomotion::Gameplay::GorillaRopeSegment::__cordl_internal_set_swing(::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swing = value;
}
constexpr int32_t& GorillaLocomotion::Gameplay::GorillaRopeSegment::__cordl_internal_get_boneIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boneIndex;
}
constexpr int32_t const& GorillaLocomotion::Gameplay::GorillaRopeSegment::__cordl_internal_get_boneIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boneIndex;
}
constexpr void GorillaLocomotion::Gameplay::GorillaRopeSegment::__cordl_internal_set_boneIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boneIndex = value;
}
inline void GorillaLocomotion::Gameplay::GorillaRopeSegment::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSegment*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaLocomotion::Gameplay::GorillaRopeSegment* GorillaLocomotion::Gameplay::GorillaRopeSegment::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaLocomotion::Gameplay::GorillaRopeSegment*>());
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::Gameplay::GorillaRopeSegment::GorillaRopeSegment()   {
}
