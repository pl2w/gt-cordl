#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/GorillaZiplineSegment.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__GorillaZiplineSegment_def.hpp"
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaZiplineSegment._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::GorillaZiplineSegment::*)()>(&::GorillaLocomotion::Gameplay::GorillaZiplineSegment::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cee008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaZiplineSegment*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GorillaLocomotion::Gameplay::GorillaZiplineSegment::__cordl_internal_get_startT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startT;
}
constexpr float_t const& GorillaLocomotion::Gameplay::GorillaZiplineSegment::__cordl_internal_get_startT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startT;
}
constexpr void GorillaLocomotion::Gameplay::GorillaZiplineSegment::__cordl_internal_set_startT(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startT = value;
}
inline void GorillaLocomotion::Gameplay::GorillaZiplineSegment::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaZiplineSegment*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaLocomotion::Gameplay::GorillaZiplineSegment* GorillaLocomotion::Gameplay::GorillaZiplineSegment::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaLocomotion::Gameplay::GorillaZiplineSegment*>());
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::Gameplay::GorillaZiplineSegment::GorillaZiplineSegment()   {
}
