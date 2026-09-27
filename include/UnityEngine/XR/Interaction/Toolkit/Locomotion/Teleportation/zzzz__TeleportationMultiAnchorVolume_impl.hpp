#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/TeleportationMultiAnchorVolume.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__BaseTeleportationInteractable_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__TeleportationMultiAnchorVolume_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__FurthestTeleportationAnchorFilter_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__ITeleportationVolumeAnchorFilter_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__TeleportRequest_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__TeleportVolumeDestinationSettingsDatumProperty_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__TeleportationMultiAnchorVolume_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionUpdateOrder_UpdatePhase_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume.get_anchorTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::get_anchorTransforms)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44e410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                        {"get_anchorTransforms", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume.get_destinationEvaluationSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::get_destinationEvaluationSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44e418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                        {"get_destinationEvaluationSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume.set_destinationEvaluationSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::set_destinationEvaluationSettings)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb44e420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                        {"set_destinationEvaluationSettings", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume.get_destinationEvaluationFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::get_destinationEvaluationFilter)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb44e430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                        {"get_destinationEvaluationFilter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume.get_destinationEvaluationProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::get_destinationEvaluationProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44e520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                        {"get_destinationEvaluationProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume.set_destinationEvaluationProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::set_destinationEvaluationProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44e528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                        {"set_destinationEvaluationProgress", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume.get_destinationAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::get_destinationAnchor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44e530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                        {"get_destinationAnchor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume.set_destinationAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::set_destinationAnchor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb44e538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                        {"set_destinationAnchor", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume.add_destinationAnchorChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::*)(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::add_destinationAnchorChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb44e548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                        {"add_destinationAnchorChanged", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume.remove_destinationAnchorChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::*)(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::remove_destinationAnchorChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb44e5f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                        {"remove_destinationAnchorChanged", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume.get_shouldDelayDestinationEvaluation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::get_shouldDelayDestinationEvaluation)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb44e6a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                        {"get_shouldDelayDestinationEvaluation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xb44e71c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::Awake)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb44e924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::OnDestroy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb44eac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(), 70}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume.OnHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::*)(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::OnHoverEntered)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb44ec1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(), 83}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume.OnHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::*)(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::OnHoverExited)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb44ee00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(), 85}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume.ProcessInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::*)(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::ProcessInteractable)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xb44ee30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(), 79}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume.EvaluateDestinationAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::EvaluateDestinationAnchor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xb44ed04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                        {"EvaluateDestinationAnchor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume.SetDestinationAtValidIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::SetDestinationAtValidIndex)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb44f054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                        {"SetDestinationAtValidIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume.ClearDestinationAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::ClearDestinationAnchor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb44ecc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                        {"ClearDestinationAnchor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume.GetAttachTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::GetAttachTransform)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb44f0e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(), 71}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume.GenerateTeleportRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::UnityEngine::RaycastHit, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest>)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::GenerateTeleportRequest)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb44f178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(), 115}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xb44f240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::__cordl_internal_get_m_AnchorTransforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AnchorTransforms;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::__cordl_internal_get_m_AnchorTransforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AnchorTransforms;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::__cordl_internal_set_m_AnchorTransforms(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AnchorTransforms = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::__cordl_internal_get_m_DestinationEvaluationSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DestinationEvaluationSettings;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::__cordl_internal_get_m_DestinationEvaluationSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DestinationEvaluationSettings;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::__cordl_internal_set_m_DestinationEvaluationSettings(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DestinationEvaluationSettings = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::__cordl_internal_get__destinationEvaluationProgress_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____destinationEvaluationProgress_k__BackingField;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::__cordl_internal_get__destinationEvaluationProgress_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____destinationEvaluationProgress_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::__cordl_internal_set__destinationEvaluationProgress_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____destinationEvaluationProgress_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::__cordl_internal_get__destinationAnchor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____destinationAnchor_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::__cordl_internal_get__destinationAnchor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____destinationAnchor_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::__cordl_internal_set__destinationAnchor_k__BackingField(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____destinationAnchor_k__BackingField = value;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>>*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::__cordl_internal_get_destinationAnchorChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationAnchorChanged;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>>* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::__cordl_internal_get_destinationAnchorChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationAnchorChanged;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::__cordl_internal_set_destinationAnchorChanged(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destinationAnchorChanged = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::__cordl_internal_get_m_DefaultAnchorFilterCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DefaultAnchorFilterCache;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::__cordl_internal_get_m_DefaultAnchorFilterCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DefaultAnchorFilterCache;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::__cordl_internal_set_m_DefaultAnchorFilterCache(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DefaultAnchorFilterCache = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::__cordl_internal_get_m_WaitingToEvaluateDestination()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WaitingToEvaluateDestination;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::__cordl_internal_get_m_WaitingToEvaluateDestination() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WaitingToEvaluateDestination;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::__cordl_internal_set_m_WaitingToEvaluateDestination(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_WaitingToEvaluateDestination = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::__cordl_internal_get_m_WaitStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WaitStartTime;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::__cordl_internal_get_m_WaitStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WaitStartTime;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::__cordl_internal_set_m_WaitStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_WaitStartTime = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::__cordl_internal_get_m_LastDestinationQueryTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastDestinationQueryTime;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::__cordl_internal_get_m_LastDestinationQueryTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastDestinationQueryTime;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::__cordl_internal_set_m_LastDestinationQueryTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastDestinationQueryTime = value;
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::get_anchorTransforms()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                        {"get_anchorTransforms", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty* UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::get_destinationEvaluationSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                        {"get_destinationEvaluationSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::set_destinationEvaluationSettings(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                        {"set_destinationEvaluationSettings", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportVolumeDestinationSettingsDatumProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter* UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::get_destinationEvaluationFilter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                        {"get_destinationEvaluationFilter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter*>(this, ___internal_method);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::get_destinationEvaluationProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                        {"get_destinationEvaluationProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::set_destinationEvaluationProgress(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                        {"set_destinationEvaluationProgress", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::get_destinationAnchor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                        {"get_destinationAnchor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::set_destinationAnchor(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                        {"set_destinationAnchor", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::add_destinationAnchorChanged(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                        {"add_destinationAnchorChanged", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::remove_destinationAnchorChanged(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                        {"remove_destinationAnchorChanged", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::get_shouldDelayDestinationEvaluation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                        {"get_shouldDelayDestinationEvaluation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(), 70}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(), 83}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(), 85}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::ProcessInteractable(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(), 79}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatePhase);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::EvaluateDestinationAnchor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                        {"EvaluateDestinationAnchor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::SetDestinationAtValidIndex(int32_t  anchorIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                        {"SetDestinationAtValidIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchorIndex);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::ClearDestinationAnchor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                        {"ClearDestinationAnchor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::GetAttachTransform(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(), 71}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, interactor);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::GenerateTeleportRequest(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::RaycastHit  raycastHit, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest>  teleportRequest)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(), 115}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor, raycastHit, teleportRequest);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume* UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume::TeleportationMultiAnchorVolume()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume_DefaultDestinationFilterCache.SubscribeAndGetInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter* (*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume_DefaultDestinationFilterCache::SubscribeAndGetInstance)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xb44e990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume_DefaultDestinationFilterCache*>(),
                        {"SubscribeAndGetInstance", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume_DefaultDestinationFilterCache.Unsubscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume_DefaultDestinationFilterCache::Unsubscribe)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xb44eb24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume_DefaultDestinationFilterCache*>(),
                        {"Unsubscribe", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume_DefaultDestinationFilterCache::setStaticF_s_FilterInstance(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::FurthestTeleportationAnchorFilter>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::FurthestTeleportationAnchorFilter>, "s_FilterInstance", ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume_DefaultDestinationFilterCache*>(std::forward<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::FurthestTeleportationAnchorFilter>>(value));
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::FurthestTeleportationAnchorFilter> UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume_DefaultDestinationFilterCache::getStaticF_s_FilterInstance()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::FurthestTeleportationAnchorFilter>, "s_FilterInstance", ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume_DefaultDestinationFilterCache*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume_DefaultDestinationFilterCache::setStaticF_s_Users(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>>*, "s_Users", ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume_DefaultDestinationFilterCache*>(std::forward<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>>* UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume_DefaultDestinationFilterCache::getStaticF_s_Users()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume>>*, "s_Users", ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume_DefaultDestinationFilterCache*>();
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter* UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume_DefaultDestinationFilterCache::SubscribeAndGetInstance(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*  user)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume_DefaultDestinationFilterCache*>(),
                        {"SubscribeAndGetInstance", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter*>(nullptr, ___internal_method, user);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume_DefaultDestinationFilterCache::Unsubscribe(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*  user)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume_DefaultDestinationFilterCache*>(),
                        {"Unsubscribe", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, user);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume_DefaultDestinationFilterCache::TeleportationMultiAnchorVolume_DefaultDestinationFilterCache()   {
}
