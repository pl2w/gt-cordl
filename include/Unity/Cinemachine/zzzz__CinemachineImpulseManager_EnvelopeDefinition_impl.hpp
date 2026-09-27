#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineImpulseManager_EnvelopeDefinition.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineImpulseManager_EnvelopeDefinition_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition.get_Default
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition (*)()>(&::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition::get_Default)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaee5240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition>(),
                        {"get_Default", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition.get_Duration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition::*)()>(&::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition::get_Duration)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xaee5268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition>(),
                        {"get_Duration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition.GetValueAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition::*)(float_t)>(&::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition::GetValueAt)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xaee528c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition>(),
                        {"GetValueAt", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition.ChangeStopTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition::*)(float_t, bool)>(&::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition::ChangeStopTime)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xaee53b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition>(),
                        {"ChangeStopTime", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition::*)()>(&::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition::Clear)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xaee53e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition.Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition::*)()>(&::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition::Validate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaee5418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition>(),
                        {"Validate", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition::get_Default()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition>(),
                        {"get_Default", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition>(nullptr, ___internal_method);
}
inline float_t GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition::get_Duration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition>(),
                        {"get_Duration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition::GetValueAt(float_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition>(),
                        {"GetValueAt", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, offset);
}
inline void GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition::ChangeStopTime(float_t  offset, bool  forceNoDecay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition>(),
                        {"ChangeStopTime", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, offset, forceNoDecay);
}
inline void GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition::Validate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition>(),
                        {"Validate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "AttackShape", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DecayShape", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AttackTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SustainTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DecayTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ScaleWithImpact", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "HoldForever", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition::CinemachineImpulseManager_EnvelopeDefinition(::UnityEngine::AnimationCurve*  AttackShape, ::UnityEngine::AnimationCurve*  DecayShape, float_t  AttackTime, float_t  SustainTime, float_t  DecayTime, bool  ScaleWithImpact, bool  HoldForever) noexcept  {
this->AttackShape = AttackShape;
this->DecayShape = DecayShape;
this->AttackTime = AttackTime;
this->SustainTime = SustainTime;
this->DecayTime = DecayTime;
this->ScaleWithImpact = ScaleWithImpact;
this->HoldForever = HoldForever;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CinemachineImpulseManager_EnvelopeDefinition::CinemachineImpulseManager_EnvelopeDefinition()   {
}
