#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/XRSocketInteractor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__SocketScaleMode_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRBaseInteractor_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRSocketInteractor_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Unity/XR/CoreUtils/Collections/zzzz__HashSetList_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRHoverInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRSelectInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRBaseInteractable_MovementType_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRGrabInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__SocketScaleMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRSocketInteractor_ShaderPropertyLookup_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRSocketInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRSocketGrabTransformer_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__TriggerContactMonitor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractableRegisteredEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractableUnregisteredEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractorRegisteredEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractorUnregisteredEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionUpdateOrder_UpdatePhase_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__WaitForFixedUpdate_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.get_showInteractableHoverMeshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::get_showInteractableHoverMeshes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb480898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"get_showInteractableHoverMeshes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.set_showInteractableHoverMeshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::set_showInteractableHoverMeshes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4808a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"set_showInteractableHoverMeshes", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.get_interactableHoverMeshMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::get_interactableHoverMeshMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4808a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"get_interactableHoverMeshMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.set_interactableHoverMeshMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)(::UnityEngine::Material*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::set_interactableHoverMeshMaterial)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4808b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"set_interactableHoverMeshMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.get_interactableCantHoverMeshMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::get_interactableCantHoverMeshMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4808c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"get_interactableCantHoverMeshMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.set_interactableCantHoverMeshMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)(::UnityEngine::Material*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::set_interactableCantHoverMeshMaterial)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4808c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"set_interactableCantHoverMeshMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.get_socketActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::get_socketActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4808d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"get_socketActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.set_socketActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::set_socketActive)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb4808e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"set_socketActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.get_interactableHoverScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::get_interactableHoverScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb480918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"get_interactableHoverScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.set_interactableHoverScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::set_interactableHoverScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb480920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"set_interactableHoverScale", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.get_recycleDelayTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::get_recycleDelayTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb480928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"get_recycleDelayTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.set_recycleDelayTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::set_recycleDelayTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb480930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"set_recycleDelayTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.get_hoverSocketSnapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::get_hoverSocketSnapping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb480938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"get_hoverSocketSnapping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.set_hoverSocketSnapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::set_hoverSocketSnapping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb480940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"set_hoverSocketSnapping", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.get_socketSnappingRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::get_socketSnappingRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb480948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"get_socketSnappingRadius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.set_socketSnappingRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::set_socketSnappingRadius)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb480950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"set_socketSnappingRadius", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.get_socketScaleMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::SocketScaleMode (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::get_socketScaleMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48096c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"get_socketScaleMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.set_socketScaleMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::SocketScaleMode)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::set_socketScaleMode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb480974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"set_socketScaleMode", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::SocketScaleMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.get_fixedScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::get_fixedScale)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb480990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"get_fixedScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.set_fixedScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)(::UnityEngine::Vector3)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::set_fixedScale)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4809a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"set_fixedScale", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.get_targetBoundsSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::get_targetBoundsSize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4809d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"get_targetBoundsSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.set_targetBoundsSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)(::UnityEngine::Vector3)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::set_targetBoundsSize)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb4809e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"set_targetBoundsSize", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.get_unsortedValidTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::get_unsortedValidTargets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb480a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"get_unsortedValidTargets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.get_socketSnappingLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::get_socketSnappingLimit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb480a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 96}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.get_ejectExistingSocketsWhenSnapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::get_ejectExistingSocketsWhenSnapping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb480a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 97}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::OnValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb480a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 98}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::Awake)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb480af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::OnEnable)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xb480bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::OnDisable)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb480d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)(::UnityEngine::Collider*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb480e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.OnTriggerStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)(::UnityEngine::Collider*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::OnTriggerStay)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb480e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)(::UnityEngine::Collider*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::OnTriggerExit)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb480ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.UpdateCollidersAfterOnTriggerStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::UpdateCollidersAfterOnTriggerStay)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb480b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"UpdateCollidersAfterOnTriggerStay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.ProcessInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::ProcessInteractor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb480f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 69}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.CreateDefaultHoverMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::CreateDefaultHoverMaterials)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0xb481024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 99}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.SetMaterialFade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::UnityEngine::Color)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::SetMaterialFade)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0xb48133c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"SetMaterialFade", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.OnHoverEntering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::OnHoverEntering)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0xb4815dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 72}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.OnHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::OnHoverEntered)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb4818fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 73}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.CanHoverSnap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::CanHoverSnap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb4819dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 100}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.OnHoverExiting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::OnHoverExiting)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb481a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 74}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.OnSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::OnSelectEntered)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb481aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 77}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.OnSelectExiting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::OnSelectExiting)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb481ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 78}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.OnSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::OnSelectExited)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb481bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 79}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.GetHoverMeshMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*, ::UnityEngine::MeshFilter*, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::GetHoverMeshMatrix)> {
  constexpr static std::size_t size = 0x810;
  constexpr static std::size_t addrs = 0xb481cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"GetHoverMeshMatrix", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>(), ::i2c::type_of<::UnityEngine::MeshFilter*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.InverseTransformDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Pose, ::UnityEngine::Vector3)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::InverseTransformDirection)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb4824c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"InverseTransformDirection", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.DrawHoveredInteractables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::DrawHoveredInteractables)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0xb482510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 101}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.GetHoveredInteractableMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::GetHoveredInteractableMaterial)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb482908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 102}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.GetValidTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::GetValidTargets)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xb482924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.get_isHoverActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::get_isHoverActive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb482ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 59}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.get_isSelectActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::get_isSelectActive)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb482b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 60}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.get_selectedInteractableMovementTypeOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::GlobalNamespace::XRBaseInteractable_MovementType> (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::get_selectedInteractableMovementTypeOverride)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb482b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.CanHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::CanHover)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb482b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 65}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.get_isHoverRecycleAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::get_isHoverRecycleAllowed)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb480fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"get_isHoverRecycleAllowed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.CanSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::CanSelect)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xb482ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.ShouldDrawHoverMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)(::UnityEngine::MeshFilter*, ::UnityEngine::Renderer*, ::UnityEngine::Camera*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::ShouldDrawHoverMesh)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xb482d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 103}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.OnRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::OnRegistered)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xb482e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 70}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.OnUnregistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::OnUnregistered)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xb482f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 71}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.OnInteractableRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::OnInteractableRegistered)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xb483088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"OnInteractableRegistered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.OnInteractableUnregistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::OnInteractableUnregistered)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb483198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"OnInteractableUnregistered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.OnContactAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::OnContactAdded)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb4831f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"OnContactAdded", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.OnContactRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::OnContactRemoved)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb4832d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"OnContactRemoved", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.ResetCollidersAndValidTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::ResetCollidersAndValidTargets)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb480cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"ResetCollidersAndValidTargets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.StartSocketSnapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::StartSocketSnapping)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0xb483330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 104}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.EndSocketSnapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::EndSocketSnapping)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb483704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 105}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor.SyncTransformerParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::SyncTransformerParams)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb480a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"SyncTransformerParams", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::_ctor)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0xb483770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get_m_ShowInteractableHoverMeshes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ShowInteractableHoverMeshes;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get_m_ShowInteractableHoverMeshes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ShowInteractableHoverMeshes;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_set_m_ShowInteractableHoverMeshes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ShowInteractableHoverMeshes = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get_m_InteractableHoverMeshMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractableHoverMeshMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get_m_InteractableHoverMeshMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractableHoverMeshMaterial;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_set_m_InteractableHoverMeshMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractableHoverMeshMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get_m_InteractableCantHoverMeshMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractableCantHoverMeshMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get_m_InteractableCantHoverMeshMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractableCantHoverMeshMaterial;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_set_m_InteractableCantHoverMeshMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractableCantHoverMeshMaterial = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get_m_SocketActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SocketActive;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get_m_SocketActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SocketActive;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_set_m_SocketActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SocketActive = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get_m_InteractableHoverScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractableHoverScale;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get_m_InteractableHoverScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractableHoverScale;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_set_m_InteractableHoverScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractableHoverScale = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get_m_RecycleDelayTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RecycleDelayTime;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get_m_RecycleDelayTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RecycleDelayTime;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_set_m_RecycleDelayTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RecycleDelayTime = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get_m_LastRemoveTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastRemoveTime;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get_m_LastRemoveTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastRemoveTime;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_set_m_LastRemoveTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastRemoveTime = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get_m_HoverSocketSnapping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverSocketSnapping;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get_m_HoverSocketSnapping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverSocketSnapping;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_set_m_HoverSocketSnapping(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HoverSocketSnapping = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get_m_SocketSnappingRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SocketSnappingRadius;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get_m_SocketSnappingRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SocketSnappingRadius;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_set_m_SocketSnappingRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SocketSnappingRadius = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::SocketScaleMode& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get_m_SocketScaleMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SocketScaleMode;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::SocketScaleMode const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get_m_SocketScaleMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SocketScaleMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_set_m_SocketScaleMode(::UnityEngine::XR::Interaction::Toolkit::Interactors::SocketScaleMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SocketScaleMode = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get_m_FixedScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FixedScale;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get_m_FixedScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FixedScale;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_set_m_FixedScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FixedScale = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get_m_TargetBoundsSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetBoundsSize;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get_m_TargetBoundsSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetBoundsSize;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_set_m_TargetBoundsSize(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TargetBoundsSize = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get__unsortedValidTargets_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unsortedValidTargets_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get__unsortedValidTargets_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unsortedValidTargets_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_set__unsortedValidTargets_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____unsortedValidTargets_k__BackingField = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get_m_StayedColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StayedColliders;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get_m_StayedColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StayedColliders;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_set_m_StayedColliders(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StayedColliders = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get_m_TriggerContactMonitor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TriggerContactMonitor;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get_m_TriggerContactMonitor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TriggerContactMonitor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_set_m_TriggerContactMonitor(::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TriggerContactMonitor = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::ArrayW<::System::ValueTuple_2<::UnityW<::UnityEngine::MeshFilter>,::UnityW<::UnityEngine::Renderer>>>>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get_m_MeshFilterCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MeshFilterCache;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::ArrayW<::System::ValueTuple_2<::UnityW<::UnityEngine::MeshFilter>,::UnityW<::UnityEngine::Renderer>>>>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get_m_MeshFilterCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MeshFilterCache;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_set_m_MeshFilterCache(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::ArrayW<::System::ValueTuple_2<::UnityW<::UnityEngine::MeshFilter>,::UnityW<::UnityEngine::Renderer>>>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MeshFilterCache = value;
}
constexpr ::System::Collections::IEnumerator*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get_m_UpdateCollidersAfterTriggerStay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdateCollidersAfterTriggerStay;
}
constexpr ::System::Collections::IEnumerator* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get_m_UpdateCollidersAfterTriggerStay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdateCollidersAfterTriggerStay;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_set_m_UpdateCollidersAfterTriggerStay(::System::Collections::IEnumerator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UpdateCollidersAfterTriggerStay = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get_m_SocketGrabTransformer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SocketGrabTransformer;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get_m_SocketGrabTransformer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SocketGrabTransformer;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_set_m_SocketGrabTransformer(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSocketGrabTransformer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SocketGrabTransformer = value;
}
constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable>>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get_m_InteractablesWithSocketTransformer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractablesWithSocketTransformer;
}
constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable>>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_get_m_InteractablesWithSocketTransformer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractablesWithSocketTransformer;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::__cordl_internal_set_m_InteractablesWithSocketTransformer(::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractablesWithSocketTransformer = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::setStaticF_s_MeshFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*, "s_MeshFilters", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::getStaticF_s_MeshFilters()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*, "s_MeshFilters", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::setStaticF_s_WaitForFixedUpdate(::UnityEngine::WaitForFixedUpdate*  value)  {
::cordl_internals::setStaticField<::UnityEngine::WaitForFixedUpdate*, "s_WaitForFixedUpdate", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(std::forward<::UnityEngine::WaitForFixedUpdate*>(value));
}
inline ::UnityEngine::WaitForFixedUpdate* UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::getStaticF_s_WaitForFixedUpdate()  {
return ::cordl_internals::getStaticField<::UnityEngine::WaitForFixedUpdate*, "s_WaitForFixedUpdate", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>();
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::get_showInteractableHoverMeshes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"get_showInteractableHoverMeshes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::set_showInteractableHoverMeshes(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"set_showInteractableHoverMeshes", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::get_interactableHoverMeshMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"get_interactableHoverMeshMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::set_interactableHoverMeshMaterial(::UnityEngine::Material*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"set_interactableHoverMeshMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::get_interactableCantHoverMeshMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"get_interactableCantHoverMeshMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::set_interactableCantHoverMeshMaterial(::UnityEngine::Material*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"set_interactableCantHoverMeshMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::get_socketActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"get_socketActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::set_socketActive(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"set_socketActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::get_interactableHoverScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"get_interactableHoverScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::set_interactableHoverScale(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"set_interactableHoverScale", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::get_recycleDelayTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"get_recycleDelayTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::set_recycleDelayTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"set_recycleDelayTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::get_hoverSocketSnapping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"get_hoverSocketSnapping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::set_hoverSocketSnapping(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"set_hoverSocketSnapping", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::get_socketSnappingRadius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"get_socketSnappingRadius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::set_socketSnappingRadius(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"set_socketSnappingRadius", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::SocketScaleMode UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::get_socketScaleMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"get_socketScaleMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::SocketScaleMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::set_socketScaleMode(::UnityEngine::XR::Interaction::Toolkit::Interactors::SocketScaleMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"set_socketScaleMode", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::SocketScaleMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::get_fixedScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"get_fixedScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::set_fixedScale(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"set_fixedScale", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::get_targetBoundsSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"get_targetBoundsSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::set_targetBoundsSize(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"set_targetBoundsSize", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::get_unsortedValidTargets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"get_unsortedValidTargets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*>(this, ___internal_method);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::get_socketSnappingLimit()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 96}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::get_ejectExistingSocketsWhenSnapping()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 97}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::OnValidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 98}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::OnTriggerStay(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline ::System::Collections::IEnumerator* UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::UpdateCollidersAfterOnTriggerStay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"UpdateCollidersAfterOnTriggerStay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::ProcessInteractor(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 69}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatePhase);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::CreateDefaultHoverMaterials()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 99}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::SetMaterialFade(::UnityEngine::Material*  material, ::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"SetMaterialFade", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, color);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 72}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 73}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::CanHoverSnap(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 100}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::OnHoverExiting(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 74}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 77}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 78}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 79}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::GetHoverMeshMatrix(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable, ::UnityEngine::MeshFilter*  meshFilter, float_t  hoverScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"GetHoverMeshMatrix", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>(), ::i2c::type_of<::UnityEngine::MeshFilter*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method, interactable, meshFilter, hoverScale);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::InverseTransformDirection(::UnityEngine::Pose  pose, ::UnityEngine::Vector3  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"InverseTransformDirection", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, pose, direction);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::DrawHoveredInteractables()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 101}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::GetHoveredInteractableMaterial(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 102}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::GetValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  targets)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targets);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::get_isHoverActive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 59}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::get_isSelectActive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 60}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Nullable_1<::GlobalNamespace::XRBaseInteractable_MovementType> UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::get_selectedInteractableMovementTypeOverride()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::GlobalNamespace::XRBaseInteractable_MovementType>>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::CanHover(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 65}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::get_isHoverRecycleAllowed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"get_isHoverRecycleAllowed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::CanSelect(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::ShouldDrawHoverMesh(::UnityEngine::MeshFilter*  meshFilter, ::UnityEngine::Renderer*  meshRenderer, ::UnityEngine::Camera*  mainCamera)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 103}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, meshFilter, meshRenderer, mainCamera);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 70}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 71}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::OnInteractableRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"OnInteractableRegistered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::OnInteractableUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"OnInteractableUnregistered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::OnContactAdded(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"OnContactAdded", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::OnContactRemoved(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"OnContactRemoved", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::ResetCollidersAndValidTargets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"ResetCollidersAndValidTargets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::StartSocketSnapping(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 104}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, grabInteractable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::EndSocketSnapping(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(), 105}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, grabInteractable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::SyncTransformerParams()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {"SyncTransformerParams", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor* UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor::XRSocketInteractor()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb480eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb483c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67::MoveNext)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb483c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb483d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb483d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb483d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67::__cordl_internal_set___4__this(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67* UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67::XRSocketInteractor__UpdateCollidersAfterOnTriggerStay_d__67()   {
}
