#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Climbing/ClimbTeleportInteractor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRBaseInteractor_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Climbing/zzzz__ClimbTeleportInteractor_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRActivateInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRActivateInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Climbing/zzzz__ClimbInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Climbing/zzzz__ClimbProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Climbing/zzzz__ClimbTeleportInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__TeleportVolumeDestinationSettingsDatumProperty_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__TeleportationMultiAnchorVolume_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionState_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Pooling/zzzz__LinkedPool_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ActivateEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__DeactivateEventArgs_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor.get_climbProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider> (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::get_climbProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4584b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(),
                        {"get_climbProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor.set_climbProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::set_climbProvider)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4584c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(),
                        {"set_climbProvider", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor.get_destinationEvaluationSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::get_destinationEvaluationSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4584d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(),
                        {"get_destinationEvaluationSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor.set_destinationEvaluationSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::set_destinationEvaluationSettings)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4584d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(),
                        {"set_destinationEvaluationSettings", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::OnEnable)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xb4584e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::OnDisable)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xb45860c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor.OnLocomotionStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*, ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::OnLocomotionStateChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb4587e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(),
                        {"OnLocomotionStateChanged", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor.OnClimbBegin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::OnClimbBegin)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb458804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(),
                        {"OnClimbBegin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor.OnClimbEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::OnClimbEnd)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0xb4588a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(),
                        {"OnClimbEnd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor.OnClimbAnchorUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::OnClimbAnchorUpdated)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb458dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(),
                        {"OnClimbAnchorUpdated", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor.SetTargetTeleportVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::SetTargetTeleportVolume)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xb458ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(),
                        {"SetTargetTeleportVolume", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor.ReleaseTargetTeleportVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::ReleaseTargetTeleportVolume)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb458748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(),
                        {"ReleaseTargetTeleportVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor.GetValidTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::*)(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::GetValidTargets)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xb458dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor.get_isSelectActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::get_isSelectActive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb458f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(), 60}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor.get_shouldActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::get_shouldActivate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb458f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(),
                        {"get_shouldActivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor.get_shouldDeactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::get_shouldDeactivate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb458f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(),
                        {"get_shouldDeactivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor.GetActivateTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::*)(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::GetActivateTargets)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xb458f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(),
                        {"GetActivateTargets", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::_ctor)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0xb459054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractor_get_transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractor_get_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb459330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractor.get_transform", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider>& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::__cordl_internal_get_m_ClimbProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClimbProvider;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider> const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::__cordl_internal_get_m_ClimbProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClimbProvider;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::__cordl_internal_set_m_ClimbProvider(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ClimbProvider = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::__cordl_internal_get_m_DestinationEvaluationSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DestinationEvaluationSettings;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::__cordl_internal_get_m_DestinationEvaluationSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DestinationEvaluationSettings;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::__cordl_internal_set_m_DestinationEvaluationSettings(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DestinationEvaluationSettings = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::__cordl_internal_get_m_ActivateEventArgs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivateEventArgs;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::__cordl_internal_get_m_ActivateEventArgs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivateEventArgs;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::__cordl_internal_set_m_ActivateEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActivateEventArgs = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::__cordl_internal_get_m_DeactivateEventArgs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeactivateEventArgs;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::__cordl_internal_get_m_DeactivateEventArgs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeactivateEventArgs;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::__cordl_internal_set_m_DeactivateEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DeactivateEventArgs = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::__cordl_internal_get_m_TargetTeleportVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetTeleportVolume;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume> const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::__cordl_internal_get_m_TargetTeleportVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetTeleportVolume;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::__cordl_internal_set_m_TargetTeleportVolume(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TargetTeleportVolume = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::__cordl_internal_get_m_PreservedTeleportVolumeSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreservedTeleportVolumeSettings;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::__cordl_internal_get_m_PreservedTeleportVolumeSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreservedTeleportVolumeSettings;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::__cordl_internal_set_m_PreservedTeleportVolumeSettings(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreservedTeleportVolumeSettings = value;
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider> UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::get_climbProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(),
                        {"get_climbProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::set_climbProvider(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(),
                        {"set_climbProvider", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty* UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::get_destinationEvaluationSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(),
                        {"get_destinationEvaluationSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::set_destinationEvaluationSettings(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(),
                        {"set_destinationEvaluationSettings", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::OnLocomotionStateChanged(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*  provider, ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(),
                        {"OnLocomotionStateChanged", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provider, state);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::OnClimbBegin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(),
                        {"OnClimbBegin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::OnClimbEnd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(),
                        {"OnClimbEnd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::OnClimbAnchorUpdated(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(),
                        {"OnClimbAnchorUpdated", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provider);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::SetTargetTeleportVolume(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*  activeClimbInteractable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(),
                        {"SetTargetTeleportVolume", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activeClimbInteractable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::ReleaseTargetTeleportVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(),
                        {"ReleaseTargetTeleportVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::GetValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  targets)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targets);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::get_isSelectActive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(), 60}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::get_shouldActivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(),
                        {"get_shouldActivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::get_shouldDeactivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(),
                        {"get_shouldDeactivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::GetActivateTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*  targets)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(),
                        {"GetActivateTargets", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targets);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractor_get_transform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractor.get_transform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor* UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor"
constexpr  UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::operator ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor* UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRActivateInteractor() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor"
constexpr  UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::operator ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRInteractor() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor::ClimbTeleportInteractor()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4593a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c.__ctor_b__28_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c::__ctor_b__28_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb4593a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c*>(),
                        {"<.ctor>b__28_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c.__ctor_b__28_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c::__ctor_b__28_1)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb4593fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c*>(),
                        {"<.ctor>b__28_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c::setStaticF___9(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c*, "<>9", ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c*>(std::forward<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c*>(value));
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c* UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c*, "<>9", ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c::setStaticF___9__28_0(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>*, "<>9__28_0", ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c*>(std::forward<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>*>(value));
}
inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>* UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c::getStaticF___9__28_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>*, "<>9__28_0", ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c::setStaticF___9__28_1(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>*, "<>9__28_1", ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c*>(std::forward<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>*>(value));
}
inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>* UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c::getStaticF___9__28_1()  {
return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>*, "<>9__28_1", ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs* UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c::__ctor_b__28_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c*>(),
                        {"<.ctor>b__28_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs* UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c::__ctor_b__28_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c*>(),
                        {"<.ctor>b__28_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c* UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbTeleportInteractor___c::ClimbTeleportInteractor___c()   {
}
