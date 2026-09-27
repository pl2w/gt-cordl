#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/GorillaRopeSwingSettings.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__GorillaRopeSwingSettings_def.hpp"
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::GorillaRopeSwingSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::GorillaRopeSwingSettings::*)()>(&::GorillaLocomotion::Gameplay::GorillaRopeSwingSettings::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ced340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwingSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GorillaLocomotion::Gameplay::GorillaRopeSwingSettings::__cordl_internal_get_inheritVelocityMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inheritVelocityMultiplier;
}
constexpr float_t const& GorillaLocomotion::Gameplay::GorillaRopeSwingSettings::__cordl_internal_get_inheritVelocityMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inheritVelocityMultiplier;
}
constexpr void GorillaLocomotion::Gameplay::GorillaRopeSwingSettings::__cordl_internal_set_inheritVelocityMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inheritVelocityMultiplier = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::GorillaRopeSwingSettings::__cordl_internal_get_frictionWhenNotHeld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frictionWhenNotHeld;
}
constexpr float_t const& GorillaLocomotion::Gameplay::GorillaRopeSwingSettings::__cordl_internal_get_frictionWhenNotHeld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frictionWhenNotHeld;
}
constexpr void GorillaLocomotion::Gameplay::GorillaRopeSwingSettings::__cordl_internal_set_frictionWhenNotHeld(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frictionWhenNotHeld = value;
}
inline void GorillaLocomotion::Gameplay::GorillaRopeSwingSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::GorillaRopeSwingSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaLocomotion::Gameplay::GorillaRopeSwingSettings* GorillaLocomotion::Gameplay::GorillaRopeSwingSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaLocomotion::Gameplay::GorillaRopeSwingSettings*>());
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::Gameplay::GorillaRopeSwingSettings::GorillaRopeSwingSettings()   {
}
