#pragma once
// IWYU pragma private; include "GlobalNamespace/HatcheryEventFlashlight.hpp"
#include "GlobalNamespace/zzzz__GameLight_impl.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_impl.hpp"
#include "UnityEngine/zzzz__Light_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "GlobalNamespace/zzzz__HatcheryEventFlashlight_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HatcheryEventFlashlight.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HatcheryEventFlashlight::*)()>(&::GlobalNamespace::HatcheryEventFlashlight::Awake)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x564088c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HatcheryEventFlashlight*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HatcheryEventFlashlight.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HatcheryEventFlashlight::*)()>(&::GlobalNamespace::HatcheryEventFlashlight::OnEnable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5640adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HatcheryEventFlashlight*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HatcheryEventFlashlight.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HatcheryEventFlashlight::*)()>(&::GlobalNamespace::HatcheryEventFlashlight::OnDisable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5640b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HatcheryEventFlashlight*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HatcheryEventFlashlight.MaxEnergy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::HatcheryEventFlashlight::*)()>(&::GlobalNamespace::HatcheryEventFlashlight::MaxEnergy)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5640b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HatcheryEventFlashlight*>(),
                        {"MaxEnergy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HatcheryEventFlashlight.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HatcheryEventFlashlight::*)()>(&::GlobalNamespace::HatcheryEventFlashlight::Tick)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5640c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HatcheryEventFlashlight*>(),
                    {::i2c::class_of<::GlobalNamespace::HatcheryEventFlashlight*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HatcheryEventFlashlight.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HatcheryEventFlashlight::*)()>(&::GlobalNamespace::HatcheryEventFlashlight::SliceUpdate)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5640c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HatcheryEventFlashlight*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HatcheryEventFlashlight.UpdateLightPositioning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HatcheryEventFlashlight::*)()>(&::GlobalNamespace::HatcheryEventFlashlight::UpdateLightPositioning)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5640e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HatcheryEventFlashlight*>(),
                        {"UpdateLightPositioning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HatcheryEventFlashlight.UpdateLightBrightness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HatcheryEventFlashlight::*)(float_t)>(&::GlobalNamespace::HatcheryEventFlashlight::UpdateLightBrightness)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5641068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HatcheryEventFlashlight*>(),
                        {"UpdateLightBrightness", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HatcheryEventFlashlight._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HatcheryEventFlashlight::*)()>(&::GlobalNamespace::HatcheryEventFlashlight::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x564111c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HatcheryEventFlashlight*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::RaycastHit>& GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_get_hits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hits;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_get_hits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hits;
}
constexpr void GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_set_hits(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hits = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Light>>& GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_get_lightComponents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightComponents;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Light>> const& GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_get_lightComponents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightComponents;
}
constexpr void GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_set_lightComponents(::ArrayW<::UnityW<::UnityEngine::Light>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightComponents = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GameLight>>& GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_get_gameLightComponents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameLightComponents;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GameLight>> const& GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_get_gameLightComponents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameLightComponents;
}
constexpr void GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_set_gameLightComponents(::ArrayW<::UnityW<::GlobalNamespace::GameLight>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameLightComponents = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_get_parentRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_get_parentRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentRig;
}
constexpr void GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_set_parentRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentRig = value;
}
constexpr float_t& GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_get_currentEnergy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentEnergy;
}
constexpr float_t const& GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_get_currentEnergy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentEnergy;
}
constexpr void GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_set_currentEnergy(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentEnergy = value;
}
constexpr float_t& GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_get_startingBrightness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingBrightness;
}
constexpr float_t const& GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_get_startingBrightness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingBrightness;
}
constexpr void GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_set_startingBrightness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingBrightness = value;
}
constexpr float_t& GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_get_lastUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastUpdated;
}
constexpr float_t const& GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_get_lastUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastUpdated;
}
constexpr void GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_set_lastUpdated(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastUpdated = value;
}
constexpr bool& GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_get_playerLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerLight;
}
constexpr bool const& GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_get_playerLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerLight;
}
constexpr void GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_set_playerLight(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerLight = value;
}
constexpr bool& GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_get_wasLightEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasLightEnabled;
}
constexpr bool const& GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_get_wasLightEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasLightEnabled;
}
constexpr void GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_set_wasLightEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasLightEnabled = value;
}
constexpr bool& GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_get_wasLightSwitchedOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasLightSwitchedOn;
}
constexpr bool const& GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_get_wasLightSwitchedOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasLightSwitchedOn;
}
constexpr void GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_set_wasLightSwitchedOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasLightSwitchedOn = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_get_lightStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightStart;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_get_lightStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightStart;
}
constexpr void GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_set_lightStart(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightStart = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_get_lightsParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightsParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_get_lightsParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightsParent;
}
constexpr void GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_set_lightsParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightsParent = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_get_flashlight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashlight;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_get_flashlight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flashlight;
}
constexpr void GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_set_flashlight(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flashlight = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_get_lights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lights;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_get_lights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lights;
}
constexpr void GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_set_lights(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lights = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_get_clickSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clickSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_get_clickSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clickSource;
}
constexpr void GlobalNamespace::HatcheryEventFlashlight::__cordl_internal_set_clickSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clickSource = value;
}
inline void GlobalNamespace::HatcheryEventFlashlight::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HatcheryEventFlashlight*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HatcheryEventFlashlight::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HatcheryEventFlashlight*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HatcheryEventFlashlight::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HatcheryEventFlashlight*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::HatcheryEventFlashlight::MaxEnergy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HatcheryEventFlashlight*>(),
                        {"MaxEnergy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::HatcheryEventFlashlight::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HatcheryEventFlashlight*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HatcheryEventFlashlight::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HatcheryEventFlashlight*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HatcheryEventFlashlight::UpdateLightPositioning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HatcheryEventFlashlight*>(),
                        {"UpdateLightPositioning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HatcheryEventFlashlight::UpdateLightBrightness(float_t  _maxEnergy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HatcheryEventFlashlight*>(),
                        {"UpdateLightBrightness", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _maxEnergy);
}
inline void GlobalNamespace::HatcheryEventFlashlight::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HatcheryEventFlashlight*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HatcheryEventFlashlight* GlobalNamespace::HatcheryEventFlashlight::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HatcheryEventFlashlight*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::HatcheryEventFlashlight::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::HatcheryEventFlashlight::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HatcheryEventFlashlight::HatcheryEventFlashlight()   {
}
