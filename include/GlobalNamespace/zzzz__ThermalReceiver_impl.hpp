#pragma once
// IWYU pragma private; include "GlobalNamespace/ThermalReceiver.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ThermalReceiver_def.hpp"
#include "GlobalNamespace/zzzz__ThermalSourceVolume_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousPropertyArray_def.hpp"
#include "GorillaTag/zzzz__IDynamicFloat_def.hpp"
#include "GorillaTag/zzzz__IResettableItem_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ThermalReceiver.get_Farenheit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ThermalReceiver::*)()>(&::GlobalNamespace::ThermalReceiver::get_Farenheit)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x56b075c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThermalReceiver*>(),
                        {"get_Farenheit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThermalReceiver.get_floatValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ThermalReceiver::*)()>(&::GlobalNamespace::ThermalReceiver::get_floatValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56b0778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThermalReceiver*>(),
                        {"get_floatValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThermalReceiver.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThermalReceiver::*)()>(&::GlobalNamespace::ThermalReceiver::Awake)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56b0780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThermalReceiver*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThermalReceiver.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThermalReceiver::*)()>(&::GlobalNamespace::ThermalReceiver::OnEnable)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x56b0790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThermalReceiver*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThermalReceiver.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThermalReceiver::*)()>(&::GlobalNamespace::ThermalReceiver::OnDisable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x56b07e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThermalReceiver*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThermalReceiver.ResetToDefaultState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThermalReceiver::*)()>(&::GlobalNamespace::ThermalReceiver::ResetToDefaultState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x56b083c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThermalReceiver*>(),
                        {"ResetToDefaultState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThermalReceiver._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThermalReceiver::*)()>(&::GlobalNamespace::ThermalReceiver::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x56b0848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThermalReceiver*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::ThermalReceiver::__cordl_internal_get_radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr float_t const& GlobalNamespace::ThermalReceiver::__cordl_internal_get_radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr void GlobalNamespace::ThermalReceiver::__cordl_internal_set_radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___radius = value;
}
constexpr float_t& GlobalNamespace::ThermalReceiver::__cordl_internal_get_conductivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conductivity;
}
constexpr float_t const& GlobalNamespace::ThermalReceiver::__cordl_internal_get_conductivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conductivity;
}
constexpr void GlobalNamespace::ThermalReceiver::__cordl_internal_set_conductivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___conductivity = value;
}
constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray*& GlobalNamespace::ThermalReceiver::__cordl_internal_get_continuousProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuousProperties;
}
constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray* const& GlobalNamespace::ThermalReceiver::__cordl_internal_get_continuousProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuousProperties;
}
constexpr void GlobalNamespace::ThermalReceiver::__cordl_internal_set_continuousProperties(::GorillaTag::Cosmetics::ContinuousPropertyArray*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___continuousProperties = value;
}
constexpr float_t& GlobalNamespace::ThermalReceiver::__cordl_internal_get_temperatureThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___temperatureThreshold;
}
constexpr float_t const& GlobalNamespace::ThermalReceiver::__cordl_internal_get_temperatureThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___temperatureThreshold;
}
constexpr void GlobalNamespace::ThermalReceiver::__cordl_internal_set_temperatureThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___temperatureThreshold = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThermalSourceVolume>>*& GlobalNamespace::ThermalReceiver::__cordl_internal_get_exclusionSources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exclusionSources;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThermalSourceVolume>>* const& GlobalNamespace::ThermalReceiver::__cordl_internal_get_exclusionSources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exclusionSources;
}
constexpr void GlobalNamespace::ThermalReceiver::__cordl_internal_set_exclusionSources(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThermalSourceVolume>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exclusionSources = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::ThermalReceiver::__cordl_internal_get_OnAboveThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnAboveThreshold;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::ThermalReceiver::__cordl_internal_get_OnAboveThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnAboveThreshold;
}
constexpr void GlobalNamespace::ThermalReceiver::__cordl_internal_set_OnAboveThreshold(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnAboveThreshold = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::ThermalReceiver::__cordl_internal_get_OnBelowThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnBelowThreshold;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::ThermalReceiver::__cordl_internal_get_OnBelowThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnBelowThreshold;
}
constexpr void GlobalNamespace::ThermalReceiver::__cordl_internal_set_OnBelowThreshold(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnBelowThreshold = value;
}
constexpr float_t& GlobalNamespace::ThermalReceiver::__cordl_internal_get_celsius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___celsius;
}
constexpr float_t const& GlobalNamespace::ThermalReceiver::__cordl_internal_get_celsius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___celsius;
}
constexpr void GlobalNamespace::ThermalReceiver::__cordl_internal_set_celsius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___celsius = value;
}
constexpr bool& GlobalNamespace::ThermalReceiver::__cordl_internal_get_wasAboveThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasAboveThreshold;
}
constexpr bool const& GlobalNamespace::ThermalReceiver::__cordl_internal_get_wasAboveThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasAboveThreshold;
}
constexpr void GlobalNamespace::ThermalReceiver::__cordl_internal_set_wasAboveThreshold(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasAboveThreshold = value;
}
constexpr float_t& GlobalNamespace::ThermalReceiver::__cordl_internal_get_defaultCelsius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultCelsius;
}
constexpr float_t const& GlobalNamespace::ThermalReceiver::__cordl_internal_get_defaultCelsius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultCelsius;
}
constexpr void GlobalNamespace::ThermalReceiver::__cordl_internal_set_defaultCelsius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultCelsius = value;
}
inline float_t GlobalNamespace::ThermalReceiver::get_Farenheit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThermalReceiver*>(),
                        {"get_Farenheit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::ThermalReceiver::get_floatValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThermalReceiver*>(),
                        {"get_floatValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::ThermalReceiver::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThermalReceiver*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ThermalReceiver::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThermalReceiver*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ThermalReceiver::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThermalReceiver*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ThermalReceiver::ResetToDefaultState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThermalReceiver*>(),
                        {"ResetToDefaultState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ThermalReceiver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThermalReceiver*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ThermalReceiver* GlobalNamespace::ThermalReceiver::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ThermalReceiver*>());
}
/// @brief Convert operator to "::GorillaTag::IDynamicFloat"
constexpr  GlobalNamespace::ThermalReceiver::operator ::GorillaTag::IDynamicFloat*() noexcept {
return static_cast<::GorillaTag::IDynamicFloat*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::IDynamicFloat"
constexpr ::GorillaTag::IDynamicFloat* GlobalNamespace::ThermalReceiver::i___GorillaTag__IDynamicFloat() noexcept {
return static_cast<::GorillaTag::IDynamicFloat*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GorillaTag::IResettableItem"
constexpr  GlobalNamespace::ThermalReceiver::operator ::GorillaTag::IResettableItem*() noexcept {
return static_cast<::GorillaTag::IResettableItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::IResettableItem"
constexpr ::GorillaTag::IResettableItem* GlobalNamespace::ThermalReceiver::i___GorillaTag__IResettableItem() noexcept {
return static_cast<::GorillaTag::IResettableItem*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ThermalReceiver::ThermalReceiver()   {
}
