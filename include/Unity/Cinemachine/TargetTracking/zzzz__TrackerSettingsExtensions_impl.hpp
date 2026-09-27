#pragma once
// IWYU pragma private; include "Unity/Cinemachine/TargetTracking/TrackerSettingsExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/TargetTracking/zzzz__TrackerSettingsExtensions_def.hpp"
#include "Unity/Cinemachine/TargetTracking/zzzz__TrackerSettings_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::TargetTracking::TrackerSettingsExtensions.GetMaxDampTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Unity::Cinemachine::TargetTracking::TrackerSettings)>(&::Unity::Cinemachine::TargetTracking::TrackerSettingsExtensions::GetMaxDampTime)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xaf013dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetTracking::TrackerSettingsExtensions*>(),
                        {"GetMaxDampTime", {}, {::i2c::type_of<::Unity::Cinemachine::TargetTracking::TrackerSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::TargetTracking::TrackerSettingsExtensions.GetEffectivePositionDamping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::Unity::Cinemachine::TargetTracking::TrackerSettings)>(&::Unity::Cinemachine::TargetTracking::TrackerSettingsExtensions::GetEffectivePositionDamping)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaf01470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetTracking::TrackerSettingsExtensions*>(),
                        {"GetEffectivePositionDamping", {}, {::i2c::type_of<::Unity::Cinemachine::TargetTracking::TrackerSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::TargetTracking::TrackerSettingsExtensions.GetEffectiveRotationDamping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::Unity::Cinemachine::TargetTracking::TrackerSettings)>(&::Unity::Cinemachine::TargetTracking::TrackerSettingsExtensions::GetEffectiveRotationDamping)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaf0148c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetTracking::TrackerSettingsExtensions*>(),
                        {"GetEffectiveRotationDamping", {}, {::i2c::type_of<::Unity::Cinemachine::TargetTracking::TrackerSettings>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t Unity::Cinemachine::TargetTracking::TrackerSettingsExtensions::GetMaxDampTime(::Unity::Cinemachine::TargetTracking::TrackerSettings  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetTracking::TrackerSettingsExtensions*>(),
                        {"GetMaxDampTime", {}, {::i2c::type_of<::Unity::Cinemachine::TargetTracking::TrackerSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, s);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::TargetTracking::TrackerSettingsExtensions::GetEffectivePositionDamping(::Unity::Cinemachine::TargetTracking::TrackerSettings  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetTracking::TrackerSettingsExtensions*>(),
                        {"GetEffectivePositionDamping", {}, {::i2c::type_of<::Unity::Cinemachine::TargetTracking::TrackerSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, s);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::TargetTracking::TrackerSettingsExtensions::GetEffectiveRotationDamping(::Unity::Cinemachine::TargetTracking::TrackerSettings  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::TargetTracking::TrackerSettingsExtensions*>(),
                        {"GetEffectiveRotationDamping", {}, {::i2c::type_of<::Unity::Cinemachine::TargetTracking::TrackerSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, s);
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::TargetTracking::TrackerSettingsExtensions::TrackerSettingsExtensions()   {
}
