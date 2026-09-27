#pragma once
// IWYU pragma private; include "Unity/Cinemachine/NoiseSettings.hpp"
#include "Unity/Cinemachine/zzzz__NoiseSettings_TransformNoiseParams_impl.hpp"
#include "Unity/Cinemachine/zzzz__SignalSourceAsset_impl.hpp"
#include "Unity/Cinemachine/zzzz__NoiseSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__NoiseSettings_NoiseParams_def.hpp"
#include "Unity/Cinemachine/zzzz__NoiseSettings_TransformNoiseParams_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::NoiseSettings.GetCombinedFilterResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::ArrayW<::GlobalNamespace::NoiseSettings_TransformNoiseParams>, float_t, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::NoiseSettings::GetCombinedFilterResults)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xaeb8eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::NoiseSettings*>(),
                        {"GetCombinedFilterResults", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::NoiseSettings_TransformNoiseParams>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::NoiseSettings.get_SignalDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::NoiseSettings::*)()>(&::Unity::Cinemachine::NoiseSettings::get_SignalDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeb9000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::NoiseSettings*>(),
                    {::i2c::class_of<::Unity::Cinemachine::NoiseSettings*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::NoiseSettings.GetSignal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::NoiseSettings::*)(float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::Unity::Cinemachine::NoiseSettings::GetSignal)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xaeb9008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::NoiseSettings*>(),
                    {::i2c::class_of<::Unity::Cinemachine::NoiseSettings*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::NoiseSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::NoiseSettings::*)()>(&::Unity::Cinemachine::NoiseSettings::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xaeb90f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::NoiseSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::NoiseSettings_TransformNoiseParams>& Unity::Cinemachine::NoiseSettings::__cordl_internal_get_PositionNoise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PositionNoise;
}
constexpr ::ArrayW<::GlobalNamespace::NoiseSettings_TransformNoiseParams> const& Unity::Cinemachine::NoiseSettings::__cordl_internal_get_PositionNoise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PositionNoise;
}
constexpr void Unity::Cinemachine::NoiseSettings::__cordl_internal_set_PositionNoise(::ArrayW<::GlobalNamespace::NoiseSettings_TransformNoiseParams>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PositionNoise = value;
}
constexpr ::ArrayW<::GlobalNamespace::NoiseSettings_TransformNoiseParams>& Unity::Cinemachine::NoiseSettings::__cordl_internal_get_OrientationNoise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OrientationNoise;
}
constexpr ::ArrayW<::GlobalNamespace::NoiseSettings_TransformNoiseParams> const& Unity::Cinemachine::NoiseSettings::__cordl_internal_get_OrientationNoise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OrientationNoise;
}
constexpr void Unity::Cinemachine::NoiseSettings::__cordl_internal_set_OrientationNoise(::ArrayW<::GlobalNamespace::NoiseSettings_TransformNoiseParams>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OrientationNoise = value;
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::NoiseSettings::GetCombinedFilterResults(::ArrayW<::GlobalNamespace::NoiseSettings_TransformNoiseParams>  noiseParams, float_t  time, ::UnityEngine::Vector3  timeOffsets)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::NoiseSettings*>(),
                        {"GetCombinedFilterResults", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::NoiseSettings_TransformNoiseParams>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, noiseParams, time, timeOffsets);
}
inline float_t Unity::Cinemachine::NoiseSettings::get_SignalDuration()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::NoiseSettings*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::NoiseSettings::GetSignal(float_t  timeSinceSignalStart, ::by_ref<::UnityEngine::Vector3>  pos, ::by_ref<::UnityEngine::Quaternion>  rot)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::NoiseSettings*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeSinceSignalStart, pos, rot);
}
inline void Unity::Cinemachine::NoiseSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::NoiseSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::NoiseSettings* Unity::Cinemachine::NoiseSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::NoiseSettings*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::NoiseSettings::NoiseSettings()   {
}
