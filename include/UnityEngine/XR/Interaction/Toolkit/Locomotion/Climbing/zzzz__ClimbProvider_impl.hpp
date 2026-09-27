#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Climbing/ClimbProvider.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionProvider_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Climbing/zzzz__ClimbProvider_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRSelectInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Climbing/zzzz__ClimbInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Climbing/zzzz__ClimbSettingsDatumProperty_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Climbing/zzzz__ClimbSettings_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Gravity/zzzz__GravityOverride_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Gravity/zzzz__GravityProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Gravity/zzzz__IGravityController_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__XROriginMovement_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider.get_providersToDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::get_providersToDisable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45755c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"get_providersToDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider.set_providersToDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::set_providersToDisable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb457564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"set_providersToDisable", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider.get_enableGravityOnClimbEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::get_enableGravityOnClimbEnd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45756c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"get_enableGravityOnClimbEnd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider.set_enableGravityOnClimbEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::set_enableGravityOnClimbEnd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb457574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"set_enableGravityOnClimbEnd", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider.get_climbSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::get_climbSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45757c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"get_climbSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider.set_climbSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::set_climbSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb457584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"set_climbSettings", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider.get_climbAnchorInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable> (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::get_climbAnchorInteractable)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb45758c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"get_climbAnchorInteractable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider.get_climbAnchorInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::get_climbAnchorInteractor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb457604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"get_climbAnchorInteractor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider.get_transformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::get_transformation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45767c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"get_transformation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider.set_transformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::set_transformation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb457684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"set_transformation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider.get_canProcess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::get_canProcess)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45768c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"get_canProcess", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider.get_gravityPaused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::get_gravityPaused)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb457694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"get_gravityPaused", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider.set_gravityPaused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::set_gravityPaused)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45769c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"set_gravityPaused", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider.add_climbAnchorUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::*)(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::add_climbAnchorUpdated)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4576a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"add_climbAnchorUpdated", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider.remove_climbAnchorUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::*)(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::remove_climbAnchorUpdated)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb457754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"remove_climbAnchorUpdated", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::Awake)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xb457804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::Update)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xb457990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider.StartClimbGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::StartClimbGrab)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0xb456f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"StartClimbGrab", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider.FinishClimbGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::FinishClimbGrab)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xb457394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"FinishClimbGrab", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider.UpdateClimbAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::UpdateClimbAnchor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb457ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"UpdateClimbAnchor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider.StepClimbMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::StepClimbMovement)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xb457d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"StepClimbMovement", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider.FinishLocomotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::FinishLocomotion)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0xb457ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"FinishLocomotion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider.GetActiveClimbSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettings* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::GetActiveClimbSettings)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb458078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"GetActiveClimbSettings", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider.TryLockGravity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::TryLockGravity)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb457fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"TryLockGravity", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider.RemoveGravityLock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::RemoveGravityLock)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb458100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"RemoveGravityLock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider.UnityEngine_XR_Interaction_Toolkit_Locomotion_Gravity_IGravityController_OnGroundedChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::UnityEngine_XR_Interaction_Toolkit_Locomotion_Gravity_IGravityController_OnGroundedChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb458184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Locomotion.Gravity.IGravityController.OnGroundedChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider.UnityEngine_XR_Interaction_Toolkit_Locomotion_Gravity_IGravityController_OnGravityLockChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::UnityEngine_XR_Interaction_Toolkit_Locomotion_Gravity_IGravityController_OnGravityLockChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb458194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Locomotion.Gravity.IGravityController.OnGravityLockChanged", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider.OnGroundedChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::OnGroundedChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4581a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider.OnGravityLockChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::OnGravityLockChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4581ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::_ctor)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0xb4581bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::__cordl_internal_get_m_ProvidersToDisable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ProvidersToDisable;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::__cordl_internal_get_m_ProvidersToDisable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ProvidersToDisable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::__cordl_internal_set_m_ProvidersToDisable(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ProvidersToDisable = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::__cordl_internal_get_m_EnableGravityOnClimbEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableGravityOnClimbEnd;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::__cordl_internal_get_m_EnableGravityOnClimbEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableGravityOnClimbEnd;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::__cordl_internal_set_m_EnableGravityOnClimbEnd(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EnableGravityOnClimbEnd = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::__cordl_internal_get_m_ClimbSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClimbSettings;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::__cordl_internal_get_m_ClimbSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClimbSettings;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::__cordl_internal_set_m_ClimbSettings(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ClimbSettings = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::__cordl_internal_get__transformation_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformation_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::__cordl_internal_get__transformation_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformation_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::__cordl_internal_set__transformation_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transformation_k__BackingField = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::__cordl_internal_get__gravityPaused_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gravityPaused_k__BackingField;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::__cordl_internal_get__gravityPaused_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gravityPaused_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::__cordl_internal_set__gravityPaused_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gravityPaused_k__BackingField = value;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider>>*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::__cordl_internal_get_climbAnchorUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___climbAnchorUpdated;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider>>* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::__cordl_internal_get_climbAnchorUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___climbAnchorUpdated;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::__cordl_internal_set_climbAnchorUpdated(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___climbAnchorUpdated = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider>& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::__cordl_internal_get_m_GravityProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GravityProvider;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider> const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::__cordl_internal_get_m_GravityProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GravityProvider;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::__cordl_internal_set_m_GravityProvider(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GravityProvider = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::__cordl_internal_get_m_GrabbingInteractors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GrabbingInteractors;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::__cordl_internal_get_m_GrabbingInteractors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GrabbingInteractors;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::__cordl_internal_set_m_GrabbingInteractors(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GrabbingInteractors = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable>>*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::__cordl_internal_get_m_GrabbedClimbables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GrabbedClimbables;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable>>* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::__cordl_internal_get_m_GrabbedClimbables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GrabbedClimbables;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::__cordl_internal_set_m_GrabbedClimbables(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GrabbedClimbables = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::__cordl_internal_get_m_InteractorAnchorWorldPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractorAnchorWorldPosition;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::__cordl_internal_get_m_InteractorAnchorWorldPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractorAnchorWorldPosition;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::__cordl_internal_set_m_InteractorAnchorWorldPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractorAnchorWorldPosition = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::__cordl_internal_get_m_InteractorAnchorClimbSpacePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractorAnchorClimbSpacePosition;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::__cordl_internal_get_m_InteractorAnchorClimbSpacePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractorAnchorClimbSpacePosition;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::__cordl_internal_set_m_InteractorAnchorClimbSpacePosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractorAnchorClimbSpacePosition = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::__cordl_internal_get_m_EnabledProvidersToDisable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnabledProvidersToDisable;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::__cordl_internal_get_m_EnabledProvidersToDisable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnabledProvidersToDisable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::__cordl_internal_set_m_EnabledProvidersToDisable(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EnabledProvidersToDisable = value;
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>* UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::get_providersToDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"get_providersToDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::set_providersToDisable(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"set_providersToDisable", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::get_enableGravityOnClimbEnd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"get_enableGravityOnClimbEnd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::set_enableGravityOnClimbEnd(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"set_enableGravityOnClimbEnd", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty* UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::get_climbSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"get_climbSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::set_climbSettings(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"set_climbSettings", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettingsDatumProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable> UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::get_climbAnchorInteractable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"get_climbAnchorInteractable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable>>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor* UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::get_climbAnchorInteractor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"get_climbAnchorInteractor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement* UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::get_transformation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"get_transformation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::set_transformation(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"set_transformation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::get_canProcess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"get_canProcess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::get_gravityPaused()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"get_gravityPaused", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::set_gravityPaused(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"set_gravityPaused", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::add_climbAnchorUpdated(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"add_climbAnchorUpdated", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::remove_climbAnchorUpdated(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"remove_climbAnchorUpdated", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::StartClimbGrab(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*  climbInteractable, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"StartClimbGrab", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, climbInteractable, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::FinishClimbGrab(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"FinishClimbGrab", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::UpdateClimbAnchor(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*  climbInteractable, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"UpdateClimbAnchor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, climbInteractable, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::StepClimbMovement(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*  currentClimbInteractable, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  currentInteractor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"StepClimbMovement", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentClimbInteractable, currentInteractor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::FinishLocomotion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"FinishLocomotion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettings* UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::GetActiveClimbSettings(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*  climbInteractable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"GetActiveClimbSettings", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbSettings*>(this, ___internal_method, climbInteractable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::TryLockGravity(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride  gravityOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"TryLockGravity", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gravityOverride);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::RemoveGravityLock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"RemoveGravityLock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::UnityEngine_XR_Interaction_Toolkit_Locomotion_Gravity_IGravityController_OnGroundedChanged(bool  isGrounded)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Locomotion.Gravity.IGravityController.OnGroundedChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isGrounded);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::UnityEngine_XR_Interaction_Toolkit_Locomotion_Gravity_IGravityController_OnGravityLockChanged(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride  gravityOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Locomotion.Gravity.IGravityController.OnGravityLockChanged", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gravityOverride);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::OnGroundedChanged(bool  isGrounded)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isGrounded);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::OnGravityLockChanged(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride  gravityOverride)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gravityOverride);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider* UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController"
constexpr  UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::operator ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController* UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::i___UnityEngine__XR__Interaction__Toolkit__Locomotion__Gravity__IGravityController() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Climbing::ClimbProvider::ClimbProvider()   {
}
