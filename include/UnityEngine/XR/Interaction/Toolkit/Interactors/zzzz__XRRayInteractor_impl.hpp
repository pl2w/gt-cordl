#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/XRRayInteractor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__ScaleMode_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRBaseInputInteractor_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRRayInteractor_HitDetectionType_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRRayInteractor_LineType_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRRayInteractor_QuerySnapVolumeInteraction_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRRayInteractor_RotateMode_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__PhysicsScene_impl.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRRayInteractor_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputButtonReader_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputValueReader_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRHoverInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRSelectInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRInteractableSnapVolume_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/zzzz__IAdvancedLineRenderable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/zzzz__ILineRenderable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRRayProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRScaleValueProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__ScaleMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRRayInteractor_AnchorRotationMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRRayInteractor_HitDetectionType_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRRayInteractor_LineType_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRRayInteractor_QuerySnapVolumeInteraction_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRRayInteractor_RotateMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRRayInteractor_SamplePoint_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRRayInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__IUIHoverInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__IUIInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__RegisteredUIInteractorCache_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TrackedDeviceModel_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__UIHoverEnterEvent_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__UIHoverEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__UIHoverExitEvent_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ActionBasedController_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRController_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionManager_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionUpdateOrder_UpdatePhase_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRScreenSpaceController_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_lineType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XRRayInteractor_LineType (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_lineType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4780a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_lineType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_lineType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::GlobalNamespace::XRRayInteractor_LineType)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_lineType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4780b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_lineType", {}, {::i2c::type_of<::GlobalNamespace::XRRayInteractor_LineType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_blendVisualLinePoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_blendVisualLinePoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4780b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_blendVisualLinePoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_blendVisualLinePoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_blendVisualLinePoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4780c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_blendVisualLinePoints", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_maxRaycastDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_maxRaycastDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4780c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_maxRaycastDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_maxRaycastDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_maxRaycastDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4780d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_maxRaycastDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_rayOriginTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_rayOriginTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4780d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_rayOriginTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_rayOriginTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_rayOriginTransform)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb4780e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_rayOriginTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_referenceFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_referenceFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_referenceFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_referenceFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_referenceFrame)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb478170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_referenceFrame", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_velocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_velocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4781f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_velocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_velocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_velocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_velocity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_acceleration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_acceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_acceleration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_acceleration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_acceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_acceleration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_additionalGroundHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_additionalGroundHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_additionalGroundHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_additionalGroundHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_additionalGroundHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_additionalGroundHeight", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_additionalFlightTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_additionalFlightTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_additionalFlightTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_additionalFlightTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_additionalFlightTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_additionalFlightTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_endPointDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_endPointDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_endPointDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_endPointDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_endPointDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_endPointDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_endPointHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_endPointHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_endPointHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_endPointHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_endPointHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_endPointHeight", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_controlPointDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_controlPointDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_controlPointDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_controlPointDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_controlPointDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_controlPointDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_controlPointHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_controlPointHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_controlPointHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_controlPointHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_controlPointHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_controlPointHeight", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_sampleFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_sampleFrequency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_sampleFrequency", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_sampleFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_sampleFrequency)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb478280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_sampleFrequency", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_hitDetectionType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XRRayInteractor_HitDetectionType (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_hitDetectionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4782fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_hitDetectionType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_hitDetectionType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::GlobalNamespace::XRRayInteractor_HitDetectionType)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_hitDetectionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_hitDetectionType", {}, {::i2c::type_of<::GlobalNamespace::XRRayInteractor_HitDetectionType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_sphereCastRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_sphereCastRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb47830c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_sphereCastRadius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_sphereCastRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_sphereCastRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_sphereCastRadius", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_coneCastAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_coneCastAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb47831c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_coneCastAngle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_coneCastAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_coneCastAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_coneCastAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_coneCastAngleRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_coneCastAngleRadius)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xb47832c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_coneCastAngleRadius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_liveConeCastDebugVisuals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_liveConeCastDebugVisuals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb47842c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_liveConeCastDebugVisuals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_liveConeCastDebugVisuals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_liveConeCastDebugVisuals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_liveConeCastDebugVisuals", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_raycastMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_raycastMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb47843c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_raycastMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_raycastMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::LayerMask)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_raycastMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_raycastMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_raycastTriggerInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::QueryTriggerInteraction (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_raycastTriggerInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb47844c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_raycastTriggerInteraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_raycastTriggerInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_raycastTriggerInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_raycastTriggerInteraction", {}, {::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_raycastSnapVolumeInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XRRayInteractor_QuerySnapVolumeInteraction (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_raycastSnapVolumeInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb47845c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_raycastSnapVolumeInteraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_raycastSnapVolumeInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::GlobalNamespace::XRRayInteractor_QuerySnapVolumeInteraction)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_raycastSnapVolumeInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_raycastSnapVolumeInteraction", {}, {::i2c::type_of<::GlobalNamespace::XRRayInteractor_QuerySnapVolumeInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_hitClosestOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_hitClosestOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb47846c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_hitClosestOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_hitClosestOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_hitClosestOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_hitClosestOnly", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_hoverToSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_hoverToSelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb47847c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_hoverToSelect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_hoverToSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_hoverToSelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_hoverToSelect", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_hoverTimeToSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_hoverTimeToSelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb47848c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_hoverTimeToSelect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_hoverTimeToSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_hoverTimeToSelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_hoverTimeToSelect", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_autoDeselect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_autoDeselect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb47849c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_autoDeselect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_autoDeselect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_autoDeselect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4784a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_autoDeselect", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_timeToAutoDeselect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_timeToAutoDeselect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4784ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_timeToAutoDeselect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_timeToAutoDeselect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_timeToAutoDeselect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4784b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_timeToAutoDeselect", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_enableUIInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_enableUIInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4784bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_enableUIInteraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_enableUIInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_enableUIInteraction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb4784c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_enableUIInteraction", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_blockInteractionsWithScreenSpaceUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_blockInteractionsWithScreenSpaceUI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4784f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_blockInteractionsWithScreenSpaceUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_blockInteractionsWithScreenSpaceUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_blockInteractionsWithScreenSpaceUI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4784fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_blockInteractionsWithScreenSpaceUI", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_blockUIOnInteractableSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_blockUIOnInteractableSelection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_blockUIOnInteractableSelection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_blockUIOnInteractableSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_blockUIOnInteractableSelection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb47850c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_blockUIOnInteractableSelection", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_manipulateAttachTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_manipulateAttachTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_manipulateAttachTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_manipulateAttachTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_manipulateAttachTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb47851c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_manipulateAttachTransform", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_useForceGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_useForceGrab)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_useForceGrab", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_useForceGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_useForceGrab)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb47852c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_useForceGrab", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_rotateSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_rotateSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_rotateSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_rotateSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_rotateSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb47853c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_rotateSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_translateSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_translateSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_translateSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_translateSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_translateSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb47854c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_translateSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_rotateReferenceFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_rotateReferenceFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_rotateReferenceFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_rotateReferenceFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_rotateReferenceFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb47855c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_rotateReferenceFrame", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_rotateMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XRRayInteractor_RotateMode (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_rotateMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb47856c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_rotateMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_rotateMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::GlobalNamespace::XRRayInteractor_RotateMode)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_rotateMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_rotateMode", {}, {::i2c::type_of<::GlobalNamespace::XRRayInteractor_RotateMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_uiHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_uiHoverEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb47857c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_uiHoverEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_uiHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_uiHoverEntered)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb478584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_uiHoverEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_uiHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_uiHoverExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_uiHoverExited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_uiHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_uiHoverExited)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb47859c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_uiHoverExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_enableARRaycasting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_enableARRaycasting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4785ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_enableARRaycasting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_enableARRaycasting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_enableARRaycasting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4785b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_enableARRaycasting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_occludeARHitsWith3DObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_occludeARHitsWith3DObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4785bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_occludeARHitsWith3DObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_occludeARHitsWith3DObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_occludeARHitsWith3DObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4785c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_occludeARHitsWith3DObjects", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_occludeARHitsWith2DObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_occludeARHitsWith2DObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4785cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_occludeARHitsWith2DObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_occludeARHitsWith2DObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_occludeARHitsWith2DObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4785d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_occludeARHitsWith2DObjects", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_scaleMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::ScaleMode (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_scaleMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4785dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_scaleMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_scaleMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::ScaleMode)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_scaleMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4785e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_scaleMode", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::ScaleMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_uiPressInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_uiPressInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4785ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_uiPressInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_uiPressInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_uiPressInput)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4785f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_uiPressInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_uiScrollInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_uiScrollInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_uiScrollInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_uiScrollInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_uiScrollInput)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb47860c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_uiScrollInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_translateManipulationInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_translateManipulationInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_translateManipulationInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_translateManipulationInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_translateManipulationInput)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb478670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_translateManipulationInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_rotateManipulationInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_rotateManipulationInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4786cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_rotateManipulationInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_rotateManipulationInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_rotateManipulationInput)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb4786d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_rotateManipulationInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_directionalManipulationInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_directionalManipulationInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_directionalManipulationInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_directionalManipulationInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_directionalManipulationInput)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb478738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_directionalManipulationInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_scaleToggleInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_scaleToggleInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_scaleToggleInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_scaleToggleInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_scaleToggleInput)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb47879c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_scaleToggleInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_scaleOverTimeInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_scaleOverTimeInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4787ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_scaleOverTimeInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_scaleOverTimeInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_scaleOverTimeInput)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb4787b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_scaleOverTimeInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_scaleDistanceDeltaInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_scaleDistanceDeltaInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_scaleDistanceDeltaInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_scaleDistanceDeltaInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_scaleDistanceDeltaInput)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb478818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_scaleDistanceDeltaInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_angle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_angle)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb478874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_angle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_currentNearestValidTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_currentNearestValidTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_currentNearestValidTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_currentNearestValidTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_currentNearestValidTarget)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb478bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_currentNearestValidTarget", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_rayEndPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_rayEndPoint)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb478be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_rayEndPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_rayEndPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::Vector3)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_rayEndPoint)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb478bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_rayEndPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_rayEndTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_rayEndTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_rayEndTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_rayEndTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_rayEndTransform)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb478c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_rayEndTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_scaleValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_scaleValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_scaleValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_scaleValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_scaleValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb478c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_scaleValue", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_effectiveRayOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_effectiveRayOrigin)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb478c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_effectiveRayOrigin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_referenceUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_referenceUp)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb478c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_referenceUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_referencePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_referencePosition)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb478cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_referencePosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_closestAnyHitIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_closestAnyHitIndex)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb478d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_closestAnyHitIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::OnValidate)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb478d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::Awake)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0xb478e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::OnEnable)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4797e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::OnDisable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb479818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0xaf8;
  constexpr static std::size_t addrs = 0xb479888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 124}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.DrawQuadraticBezierGizmo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::DrawQuadraticBezierGizmo)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xb47a3b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"DrawQuadraticBezierGizmo", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.FindReferenceFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::FindReferenceFrame)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xb479384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"FindReferenceFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.CreateRayOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::CreateRayOrigin)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0xb479520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"CreateRayOrigin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_GetOrCreateRayOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_GetOrCreateRayOrigin)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb47a5bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider.GetOrCreateRayOrigin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_GetOrCreateAttachTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_GetOrCreateAttachTransform)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb47a5d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider.GetOrCreateAttachTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_SetRayOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_SetRayOrigin)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb47a5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider.SetRayOrigin", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_SetAttachTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_SetAttachTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb47a5f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider.SetAttachTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.IsOverUIGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::IsOverUIGameObject)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb47a5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"IsOverUIGameObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.IsOverScreenSpaceCanvas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::IsOverScreenSpaceCanvas)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb47a61c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"IsOverScreenSpaceCanvas", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.GetLinePoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>, ::by_ref<int32_t>, ::System::Nullable_1<::UnityEngine::Ray>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::GetLinePoints)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0xb47a734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"GetLinePoints", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Ray>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.GetLinePoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::by_ref<::ArrayW<::UnityEngine::Vector3>>, ::by_ref<int32_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::GetLinePoints)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xb47b4fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"GetLinePoints", {}, {::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.GetLineOriginAndDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::GetLineOriginAndDirection)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb4788b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"GetLineOriginAndDirection", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.GetLineOriginAndDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::System::Nullable_1<::UnityEngine::Ray>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::GetLineOriginAndDirection)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb47b6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"GetLineOriginAndDirection", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::Ray>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.GetLineOriginAndDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::GetLineOriginAndDirection)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb47b6a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"GetLineOriginAndDirection", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.EnsureCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>, int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::EnsureCapacity)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb47ac60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"EnsureCapacity", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.TryGetHitInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<int32_t>, ::by_ref<bool>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::TryGetHitInfo)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0xb47b7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"TryGetHitInfo", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.UpdateUIModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::UpdateUIModel)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0xb47bccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 125}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.TryGetUIModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::TryGetUIModel)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb47c0e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"TryGetUIModel", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.TryGetCurrent3DRaycastHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::by_ref<::UnityEngine::RaycastHit>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::TryGetCurrent3DRaycastHit)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb47a380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"TryGetCurrent3DRaycastHit", {}, {::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.TryGetCurrent3DRaycastHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::by_ref<::UnityEngine::RaycastHit>, ::by_ref<int32_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::TryGetCurrent3DRaycastHit)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb47c1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"TryGetCurrent3DRaycastHit", {}, {::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.TryGetCurrentUIRaycastResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::by_ref<::UnityEngine::EventSystems::RaycastResult>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::TryGetCurrentUIRaycastResult)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb47a39c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"TryGetCurrentUIRaycastResult", {}, {::i2c::type_of<::by_ref<::UnityEngine::EventSystems::RaycastResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.TryGetCurrentUIRaycastResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::by_ref<::UnityEngine::EventSystems::RaycastResult>, ::by_ref<int32_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::TryGetCurrentUIRaycastResult)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb47c214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"TryGetCurrentUIRaycastResult", {}, {::i2c::type_of<::by_ref<::UnityEngine::EventSystems::RaycastResult>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.TryGetCurrentRaycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::by_ref<::System::Nullable_1<::UnityEngine::RaycastHit>>, ::by_ref<int32_t>, ::by_ref<::System::Nullable_1<::UnityEngine::EventSystems::RaycastResult>>, ::by_ref<int32_t>, ::by_ref<bool>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::TryGetCurrentRaycast)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xb47bb8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"TryGetCurrentRaycast", {}, {::i2c::type_of<::by_ref<::System::Nullable_1<::UnityEngine::RaycastHit>>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::UnityEngine::EventSystems::RaycastResult>>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.CacheRaycastHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::CacheRaycastHit)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0xb47c32c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"CacheRaycastHit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.UpdateUIHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::UpdateUIHover)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb47c634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"UpdateUIHover", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.UpdateBezierControlPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::UpdateBezierControlPoints)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb47c690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"UpdateBezierControlPoints", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.GetProjectileAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::Vector3)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::GetProjectileAngle)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0xb478940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"GetProjectileAngle", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.CalculateProjectileParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::CalculateProjectileParameters)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xb47c784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"CalculateProjectileParameters", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.RotateAttachTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::Transform*, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::RotateAttachTransform)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xb47c964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 126}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.RotateAttachTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::Transform*, ::UnityEngine::Vector2, ::UnityEngine::Quaternion)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::RotateAttachTransform)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xb47cae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 127}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.TranslateAttachTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::TranslateAttachTransform)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xb47cca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 128}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.PreprocessInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::PreprocessInteractor)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0xb47ce70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 68}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.ProcessInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::ProcessInteractor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb47d2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 69}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.ProcessManipulationInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::ProcessManipulationInput)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0xb47dcf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"ProcessManipulationInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.GetValidTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::GetValidTargets)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0xb47df58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.CreateSamplePointsListsIfNecessary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::CreateSamplePointsListsIfNecessary)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xb47922c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"CreateSamplePointsListsIfNecessary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.UpdateSamplePointsIfNecessary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::UpdateSamplePointsIfNecessary)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb47c080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"UpdateSamplePointsIfNecessary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.UpdateSamplePoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(int32_t, ::System::Collections::Generic::List_1<::GlobalNamespace::XRRayInteractor_SamplePoint>*, ::System::Nullable_1<::UnityEngine::Ray>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::UpdateSamplePoints)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0xb47ad10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"UpdateSamplePoints", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::XRRayInteractor_SamplePoint>*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Ray>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.UpdateRaycastHits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::UpdateRaycastHits)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xb47d0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"UpdateRaycastHits", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.CheckCollidersBetweenPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::CheckCollidersBetweenPoints)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0xb47e3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"CheckCollidersBetweenPoints", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.FilteredConecast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::RaycastHit>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::FilteredConecast)> {
  constexpr static std::size_t size = 0xa14;
  constexpr static std::size_t addrs = 0xb47e6f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"FilteredConecast", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.FilterOutTriggerColliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*, ::ArrayW<::UnityEngine::RaycastHit>, int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::FilterOutTriggerColliders)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0xb47f108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"FilterOutTriggerColliders", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.FilterTriggerColliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*, ::ArrayW<::UnityEngine::RaycastHit>, int32_t, ::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>,bool>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::FilterTriggerColliders)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xb47f330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"FilterTriggerColliders", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.CreateBezierCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::System::Collections::Generic::List_1<::GlobalNamespace::XRRayInteractor_SamplePoint>*, int32_t, ::ArrayW<::Unity::Mathematics::float3>, ::System::Nullable_1<::UnityEngine::Ray>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::CreateBezierCurve)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0xb47b1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"CreateBezierCurve", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::XRRayInteractor_SamplePoint>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Unity::Mathematics::float3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Ray>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_isSelectActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_isSelectActive)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb47f480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 60}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.CanHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::CanHover)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb47f4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 65}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.CanSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::CanSelect)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb47f570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.GetHoverTimeToSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::GetHoverTimeToSelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb47f610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 129}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.GetTimeToAutoDeselect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::GetTimeToAutoDeselect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb47f618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 130}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.OnSelectEntering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::OnSelectEntering)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xb47f620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 76}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.OnSelectExiting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::OnSelectExiting)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb47f7fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 78}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.UnityEngine_XR_Interaction_Toolkit_UI_IUIHoverInteractor_OnUIHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::UnityEngine_XR_Interaction_Toolkit_UI_IUIHoverInteractor_OnUIHoverEntered)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb47f884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.UI.IUIHoverInteractor.OnUIHoverEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.UnityEngine_XR_Interaction_Toolkit_UI_IUIHoverInteractor_OnUIHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::UnityEngine_XR_Interaction_Toolkit_UI_IUIHoverInteractor_OnUIHoverExited)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb47f894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.UI.IUIHoverInteractor.OnUIHoverExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.OnUIHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::OnUIHoverEntered)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xb47f8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 131}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.OnUIHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::OnUIHoverExited)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xb47fa1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 132}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.RestoreAttachTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::RestoreAttachTransform)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb47f83c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"RestoreAttachTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.SanitizeSampleFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::SanitizeSampleFrequency)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4782ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"SanitizeSampleFrequency", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_Velocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_Velocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb47fb14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_Velocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_Velocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_Velocity)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb47fb1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_Velocity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_Acceleration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_Acceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb47fb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_Acceleration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_Acceleration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_Acceleration)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb47fb28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_Acceleration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_AdditionalFlightTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_AdditionalFlightTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb47fb2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_AdditionalFlightTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_AdditionalFlightTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_AdditionalFlightTime)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb47fb34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_AdditionalFlightTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_Angle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_Angle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb47fb38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_Angle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_originalAttachTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_originalAttachTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb47fb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_originalAttachTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_originalAttachTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_originalAttachTransform)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb47fb48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_originalAttachTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.GetLinePoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::by_ref<::ArrayW<::UnityEngine::Vector3>>, ::by_ref<int32_t>, int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::GetLinePoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb47fb4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"GetLinePoints", {}, {::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.TryGetHitInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<int32_t>, ::by_ref<bool>, int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::TryGetHitInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb47fb54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"TryGetHitInfo", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.GetCurrentRaycastHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::by_ref<::UnityEngine::RaycastHit>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::GetCurrentRaycastHit)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb47fb5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"GetCurrentRaycastHit", {}, {::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_allowAnchorControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_allowAnchorControl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb47fb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_allowAnchorControl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_allowAnchorControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_allowAnchorControl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb47fb78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_allowAnchorControl", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_anchorRotateReferenceFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_anchorRotateReferenceFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb47fb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_anchorRotateReferenceFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_anchorRotateReferenceFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_anchorRotateReferenceFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb47fb88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_anchorRotateReferenceFrame", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_anchorRotationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XRRayInteractor_AnchorRotationMode (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_anchorRotationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb47fb98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_anchorRotationMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.set_anchorRotationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::GlobalNamespace::XRRayInteractor_AnchorRotationMode)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_anchorRotationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb47fba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_anchorRotationMode", {}, {::i2c::type_of<::GlobalNamespace::XRRayInteractor_AnchorRotationMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.get_isUISelectActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_isUISelectActive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb47fba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 103}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.ProcessManipulationInputDeviceBasedController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::ProcessManipulationInputDeviceBasedController)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0xb47d360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"ProcessManipulationInputDeviceBasedController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.ProcessManipulationInputActionBasedController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::ProcessManipulationInputActionBasedController)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0xb47d6a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"ProcessManipulationInputActionBasedController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.ProcessManipulationInputScreenSpaceController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::ProcessManipulationInputScreenSpaceController)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0xb47d9d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"ProcessManipulationInputScreenSpaceController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.RotateAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::Transform*, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::RotateAnchor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb47fc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 133}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.RotateAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::Transform*, ::UnityEngine::Vector2, ::UnityEngine::Quaternion)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::RotateAnchor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb47fc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 134}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.TranslateAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::TranslateAnchor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb47fc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 135}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.TryRead2DAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputAction*, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::TryRead2DAxis)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb47fbd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"TryRead2DAxis", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.TryReadButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputAction*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::TryReadButton)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb47fbc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"TryReadButton", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor.OnXRControllerChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::OnXRControllerChanged)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0xb47fc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 104}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::_ctor)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0xb47ff60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::Vector3,float_t>*>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_ConeCastDebugInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ConeCastDebugInfo;
}
constexpr ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::Vector3,float_t>*>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_ConeCastDebugInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ConeCastDebugInfo;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_ConeCastDebugInfo(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::Vector3,float_t>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ConeCastDebugInfo = value;
}
constexpr ::GlobalNamespace::XRRayInteractor_LineType& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_LineType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineType;
}
constexpr ::GlobalNamespace::XRRayInteractor_LineType const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_LineType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineType;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_LineType(::GlobalNamespace::XRRayInteractor_LineType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LineType = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_BlendVisualLinePoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BlendVisualLinePoints;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_BlendVisualLinePoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BlendVisualLinePoints;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_BlendVisualLinePoints(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BlendVisualLinePoints = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_MaxRaycastDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxRaycastDistance;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_MaxRaycastDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxRaycastDistance;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_MaxRaycastDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaxRaycastDistance = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_RayOriginTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RayOriginTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_RayOriginTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RayOriginTransform;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_RayOriginTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RayOriginTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_ReferenceFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReferenceFrame;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_ReferenceFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReferenceFrame;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_ReferenceFrame(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ReferenceFrame = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_Velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Velocity;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_Velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Velocity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_Velocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Velocity = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_Acceleration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Acceleration;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_Acceleration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Acceleration;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_Acceleration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Acceleration = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_AdditionalGroundHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AdditionalGroundHeight;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_AdditionalGroundHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AdditionalGroundHeight;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_AdditionalGroundHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AdditionalGroundHeight = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_AdditionalFlightTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AdditionalFlightTime;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_AdditionalFlightTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AdditionalFlightTime;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_AdditionalFlightTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AdditionalFlightTime = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_EndPointDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EndPointDistance;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_EndPointDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EndPointDistance;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_EndPointDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EndPointDistance = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_EndPointHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EndPointHeight;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_EndPointHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EndPointHeight;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_EndPointHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EndPointHeight = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_ControlPointDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControlPointDistance;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_ControlPointDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControlPointDistance;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_ControlPointDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ControlPointDistance = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_ControlPointHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControlPointHeight;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_ControlPointHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControlPointHeight;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_ControlPointHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ControlPointHeight = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_SampleFrequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SampleFrequency;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_SampleFrequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SampleFrequency;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_SampleFrequency(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SampleFrequency = value;
}
constexpr ::GlobalNamespace::XRRayInteractor_HitDetectionType& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_HitDetectionType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HitDetectionType;
}
constexpr ::GlobalNamespace::XRRayInteractor_HitDetectionType const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_HitDetectionType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HitDetectionType;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_HitDetectionType(::GlobalNamespace::XRRayInteractor_HitDetectionType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HitDetectionType = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_SphereCastRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SphereCastRadius;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_SphereCastRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SphereCastRadius;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_SphereCastRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SphereCastRadius = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_ConeCastAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ConeCastAngle;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_ConeCastAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ConeCastAngle;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_ConeCastAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ConeCastAngle = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_CachedConeCastAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedConeCastAngle;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_CachedConeCastAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedConeCastAngle;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_CachedConeCastAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CachedConeCastAngle = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_CachedConeCastRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedConeCastRadius;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_CachedConeCastRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedConeCastRadius;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_CachedConeCastRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CachedConeCastRadius = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_LiveConeCastDebugVisuals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LiveConeCastDebugVisuals;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_LiveConeCastDebugVisuals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LiveConeCastDebugVisuals;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_LiveConeCastDebugVisuals(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LiveConeCastDebugVisuals = value;
}
constexpr ::UnityEngine::LayerMask& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_RaycastMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastMask;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_RaycastMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastMask;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_RaycastMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RaycastMask = value;
}
constexpr ::UnityEngine::QueryTriggerInteraction& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_RaycastTriggerInteraction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastTriggerInteraction;
}
constexpr ::UnityEngine::QueryTriggerInteraction const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_RaycastTriggerInteraction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastTriggerInteraction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_RaycastTriggerInteraction(::UnityEngine::QueryTriggerInteraction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RaycastTriggerInteraction = value;
}
constexpr ::GlobalNamespace::XRRayInteractor_QuerySnapVolumeInteraction& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_RaycastSnapVolumeInteraction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastSnapVolumeInteraction;
}
constexpr ::GlobalNamespace::XRRayInteractor_QuerySnapVolumeInteraction const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_RaycastSnapVolumeInteraction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastSnapVolumeInteraction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_RaycastSnapVolumeInteraction(::GlobalNamespace::XRRayInteractor_QuerySnapVolumeInteraction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RaycastSnapVolumeInteraction = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_HitClosestOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HitClosestOnly;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_HitClosestOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HitClosestOnly;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_HitClosestOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HitClosestOnly = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_HoverToSelect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverToSelect;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_HoverToSelect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverToSelect;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_HoverToSelect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HoverToSelect = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_HoverTimeToSelect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverTimeToSelect;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_HoverTimeToSelect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverTimeToSelect;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_HoverTimeToSelect(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HoverTimeToSelect = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_AutoDeselect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutoDeselect;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_AutoDeselect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutoDeselect;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_AutoDeselect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AutoDeselect = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_TimeToAutoDeselect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TimeToAutoDeselect;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_TimeToAutoDeselect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TimeToAutoDeselect;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_TimeToAutoDeselect(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TimeToAutoDeselect = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_EnableUIInteraction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableUIInteraction;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_EnableUIInteraction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableUIInteraction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_EnableUIInteraction(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EnableUIInteraction = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_BlockInteractionsWithScreenSpaceUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BlockInteractionsWithScreenSpaceUI;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_BlockInteractionsWithScreenSpaceUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BlockInteractionsWithScreenSpaceUI;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_BlockInteractionsWithScreenSpaceUI(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BlockInteractionsWithScreenSpaceUI = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_BlockUIOnInteractableSelection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BlockUIOnInteractableSelection;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_BlockUIOnInteractableSelection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BlockUIOnInteractableSelection;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_BlockUIOnInteractableSelection(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BlockUIOnInteractableSelection = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_ManipulateAttachTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ManipulateAttachTransform;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_ManipulateAttachTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ManipulateAttachTransform;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_ManipulateAttachTransform(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ManipulateAttachTransform = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_UseForceGrab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseForceGrab;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_UseForceGrab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseForceGrab;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_UseForceGrab(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UseForceGrab = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_RotateSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotateSpeed;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_RotateSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotateSpeed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_RotateSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RotateSpeed = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_TranslateSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TranslateSpeed;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_TranslateSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TranslateSpeed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_TranslateSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TranslateSpeed = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_RotateReferenceFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotateReferenceFrame;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_RotateReferenceFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotateReferenceFrame;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_RotateReferenceFrame(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RotateReferenceFrame = value;
}
constexpr ::GlobalNamespace::XRRayInteractor_RotateMode& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_RotateMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotateMode;
}
constexpr ::GlobalNamespace::XRRayInteractor_RotateMode const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_RotateMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotateMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_RotateMode(::GlobalNamespace::XRRayInteractor_RotateMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RotateMode = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_UIHoverEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIHoverEntered;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_UIHoverEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIHoverEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_UIHoverEntered(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UIHoverEntered = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_UIHoverExited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIHoverExited;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_UIHoverExited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIHoverExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_UIHoverExited(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UIHoverExited = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_EnableARRaycasting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableARRaycasting;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_EnableARRaycasting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableARRaycasting;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_EnableARRaycasting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EnableARRaycasting = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_OccludeARHitsWith3DObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OccludeARHitsWith3DObjects;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_OccludeARHitsWith3DObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OccludeARHitsWith3DObjects;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_OccludeARHitsWith3DObjects(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OccludeARHitsWith3DObjects = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_OccludeARHitsWith2DObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OccludeARHitsWith2DObjects;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_OccludeARHitsWith2DObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OccludeARHitsWith2DObjects;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_OccludeARHitsWith2DObjects(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OccludeARHitsWith2DObjects = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::ScaleMode& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_ScaleMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScaleMode;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::ScaleMode const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_ScaleMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScaleMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_ScaleMode(::UnityEngine::XR::Interaction::Toolkit::Interactors::ScaleMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ScaleMode = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_UIPressInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIPressInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_UIPressInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIPressInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_UIPressInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UIPressInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_UIScrollInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIScrollInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_UIScrollInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIScrollInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_UIScrollInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UIScrollInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_TranslateManipulationInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TranslateManipulationInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_TranslateManipulationInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TranslateManipulationInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_TranslateManipulationInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TranslateManipulationInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_RotateManipulationInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotateManipulationInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_RotateManipulationInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RotateManipulationInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_RotateManipulationInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RotateManipulationInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_DirectionalManipulationInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DirectionalManipulationInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_DirectionalManipulationInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DirectionalManipulationInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_DirectionalManipulationInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DirectionalManipulationInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_ScaleToggleInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScaleToggleInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_ScaleToggleInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScaleToggleInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_ScaleToggleInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ScaleToggleInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_ScaleOverTimeInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScaleOverTimeInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_ScaleOverTimeInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScaleOverTimeInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_ScaleOverTimeInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ScaleOverTimeInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_ScaleDistanceDeltaInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScaleDistanceDeltaInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_ScaleDistanceDeltaInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScaleDistanceDeltaInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_ScaleDistanceDeltaInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ScaleDistanceDeltaInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get__currentNearestValidTarget_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentNearestValidTarget_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get__currentNearestValidTarget_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentNearestValidTarget_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set__currentNearestValidTarget_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentNearestValidTarget_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get__rayEndPoint_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rayEndPoint_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get__rayEndPoint_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rayEndPoint_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set__rayEndPoint_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rayEndPoint_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get__rayEndTransform_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rayEndTransform_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get__rayEndTransform_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rayEndTransform_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set__rayEndTransform_k__BackingField(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rayEndTransform_k__BackingField = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get__scaleValue_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleValue_k__BackingField;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get__scaleValue_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleValue_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set__scaleValue_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scaleValue_k__BackingField = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_HasRayOriginTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasRayOriginTransform;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_HasRayOriginTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasRayOriginTransform;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_HasRayOriginTransform(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasRayOriginTransform = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_HasReferenceFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasReferenceFrame;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_HasReferenceFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasReferenceFrame;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_HasReferenceFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasReferenceFrame = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_ScaleInputActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScaleInputActive;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_ScaleInputActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScaleInputActive;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_ScaleInputActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ScaleInputActive = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_ValidTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ValidTargets;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_ValidTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ValidTargets;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_ValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ValidTargets = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::UnityEngine::RaycastHit>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_InteractableRaycastHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractableRaycastHits;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::UnityEngine::RaycastHit>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_InteractableRaycastHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractableRaycastHits;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_InteractableRaycastHits(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::UnityEngine::RaycastHit>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractableRaycastHits = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_LastTimeHoveredObjectChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastTimeHoveredObjectChanged;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_LastTimeHoveredObjectChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastTimeHoveredObjectChanged;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_LastTimeHoveredObjectChanged(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastTimeHoveredObjectChanged = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_PassedHoverTimeToSelect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PassedHoverTimeToSelect;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_PassedHoverTimeToSelect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PassedHoverTimeToSelect;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_PassedHoverTimeToSelect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PassedHoverTimeToSelect = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_LastTimeAutoSelected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastTimeAutoSelected;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_LastTimeAutoSelected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastTimeAutoSelected;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_LastTimeAutoSelected(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastTimeAutoSelected = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_PassedTimeToAutoDeselect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PassedTimeToAutoDeselect;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_PassedTimeToAutoDeselect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PassedTimeToAutoDeselect;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_PassedTimeToAutoDeselect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PassedTimeToAutoDeselect = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_LastUIObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastUIObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_LastUIObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastUIObject;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_LastUIObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastUIObject = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_LastTimeHoveredUIChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastTimeHoveredUIChanged;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_LastTimeHoveredUIChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastTimeHoveredUIChanged;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_LastTimeHoveredUIChanged(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastTimeHoveredUIChanged = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_HoverUISelectActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverUISelectActive;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_HoverUISelectActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverUISelectActive;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_HoverUISelectActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HoverUISelectActive = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_BlockUIAutoDeselect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BlockUIAutoDeselect;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_BlockUIAutoDeselect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BlockUIAutoDeselect;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_BlockUIAutoDeselect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BlockUIAutoDeselect = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_RaycastHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastHits;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_RaycastHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastHits;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_RaycastHits(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RaycastHits = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_RaycastHitsCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastHitsCount;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_RaycastHitsCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastHitsCount;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_RaycastHitsCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RaycastHitsCount = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor_RaycastHitComparer*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_RaycastHitComparer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastHitComparer;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor_RaycastHitComparer* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_RaycastHitComparer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastHitComparer;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_RaycastHitComparer(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor_RaycastHitComparer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RaycastHitComparer = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::XRRayInteractor_SamplePoint>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_SamplePoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SamplePoints;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::XRRayInteractor_SamplePoint>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_SamplePoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SamplePoints;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_SamplePoints(::System::Collections::Generic::List_1<::GlobalNamespace::XRRayInteractor_SamplePoint>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SamplePoints = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_SamplePointsFrameUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SamplePointsFrameUpdated;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_SamplePointsFrameUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SamplePointsFrameUpdated;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_SamplePointsFrameUpdated(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SamplePointsFrameUpdated = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_RaycastHitEndpointIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastHitEndpointIndex;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_RaycastHitEndpointIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastHitEndpointIndex;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_RaycastHitEndpointIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RaycastHitEndpointIndex = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_UIRaycastHitEndpointIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIRaycastHitEndpointIndex;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_UIRaycastHitEndpointIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIRaycastHitEndpointIndex;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_UIRaycastHitEndpointIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UIRaycastHitEndpointIndex = value;
}
constexpr ::ArrayW<::Unity::Mathematics::float3>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_ControlPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControlPoints;
}
constexpr ::ArrayW<::Unity::Mathematics::float3> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_ControlPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControlPoints;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_ControlPoints(::ArrayW<::Unity::Mathematics::float3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ControlPoints = value;
}
constexpr ::ArrayW<::Unity::Mathematics::float3>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_HitChordControlPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HitChordControlPoints;
}
constexpr ::ArrayW<::Unity::Mathematics::float3> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_HitChordControlPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HitChordControlPoints;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_HitChordControlPoints(::ArrayW<::Unity::Mathematics::float3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HitChordControlPoints = value;
}
constexpr ::UnityEngine::PhysicsScene& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_LocalPhysicsScene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocalPhysicsScene;
}
constexpr ::UnityEngine::PhysicsScene const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_LocalPhysicsScene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocalPhysicsScene;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_LocalPhysicsScene(::UnityEngine::PhysicsScene  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LocalPhysicsScene = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_RegisteredUIInteractorCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RegisteredUIInteractorCache;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_RegisteredUIInteractorCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RegisteredUIInteractorCache;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_RegisteredUIInteractorCache(::UnityEngine::XR::Interaction::Toolkit::UI::RegisteredUIInteractorCache*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RegisteredUIInteractorCache = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_RaycastHitOccurred()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastHitOccurred;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_RaycastHitOccurred() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastHitOccurred;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_RaycastHitOccurred(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RaycastHitOccurred = value;
}
constexpr ::UnityEngine::RaycastHit& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_RaycastHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastHit;
}
constexpr ::UnityEngine::RaycastHit const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_RaycastHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastHit;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_RaycastHit(::UnityEngine::RaycastHit  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RaycastHit = value;
}
constexpr ::UnityEngine::EventSystems::RaycastResult& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_UIRaycastHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIRaycastHit;
}
constexpr ::UnityEngine::EventSystems::RaycastResult const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_UIRaycastHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIRaycastHit;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_UIRaycastHit(::UnityEngine::EventSystems::RaycastResult  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UIRaycastHit = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_IsUIHitClosest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsUIHitClosest;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_IsUIHitClosest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsUIHitClosest;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_IsUIHitClosest(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsUIHitClosest = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_RaycastInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastInteractable;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_RaycastInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastInteractable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_RaycastInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RaycastInteractable = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_ActionBasedController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActionBasedController;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_ActionBasedController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActionBasedController;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_ActionBasedController(::UnityW<::UnityEngine::XR::Interaction::Toolkit::ActionBasedController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActionBasedController = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_DeviceBasedController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeviceBasedController;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_DeviceBasedController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeviceBasedController;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_DeviceBasedController(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DeviceBasedController = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_ScreenSpaceController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScreenSpaceController;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_ScreenSpaceController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScreenSpaceController;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_ScreenSpaceController(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRScreenSpaceController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ScreenSpaceController = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_IsActionBasedController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsActionBasedController;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_IsActionBasedController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsActionBasedController;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_IsActionBasedController(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsActionBasedController = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_IsDeviceBasedController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsDeviceBasedController;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_IsDeviceBasedController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsDeviceBasedController;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_IsDeviceBasedController(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsDeviceBasedController = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_IsScreenSpaceController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsScreenSpaceController;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_get_m_IsScreenSpaceController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsScreenSpaceController;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::__cordl_internal_set_m_IsScreenSpaceController(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsScreenSpaceController = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::setStaticF_s_Results(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*, "s_Results", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::getStaticF_s_Results()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*, "s_Results", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::setStaticF_s_SpherecastScratch(::ArrayW<::UnityEngine::RaycastHit>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::RaycastHit>, "s_SpherecastScratch", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(std::forward<::ArrayW<::UnityEngine::RaycastHit>>(value));
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::getStaticF_s_SpherecastScratch()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::RaycastHit>, "s_SpherecastScratch", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::setStaticF_s_OptimalHits(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*, "s_OptimalHits", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(std::forward<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::getStaticF_s_OptimalHits()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*, "s_OptimalHits", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::setStaticF_s_ScratchSamplePoints(::System::Collections::Generic::List_1<::GlobalNamespace::XRRayInteractor_SamplePoint>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::XRRayInteractor_SamplePoint>*, "s_ScratchSamplePoints", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::XRRayInteractor_SamplePoint>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::XRRayInteractor_SamplePoint>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::getStaticF_s_ScratchSamplePoints()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::XRRayInteractor_SamplePoint>*, "s_ScratchSamplePoints", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::setStaticF_s_ScratchControlPoints(::ArrayW<::Unity::Mathematics::float3>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Unity::Mathematics::float3>, "s_ScratchControlPoints", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(std::forward<::ArrayW<::Unity::Mathematics::float3>>(value));
}
inline ::ArrayW<::Unity::Mathematics::float3> UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::getStaticF_s_ScratchControlPoints()  {
return ::cordl_internals::getStaticField<::ArrayW<::Unity::Mathematics::float3>, "s_ScratchControlPoints", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>();
}
inline ::GlobalNamespace::XRRayInteractor_LineType UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_lineType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_lineType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XRRayInteractor_LineType>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_lineType(::GlobalNamespace::XRRayInteractor_LineType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_lineType", {}, {::i2c::type_of<::GlobalNamespace::XRRayInteractor_LineType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_blendVisualLinePoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_blendVisualLinePoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_blendVisualLinePoints(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_blendVisualLinePoints", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_maxRaycastDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_maxRaycastDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_maxRaycastDistance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_maxRaycastDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_rayOriginTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_rayOriginTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_rayOriginTransform(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_rayOriginTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_referenceFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_referenceFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_referenceFrame(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_referenceFrame", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_velocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_velocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_velocity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_velocity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_acceleration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_acceleration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_acceleration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_acceleration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_additionalGroundHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_additionalGroundHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_additionalGroundHeight(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_additionalGroundHeight", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_additionalFlightTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_additionalFlightTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_additionalFlightTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_additionalFlightTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_endPointDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_endPointDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_endPointDistance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_endPointDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_endPointHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_endPointHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_endPointHeight(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_endPointHeight", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_controlPointDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_controlPointDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_controlPointDistance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_controlPointDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_controlPointHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_controlPointHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_controlPointHeight(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_controlPointHeight", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_sampleFrequency()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_sampleFrequency", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_sampleFrequency(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_sampleFrequency", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::XRRayInteractor_HitDetectionType UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_hitDetectionType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_hitDetectionType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XRRayInteractor_HitDetectionType>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_hitDetectionType(::GlobalNamespace::XRRayInteractor_HitDetectionType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_hitDetectionType", {}, {::i2c::type_of<::GlobalNamespace::XRRayInteractor_HitDetectionType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_sphereCastRadius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_sphereCastRadius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_sphereCastRadius(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_sphereCastRadius", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_coneCastAngle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_coneCastAngle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_coneCastAngle(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_coneCastAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_coneCastAngleRadius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_coneCastAngleRadius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_liveConeCastDebugVisuals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_liveConeCastDebugVisuals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_liveConeCastDebugVisuals(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_liveConeCastDebugVisuals", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_raycastMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_raycastMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_raycastMask(::UnityEngine::LayerMask  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_raycastMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::QueryTriggerInteraction UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_raycastTriggerInteraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_raycastTriggerInteraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::QueryTriggerInteraction>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_raycastTriggerInteraction(::UnityEngine::QueryTriggerInteraction  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_raycastTriggerInteraction", {}, {::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::XRRayInteractor_QuerySnapVolumeInteraction UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_raycastSnapVolumeInteraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_raycastSnapVolumeInteraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XRRayInteractor_QuerySnapVolumeInteraction>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_raycastSnapVolumeInteraction(::GlobalNamespace::XRRayInteractor_QuerySnapVolumeInteraction  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_raycastSnapVolumeInteraction", {}, {::i2c::type_of<::GlobalNamespace::XRRayInteractor_QuerySnapVolumeInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_hitClosestOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_hitClosestOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_hitClosestOnly(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_hitClosestOnly", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_hoverToSelect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_hoverToSelect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_hoverToSelect(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_hoverToSelect", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_hoverTimeToSelect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_hoverTimeToSelect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_hoverTimeToSelect(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_hoverTimeToSelect", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_autoDeselect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_autoDeselect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_autoDeselect(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_autoDeselect", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_timeToAutoDeselect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_timeToAutoDeselect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_timeToAutoDeselect(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_timeToAutoDeselect", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_enableUIInteraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_enableUIInteraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_enableUIInteraction(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_enableUIInteraction", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_blockInteractionsWithScreenSpaceUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_blockInteractionsWithScreenSpaceUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_blockInteractionsWithScreenSpaceUI(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_blockInteractionsWithScreenSpaceUI", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_blockUIOnInteractableSelection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_blockUIOnInteractableSelection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_blockUIOnInteractableSelection(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_blockUIOnInteractableSelection", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_manipulateAttachTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_manipulateAttachTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_manipulateAttachTransform(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_manipulateAttachTransform", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_useForceGrab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_useForceGrab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_useForceGrab(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_useForceGrab", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_rotateSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_rotateSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_rotateSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_rotateSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_translateSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_translateSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_translateSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_translateSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_rotateReferenceFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_rotateReferenceFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_rotateReferenceFrame(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_rotateReferenceFrame", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::XRRayInteractor_RotateMode UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_rotateMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_rotateMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XRRayInteractor_RotateMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_rotateMode(::GlobalNamespace::XRRayInteractor_RotateMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_rotateMode", {}, {::i2c::type_of<::GlobalNamespace::XRRayInteractor_RotateMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent* UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_uiHoverEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_uiHoverEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_uiHoverEntered(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_uiHoverEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEnterEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent* UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_uiHoverExited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_uiHoverExited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_uiHoverExited(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_uiHoverExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverExitEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_enableARRaycasting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_enableARRaycasting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_enableARRaycasting(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_enableARRaycasting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_occludeARHitsWith3DObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_occludeARHitsWith3DObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_occludeARHitsWith3DObjects(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_occludeARHitsWith3DObjects", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_occludeARHitsWith2DObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_occludeARHitsWith2DObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_occludeARHitsWith2DObjects(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_occludeARHitsWith2DObjects", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::ScaleMode UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_scaleMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_scaleMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::ScaleMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_scaleMode(::UnityEngine::XR::Interaction::Toolkit::Interactors::ScaleMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_scaleMode", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::ScaleMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_uiPressInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_uiPressInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_uiPressInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_uiPressInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_uiScrollInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_uiScrollInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_uiScrollInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_uiScrollInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_translateManipulationInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_translateManipulationInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_translateManipulationInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_translateManipulationInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_rotateManipulationInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_rotateManipulationInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_rotateManipulationInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_rotateManipulationInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_directionalManipulationInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_directionalManipulationInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_directionalManipulationInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_directionalManipulationInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_scaleToggleInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_scaleToggleInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_scaleToggleInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_scaleToggleInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_scaleOverTimeInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_scaleOverTimeInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_scaleOverTimeInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_scaleOverTimeInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_scaleDistanceDeltaInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_scaleDistanceDeltaInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_scaleDistanceDeltaInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_scaleDistanceDeltaInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_angle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_angle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable* UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_currentNearestValidTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_currentNearestValidTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_currentNearestValidTarget(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_currentNearestValidTarget", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_rayEndPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_rayEndPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_rayEndPoint(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_rayEndPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_rayEndTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_rayEndTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_rayEndTransform(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_rayEndTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_scaleValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_scaleValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_scaleValue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_scaleValue", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_effectiveRayOrigin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_effectiveRayOrigin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_referenceUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_referenceUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_referencePosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_referencePosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_closestAnyHitIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_closestAnyHitIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::OnDrawGizmosSelected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 124}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::DrawQuadraticBezierGizmo(::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"DrawQuadraticBezierGizmo", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p0, p1, p2);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::FindReferenceFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"FindReferenceFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::CreateRayOrigin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"CreateRayOrigin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_GetOrCreateRayOrigin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider.GetOrCreateRayOrigin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_GetOrCreateAttachTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider.GetOrCreateAttachTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_SetRayOrigin(::UnityEngine::Transform*  newOrigin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider.SetRayOrigin", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newOrigin);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRRayProvider_SetAttachTransform(::UnityEngine::Transform*  newAttach)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRRayProvider.SetAttachTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newAttach);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::IsOverUIGameObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"IsOverUIGameObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::IsOverScreenSpaceCanvas()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"IsOverScreenSpaceCanvas", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::GetLinePoints(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>  linePoints, ::by_ref<int32_t>  numPoints, ::System::Nullable_1<::UnityEngine::Ray>  rayOriginOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"GetLinePoints", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Ray>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, linePoints, numPoints, rayOriginOverride);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::GetLinePoints(::by_ref<::ArrayW<::UnityEngine::Vector3>>  linePoints, ::by_ref<int32_t>  numPoints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"GetLinePoints", {}, {::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, linePoints, numPoints);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::GetLineOriginAndDirection(::by_ref<::UnityEngine::Vector3>  origin, ::by_ref<::UnityEngine::Vector3>  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"GetLineOriginAndDirection", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, origin, direction);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::GetLineOriginAndDirection(::System::Nullable_1<::UnityEngine::Ray>  rayOriginOverride, ::by_ref<::UnityEngine::Vector3>  origin, ::by_ref<::UnityEngine::Vector3>  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"GetLineOriginAndDirection", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::Ray>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayOriginOverride, origin, direction);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::GetLineOriginAndDirection(::UnityEngine::Transform*  rayOrigin, ::by_ref<::UnityEngine::Vector3>  origin, ::by_ref<::UnityEngine::Vector3>  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"GetLineOriginAndDirection", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rayOrigin, origin, direction);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::EnsureCapacity(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>  linePoints, int32_t  numPoints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"EnsureCapacity", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, linePoints, numPoints);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::TryGetHitInfo(::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Vector3>  normal, ::by_ref<int32_t>  positionInLine, ::by_ref<bool>  isValidTarget)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"TryGetHitInfo", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position, normal, positionInLine, isValidTarget);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::UpdateUIModel(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>  model)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 125}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, model);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::TryGetUIModel(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>  model)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"TryGetUIModel", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, model);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::TryGetCurrent3DRaycastHit(::by_ref<::UnityEngine::RaycastHit>  raycastHit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"TryGetCurrent3DRaycastHit", {}, {::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, raycastHit);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::TryGetCurrent3DRaycastHit(::by_ref<::UnityEngine::RaycastHit>  raycastHit, ::by_ref<int32_t>  raycastEndpointIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"TryGetCurrent3DRaycastHit", {}, {::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, raycastHit, raycastEndpointIndex);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::TryGetCurrentUIRaycastResult(::by_ref<::UnityEngine::EventSystems::RaycastResult>  raycastResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"TryGetCurrentUIRaycastResult", {}, {::i2c::type_of<::by_ref<::UnityEngine::EventSystems::RaycastResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, raycastResult);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::TryGetCurrentUIRaycastResult(::by_ref<::UnityEngine::EventSystems::RaycastResult>  raycastResult, ::by_ref<int32_t>  raycastEndpointIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"TryGetCurrentUIRaycastResult", {}, {::i2c::type_of<::by_ref<::UnityEngine::EventSystems::RaycastResult>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, raycastResult, raycastEndpointIndex);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::TryGetCurrentRaycast(::by_ref<::System::Nullable_1<::UnityEngine::RaycastHit>>  raycastHit, ::by_ref<int32_t>  raycastHitIndex, ::by_ref<::System::Nullable_1<::UnityEngine::EventSystems::RaycastResult>>  uiRaycastHit, ::by_ref<int32_t>  uiRaycastHitIndex, ::by_ref<bool>  isUIHitClosest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"TryGetCurrentRaycast", {}, {::i2c::type_of<::by_ref<::System::Nullable_1<::UnityEngine::RaycastHit>>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::UnityEngine::EventSystems::RaycastResult>>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, raycastHit, raycastHitIndex, uiRaycastHit, uiRaycastHitIndex, isUIHitClosest);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::CacheRaycastHit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"CacheRaycastHit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::UpdateUIHover()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"UpdateUIHover", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::UpdateBezierControlPoints(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lineOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lineDirection, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveReferenceUp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"UpdateBezierControlPoints", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lineOrigin, lineDirection, curveReferenceUp);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::GetProjectileAngle(::UnityEngine::Vector3  lineDirection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"GetProjectileAngle", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, lineDirection);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::CalculateProjectileParameters(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lineOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lineDirection, ::by_ref<::Unity::Mathematics::float3>  initialVelocity, ::by_ref<::Unity::Mathematics::float3>  constantAcceleration, ::by_ref<float_t>  flightTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"CalculateProjectileParameters", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lineOrigin, lineDirection, initialVelocity, constantAcceleration, flightTime);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::RotateAttachTransform(::UnityEngine::Transform*  attach, float_t  directionAmount)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 126}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attach, directionAmount);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::RotateAttachTransform(::UnityEngine::Transform*  attach, ::UnityEngine::Vector2  direction, ::UnityEngine::Quaternion  referenceRotation)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 127}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attach, direction, referenceRotation);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::TranslateAttachTransform(::UnityEngine::Transform*  rayOrigin, ::UnityEngine::Transform*  attach, float_t  directionAmount)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 128}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayOrigin, attach, directionAmount);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::PreprocessInteractor(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 68}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatePhase);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::ProcessInteractor(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 69}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatePhase);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::ProcessManipulationInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"ProcessManipulationInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::GetValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  targets)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targets);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::CreateSamplePointsListsIfNecessary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"CreateSamplePointsListsIfNecessary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::UpdateSamplePointsIfNecessary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"UpdateSamplePointsIfNecessary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::UpdateSamplePoints(int32_t  count, ::System::Collections::Generic::List_1<::GlobalNamespace::XRRayInteractor_SamplePoint>*  samplePoints, ::System::Nullable_1<::UnityEngine::Ray>  rayOriginOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"UpdateSamplePoints", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::XRRayInteractor_SamplePoint>*>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Ray>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count, samplePoints, rayOriginOverride);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::UpdateRaycastHits()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"UpdateRaycastHits", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::CheckCollidersBetweenPoints(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, ::UnityEngine::Vector3  origin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"CheckCollidersBetweenPoints", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to, origin);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::FilteredConecast(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  direction, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  origin, ::ArrayW<::UnityEngine::RaycastHit>  results, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"FilteredConecast", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, from, direction, origin, results, maxDistance, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::FilterOutTriggerColliders(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  manager, ::ArrayW<::UnityEngine::RaycastHit>  raycastHits, int32_t  raycastHitCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"FilterOutTriggerColliders", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, manager, raycastHits, raycastHitCount);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::FilterTriggerColliders(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  interactionManager, ::ArrayW<::UnityEngine::RaycastHit>  raycastHits, int32_t  count, ::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>,bool>*  removeRule)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"FilterTriggerColliders", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, interactionManager, raycastHits, count, removeRule);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::RemoveAt(::ArrayW<T>  array, int32_t  index, int32_t  count)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                    {"RemoveAt", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, index, count);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::CreateBezierCurve(::System::Collections::Generic::List_1<::GlobalNamespace::XRRayInteractor_SamplePoint>*  samplePoints, int32_t  endSamplePointIndex, ::ArrayW<::Unity::Mathematics::float3>  quadraticControlPoints, ::System::Nullable_1<::UnityEngine::Ray>  rayOriginOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"CreateBezierCurve", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::XRRayInteractor_SamplePoint>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Unity::Mathematics::float3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Ray>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, samplePoints, endSamplePointIndex, quadraticControlPoints, rayOriginOverride);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_isSelectActive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 60}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::CanHover(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 65}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::CanSelect(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::GetHoverTimeToSelect(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 129}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, interactable);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::GetTimeToAutoDeselect(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 130}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 76}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 78}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::UnityEngine_XR_Interaction_Toolkit_UI_IUIHoverInteractor_OnUIHoverEntered(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.UI.IUIHoverInteractor.OnUIHoverEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::UnityEngine_XR_Interaction_Toolkit_UI_IUIHoverInteractor_OnUIHoverExited(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.UI.IUIHoverInteractor.OnUIHoverExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::OnUIHoverEntered(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 131}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::OnUIHoverExited(::UnityEngine::XR::Interaction::Toolkit::UI::UIHoverEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 132}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::RestoreAttachTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"RestoreAttachTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::SanitizeSampleFrequency(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"SanitizeSampleFrequency", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_Velocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_Velocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_Velocity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_Velocity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_Acceleration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_Acceleration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_Acceleration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_Acceleration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_AdditionalFlightTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_AdditionalFlightTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_AdditionalFlightTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_AdditionalFlightTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_Angle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_Angle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_originalAttachTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_originalAttachTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_originalAttachTransform(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_originalAttachTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::GetLinePoints(::by_ref<::ArrayW<::UnityEngine::Vector3>>  linePoints, ::by_ref<int32_t>  numPoints, int32_t  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"GetLinePoints", {}, {::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, linePoints, numPoints, _);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::TryGetHitInfo(::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Vector3>  normal, ::by_ref<int32_t>  positionInLine, ::by_ref<bool>  isValidTarget, int32_t  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"TryGetHitInfo", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position, normal, positionInLine, isValidTarget, _);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::GetCurrentRaycastHit(::by_ref<::UnityEngine::RaycastHit>  raycastHit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"GetCurrentRaycastHit", {}, {::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, raycastHit);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_allowAnchorControl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_allowAnchorControl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_allowAnchorControl(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_allowAnchorControl", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_anchorRotateReferenceFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_anchorRotateReferenceFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_anchorRotateReferenceFrame(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_anchorRotateReferenceFrame", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::XRRayInteractor_AnchorRotationMode UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_anchorRotationMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"get_anchorRotationMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XRRayInteractor_AnchorRotationMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::set_anchorRotationMode(::GlobalNamespace::XRRayInteractor_AnchorRotationMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"set_anchorRotationMode", {}, {::i2c::type_of<::GlobalNamespace::XRRayInteractor_AnchorRotationMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::get_isUISelectActive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 103}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::ProcessManipulationInputDeviceBasedController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"ProcessManipulationInputDeviceBasedController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::ProcessManipulationInputActionBasedController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"ProcessManipulationInputActionBasedController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::ProcessManipulationInputScreenSpaceController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"ProcessManipulationInputScreenSpaceController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::RotateAnchor(::UnityEngine::Transform*  anchor, float_t  directionAmount)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 133}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor, directionAmount);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::RotateAnchor(::UnityEngine::Transform*  anchor, ::UnityEngine::Vector2  direction, ::UnityEngine::Quaternion  referenceRotation)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 134}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor, direction, referenceRotation);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::TranslateAnchor(::UnityEngine::Transform*  rayOrigin, ::UnityEngine::Transform*  anchor, float_t  directionAmount)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 135}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayOrigin, anchor, directionAmount);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::TryRead2DAxis(::UnityEngine::InputSystem::InputAction*  action, ::by_ref<::UnityEngine::Vector2>  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"TryRead2DAxis", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, action, output);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::TryReadButton(::UnityEngine::InputSystem::InputAction*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {"TryReadButton", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, action);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::OnXRControllerChanged()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(), 104}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor* UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IAdvancedLineRenderable"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::operator ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IAdvancedLineRenderable*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IAdvancedLineRenderable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IAdvancedLineRenderable"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IAdvancedLineRenderable* UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::i___UnityEngine__XR__Interaction__Toolkit__Interactors__Visuals__IAdvancedLineRenderable() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IAdvancedLineRenderable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ILineRenderable"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::operator ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ILineRenderable*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ILineRenderable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ILineRenderable"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ILineRenderable* UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::i___UnityEngine__XR__Interaction__Toolkit__Interactors__Visuals__ILineRenderable() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ILineRenderable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::operator ::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor* UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::i___UnityEngine__XR__Interaction__Toolkit__UI__IUIHoverInteractor() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::IUIHoverInteractor*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::operator ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::i___UnityEngine__XR__Interaction__Toolkit__UI__IUIInteractor() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::operator ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider* UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRRayProvider() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::operator ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider* UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRScaleValueProvider() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor::XRRayInteractor()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4807d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c._FilterOutTriggerColliders_b__316_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c::_FilterOutTriggerColliders_b__316_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb4807e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c*>(),
                        {"<FilterOutTriggerColliders>b__316_0", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c._FilterOutTriggerColliders_b__316_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c::_FilterOutTriggerColliders_b__316_1)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb48083c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c*>(),
                        {"<FilterOutTriggerColliders>b__316_1", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c::setStaticF___9(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c*, "<>9", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c*>(std::forward<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c*>(value));
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c* UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c*, "<>9", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c::setStaticF___9__316_0(::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>,bool>*, "<>9__316_0", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c*>(std::forward<::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>,bool>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>,bool>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c::getStaticF___9__316_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>,bool>*, "<>9__316_0", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c::setStaticF___9__316_1(::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>,bool>*, "<>9__316_1", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c*>(std::forward<::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>,bool>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>,bool>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c::getStaticF___9__316_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>,bool>*, "<>9__316_1", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c::_FilterOutTriggerColliders_b__316_0(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*  snapVolume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c*>(),
                        {"<FilterOutTriggerColliders>b__316_0", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, snapVolume);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c::_FilterOutTriggerColliders_b__316_1(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*  snapVolume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c*>(),
                        {"<FilterOutTriggerColliders>b__316_1", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, snapVolume);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c* UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor___c::XRRayInteractor___c()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor_RaycastHitComparer.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor_RaycastHitComparer::*)(::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor_RaycastHitComparer::Compare)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xb480648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor_RaycastHitComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor_RaycastHitComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor_RaycastHitComparer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor_RaycastHitComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4804d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor_RaycastHitComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor_RaycastHitComparer::Compare(::UnityEngine::RaycastHit  a, ::UnityEngine::RaycastHit  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor_RaycastHitComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor_RaycastHitComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor_RaycastHitComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor_RaycastHitComparer* UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor_RaycastHitComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor_RaycastHitComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor_RaycastHitComparer::operator ::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor_RaycastHitComparer::i___System__Collections__Generic__IComparer_1___UnityEngine__RaycastHit_() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor_RaycastHitComparer::XRRayInteractor_RaycastHitComparer()   {
}
