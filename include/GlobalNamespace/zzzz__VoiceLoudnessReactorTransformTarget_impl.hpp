#pragma once
// IWYU pragma private; include "GlobalNamespace/VoiceLoudnessReactorTransformTarget.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__VoiceLoudnessReactorTransformTarget_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VoiceLoudnessReactorTransformTarget.get_Initial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::VoiceLoudnessReactorTransformTarget::*)()>(&::GlobalNamespace::VoiceLoudnessReactorTransformTarget::get_Initial)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b40f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactorTransformTarget*>(),
                        {"get_Initial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoiceLoudnessReactorTransformTarget.set_Initial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoiceLoudnessReactorTransformTarget::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::VoiceLoudnessReactorTransformTarget::set_Initial)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b40f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactorTransformTarget*>(),
                        {"set_Initial", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoiceLoudnessReactorTransformTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoiceLoudnessReactorTransformTarget::*)()>(&::GlobalNamespace::VoiceLoudnessReactorTransformTarget::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b40f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactorTransformTarget*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::VoiceLoudnessReactorTransformTarget::__cordl_internal_get_transform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::VoiceLoudnessReactorTransformTarget::__cordl_internal_get_transform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transform;
}
constexpr void GlobalNamespace::VoiceLoudnessReactorTransformTarget::__cordl_internal_set_transform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transform = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VoiceLoudnessReactorTransformTarget::__cordl_internal_get_initial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initial;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VoiceLoudnessReactorTransformTarget::__cordl_internal_get_initial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initial;
}
constexpr void GlobalNamespace::VoiceLoudnessReactorTransformTarget::__cordl_internal_set_initial(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initial = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VoiceLoudnessReactorTransformTarget::__cordl_internal_get_Max()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Max;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VoiceLoudnessReactorTransformTarget::__cordl_internal_get_Max() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Max;
}
constexpr void GlobalNamespace::VoiceLoudnessReactorTransformTarget::__cordl_internal_set_Max(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Max = value;
}
constexpr float_t& GlobalNamespace::VoiceLoudnessReactorTransformTarget::__cordl_internal_get_Scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Scale;
}
constexpr float_t const& GlobalNamespace::VoiceLoudnessReactorTransformTarget::__cordl_internal_get_Scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Scale;
}
constexpr void GlobalNamespace::VoiceLoudnessReactorTransformTarget::__cordl_internal_set_Scale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Scale = value;
}
constexpr bool& GlobalNamespace::VoiceLoudnessReactorTransformTarget::__cordl_internal_get_UseSmoothedLoudness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseSmoothedLoudness;
}
constexpr bool const& GlobalNamespace::VoiceLoudnessReactorTransformTarget::__cordl_internal_get_UseSmoothedLoudness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseSmoothedLoudness;
}
constexpr void GlobalNamespace::VoiceLoudnessReactorTransformTarget::__cordl_internal_set_UseSmoothedLoudness(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseSmoothedLoudness = value;
}
inline ::UnityEngine::Vector3 GlobalNamespace::VoiceLoudnessReactorTransformTarget::get_Initial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactorTransformTarget*>(),
                        {"get_Initial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::VoiceLoudnessReactorTransformTarget::set_Initial(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactorTransformTarget*>(),
                        {"set_Initial", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::VoiceLoudnessReactorTransformTarget::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactorTransformTarget*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VoiceLoudnessReactorTransformTarget* GlobalNamespace::VoiceLoudnessReactorTransformTarget::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VoiceLoudnessReactorTransformTarget*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoiceLoudnessReactorTransformTarget::VoiceLoudnessReactorTransformTarget()   {
}
