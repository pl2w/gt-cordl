#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_Burst.hpp"
#include "UnityEngine/zzzz__ParticleSystem_MinMaxCurveBlittable_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_Burst_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_MinMaxCurve_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_Burst._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystem_Burst::*)(float_t, int16_t, int16_t, int32_t, float_t)>(&::GlobalNamespace::ParticleSystem_Burst::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb670740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Burst>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_Burst.get_time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ParticleSystem_Burst::*)()>(&::GlobalNamespace::ParticleSystem_Burst::get_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb670864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Burst>(),
                        {"get_time", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_Burst.get_count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ParticleSystem_MinMaxCurve (::GlobalNamespace::ParticleSystem_Burst::*)()>(&::GlobalNamespace::ParticleSystem_Burst::get_count)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb67086c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Burst>(),
                        {"get_count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_Burst.set_count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystem_Burst::*)(::GlobalNamespace::ParticleSystem_MinMaxCurve)>(&::GlobalNamespace::ParticleSystem_Burst::set_count)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb670984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Burst>(),
                        {"set_count", {}, {::i2c::type_of<::GlobalNamespace::ParticleSystem_MinMaxCurve>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_Burst.get_minCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::GlobalNamespace::ParticleSystem_Burst::*)()>(&::GlobalNamespace::ParticleSystem_Burst::get_minCount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb6709ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Burst>(),
                        {"get_minCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_Burst.get_maxCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::GlobalNamespace::ParticleSystem_Burst::*)()>(&::GlobalNamespace::ParticleSystem_Burst::get_maxCount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb6709c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Burst>(),
                        {"get_maxCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_Burst.get_cycleCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ParticleSystem_Burst::*)()>(&::GlobalNamespace::ParticleSystem_Burst::get_cycleCount)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb6709e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Burst>(),
                        {"get_cycleCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_Burst.get_repeatInterval
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ParticleSystem_Burst::*)()>(&::GlobalNamespace::ParticleSystem_Burst::get_repeatInterval)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb6709f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Burst>(),
                        {"get_repeatInterval", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_Burst.get_probability
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ParticleSystem_Burst::*)()>(&::GlobalNamespace::ParticleSystem_Burst::get_probability)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb6709f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Burst>(),
                        {"get_probability", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_Burst.set_probability
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystem_Burst::*)(float_t)>(&::GlobalNamespace::ParticleSystem_Burst::set_probability)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb670a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Burst>(),
                        {"set_probability", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ParticleSystem_Burst::_ctor(float_t  _time, int16_t  _minCount, int16_t  _maxCount, int32_t  _cycleCount, float_t  _repeatInterval)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Burst>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _time, _minCount, _maxCount, _cycleCount, _repeatInterval);
}
inline float_t GlobalNamespace::ParticleSystem_Burst::get_time()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Burst>(),
                        {"get_time", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::GlobalNamespace::ParticleSystem_MinMaxCurve GlobalNamespace::ParticleSystem_Burst::get_count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Burst>(),
                        {"get_count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ParticleSystem_MinMaxCurve>(*this, ___internal_method);
}
inline void GlobalNamespace::ParticleSystem_Burst::set_count(::GlobalNamespace::ParticleSystem_MinMaxCurve  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Burst>(),
                        {"set_count", {}, {::i2c::type_of<::GlobalNamespace::ParticleSystem_MinMaxCurve>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int16_t GlobalNamespace::ParticleSystem_Burst::get_minCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Burst>(),
                        {"get_minCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(*this, ___internal_method);
}
inline int16_t GlobalNamespace::ParticleSystem_Burst::get_maxCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Burst>(),
                        {"get_maxCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::ParticleSystem_Burst::get_cycleCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Burst>(),
                        {"get_cycleCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline float_t GlobalNamespace::ParticleSystem_Burst::get_repeatInterval()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Burst>(),
                        {"get_repeatInterval", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t GlobalNamespace::ParticleSystem_Burst::get_probability()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Burst>(),
                        {"get_probability", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void GlobalNamespace::ParticleSystem_Burst::set_probability(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_Burst>(),
                        {"set_probability", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_Time", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Count", ty: "::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_RepeatCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_RepeatInterval", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_InvProbability", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ParticleSystem_Burst::ParticleSystem_Burst(float_t  m_Time, ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  m_Count, int32_t  m_RepeatCount, float_t  m_RepeatInterval, float_t  m_InvProbability) noexcept  {
this->m_Time = m_Time;
this->m_Count = m_Count;
this->m_RepeatCount = m_RepeatCount;
this->m_RepeatInterval = m_RepeatInterval;
this->m_InvProbability = m_InvProbability;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParticleSystem_Burst::ParticleSystem_Burst()   {
}
