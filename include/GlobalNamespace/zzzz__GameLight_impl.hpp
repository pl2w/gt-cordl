#pragma once
// IWYU pragma private; include "GlobalNamespace/GameLight.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GlobalNamespace/zzzz__GameLight_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameLight.get_IsRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameLight::*)()>(&::GlobalNamespace::GameLight::get_IsRegistered)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58359bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLight*>(),
                        {"get_IsRegistered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLight.get_InitialIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GameLight::*)()>(&::GlobalNamespace::GameLight::get_InitialIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58359cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLight*>(),
                        {"get_InitialIntensity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLight.set_InitialIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLight::*)(float_t)>(&::GlobalNamespace::GameLight::set_InitialIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58359d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLight*>(),
                        {"set_InitialIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLight.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLight::*)()>(&::GlobalNamespace::GameLight::Awake)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x58359dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLight*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLight.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLight::*)()>(&::GlobalNamespace::GameLight::OnEnable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5835a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLight*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLight.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLight::*)()>(&::GlobalNamespace::GameLight::Start)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5835c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLight*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLight.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLight::*)()>(&::GlobalNamespace::GameLight::OnDisable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5835ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLight*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLight.UpdateCachedLightColorAndIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLight::*)()>(&::GlobalNamespace::GameLight::UpdateCachedLightColorAndIntensity)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5835f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLight*>(),
                        {"UpdateCachedLightColorAndIntensity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLight._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLight::*)()>(&::GlobalNamespace::GameLight::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5835fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLight*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Light>& GlobalNamespace::GameLight::__cordl_internal_get_light()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___light;
}
constexpr ::UnityW<::UnityEngine::Light> const& GlobalNamespace::GameLight::__cordl_internal_get_light() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___light;
}
constexpr void GlobalNamespace::GameLight::__cordl_internal_set_light(::UnityW<::UnityEngine::Light>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___light = value;
}
constexpr bool& GlobalNamespace::GameLight::__cordl_internal_get_negativeLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___negativeLight;
}
constexpr bool const& GlobalNamespace::GameLight::__cordl_internal_get_negativeLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___negativeLight;
}
constexpr void GlobalNamespace::GameLight::__cordl_internal_set_negativeLight(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___negativeLight = value;
}
constexpr bool& GlobalNamespace::GameLight::__cordl_internal_get_isHighPriorityPlayerLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHighPriorityPlayerLight;
}
constexpr bool const& GlobalNamespace::GameLight::__cordl_internal_get_isHighPriorityPlayerLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHighPriorityPlayerLight;
}
constexpr void GlobalNamespace::GameLight::__cordl_internal_set_isHighPriorityPlayerLight(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isHighPriorityPlayerLight = value;
}
constexpr bool& GlobalNamespace::GameLight::__cordl_internal_get_applyRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyRange;
}
constexpr bool const& GlobalNamespace::GameLight::__cordl_internal_get_applyRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyRange;
}
constexpr void GlobalNamespace::GameLight::__cordl_internal_set_applyRange(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyRange = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GameLight::__cordl_internal_get_cachedPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GameLight::__cordl_internal_get_cachedPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedPosition;
}
constexpr void GlobalNamespace::GameLight::__cordl_internal_set_cachedPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedPosition = value;
}
constexpr ::UnityEngine::Vector4& GlobalNamespace::GameLight::__cordl_internal_get_cachedColorAndIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedColorAndIntensity;
}
constexpr ::UnityEngine::Vector4 const& GlobalNamespace::GameLight::__cordl_internal_get_cachedColorAndIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedColorAndIntensity;
}
constexpr void GlobalNamespace::GameLight::__cordl_internal_set_cachedColorAndIntensity(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedColorAndIntensity = value;
}
constexpr float_t& GlobalNamespace::GameLight::__cordl_internal_get_range()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___range;
}
constexpr float_t const& GlobalNamespace::GameLight::__cordl_internal_get_range() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___range;
}
constexpr void GlobalNamespace::GameLight::__cordl_internal_set_range(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___range = value;
}
constexpr int32_t& GlobalNamespace::GameLight::__cordl_internal_get_lightId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightId;
}
constexpr int32_t const& GlobalNamespace::GameLight::__cordl_internal_get_lightId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightId;
}
constexpr void GlobalNamespace::GameLight::__cordl_internal_set_lightId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightId = value;
}
constexpr int32_t& GlobalNamespace::GameLight::__cordl_internal_get_intensityMult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensityMult;
}
constexpr int32_t const& GlobalNamespace::GameLight::__cordl_internal_get_intensityMult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensityMult;
}
constexpr void GlobalNamespace::GameLight::__cordl_internal_set_intensityMult(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___intensityMult = value;
}
constexpr bool& GlobalNamespace::GameLight::__cordl_internal_get_initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr bool const& GlobalNamespace::GameLight::__cordl_internal_get_initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr void GlobalNamespace::GameLight::__cordl_internal_set_initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialized = value;
}
constexpr float_t& GlobalNamespace::GameLight::__cordl_internal_get__InitialIntensity_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InitialIntensity_k__BackingField;
}
constexpr float_t const& GlobalNamespace::GameLight::__cordl_internal_get__InitialIntensity_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InitialIntensity_k__BackingField;
}
constexpr void GlobalNamespace::GameLight::__cordl_internal_set__InitialIntensity_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InitialIntensity_k__BackingField = value;
}
inline bool GlobalNamespace::GameLight::get_IsRegistered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLight*>(),
                        {"get_IsRegistered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t GlobalNamespace::GameLight::get_InitialIntensity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLight*>(),
                        {"get_InitialIntensity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::GameLight::set_InitialIntensity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLight*>(),
                        {"set_InitialIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameLight::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLight*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameLight::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLight*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameLight::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLight*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameLight::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLight*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameLight::UpdateCachedLightColorAndIntensity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLight*>(),
                        {"UpdateCachedLightColorAndIntensity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameLight::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLight*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameLight* GlobalNamespace::GameLight::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameLight*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameLight::GameLight()   {
}
