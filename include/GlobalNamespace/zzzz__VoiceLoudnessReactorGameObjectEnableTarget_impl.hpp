#pragma once
// IWYU pragma private; include "GlobalNamespace/VoiceLoudnessReactorGameObjectEnableTarget.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__VoiceLoudnessReactorGameObjectEnableTarget_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget::*)()>(&::GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b410ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget::__cordl_internal_get_GameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget::__cordl_internal_get_GameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameObject;
}
constexpr void GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget::__cordl_internal_set_GameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GameObject = value;
}
constexpr float_t& GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget::__cordl_internal_get_Threshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Threshold;
}
constexpr float_t const& GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget::__cordl_internal_get_Threshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Threshold;
}
constexpr void GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget::__cordl_internal_set_Threshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Threshold = value;
}
constexpr bool& GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget::__cordl_internal_get_TurnOnAtThreshhold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TurnOnAtThreshhold;
}
constexpr bool const& GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget::__cordl_internal_get_TurnOnAtThreshhold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TurnOnAtThreshhold;
}
constexpr void GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget::__cordl_internal_set_TurnOnAtThreshhold(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TurnOnAtThreshhold = value;
}
constexpr bool& GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget::__cordl_internal_get_UseSmoothedLoudness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseSmoothedLoudness;
}
constexpr bool const& GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget::__cordl_internal_get_UseSmoothedLoudness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseSmoothedLoudness;
}
constexpr void GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget::__cordl_internal_set_UseSmoothedLoudness(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseSmoothedLoudness = value;
}
constexpr float_t& GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget::__cordl_internal_get_Scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Scale;
}
constexpr float_t const& GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget::__cordl_internal_get_Scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Scale;
}
constexpr void GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget::__cordl_internal_set_Scale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Scale = value;
}
inline void GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget* GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoiceLoudnessReactorGameObjectEnableTarget::VoiceLoudnessReactorGameObjectEnableTarget()   {
}
