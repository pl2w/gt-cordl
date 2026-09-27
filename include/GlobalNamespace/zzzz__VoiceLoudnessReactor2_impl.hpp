#pragma once
// IWYU pragma private; include "GlobalNamespace/VoiceLoudnessReactor2.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__VoiceLoudnessReactor2_def.hpp"
#include "GlobalNamespace/zzzz__GorillaSpeakerLoudness_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousPropertyArray_def.hpp"
#include "GorillaTag/zzzz__IDynamicFloat_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VoiceLoudnessReactor2.get_Loudness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::VoiceLoudnessReactor2::*)()>(&::GlobalNamespace::VoiceLoudnessReactor2::get_Loudness)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5795d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactor2*>(),
                        {"get_Loudness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoiceLoudnessReactor2.GorillaTag_IDynamicFloat_get_floatValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::VoiceLoudnessReactor2::*)()>(&::GlobalNamespace::VoiceLoudnessReactor2::GorillaTag_IDynamicFloat_get_floatValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5795d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactor2*>(),
                        {"GorillaTag.IDynamicFloat.get_floatValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoiceLoudnessReactor2.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoiceLoudnessReactor2::*)()>(&::GlobalNamespace::VoiceLoudnessReactor2::OnEnable)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5795d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactor2*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoiceLoudnessReactor2.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoiceLoudnessReactor2::*)()>(&::GlobalNamespace::VoiceLoudnessReactor2::OnDisable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5795f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactor2*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoiceLoudnessReactor2.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VoiceLoudnessReactor2::*)()>(&::GlobalNamespace::VoiceLoudnessReactor2::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5795fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactor2*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoiceLoudnessReactor2.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoiceLoudnessReactor2::*)(bool)>(&::GlobalNamespace::VoiceLoudnessReactor2::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5795fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactor2*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoiceLoudnessReactor2.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoiceLoudnessReactor2::*)()>(&::GlobalNamespace::VoiceLoudnessReactor2::Tick)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5795fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactor2*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoiceLoudnessReactor2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoiceLoudnessReactor2::*)()>(&::GlobalNamespace::VoiceLoudnessReactor2::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5796014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactor2*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::VoiceLoudnessReactor2::__cordl_internal_get_sensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sensitivity;
}
constexpr float_t const& GlobalNamespace::VoiceLoudnessReactor2::__cordl_internal_get_sensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sensitivity;
}
constexpr void GlobalNamespace::VoiceLoudnessReactor2::__cordl_internal_set_sensitivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sensitivity = value;
}
constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray*& GlobalNamespace::VoiceLoudnessReactor2::__cordl_internal_get_continuousProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuousProperties;
}
constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray* const& GlobalNamespace::VoiceLoudnessReactor2::__cordl_internal_get_continuousProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuousProperties;
}
constexpr void GlobalNamespace::VoiceLoudnessReactor2::__cordl_internal_set_continuousProperties(::GorillaTag::Cosmetics::ContinuousPropertyArray*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___continuousProperties = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaSpeakerLoudness>& GlobalNamespace::VoiceLoudnessReactor2::__cordl_internal_get_gsl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gsl;
}
constexpr ::UnityW<::GlobalNamespace::GorillaSpeakerLoudness> const& GlobalNamespace::VoiceLoudnessReactor2::__cordl_internal_get_gsl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gsl;
}
constexpr void GlobalNamespace::VoiceLoudnessReactor2::__cordl_internal_set_gsl(::UnityW<::GlobalNamespace::GorillaSpeakerLoudness>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gsl = value;
}
constexpr bool& GlobalNamespace::VoiceLoudnessReactor2::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::VoiceLoudnessReactor2::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GlobalNamespace::VoiceLoudnessReactor2::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
inline float_t GlobalNamespace::VoiceLoudnessReactor2::get_Loudness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactor2*>(),
                        {"get_Loudness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::VoiceLoudnessReactor2::GorillaTag_IDynamicFloat_get_floatValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactor2*>(),
                        {"GorillaTag.IDynamicFloat.get_floatValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::VoiceLoudnessReactor2::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactor2*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VoiceLoudnessReactor2::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactor2*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::VoiceLoudnessReactor2::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactor2*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::VoiceLoudnessReactor2::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactor2*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::VoiceLoudnessReactor2::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactor2*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VoiceLoudnessReactor2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceLoudnessReactor2*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VoiceLoudnessReactor2* GlobalNamespace::VoiceLoudnessReactor2::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VoiceLoudnessReactor2*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GlobalNamespace::VoiceLoudnessReactor2::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GlobalNamespace::VoiceLoudnessReactor2::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GorillaTag::IDynamicFloat"
constexpr  GlobalNamespace::VoiceLoudnessReactor2::operator ::GorillaTag::IDynamicFloat*() noexcept {
return static_cast<::GorillaTag::IDynamicFloat*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::IDynamicFloat"
constexpr ::GorillaTag::IDynamicFloat* GlobalNamespace::VoiceLoudnessReactor2::i___GorillaTag__IDynamicFloat() noexcept {
return static_cast<::GorillaTag::IDynamicFloat*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoiceLoudnessReactor2::VoiceLoudnessReactor2()   {
}
