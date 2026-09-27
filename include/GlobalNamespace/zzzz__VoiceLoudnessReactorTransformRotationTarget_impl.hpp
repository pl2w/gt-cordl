#pragma once
// IWYU pragma private; include "GlobalNamespace/VoiceLoudnessReactorTransformRotationTarget.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "GlobalNamespace/zzzz__VoiceLoudnessReactorTransformRotationTarget_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget.get_Initial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget::*)()>(&::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget::get_Initial)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b40ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget*>(),
                        {"get_Initial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget.set_Initial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget::*)(::UnityEngine::Quaternion)>(&::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget::set_Initial)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b41000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget*>(),
                        {"set_Initial", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget::*)()>(&::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b4100c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget::__cordl_internal_get_transform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget::__cordl_internal_get_transform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transform;
}
constexpr void GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget::__cordl_internal_set_transform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transform = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget::__cordl_internal_get_initial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initial;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget::__cordl_internal_get_initial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initial;
}
constexpr void GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget::__cordl_internal_set_initial(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initial = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget::__cordl_internal_get_Max()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Max;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget::__cordl_internal_get_Max() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Max;
}
constexpr void GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget::__cordl_internal_set_Max(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Max = value;
}
constexpr float_t& GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget::__cordl_internal_get_Scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Scale;
}
constexpr float_t const& GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget::__cordl_internal_get_Scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Scale;
}
constexpr void GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget::__cordl_internal_set_Scale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Scale = value;
}
constexpr bool& GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget::__cordl_internal_get_UseSmoothedLoudness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseSmoothedLoudness;
}
constexpr bool const& GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget::__cordl_internal_get_UseSmoothedLoudness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseSmoothedLoudness;
}
constexpr void GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget::__cordl_internal_set_UseSmoothedLoudness(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseSmoothedLoudness = value;
}
inline ::UnityEngine::Quaternion GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget::get_Initial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget*>(),
                        {"get_Initial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget::set_Initial(::UnityEngine::Quaternion  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget*>(),
                        {"set_Initial", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget* GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoiceLoudnessReactorTransformRotationTarget::VoiceLoudnessReactorTransformRotationTarget()   {
}
