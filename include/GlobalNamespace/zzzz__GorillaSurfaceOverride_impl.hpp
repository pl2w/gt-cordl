#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaSurfaceOverride.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaSurfaceOverride_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaSurfaceOverride._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaSurfaceOverride::*)()>(&::GlobalNamespace::GorillaSurfaceOverride::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x579de94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSurfaceOverride*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GorillaSurfaceOverride::__cordl_internal_get_overrideIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideIndex;
}
constexpr int32_t const& GlobalNamespace::GorillaSurfaceOverride::__cordl_internal_get_overrideIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideIndex;
}
constexpr void GlobalNamespace::GorillaSurfaceOverride::__cordl_internal_set_overrideIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideIndex = value;
}
constexpr float_t& GlobalNamespace::GorillaSurfaceOverride::__cordl_internal_get_extraVelMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extraVelMultiplier;
}
constexpr float_t const& GlobalNamespace::GorillaSurfaceOverride::__cordl_internal_get_extraVelMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extraVelMultiplier;
}
constexpr void GlobalNamespace::GorillaSurfaceOverride::__cordl_internal_set_extraVelMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extraVelMultiplier = value;
}
constexpr float_t& GlobalNamespace::GorillaSurfaceOverride::__cordl_internal_get_extraVelMaxMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extraVelMaxMultiplier;
}
constexpr float_t const& GlobalNamespace::GorillaSurfaceOverride::__cordl_internal_get_extraVelMaxMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extraVelMaxMultiplier;
}
constexpr void GlobalNamespace::GorillaSurfaceOverride::__cordl_internal_set_extraVelMaxMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extraVelMaxMultiplier = value;
}
constexpr float_t& GlobalNamespace::GorillaSurfaceOverride::__cordl_internal_get_slidePercentageOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slidePercentageOverride;
}
constexpr float_t const& GlobalNamespace::GorillaSurfaceOverride::__cordl_internal_get_slidePercentageOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slidePercentageOverride;
}
constexpr void GlobalNamespace::GorillaSurfaceOverride::__cordl_internal_set_slidePercentageOverride(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slidePercentageOverride = value;
}
constexpr bool& GlobalNamespace::GorillaSurfaceOverride::__cordl_internal_get_sendOnTapEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendOnTapEvent;
}
constexpr bool const& GlobalNamespace::GorillaSurfaceOverride::__cordl_internal_get_sendOnTapEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendOnTapEvent;
}
constexpr void GlobalNamespace::GorillaSurfaceOverride::__cordl_internal_set_sendOnTapEvent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendOnTapEvent = value;
}
constexpr bool& GlobalNamespace::GorillaSurfaceOverride::__cordl_internal_get_disablePushBackEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disablePushBackEffect;
}
constexpr bool const& GlobalNamespace::GorillaSurfaceOverride::__cordl_internal_get_disablePushBackEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disablePushBackEffect;
}
constexpr void GlobalNamespace::GorillaSurfaceOverride::__cordl_internal_set_disablePushBackEffect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disablePushBackEffect = value;
}
inline void GlobalNamespace::GorillaSurfaceOverride::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaSurfaceOverride*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaSurfaceOverride* GlobalNamespace::GorillaSurfaceOverride::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaSurfaceOverride*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaSurfaceOverride::GorillaSurfaceOverride()   {
}
