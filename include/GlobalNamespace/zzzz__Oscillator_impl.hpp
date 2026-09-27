#pragma once
// IWYU pragma private; include "GlobalNamespace/Oscillator.hpp"
#include "GlobalNamespace/zzzz__Oscillator_WaveTypeEnum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__Oscillator_def.hpp"
#include "GlobalNamespace/zzzz__Oscillator_WaveTypeEnum_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Oscillator.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Oscillator::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::Oscillator::Init)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x55eb2d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Oscillator*>(),
                        {"Init", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Oscillator.SampleWave
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::Oscillator::*)(float_t)>(&::GlobalNamespace::Oscillator::SampleWave)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55eb308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Oscillator*>(),
                        {"SampleWave", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Oscillator.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Oscillator::*)()>(&::GlobalNamespace::Oscillator::OnEnable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x55eb414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Oscillator*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Oscillator.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Oscillator::*)()>(&::GlobalNamespace::Oscillator::Update)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x55eb444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Oscillator*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Oscillator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Oscillator::*)()>(&::GlobalNamespace::Oscillator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55eb588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Oscillator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::Oscillator_WaveTypeEnum& GlobalNamespace::Oscillator::__cordl_internal_get_WaveType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WaveType;
}
constexpr ::GlobalNamespace::Oscillator_WaveTypeEnum const& GlobalNamespace::Oscillator::__cordl_internal_get_WaveType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WaveType;
}
constexpr void GlobalNamespace::Oscillator::__cordl_internal_set_WaveType(::GlobalNamespace::Oscillator_WaveTypeEnum  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WaveType = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Oscillator::__cordl_internal_get_m_initCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_initCenter;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Oscillator::__cordl_internal_get_m_initCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_initCenter;
}
constexpr void GlobalNamespace::Oscillator::__cordl_internal_set_m_initCenter(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_initCenter = value;
}
constexpr bool& GlobalNamespace::Oscillator::__cordl_internal_get_UseCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseCenter;
}
constexpr bool const& GlobalNamespace::Oscillator::__cordl_internal_get_UseCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseCenter;
}
constexpr void GlobalNamespace::Oscillator::__cordl_internal_set_UseCenter(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseCenter = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Oscillator::__cordl_internal_get_Center()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Center;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Oscillator::__cordl_internal_get_Center() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Center;
}
constexpr void GlobalNamespace::Oscillator::__cordl_internal_set_Center(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Center = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Oscillator::__cordl_internal_get_Radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Radius;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Oscillator::__cordl_internal_get_Radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Radius;
}
constexpr void GlobalNamespace::Oscillator::__cordl_internal_set_Radius(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Radius = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Oscillator::__cordl_internal_get_Frequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Frequency;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Oscillator::__cordl_internal_get_Frequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Frequency;
}
constexpr void GlobalNamespace::Oscillator::__cordl_internal_set_Frequency(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Frequency = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::Oscillator::__cordl_internal_get_Phase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Phase;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::Oscillator::__cordl_internal_get_Phase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Phase;
}
constexpr void GlobalNamespace::Oscillator::__cordl_internal_set_Phase(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Phase = value;
}
inline void GlobalNamespace::Oscillator::Init(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  radius, ::UnityEngine::Vector3  frequency, ::UnityEngine::Vector3  startPhase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Oscillator*>(),
                        {"Init", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, center, radius, frequency, startPhase);
}
inline float_t GlobalNamespace::Oscillator::SampleWave(float_t  phase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Oscillator*>(),
                        {"SampleWave", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, phase);
}
inline void GlobalNamespace::Oscillator::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Oscillator*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Oscillator::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Oscillator*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::Oscillator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Oscillator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Oscillator* GlobalNamespace::Oscillator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Oscillator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Oscillator::Oscillator()   {
}
