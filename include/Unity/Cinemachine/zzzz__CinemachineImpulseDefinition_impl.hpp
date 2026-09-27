#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineImpulseDefinition.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseDefinition_ImpulseShapes_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseDefinition_ImpulseTypes_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseDefinition_RepeatModes_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseManager_EnvelopeDefinition_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseManager_ImpulseEvent_DirectionModes_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseManager_ImpulseEvent_DissipationModes_impl.hpp"
#include "UnityEngine/zzzz__AnimationCurve_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseDefinition_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseDefinition_ImpulseShapes_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseDefinition_ImpulseTypes_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseDefinition_RepeatModes_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseDefinition_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseManager_def.hpp"
#include "Unity/Cinemachine/zzzz__ISignalSource6D_def.hpp"
#include "Unity/Cinemachine/zzzz__SignalSourceAsset_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseDefinition.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineImpulseDefinition::*)()>(&::Unity::Cinemachine::CinemachineImpulseDefinition::OnValidate)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xaee22dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseDefinition*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseDefinition.CreateStandardShapes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Cinemachine::CinemachineImpulseDefinition::CreateStandardShapes)> {
  constexpr static std::size_t size = 0xb68;
  constexpr static std::size_t addrs = 0xaee23c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseDefinition*>(),
                        {"CreateStandardShapes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseDefinition.GetStandardCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (*)(::GlobalNamespace::CinemachineImpulseDefinition_ImpulseShapes)>(&::Unity::Cinemachine::CinemachineImpulseDefinition::GetStandardCurve)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xaee2f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseDefinition*>(),
                        {"GetStandardCurve", {}, {::i2c::type_of<::GlobalNamespace::CinemachineImpulseDefinition_ImpulseShapes>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseDefinition.get_ImpulseCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (::Unity::Cinemachine::CinemachineImpulseDefinition::*)()>(&::Unity::Cinemachine::CinemachineImpulseDefinition::get_ImpulseCurve)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xaee2fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseDefinition*>(),
                        {"get_ImpulseCurve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseDefinition.CreateEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineImpulseDefinition::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineImpulseDefinition::CreateEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaee3000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseDefinition*>(),
                        {"CreateEvent", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseDefinition.CreateAndReturnEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent* (::Unity::Cinemachine::CinemachineImpulseDefinition::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineImpulseDefinition::CreateAndReturnEvent)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xaee3004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseDefinition*>(),
                        {"CreateAndReturnEvent", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseDefinition.LegacyCreateAndReturnEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent* (::Unity::Cinemachine::CinemachineImpulseDefinition::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineImpulseDefinition::LegacyCreateAndReturnEvent)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xaee31f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseDefinition*>(),
                        {"LegacyCreateAndReturnEvent", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseDefinition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineImpulseDefinition::*)()>(&::Unity::Cinemachine::CinemachineImpulseDefinition::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xaee3514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseDefinition*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_get_ImpulseChannel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ImpulseChannel;
}
constexpr int32_t const& Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_get_ImpulseChannel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ImpulseChannel;
}
constexpr void Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_set_ImpulseChannel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ImpulseChannel = value;
}
constexpr ::GlobalNamespace::CinemachineImpulseDefinition_ImpulseShapes& Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_get_ImpulseShape()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ImpulseShape;
}
constexpr ::GlobalNamespace::CinemachineImpulseDefinition_ImpulseShapes const& Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_get_ImpulseShape() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ImpulseShape;
}
constexpr void Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_set_ImpulseShape(::GlobalNamespace::CinemachineImpulseDefinition_ImpulseShapes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ImpulseShape = value;
}
constexpr ::UnityEngine::AnimationCurve*& Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_get_CustomImpulseShape()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomImpulseShape;
}
constexpr ::UnityEngine::AnimationCurve* const& Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_get_CustomImpulseShape() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomImpulseShape;
}
constexpr void Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_set_CustomImpulseShape(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomImpulseShape = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_get_ImpulseDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ImpulseDuration;
}
constexpr float_t const& Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_get_ImpulseDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ImpulseDuration;
}
constexpr void Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_set_ImpulseDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ImpulseDuration = value;
}
constexpr ::GlobalNamespace::CinemachineImpulseDefinition_ImpulseTypes& Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_get_ImpulseType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ImpulseType;
}
constexpr ::GlobalNamespace::CinemachineImpulseDefinition_ImpulseTypes const& Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_get_ImpulseType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ImpulseType;
}
constexpr void Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_set_ImpulseType(::GlobalNamespace::CinemachineImpulseDefinition_ImpulseTypes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ImpulseType = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_get_DissipationRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DissipationRate;
}
constexpr float_t const& Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_get_DissipationRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DissipationRate;
}
constexpr void Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_set_DissipationRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DissipationRate = value;
}
constexpr ::UnityW<::Unity::Cinemachine::SignalSourceAsset>& Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_get_RawSignal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RawSignal;
}
constexpr ::UnityW<::Unity::Cinemachine::SignalSourceAsset> const& Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_get_RawSignal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RawSignal;
}
constexpr void Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_set_RawSignal(::UnityW<::Unity::Cinemachine::SignalSourceAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RawSignal = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_get_AmplitudeGain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AmplitudeGain;
}
constexpr float_t const& Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_get_AmplitudeGain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AmplitudeGain;
}
constexpr void Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_set_AmplitudeGain(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AmplitudeGain = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_get_FrequencyGain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FrequencyGain;
}
constexpr float_t const& Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_get_FrequencyGain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FrequencyGain;
}
constexpr void Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_set_FrequencyGain(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FrequencyGain = value;
}
constexpr ::GlobalNamespace::CinemachineImpulseDefinition_RepeatModes& Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_get_RepeatMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RepeatMode;
}
constexpr ::GlobalNamespace::CinemachineImpulseDefinition_RepeatModes const& Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_get_RepeatMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RepeatMode;
}
constexpr void Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_set_RepeatMode(::GlobalNamespace::CinemachineImpulseDefinition_RepeatModes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RepeatMode = value;
}
constexpr bool& Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_get_Randomize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Randomize;
}
constexpr bool const& Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_get_Randomize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Randomize;
}
constexpr void Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_set_Randomize(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Randomize = value;
}
constexpr ::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition& Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_get_TimeEnvelope()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TimeEnvelope;
}
constexpr ::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition const& Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_get_TimeEnvelope() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TimeEnvelope;
}
constexpr void Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_set_TimeEnvelope(::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TimeEnvelope = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_get_ImpactRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ImpactRadius;
}
constexpr float_t const& Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_get_ImpactRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ImpactRadius;
}
constexpr void Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_set_ImpactRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ImpactRadius = value;
}
constexpr ::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DirectionModes& Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_get_DirectionMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DirectionMode;
}
constexpr ::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DirectionModes const& Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_get_DirectionMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DirectionMode;
}
constexpr void Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_set_DirectionMode(::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DirectionModes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DirectionMode = value;
}
constexpr ::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DissipationModes& Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_get_DissipationMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DissipationMode;
}
constexpr ::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DissipationModes const& Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_get_DissipationMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DissipationMode;
}
constexpr void Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_set_DissipationMode(::GlobalNamespace::ImpulseEvent_CinemachineImpulseManager_DissipationModes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DissipationMode = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_get_DissipationDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DissipationDistance;
}
constexpr float_t const& Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_get_DissipationDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DissipationDistance;
}
constexpr void Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_set_DissipationDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DissipationDistance = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_get_PropagationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PropagationSpeed;
}
constexpr float_t const& Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_get_PropagationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PropagationSpeed;
}
constexpr void Unity::Cinemachine::CinemachineImpulseDefinition::__cordl_internal_set_PropagationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PropagationSpeed = value;
}
inline void Unity::Cinemachine::CinemachineImpulseDefinition::setStaticF_s_StandardShapes(::ArrayW<::UnityEngine::AnimationCurve*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::AnimationCurve*>, "s_StandardShapes", ::Unity::Cinemachine::CinemachineImpulseDefinition*>(std::forward<::ArrayW<::UnityEngine::AnimationCurve*>>(value));
}
inline ::ArrayW<::UnityEngine::AnimationCurve*> Unity::Cinemachine::CinemachineImpulseDefinition::getStaticF_s_StandardShapes()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::AnimationCurve*>, "s_StandardShapes", ::Unity::Cinemachine::CinemachineImpulseDefinition*>();
}
inline void Unity::Cinemachine::CinemachineImpulseDefinition::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseDefinition*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineImpulseDefinition::CreateStandardShapes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseDefinition*>(),
                        {"CreateStandardShapes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityEngine::AnimationCurve* Unity::Cinemachine::CinemachineImpulseDefinition::GetStandardCurve(::GlobalNamespace::CinemachineImpulseDefinition_ImpulseShapes  shape)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseDefinition*>(),
                        {"GetStandardCurve", {}, {::i2c::type_of<::GlobalNamespace::CinemachineImpulseDefinition_ImpulseShapes>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(nullptr, ___internal_method, shape);
}
inline ::UnityEngine::AnimationCurve* Unity::Cinemachine::CinemachineImpulseDefinition::get_ImpulseCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseDefinition*>(),
                        {"get_ImpulseCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineImpulseDefinition::CreateEvent(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  velocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseDefinition*>(),
                        {"CreateEvent", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, velocity);
}
inline ::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent* Unity::Cinemachine::CinemachineImpulseDefinition::CreateAndReturnEvent(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  velocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseDefinition*>(),
                        {"CreateAndReturnEvent", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*>(this, ___internal_method, position, velocity);
}
inline ::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent* Unity::Cinemachine::CinemachineImpulseDefinition::LegacyCreateAndReturnEvent(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  velocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseDefinition*>(),
                        {"LegacyCreateAndReturnEvent", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::CinemachineImpulseManager_ImpulseEvent*>(this, ___internal_method, position, velocity);
}
inline void Unity::Cinemachine::CinemachineImpulseDefinition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseDefinition*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineImpulseDefinition* Unity::Cinemachine::CinemachineImpulseDefinition::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineImpulseDefinition*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineImpulseDefinition::CinemachineImpulseDefinition()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource::*)(::Unity::Cinemachine::CinemachineImpulseDefinition*, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xaee346c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource*>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineImpulseDefinition*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource.get_SignalDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource::*)()>(&::Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource::get_SignalDuration)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaee36b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource*>(),
                        {"get_SignalDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource.GetSignal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource::*)(float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource::GetSignal)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0xaee36e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource*>(),
                        {"GetSignal", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Cinemachine::CinemachineImpulseDefinition*& Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource::__cordl_internal_get_m_Def()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Def;
}
constexpr ::Unity::Cinemachine::CinemachineImpulseDefinition* const& Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource::__cordl_internal_get_m_Def() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Def;
}
constexpr void Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource::__cordl_internal_set_m_Def(::Unity::Cinemachine::CinemachineImpulseDefinition*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Def = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource::__cordl_internal_get_m_Velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Velocity;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource::__cordl_internal_get_m_Velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Velocity;
}
constexpr void Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource::__cordl_internal_set_m_Velocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Velocity = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource::__cordl_internal_get_m_StartTimeOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartTimeOffset;
}
constexpr float_t const& Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource::__cordl_internal_get_m_StartTimeOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartTimeOffset;
}
constexpr void Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource::__cordl_internal_set_m_StartTimeOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StartTimeOffset = value;
}
inline void Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource::_ctor(::Unity::Cinemachine::CinemachineImpulseDefinition*  def, ::UnityEngine::Vector3  velocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource*>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineImpulseDefinition*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, def, velocity);
}
inline float_t Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource::get_SignalDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource*>(),
                        {"get_SignalDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource::GetSignal(float_t  timeSinceSignalStart, ::by_ref<::UnityEngine::Vector3>  pos, ::by_ref<::UnityEngine::Quaternion>  rot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource*>(),
                        {"GetSignal", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeSinceSignalStart, pos, rot);
}
inline ::Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource* Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource::New_ctor(::Unity::Cinemachine::CinemachineImpulseDefinition*  def, ::UnityEngine::Vector3  velocity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource*>(def, velocity));
}
/// @brief Convert operator to "::Unity::Cinemachine::ISignalSource6D"
constexpr  Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource::operator ::Unity::Cinemachine::ISignalSource6D*() noexcept {
return static_cast<::Unity::Cinemachine::ISignalSource6D*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::ISignalSource6D"
constexpr ::Unity::Cinemachine::ISignalSource6D* Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource::i___Unity__Cinemachine__ISignalSource6D() noexcept {
return static_cast<::Unity::Cinemachine::ISignalSource6D*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineImpulseDefinition_LegacySignalSource::CinemachineImpulseDefinition_LegacySignalSource()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseDefinition_SignalSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineImpulseDefinition_SignalSource::*)(::Unity::Cinemachine::CinemachineImpulseDefinition*, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineImpulseDefinition_SignalSource::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaee3414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseDefinition_SignalSource*>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineImpulseDefinition*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseDefinition_SignalSource.get_SignalDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineImpulseDefinition_SignalSource::*)()>(&::Unity::Cinemachine::CinemachineImpulseDefinition_SignalSource::get_SignalDuration)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaee35f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseDefinition_SignalSource*>(),
                        {"get_SignalDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineImpulseDefinition_SignalSource.GetSignal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineImpulseDefinition_SignalSource::*)(float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::Unity::Cinemachine::CinemachineImpulseDefinition_SignalSource::GetSignal)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xaee3608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseDefinition_SignalSource*>(),
                        {"GetSignal", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Cinemachine::CinemachineImpulseDefinition*& Unity::Cinemachine::CinemachineImpulseDefinition_SignalSource::__cordl_internal_get_m_Def()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Def;
}
constexpr ::Unity::Cinemachine::CinemachineImpulseDefinition* const& Unity::Cinemachine::CinemachineImpulseDefinition_SignalSource::__cordl_internal_get_m_Def() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Def;
}
constexpr void Unity::Cinemachine::CinemachineImpulseDefinition_SignalSource::__cordl_internal_set_m_Def(::Unity::Cinemachine::CinemachineImpulseDefinition*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Def = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineImpulseDefinition_SignalSource::__cordl_internal_get_m_Velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Velocity;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineImpulseDefinition_SignalSource::__cordl_internal_get_m_Velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Velocity;
}
constexpr void Unity::Cinemachine::CinemachineImpulseDefinition_SignalSource::__cordl_internal_set_m_Velocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Velocity = value;
}
inline void Unity::Cinemachine::CinemachineImpulseDefinition_SignalSource::_ctor(::Unity::Cinemachine::CinemachineImpulseDefinition*  def, ::UnityEngine::Vector3  velocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseDefinition_SignalSource*>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineImpulseDefinition*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, def, velocity);
}
inline float_t Unity::Cinemachine::CinemachineImpulseDefinition_SignalSource::get_SignalDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseDefinition_SignalSource*>(),
                        {"get_SignalDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineImpulseDefinition_SignalSource::GetSignal(float_t  timeSinceSignalStart, ::by_ref<::UnityEngine::Vector3>  pos, ::by_ref<::UnityEngine::Quaternion>  rot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineImpulseDefinition_SignalSource*>(),
                        {"GetSignal", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeSinceSignalStart, pos, rot);
}
inline ::Unity::Cinemachine::CinemachineImpulseDefinition_SignalSource* Unity::Cinemachine::CinemachineImpulseDefinition_SignalSource::New_ctor(::Unity::Cinemachine::CinemachineImpulseDefinition*  def, ::UnityEngine::Vector3  velocity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineImpulseDefinition_SignalSource*>(def, velocity));
}
/// @brief Convert operator to "::Unity::Cinemachine::ISignalSource6D"
constexpr  Unity::Cinemachine::CinemachineImpulseDefinition_SignalSource::operator ::Unity::Cinemachine::ISignalSource6D*() noexcept {
return static_cast<::Unity::Cinemachine::ISignalSource6D*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::ISignalSource6D"
constexpr ::Unity::Cinemachine::ISignalSource6D* Unity::Cinemachine::CinemachineImpulseDefinition_SignalSource::i___Unity__Cinemachine__ISignalSource6D() noexcept {
return static_cast<::Unity::Cinemachine::ISignalSource6D*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineImpulseDefinition_SignalSource::CinemachineImpulseDefinition_SignalSource()   {
}
