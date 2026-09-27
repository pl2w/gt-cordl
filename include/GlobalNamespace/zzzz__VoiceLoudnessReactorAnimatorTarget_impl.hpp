#pragma once
// IWYU pragma private; include "GlobalNamespace/VoiceLoudnessReactorAnimatorTarget.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__VoiceLoudnessReactorAnimatorTarget_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VoiceLoudnessReactorAnimatorTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoiceLoudnessReactorAnimatorTarget::*)()>(&::GlobalNamespace::VoiceLoudnessReactorAnimatorTarget::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b410c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactorAnimatorTarget*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Animator>& GlobalNamespace::VoiceLoudnessReactorAnimatorTarget::__cordl_internal_get_animator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& GlobalNamespace::VoiceLoudnessReactorAnimatorTarget::__cordl_internal_get_animator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr void GlobalNamespace::VoiceLoudnessReactorAnimatorTarget::__cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animator = value;
}
constexpr bool& GlobalNamespace::VoiceLoudnessReactorAnimatorTarget::__cordl_internal_get_useSmoothedLoudness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useSmoothedLoudness;
}
constexpr bool const& GlobalNamespace::VoiceLoudnessReactorAnimatorTarget::__cordl_internal_get_useSmoothedLoudness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useSmoothedLoudness;
}
constexpr void GlobalNamespace::VoiceLoudnessReactorAnimatorTarget::__cordl_internal_set_useSmoothedLoudness(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useSmoothedLoudness = value;
}
constexpr float_t& GlobalNamespace::VoiceLoudnessReactorAnimatorTarget::__cordl_internal_get_animatorSpeedToLoudness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animatorSpeedToLoudness;
}
constexpr float_t const& GlobalNamespace::VoiceLoudnessReactorAnimatorTarget::__cordl_internal_get_animatorSpeedToLoudness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animatorSpeedToLoudness;
}
constexpr void GlobalNamespace::VoiceLoudnessReactorAnimatorTarget::__cordl_internal_set_animatorSpeedToLoudness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animatorSpeedToLoudness = value;
}
inline void GlobalNamespace::VoiceLoudnessReactorAnimatorTarget::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactorAnimatorTarget*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VoiceLoudnessReactorAnimatorTarget* GlobalNamespace::VoiceLoudnessReactorAnimatorTarget::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VoiceLoudnessReactorAnimatorTarget*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoiceLoudnessReactorAnimatorTarget::VoiceLoudnessReactorAnimatorTarget()   {
}
