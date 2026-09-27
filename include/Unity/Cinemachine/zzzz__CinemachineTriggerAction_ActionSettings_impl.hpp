#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineTriggerAction_ActionSettings.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineTriggerAction_ActionSettings_ActionModes_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineTriggerAction_ActionSettings_TimeModes_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineTriggerAction_ActionSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineTriggerAction_ActionSettings_ActionModes_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineTriggerAction_ActionSettings_TimeModes_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineTriggerAction_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CinemachineTriggerAction_ActionSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CinemachineTriggerAction_ActionSettings::*)(::GlobalNamespace::ActionSettings_CinemachineTriggerAction_ActionModes)>(&::GlobalNamespace::CinemachineTriggerAction_ActionSettings::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xaee11a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineTriggerAction_ActionSettings>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::ActionSettings_CinemachineTriggerAction_ActionModes>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CinemachineTriggerAction_ActionSettings.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CinemachineTriggerAction_ActionSettings::*)()>(&::GlobalNamespace::CinemachineTriggerAction_ActionSettings::Invoke)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0xaee09e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineTriggerAction_ActionSettings>(),
                        {"Invoke", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CinemachineTriggerAction_ActionSettings::_ctor(::GlobalNamespace::ActionSettings_CinemachineTriggerAction_ActionModes  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineTriggerAction_ActionSettings>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::ActionSettings_CinemachineTriggerAction_ActionModes>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, action);
}
inline void GlobalNamespace::CinemachineTriggerAction_ActionSettings::Invoke()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineTriggerAction_ActionSettings>(),
                        {"Invoke", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Action", ty: "::GlobalNamespace::ActionSettings_CinemachineTriggerAction_ActionModes", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Target", ty: "::UnityW<::UnityEngine::Object>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BoostAmount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "StartTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Mode", ty: "::GlobalNamespace::ActionSettings_CinemachineTriggerAction_TimeModes", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Event", ty: "::Unity::Cinemachine::ActionSettings_CinemachineTriggerAction_TriggerEvent*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CinemachineTriggerAction_ActionSettings::CinemachineTriggerAction_ActionSettings(::GlobalNamespace::ActionSettings_CinemachineTriggerAction_ActionModes  Action, ::UnityW<::UnityEngine::Object>  Target, int32_t  BoostAmount, float_t  StartTime, ::GlobalNamespace::ActionSettings_CinemachineTriggerAction_TimeModes  Mode, ::Unity::Cinemachine::ActionSettings_CinemachineTriggerAction_TriggerEvent*  Event) noexcept  {
this->Action = Action;
this->Target = Target;
this->BoostAmount = BoostAmount;
this->StartTime = StartTime;
this->Mode = Mode;
this->Event = Event;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CinemachineTriggerAction_ActionSettings::CinemachineTriggerAction_ActionSettings()   {
}
