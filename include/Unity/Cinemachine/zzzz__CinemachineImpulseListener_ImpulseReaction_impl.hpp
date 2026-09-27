#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineImpulseListener_ImpulseReaction.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseListener_ImpulseReaction_def.hpp"
#include "Unity/Cinemachine/zzzz__NoiseSettings_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction.ReSeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction::*)()>(&::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction::ReSeed)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xaee40b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction>(),
                        {"ReSeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction.GetReaction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction::*)(float_t, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction::GetReaction)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0xaee3d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction>(),
                        {"GetReaction", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CinemachineImpulseListener_ImpulseReaction::ReSeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction>(),
                        {"ReSeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool GlobalNamespace::CinemachineImpulseListener_ImpulseReaction::GetReaction(float_t  deltaTime, ::UnityEngine::Vector3  impulsePos, ::by_ref<::UnityEngine::Vector3>  pos, ::by_ref<::UnityEngine::Quaternion>  rot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction>(),
                        {"GetReaction", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, deltaTime, impulsePos, pos, rot);
}
// Ctor Parameters [CppParam { name: "m_SecondaryNoise", ty: "::UnityW<::Unity::Cinemachine::NoiseSettings>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AmplitudeGain", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FrequencyGain", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Duration", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_CurrentAmount", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_CurrentTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_CurrentDamping", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Initialized", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_NoiseOffsets", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction::CinemachineImpulseListener_ImpulseReaction(::UnityW<::Unity::Cinemachine::NoiseSettings>  m_SecondaryNoise, float_t  AmplitudeGain, float_t  FrequencyGain, float_t  Duration, float_t  m_CurrentAmount, float_t  m_CurrentTime, float_t  m_CurrentDamping, bool  m_Initialized, ::UnityEngine::Vector3  m_NoiseOffsets) noexcept  {
this->m_SecondaryNoise = m_SecondaryNoise;
this->AmplitudeGain = AmplitudeGain;
this->FrequencyGain = FrequencyGain;
this->Duration = Duration;
this->m_CurrentAmount = m_CurrentAmount;
this->m_CurrentTime = m_CurrentTime;
this->m_CurrentDamping = m_CurrentDamping;
this->m_Initialized = m_Initialized;
this->m_NoiseOffsets = m_NoiseOffsets;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CinemachineImpulseListener_ImpulseReaction::CinemachineImpulseListener_ImpulseReaction()   {
}
