#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/NearFarInteractor.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Attachment/zzzz__InteractorFarAttachMode_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__NearFarInteractor_NearCasterSortingStrategy_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__NearFarInteractor_Region_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRBaseInputInteractor_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__NearFarInteractor_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__BindableEnum_1_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__IReadOnlyBindableVariable_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Attachment/zzzz__IInteractionAttachController_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Attachment/zzzz__InteractorFarAttachMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputButtonReader_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputValueReader_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Casters/zzzz__ICurveInteractionCaster_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Casters/zzzz__IInteractionCaster_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/zzzz__EndPointType_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/zzzz__ICurveInteractionDataProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRRayProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__NearFarInteractor_NearCasterSortingStrategy_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__NearFarInteractor_Region_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__IUIHoverInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__IUIInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__IUIModelUpdater_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__RegisteredUIInteractorCache_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TrackedDeviceModel_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__UIHoverEnterEvent_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__UIHoverEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__UIHoverExitEvent_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__UnityObjectReferenceCache_2_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IInteractorDistanceEvaluator_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionUpdateOrder_UpdatePhase_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.get_interactionAttachController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Attachment::IInteractionAttachController* (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_interactionAttachController)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb460c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_interactionAttachController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.set_interactionAttachController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Attachment::IInteractionAttachController*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::set_interactionAttachController)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb460c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"set_interactionAttachController", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::IInteractionAttachController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.get_enableNearCasting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_enableNearCasting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb460cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_enableNearCasting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.set_enableNearCasting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::set_enableNearCasting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb460cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"set_enableNearCasting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.get_nearInteractionCaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster* (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_nearInteractionCaster)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb460d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_nearInteractionCaster", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.set_nearInteractionCaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::set_nearInteractionCaster)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb460d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"set_nearInteractionCaster", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.get_nearCasterSortingStrategy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NearFarInteractor_NearCasterSortingStrategy (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_nearCasterSortingStrategy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb460db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_nearCasterSortingStrategy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.set_nearCasterSortingStrategy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(::GlobalNamespace::NearFarInteractor_NearCasterSortingStrategy)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::set_nearCasterSortingStrategy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb460dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"set_nearCasterSortingStrategy", {}, {::i2c::type_of<::GlobalNamespace::NearFarInteractor_NearCasterSortingStrategy>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.get_sortNearTargetsAfterTargetFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_sortNearTargetsAfterTargetFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb460dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_sortNearTargetsAfterTargetFilter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.set_sortNearTargetsAfterTargetFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::set_sortNearTargetsAfterTargetFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb460dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"set_sortNearTargetsAfterTargetFilter", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.get_enableFarCasting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_enableFarCasting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb460dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_enableFarCasting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.set_enableFarCasting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::set_enableFarCasting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb460ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"set_enableFarCasting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.get_farInteractionCaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster* (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_farInteractionCaster)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb460de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_farInteractionCaster", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.set_farInteractionCaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::set_farInteractionCaster)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb460e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"set_farInteractionCaster", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.get_farAttachMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractorFarAttachMode (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_farAttachMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb460e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_farAttachMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.set_farAttachMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractorFarAttachMode)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::set_farAttachMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb460e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"set_farAttachMode", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractorFarAttachMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.get_enableUIInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_enableUIInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb460ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_enableUIInteraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.set_enableUIInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::set_enableUIInteraction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb460eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"set_enableUIInteraction", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.get_blockUIOnInteractableSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_blockUIOnInteractableSelection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb460edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_blockUIOnInteractableSelection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.set_blockUIOnInteractableSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::set_blockUIOnInteractableSelection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb460ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"set_blockUIOnInteractableSelection", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.get_uiHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_uiHoverEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb460eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_uiHoverEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.set_uiHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::set_uiHoverEntered)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb460ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"set_uiHoverEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.get_uiHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_uiHoverExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb460f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_uiHoverExited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.set_uiHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::set_uiHoverExited)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb460f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"set_uiHoverExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.get_uiPressInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_uiPressInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb460f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_uiPressInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.set_uiPressInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::set_uiPressInput)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb460f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"set_uiPressInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.get_uiScrollInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_uiScrollInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb460f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_uiScrollInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.set_uiScrollInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::set_uiScrollInput)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb460f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"set_uiScrollInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_get_rayEndTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_get_rayEndTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb460fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider.get_rayEndTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_get_rayEndPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_get_rayEndPoint)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb460fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider.get_rayEndPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.get_selectionRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::GlobalNamespace::NearFarInteractor_Region>* (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_selectionRegion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb461320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_selectionRegion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.get_uiModelUpdater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::IUIModelUpdater* (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_uiModelUpdater)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb461328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_uiModelUpdater", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.get_isUiSelectInputActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_isUiSelectInputActive)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb46137c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_isUiSelectInputActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.get_uiScrollInputValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_uiScrollInputValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb461394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_uiScrollInputValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.UpdateUIRegistration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::UpdateUIRegistration)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4613e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(), 124}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.get_canProcessUIToolkit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_canProcessUIToolkit)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb461494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_canProcessUIToolkit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::Awake)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xb461538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::OnEnable)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb461aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::OnDisable)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb461cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.InitializeReferences
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::InitializeReferences)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0xb461fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(), 125}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.PreprocessInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::PreprocessInteractor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb462288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(), 68}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.InitializeInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::InitializeInteractor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb461ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"InitializeInteractor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.UpdateAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::UpdateAnchor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb46252c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"UpdateAnchor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.DetermineSelectionRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NearFarInteractor_Region (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::DetermineSelectionRegion)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb4625f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"DetermineSelectionRegion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.UpdateSelectionRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(::GlobalNamespace::NearFarInteractor_Region)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::UpdateSelectionRegion)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb462cbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"UpdateSelectionRegion", {}, {::i2c::type_of<::GlobalNamespace::NearFarInteractor_Region>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.EvaluateNearInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::EvaluateNearInteraction)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xb4626bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"EvaluateNearInteraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.EvaluateFarInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(::GlobalNamespace::NearFarInteractor_Region)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::EvaluateFarInteraction)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0xb462840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"EvaluateFarInteraction", {}, {::i2c::type_of<::GlobalNamespace::NearFarInteractor_Region>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.ProcessUIToolkitHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(::UnityEngine::RaycastHit)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::ProcessUIToolkitHit)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb463388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"ProcessUIToolkitHit", {}, {::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.HandleUIToolkitEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::HandleUIToolkitEvents)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0xb462d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"HandleUIToolkitEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.Process3dHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(::by_ref<::UnityEngine::Vector3>, bool, float_t, ::by_ref<bool>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::Process3dHit)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0xb463510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"Process3dHit", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.Process2dHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(::by_ref<::UnityEngine::EventSystems::RaycastResult>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::Process2dHit)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb463840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"Process2dHit", {}, {::i2c::type_of<::by_ref<::UnityEngine::EventSystems::RaycastResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.GetEvaluatorForSortingStrategy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator* (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(::GlobalNamespace::NearFarInteractor_NearCasterSortingStrategy)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::GetEvaluatorForSortingStrategy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb463f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(), 126}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.RegisterNearValidTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::RegisterNearValidTargets)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0xb462f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"RegisterNearValidTargets", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.RegisterFarValidTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*, ::by_ref<int32_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::RegisterFarValidTargets)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0xb463a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"RegisterFarValidTargets", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.GetValidTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::GetValidTargets)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xb463fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.OnSelectEntering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::OnSelectEntering)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0xb464124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(), 76}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.OnSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::OnSelectEntered)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb4645a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(), 77}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.OnSelectExiting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::OnSelectExiting)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xb4646f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(), 78}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.OnSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::OnSelectExited)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb464930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(), 79}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_GetOrCreateAttachTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_GetOrCreateAttachTransform)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb464a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider.GetOrCreateAttachTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_SetAttachTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_SetAttachTransform)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb464b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider.SetAttachTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_GetOrCreateRayOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_GetOrCreateRayOrigin)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb464bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider.GetOrCreateRayOrigin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_SetRayOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_SetRayOrigin)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb464c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider.SetRayOrigin", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.UpdateUIModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::UpdateUIModel)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xb464d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"UpdateUIModel", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.TryGetUIModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::TryGetUIModel)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb464ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"TryGetUIModel", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.TryGetCurrentUIRaycastResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(::by_ref<::UnityEngine::EventSystems::RaycastResult>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::TryGetCurrentUIRaycastResult)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb4633f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"TryGetCurrentUIRaycastResult", {}, {::i2c::type_of<::by_ref<::UnityEngine::EventSystems::RaycastResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.UnityEngine_XR_Interaction_Toolkit_UI_IUIHoverInteractor_OnUIHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::UnityEngine_XR_Interaction_Toolkit_UI_IUIHoverInteractor_OnUIHoverEntered)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb464f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.UI.IUIHoverInteractor.OnUIHoverEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.UnityEngine_XR_Interaction_Toolkit_UI_IUIHoverInteractor_OnUIHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::UnityEngine_XR_Interaction_Toolkit_UI_IUIHoverInteractor_OnUIHoverExited)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb464f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.UI.IUIHoverInteractor.OnUIHoverExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.OnUIHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::OnUIHoverEntered)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb464fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(), 127}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.OnUIHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::OnUIHoverExited)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb46500c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(), 128}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.get_isCurveActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_isCurveActive)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xb4638b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_isCurveActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_ICurveInteractionDataProvider_get_isActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_ICurveInteractionDataProvider_get_isActive)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb46506c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.ICurveInteractionDataProvider.get_isActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_ICurveInteractionDataProvider_get_hasValidSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_ICurveInteractionDataProvider_get_hasValidSelect)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb465070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.ICurveInteractionDataProvider.get_hasValidSelect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_ICurveInteractionDataProvider_get_samplePoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_ICurveInteractionDataProvider_get_samplePoints)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb465098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.ICurveInteractionDataProvider.get_samplePoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_ICurveInteractionDataProvider_get_lastSamplePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_ICurveInteractionDataProvider_get_lastSamplePoint)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb465140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.ICurveInteractionDataProvider.get_lastSamplePoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.get_curveOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_curveOrigin)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb4651ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_curveOrigin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.TryGetCurveEndPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(::by_ref<::UnityEngine::Vector3>, bool, bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::TryGetCurveEndPoint)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0xb4610a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"TryGetCurveEndPoint", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor.TryGetCurveEndNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)(::by_ref<::UnityEngine::Vector3>, bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::TryGetCurveEndNormal)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xb465298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"TryGetCurveEndNormal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::_ctor)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0xb465474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_InteractionAttachController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionAttachController;
}
constexpr ::UnityW<::UnityEngine::Object> const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_InteractionAttachController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionAttachController;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_InteractionAttachController(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractionAttachController = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Attachment::IInteractionAttachController*,::UnityW<::UnityEngine::Object>>*& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_InteractionAttachControllerObjectRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionAttachControllerObjectRef;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Attachment::IInteractionAttachController*,::UnityW<::UnityEngine::Object>>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_InteractionAttachControllerObjectRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionAttachControllerObjectRef;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_InteractionAttachControllerObjectRef(::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Attachment::IInteractionAttachController*,::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractionAttachControllerObjectRef = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_EnableNearCasting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableNearCasting;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_EnableNearCasting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableNearCasting;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_EnableNearCasting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EnableNearCasting = value;
}
constexpr ::UnityW<::UnityEngine::Object>& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_NearInteractionCaster()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NearInteractionCaster;
}
constexpr ::UnityW<::UnityEngine::Object> const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_NearInteractionCaster() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NearInteractionCaster;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_NearInteractionCaster(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NearInteractionCaster = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*,::UnityW<::UnityEngine::Object>>*& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_NearCasterObjectRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NearCasterObjectRef;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*,::UnityW<::UnityEngine::Object>>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_NearCasterObjectRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NearCasterObjectRef;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_NearCasterObjectRef(::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*,::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NearCasterObjectRef = value;
}
constexpr ::GlobalNamespace::NearFarInteractor_NearCasterSortingStrategy& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_NearCasterSortingStrategy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NearCasterSortingStrategy;
}
constexpr ::GlobalNamespace::NearFarInteractor_NearCasterSortingStrategy const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_NearCasterSortingStrategy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NearCasterSortingStrategy;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_NearCasterSortingStrategy(::GlobalNamespace::NearFarInteractor_NearCasterSortingStrategy  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NearCasterSortingStrategy = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_SortNearTargetsAfterTargetFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SortNearTargetsAfterTargetFilter;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_SortNearTargetsAfterTargetFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SortNearTargetsAfterTargetFilter;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_SortNearTargetsAfterTargetFilter(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SortNearTargetsAfterTargetFilter = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_EnableFarCasting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableFarCasting;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_EnableFarCasting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableFarCasting;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_EnableFarCasting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EnableFarCasting = value;
}
constexpr ::UnityW<::UnityEngine::Object>& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_FarInteractionCaster()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FarInteractionCaster;
}
constexpr ::UnityW<::UnityEngine::Object> const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_FarInteractionCaster() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FarInteractionCaster;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_FarInteractionCaster(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FarInteractionCaster = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster*,::UnityW<::UnityEngine::Object>>*& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_FarCasterObjectRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FarCasterObjectRef;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster*,::UnityW<::UnityEngine::Object>>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_FarCasterObjectRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FarCasterObjectRef;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_FarCasterObjectRef(::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster*,::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FarCasterObjectRef = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractorFarAttachMode& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_FarAttachMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FarAttachMode;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractorFarAttachMode const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_FarAttachMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FarAttachMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_FarAttachMode(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractorFarAttachMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FarAttachMode = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_EnableUIInteraction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableUIInteraction;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_EnableUIInteraction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableUIInteraction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_EnableUIInteraction(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EnableUIInteraction = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_BlockUIOnInteractableSelection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BlockUIOnInteractableSelection;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_BlockUIOnInteractableSelection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BlockUIOnInteractableSelection;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_BlockUIOnInteractableSelection(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BlockUIOnInteractableSelection = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_UIHoverEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIHoverEntered;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent* const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_UIHoverEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIHoverEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_UIHoverEntered(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UIHoverEntered = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_UIHoverExited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIHoverExited;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent* const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_UIHoverExited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIHoverExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_UIHoverExited(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UIHoverExited = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_UIPressInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIPressInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_UIPressInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIPressInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_UIPressInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UIPressInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_UIScrollInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIScrollInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_UIScrollInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIScrollInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_UIScrollInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UIScrollInput = value;
}
constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableEnum_1<::GlobalNamespace::NearFarInteractor_Region>*& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_SelectionRegion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectionRegion;
}
constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableEnum_1<::GlobalNamespace::NearFarInteractor_Region>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_SelectionRegion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectionRegion;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_SelectionRegion(::Unity::XR::CoreUtils::Bindings::Variables::BindableEnum_1<::GlobalNamespace::NearFarInteractor_Region>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectionRegion = value;
}
constexpr ::GlobalNamespace::NearFarInteractor_Region& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_ValidTargetCastSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ValidTargetCastSource;
}
constexpr ::GlobalNamespace::NearFarInteractor_Region const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_ValidTargetCastSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ValidTargetCastSource;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_ValidTargetCastSource(::GlobalNamespace::NearFarInteractor_Region  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ValidTargetCastSource = value;
}
constexpr ::GlobalNamespace::NearFarInteractor_Region& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_SelectedTargetCastSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectedTargetCastSource;
}
constexpr ::GlobalNamespace::NearFarInteractor_Region const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_SelectedTargetCastSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectedTargetCastSource;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_SelectedTargetCastSource(::GlobalNamespace::NearFarInteractor_Region  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectedTargetCastSource = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_TargetColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetColliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_TargetColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetColliders;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_TargetColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TargetColliders = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_FarRayCastHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FarRayCastHits;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_FarRayCastHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FarRayCastHits;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_FarRayCastHits(::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FarRayCastHits = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_InternalValidTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InternalValidTargets;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_InternalValidTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InternalValidTargets;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_InternalValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InternalValidTargets = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_IndexToSnapVolumeMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IndexToSnapVolumeMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_IndexToSnapVolumeMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IndexToSnapVolumeMap;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_IndexToSnapVolumeMap(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IndexToSnapVolumeMap = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,int32_t>*& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_FarTargetToIndexMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FarTargetToIndexMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,int32_t>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_FarTargetToIndexMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FarTargetToIndexMap;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_FarTargetToIndexMap(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FarTargetToIndexMap = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_PreFilteredTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreFilteredTargets;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_PreFilteredTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreFilteredTargets;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_PreFilteredTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreFilteredTargets = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_ReleasedNearInteractionThisFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReleasedNearInteractionThisFrame;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_ReleasedNearInteractionThisFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReleasedNearInteractionThisFrame;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_ReleasedNearInteractionThisFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ReleasedNearInteractionThisFrame = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache*& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_RegisteredUIInteractorCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RegisteredUIInteractorCache;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache* const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_RegisteredUIInteractorCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RegisteredUIInteractorCache;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_RegisteredUIInteractorCache(::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RegisteredUIInteractorCache = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::UI::IUIModelUpdater*,::UnityW<::UnityEngine::Object>>*& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_UIModelUpdaterReferenceCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIModelUpdaterReferenceCache;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::UI::IUIModelUpdater*,::UnityW<::UnityEngine::Object>>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_UIModelUpdaterReferenceCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIModelUpdaterReferenceCache;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_UIModelUpdaterReferenceCache(::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::UI::IUIModelUpdater*,::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UIModelUpdaterReferenceCache = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_HasValidRayHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasValidRayHit;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_HasValidRayHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasValidRayHit;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_HasValidRayHit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasValidRayHit = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_LastValidHitIsUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastValidHitIsUI;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_LastValidHitIsUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastValidHitIsUI;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_LastValidHitIsUI(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastValidHitIsUI = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_RayEndTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RayEndTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_RayEndTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RayEndTransform;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_RayEndTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RayEndTransform = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_RayEndPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RayEndPoint;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_RayEndPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RayEndPoint;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_RayEndPoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RayEndPoint = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_RayEndNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RayEndNormal;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_RayEndNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RayEndNormal;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_RayEndNormal(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RayEndNormal = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_NormalRelativeToInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NormalRelativeToInteractable;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_NormalRelativeToInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NormalRelativeToInteractable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_NormalRelativeToInteractable(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NormalRelativeToInteractable = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_ValidHitIsUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ValidHitIsUI;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_ValidHitIsUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ValidHitIsUI;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_ValidHitIsUI(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ValidHitIsUI = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_ValidHitIsSnapVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ValidHitIsSnapVolume;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_ValidHitIsSnapVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ValidHitIsSnapVolume;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_ValidHitIsSnapVolume(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ValidHitIsSnapVolume = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_ValidHitSnapVolumeInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ValidHitSnapVolumeInteractable;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable* const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_ValidHitSnapVolumeInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ValidHitSnapVolumeInteractable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_ValidHitSnapVolumeInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ValidHitSnapVolumeInteractable = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_AllowMultipleValidTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowMultipleValidTargets;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_get_m_AllowMultipleValidTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowMultipleValidTargets;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::__cordl_internal_set_m_AllowMultipleValidTargets(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AllowMultipleValidTargets = value;
}
inline ::UnityEngine::XR::Interaction::Toolkit::Attachment::IInteractionAttachController* UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_interactionAttachController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_interactionAttachController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Attachment::IInteractionAttachController*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::set_interactionAttachController(::UnityEngine::XR::Interaction::Toolkit::Attachment::IInteractionAttachController*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"set_interactionAttachController", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::IInteractionAttachController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_enableNearCasting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_enableNearCasting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::set_enableNearCasting(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"set_enableNearCasting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster* UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_nearInteractionCaster()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_nearInteractionCaster", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::set_nearInteractionCaster(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"set_nearInteractionCaster", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::NearFarInteractor_NearCasterSortingStrategy UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_nearCasterSortingStrategy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_nearCasterSortingStrategy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NearFarInteractor_NearCasterSortingStrategy>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::set_nearCasterSortingStrategy(::GlobalNamespace::NearFarInteractor_NearCasterSortingStrategy  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"set_nearCasterSortingStrategy", {}, {::i2c::type_of<::GlobalNamespace::NearFarInteractor_NearCasterSortingStrategy>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_sortNearTargetsAfterTargetFilter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_sortNearTargetsAfterTargetFilter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::set_sortNearTargetsAfterTargetFilter(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"set_sortNearTargetsAfterTargetFilter", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_enableFarCasting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_enableFarCasting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::set_enableFarCasting(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"set_enableFarCasting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster* UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_farInteractionCaster()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_farInteractionCaster", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::set_farInteractionCaster(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"set_farInteractionCaster", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractorFarAttachMode UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_farAttachMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_farAttachMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractorFarAttachMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::set_farAttachMode(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractorFarAttachMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"set_farAttachMode", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractorFarAttachMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_enableUIInteraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_enableUIInteraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::set_enableUIInteraction(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"set_enableUIInteraction", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_blockUIOnInteractableSelection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_blockUIOnInteractableSelection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::set_blockUIOnInteractableSelection(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"set_blockUIOnInteractableSelection", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent* UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_uiHoverEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_uiHoverEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::set_uiHoverEntered(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"set_uiHoverEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent* UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_uiHoverExited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_uiHoverExited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::set_uiHoverExited(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"set_uiHoverExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_uiPressInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_uiPressInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::set_uiPressInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"set_uiPressInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_uiScrollInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_uiScrollInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::set_uiScrollInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"set_uiScrollInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_get_rayEndTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider.get_rayEndTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_get_rayEndPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider.get_rayEndPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::GlobalNamespace::NearFarInteractor_Region>* UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_selectionRegion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_selectionRegion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::GlobalNamespace::NearFarInteractor_Region>*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::IUIModelUpdater* UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_uiModelUpdater()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_uiModelUpdater", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::UI::IUIModelUpdater*>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_isUiSelectInputActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_isUiSelectInputActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_uiScrollInputValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_uiScrollInputValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::UpdateUIRegistration()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(), 124}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_canProcessUIToolkit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_canProcessUIToolkit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::InitializeReferences()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(), 125}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::PreprocessInteractor(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(), 68}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatePhase);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::InitializeInteractor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"InitializeInteractor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::UpdateAnchor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"UpdateAnchor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NearFarInteractor_Region UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::DetermineSelectionRegion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"DetermineSelectionRegion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NearFarInteractor_Region>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::UpdateSelectionRegion(::GlobalNamespace::NearFarInteractor_Region  newSelectionRegion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"UpdateSelectionRegion", {}, {::i2c::type_of<::GlobalNamespace::NearFarInteractor_Region>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newSelectionRegion);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::EvaluateNearInteraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"EvaluateNearInteraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::EvaluateFarInteraction(::GlobalNamespace::NearFarInteractor_Region  newSelectionRegion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"EvaluateFarInteraction", {}, {::i2c::type_of<::GlobalNamespace::NearFarInteractor_Region>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newSelectionRegion);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::ProcessUIToolkitHit(::UnityEngine::RaycastHit  raycastHit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"ProcessUIToolkitHit", {}, {::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, raycastHit);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::HandleUIToolkitEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"HandleUIToolkitEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::Process3dHit(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  farCasterOrigin, bool  has2dHit, float_t  uiHitSqDistance, ::by_ref<bool>  shouldProcess2dHit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"Process3dHit", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, farCasterOrigin, has2dHit, uiHitSqDistance, shouldProcess2dHit);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::Process2dHit(/* [IsReadOnly] */ ::by_ref<::UnityEngine::EventSystems::RaycastResult>  uiHit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"Process2dHit", {}, {::i2c::type_of<::by_ref<::UnityEngine::EventSystems::RaycastResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uiHit);
}
inline ::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator* UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::GetEvaluatorForSortingStrategy(::GlobalNamespace::NearFarInteractor_NearCasterSortingStrategy  strategy)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(), 126}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::IInteractorDistanceEvaluator*>(this, ___internal_method, strategy);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::RegisterNearValidTargets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  targets, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  interactables)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"RegisterNearValidTargets", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, targets, interactables);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::RegisterFarValidTargets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  targets, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  interactables, ::by_ref<int32_t>  firstRegisteredIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"RegisterFarValidTargets", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, targets, interactables, firstRegisteredIndex);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::GetValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  targets)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targets);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(), 76}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(), 77}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(), 78}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(), 79}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_GetOrCreateAttachTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider.GetOrCreateAttachTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_SetAttachTransform(::UnityEngine::Transform*  newAttach)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider.SetAttachTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newAttach);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_GetOrCreateRayOrigin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider.GetOrCreateRayOrigin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_SetRayOrigin(::UnityEngine::Transform*  newOrigin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider.SetRayOrigin", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newOrigin);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::UpdateUIModel(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>  model)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"UpdateUIModel", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, model);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::TryGetUIModel(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>  model)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"TryGetUIModel", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, model);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::TryGetCurrentUIRaycastResult(::by_ref<::UnityEngine::EventSystems::RaycastResult>  raycastResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"TryGetCurrentUIRaycastResult", {}, {::i2c::type_of<::by_ref<::UnityEngine::EventSystems::RaycastResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, raycastResult);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::UnityEngine_XR_Interaction_Toolkit_UI_IUIHoverInteractor_OnUIHoverEntered(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.UI.IUIHoverInteractor.OnUIHoverEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::UnityEngine_XR_Interaction_Toolkit_UI_IUIHoverInteractor_OnUIHoverExited(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.UI.IUIHoverInteractor.OnUIHoverExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::OnUIHoverEntered(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(), 127}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::OnUIHoverExited(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(), 128}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_isCurveActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_isCurveActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_ICurveInteractionDataProvider_get_isActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.ICurveInteractionDataProvider.get_isActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_ICurveInteractionDataProvider_get_hasValidSelect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.ICurveInteractionDataProvider.get_hasValidSelect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_ICurveInteractionDataProvider_get_samplePoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.ICurveInteractionDataProvider.get_samplePoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_ICurveInteractionDataProvider_get_lastSamplePoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.ICurveInteractionDataProvider.get_lastSamplePoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::get_curveOrigin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"get_curveOrigin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::TryGetCurveEndPoint(::by_ref<::UnityEngine::Vector3>  endPoint, bool  snapToSelectedAttachIfAvailable, bool  snapToSnapVolumeIfAvailable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"TryGetCurveEndPoint", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType>(this, ___internal_method, endPoint, snapToSelectedAttachIfAvailable, snapToSnapVolumeIfAvailable);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::TryGetCurveEndNormal(::by_ref<::UnityEngine::Vector3>  endNormal, bool  snapToSelectedAttachIfAvailable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {"TryGetCurveEndNormal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType>(this, ___internal_method, endNormal, snapToSelectedAttachIfAvailable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor* UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::operator ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider* UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRRayProvider() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::operator ::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor* UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::i___UnityEngine__XR__Interaction__Toolkit__UI__IUIHoverInteractor() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::operator ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::i___UnityEngine__XR__Interaction__Toolkit__UI__IUIInteractor() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::operator ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider* UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::i___UnityEngine__XR__Interaction__Toolkit__Interactors__Visuals__ICurveInteractionDataProvider() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::NearFarInteractor::NearFarInteractor()   {
}
