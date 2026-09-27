#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ParticleSettingsSO.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__ParticleSettingsSO_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::ParticleSettingsSO._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ParticleSettingsSO::*)()>(&::GorillaTag::Cosmetics::ParticleSettingsSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d9da1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ParticleSettingsSO*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& GorillaTag::Cosmetics::ParticleSettingsSO::__cordl_internal_get_startColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startColor;
}
constexpr ::UnityEngine::Color const& GorillaTag::Cosmetics::ParticleSettingsSO::__cordl_internal_get_startColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startColor;
}
constexpr void GorillaTag::Cosmetics::ParticleSettingsSO::__cordl_internal_set_startColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startColor = value;
}
constexpr float_t& GorillaTag::Cosmetics::ParticleSettingsSO::__cordl_internal_get_startSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startSize;
}
constexpr float_t const& GorillaTag::Cosmetics::ParticleSettingsSO::__cordl_internal_get_startSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startSize;
}
constexpr void GorillaTag::Cosmetics::ParticleSettingsSO::__cordl_internal_set_startSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startSize = value;
}
inline void GorillaTag::Cosmetics::ParticleSettingsSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ParticleSettingsSO*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::ParticleSettingsSO* GorillaTag::Cosmetics::ParticleSettingsSO::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::ParticleSettingsSO*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::ParticleSettingsSO::ParticleSettingsSO()   {
}
