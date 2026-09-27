#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/Casters/CurveInteractionCaster.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Casters/zzzz__CurveInteractionCaster_HitDetectionType_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Casters/zzzz__CurveInteractionCaster_QuerySnapVolumeInteraction_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Casters/zzzz__InteractionCasterBase_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__QueryUIDocumentInteraction_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__PhysicsScene_impl.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Casters/zzzz__CurveInteractionCaster_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Casters/zzzz__CurveInteractionCaster_HitDetectionType_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Casters/zzzz__CurveInteractionCaster_QuerySnapVolumeInteraction_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Casters/zzzz__CurveInteractionCaster_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Casters/zzzz__ICurveInteractionCaster_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Casters/zzzz__IInteractionCaster_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__IUIModelUpdater_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__QueryUIDocumentInteraction_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TrackedDeviceModel_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionManager_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.get_samplePoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::get_samplePoints)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb48d8fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"get_samplePoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.set_samplePoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::set_samplePoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48d908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"set_samplePoints", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.get_lastSamplePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::get_lastSamplePoint)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb48d910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"get_lastSamplePoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.get_raycastMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::get_raycastMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48d968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"get_raycastMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.set_raycastMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)(::UnityEngine::LayerMask)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::set_raycastMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48d970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"set_raycastMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.get_raycastTriggerInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::QueryTriggerInteraction (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::get_raycastTriggerInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48d978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"get_raycastTriggerInteraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.set_raycastTriggerInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)(::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::set_raycastTriggerInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48d980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"set_raycastTriggerInteraction", {}, {::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.get_raycastSnapVolumeInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CurveInteractionCaster_QuerySnapVolumeInteraction (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::get_raycastSnapVolumeInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48d988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"get_raycastSnapVolumeInteraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.set_raycastSnapVolumeInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)(::GlobalNamespace::CurveInteractionCaster_QuerySnapVolumeInteraction)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::set_raycastSnapVolumeInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48d990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"set_raycastSnapVolumeInteraction", {}, {::i2c::type_of<::GlobalNamespace::CurveInteractionCaster_QuerySnapVolumeInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.get_raycastUIDocumentTriggerInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::QueryUIDocumentInteraction (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::get_raycastUIDocumentTriggerInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48d998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"get_raycastUIDocumentTriggerInteraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.set_raycastUIDocumentTriggerInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)(::UnityEngine::XR::Interaction::Toolkit::UI::QueryUIDocumentInteraction)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::set_raycastUIDocumentTriggerInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48d9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"set_raycastUIDocumentTriggerInteraction", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::QueryUIDocumentInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.get_targetNumCurveSegments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::get_targetNumCurveSegments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48d9a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"get_targetNumCurveSegments", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.set_targetNumCurveSegments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::set_targetNumCurveSegments)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb48d9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"set_targetNumCurveSegments", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.get_hitDetectionType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CurveInteractionCaster_HitDetectionType (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::get_hitDetectionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48d9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"get_hitDetectionType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.set_hitDetectionType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)(::GlobalNamespace::CurveInteractionCaster_HitDetectionType)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::set_hitDetectionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48d9d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"set_hitDetectionType", {}, {::i2c::type_of<::GlobalNamespace::CurveInteractionCaster_HitDetectionType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.get_castDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::get_castDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48d9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"get_castDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.set_castDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::set_castDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48d9e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"set_castDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.get_sphereCastRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::get_sphereCastRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48d9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"get_sphereCastRadius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.set_sphereCastRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::set_sphereCastRadius)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb48d9f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"set_sphereCastRadius", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.get_coneCastAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::get_coneCastAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48da1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"get_coneCastAngle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.set_coneCastAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::set_coneCastAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48da24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"set_coneCastAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.get_coneCastAngleRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::get_coneCastAngleRadius)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xb48da2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"get_coneCastAngleRadius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.get_liveConeCastDebugVisuals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::get_liveConeCastDebugVisuals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48db28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"get_liveConeCastDebugVisuals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.set_liveConeCastDebugVisuals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::set_liveConeCastDebugVisuals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48db30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"set_liveConeCastDebugVisuals", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.get_isDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::get_isDestroyed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48db38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"get_isDestroyed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.set_isDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::set_isDestroyed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48db40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"set_isDestroyed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::Awake)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb48db48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb48dc5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb48dc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::OnDestroy)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb48dc64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.InitializeCaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::InitializeCaster)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xb48dce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.TryGetColliderTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::TryGetColliderTargets)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xb48ddf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.TryGetColliderTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::TryGetColliderTargets)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xb48dfec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"TryGetColliderTargets", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.UpdateInternalData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::UpdateInternalData)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb48e20c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.UpdateSamplePoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::UpdateSamplePoints)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb48e29c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.UpdateSamplePoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::UpdateSamplePoints)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb48e36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.UpdatePhysicscastHits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::UpdatePhysicscastHits)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0xb48e414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.CheckCollidersBetweenPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<::UnityEngine::RaycastHit>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::CheckCollidersBetweenPoints)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0xb48e6ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.FilteredConecast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::RaycastHit>, float_t, int32_t, ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::FilteredConecast)> {
  constexpr static std::size_t size = 0xa0c;
  constexpr static std::size_t addrs = 0xb48e9c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"FilteredConecast", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.FilterOutTriggerColliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*, ::ArrayW<::UnityEngine::RaycastHit>, int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::FilterOutTriggerColliders)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xb48f3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"FilterOutTriggerColliders", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.FilterOutSnapTriggerColliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>, ::ArrayW<::UnityEngine::RaycastHit>, int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::FilterOutSnapTriggerColliders)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xb48f4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"FilterOutSnapTriggerColliders", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.FilterOutNonSnapTriggerColliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>, ::ArrayW<::UnityEngine::RaycastHit>, int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::FilterOutNonSnapTriggerColliders)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xb48f63c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"FilterOutNonSnapTriggerColliders", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.UpdateUIModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>, bool, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::UpdateUIModel)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0xb48f7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"UpdateUIModel", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x60c;
  constexpr static std::size_t addrs = 0xb48fa28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xb490034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster.UnityEngine_XR_Interaction_Toolkit_UI_IUIModelUpdater_UpdateUIModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>, bool, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::UnityEngine_XR_Interaction_Toolkit_UI_IUIModelUpdater_UpdateUIModel)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4902c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.UI.IUIModelUpdater.UpdateUIModel", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get_m_SamplePoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SamplePoints;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> const& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get_m_SamplePoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SamplePoints;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_set_m_SamplePoints(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SamplePoints = value;
}
constexpr ::UnityEngine::LayerMask& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get_m_RaycastMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastMask;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get_m_RaycastMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastMask;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_set_m_RaycastMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RaycastMask = value;
}
constexpr ::UnityEngine::QueryTriggerInteraction& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get_m_RaycastTriggerInteraction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastTriggerInteraction;
}
constexpr ::UnityEngine::QueryTriggerInteraction const& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get_m_RaycastTriggerInteraction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastTriggerInteraction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_set_m_RaycastTriggerInteraction(::UnityEngine::QueryTriggerInteraction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RaycastTriggerInteraction = value;
}
constexpr ::GlobalNamespace::CurveInteractionCaster_QuerySnapVolumeInteraction& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get_m_RaycastSnapVolumeInteraction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastSnapVolumeInteraction;
}
constexpr ::GlobalNamespace::CurveInteractionCaster_QuerySnapVolumeInteraction const& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get_m_RaycastSnapVolumeInteraction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastSnapVolumeInteraction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_set_m_RaycastSnapVolumeInteraction(::GlobalNamespace::CurveInteractionCaster_QuerySnapVolumeInteraction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RaycastSnapVolumeInteraction = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::QueryUIDocumentInteraction& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get_m_RaycastUIDocumentTriggerInteraction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastUIDocumentTriggerInteraction;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::QueryUIDocumentInteraction const& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get_m_RaycastUIDocumentTriggerInteraction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastUIDocumentTriggerInteraction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_set_m_RaycastUIDocumentTriggerInteraction(::UnityEngine::XR::Interaction::Toolkit::UI::QueryUIDocumentInteraction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RaycastUIDocumentTriggerInteraction = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get_m_TargetNumCurveSegments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetNumCurveSegments;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get_m_TargetNumCurveSegments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetNumCurveSegments;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_set_m_TargetNumCurveSegments(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TargetNumCurveSegments = value;
}
constexpr ::GlobalNamespace::CurveInteractionCaster_HitDetectionType& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get_m_HitDetectionType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HitDetectionType;
}
constexpr ::GlobalNamespace::CurveInteractionCaster_HitDetectionType const& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get_m_HitDetectionType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HitDetectionType;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_set_m_HitDetectionType(::GlobalNamespace::CurveInteractionCaster_HitDetectionType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HitDetectionType = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get_m_CastDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CastDistance;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get_m_CastDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CastDistance;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_set_m_CastDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CastDistance = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get_m_SphereCastRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SphereCastRadius;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get_m_SphereCastRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SphereCastRadius;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_set_m_SphereCastRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SphereCastRadius = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get_m_ConeCastAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ConeCastAngle;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get_m_ConeCastAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ConeCastAngle;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_set_m_ConeCastAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ConeCastAngle = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get_m_CachedConeCastAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedConeCastAngle;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get_m_CachedConeCastAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedConeCastAngle;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_set_m_CachedConeCastAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CachedConeCastAngle = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get_m_CachedConeCastRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedConeCastRadius;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get_m_CachedConeCastRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CachedConeCastRadius;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_set_m_CachedConeCastRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CachedConeCastRadius = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get_m_LiveConeCastDebugVisuals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LiveConeCastDebugVisuals;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get_m_LiveConeCastDebugVisuals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LiveConeCastDebugVisuals;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_set_m_LiveConeCastDebugVisuals(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LiveConeCastDebugVisuals = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get__isDestroyed_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDestroyed_k__BackingField;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get__isDestroyed_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDestroyed_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_set__isDestroyed_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isDestroyed_k__BackingField = value;
}
constexpr ::UnityEngine::PhysicsScene& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get_m_LocalPhysicsScene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocalPhysicsScene;
}
constexpr ::UnityEngine::PhysicsScene const& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get_m_LocalPhysicsScene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocalPhysicsScene;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_set_m_LocalPhysicsScene(::UnityEngine::PhysicsScene  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LocalPhysicsScene = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get_m_RaycastHitsCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastHitsCount;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get_m_RaycastHitsCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastHitsCount;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_set_m_RaycastHitsCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RaycastHitsCount = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get_m_RaycastHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastHits;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get_m_RaycastHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastHits;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_set_m_RaycastHits(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RaycastHits = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster_RaycastHitComparer*& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get_m_RaycastHitComparer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastHitComparer;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster_RaycastHitComparer* const& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get_m_RaycastHitComparer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RaycastHitComparer;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_set_m_RaycastHitComparer(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster_RaycastHitComparer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RaycastHitComparer = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::Vector3,float_t>*>*& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get_m_ConeCastDebugInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ConeCastDebugInfo;
}
constexpr ::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::Vector3,float_t>*>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_get_m_ConeCastDebugInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ConeCastDebugInfo;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::__cordl_internal_set_m_ConeCastDebugInfo(::System::Collections::Generic::List_1<::System::Tuple_2<::UnityEngine::Vector3,float_t>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ConeCastDebugInfo = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::setStaticF_s_SpherecastScratch(::ArrayW<::UnityEngine::RaycastHit>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::RaycastHit>, "s_SpherecastScratch", ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(std::forward<::ArrayW<::UnityEngine::RaycastHit>>(value));
}
inline ::ArrayW<::UnityEngine::RaycastHit> UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::getStaticF_s_SpherecastScratch()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::RaycastHit>, "s_SpherecastScratch", ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::setStaticF_s_OptimalHits(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*, "s_OptimalHits", ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(std::forward<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>* UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::getStaticF_s_OptimalHits()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*, "s_OptimalHits", ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>();
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::get_samplePoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"get_samplePoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::set_samplePoints(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"set_samplePoints", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::get_lastSamplePoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"get_lastSamplePoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::LayerMask UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::get_raycastMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"get_raycastMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::set_raycastMask(::UnityEngine::LayerMask  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"set_raycastMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::QueryTriggerInteraction UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::get_raycastTriggerInteraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"get_raycastTriggerInteraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::QueryTriggerInteraction>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::set_raycastTriggerInteraction(::UnityEngine::QueryTriggerInteraction  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"set_raycastTriggerInteraction", {}, {::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::CurveInteractionCaster_QuerySnapVolumeInteraction UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::get_raycastSnapVolumeInteraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"get_raycastSnapVolumeInteraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CurveInteractionCaster_QuerySnapVolumeInteraction>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::set_raycastSnapVolumeInteraction(::GlobalNamespace::CurveInteractionCaster_QuerySnapVolumeInteraction  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"set_raycastSnapVolumeInteraction", {}, {::i2c::type_of<::GlobalNamespace::CurveInteractionCaster_QuerySnapVolumeInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::QueryUIDocumentInteraction UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::get_raycastUIDocumentTriggerInteraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"get_raycastUIDocumentTriggerInteraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::UI::QueryUIDocumentInteraction>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::set_raycastUIDocumentTriggerInteraction(::UnityEngine::XR::Interaction::Toolkit::UI::QueryUIDocumentInteraction  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"set_raycastUIDocumentTriggerInteraction", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::QueryUIDocumentInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::get_targetNumCurveSegments()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"get_targetNumCurveSegments", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::set_targetNumCurveSegments(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"set_targetNumCurveSegments", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::CurveInteractionCaster_HitDetectionType UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::get_hitDetectionType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"get_hitDetectionType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CurveInteractionCaster_HitDetectionType>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::set_hitDetectionType(::GlobalNamespace::CurveInteractionCaster_HitDetectionType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"set_hitDetectionType", {}, {::i2c::type_of<::GlobalNamespace::CurveInteractionCaster_HitDetectionType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::get_castDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"get_castDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::set_castDistance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"set_castDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::get_sphereCastRadius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"get_sphereCastRadius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::set_sphereCastRadius(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"set_sphereCastRadius", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::get_coneCastAngle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"get_coneCastAngle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::set_coneCastAngle(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"set_coneCastAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::get_coneCastAngleRadius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"get_coneCastAngleRadius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::get_liveConeCastDebugVisuals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"get_liveConeCastDebugVisuals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::set_liveConeCastDebugVisuals(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"set_liveConeCastDebugVisuals", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::get_isDestroyed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"get_isDestroyed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::set_isDestroyed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"set_isDestroyed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::InitializeCaster()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::TryGetColliderTargets(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  interactionManager, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  targets)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactionManager, targets);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::TryGetColliderTargets(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  interactionManager, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  targets, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*  raycastHits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"TryGetColliderTargets", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactionManager, targets, raycastHits);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::UpdateInternalData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::UpdateSamplePoints()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::UpdateSamplePoints(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  origin, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  direction, float_t  totalDistance, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  points)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, origin, direction, totalDistance, points);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::UpdatePhysicscastHits(/* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>  interactionManager)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactionManager);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::CheckCollidersBetweenPoints(/* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>  interactionManager, ::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, ::UnityEngine::Vector3  origin, ::ArrayW<::UnityEngine::RaycastHit>  raycastHits)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, interactionManager, from, to, origin, raycastHits);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::FilteredConecast(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  interactionManager, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  direction, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  origin, ::ArrayW<::UnityEngine::RaycastHit>  results, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"FilteredConecast", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, interactionManager, from, direction, origin, results, maxDistance, layerMask, queryTriggerInteraction);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::FilterOutTriggerColliders(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  interactionManager, ::ArrayW<::UnityEngine::RaycastHit>  raycastHits, int32_t  raycastHitCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"FilterOutTriggerColliders", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, interactionManager, raycastHits, raycastHitCount);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::FilterOutSnapTriggerColliders(/* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>  interactionManager, ::ArrayW<::UnityEngine::RaycastHit>  raycastHits, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"FilterOutSnapTriggerColliders", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, interactionManager, raycastHits, count);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::FilterOutNonSnapTriggerColliders(/* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>  interactionManager, ::ArrayW<::UnityEngine::RaycastHit>  raycastHits, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"FilterOutNonSnapTriggerColliders", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, interactionManager, raycastHits, count);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::UpdateUIModel(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>  uiModel, bool  isSelectActive, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector2>  scrollDelta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"UpdateUIModel", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, uiModel, isSelectActive, scrollDelta);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::OnDrawGizmosSelected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::UnityEngine_XR_Interaction_Toolkit_UI_IUIModelUpdater_UpdateUIModel(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>  uiModel, bool  isSelectActive, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector2>  scrollDelta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.UI.IUIModelUpdater.UpdateUIModel", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, uiModel, isSelectActive, scrollDelta);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster* UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::operator ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster* UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::i___UnityEngine__XR__Interaction__Toolkit__Interactors__Casters__ICurveInteractionCaster() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::operator ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster* UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::i___UnityEngine__XR__Interaction__Toolkit__Interactors__Casters__IInteractionCaster() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIModelUpdater"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::operator ::UnityEngine::XR::Interaction::Toolkit::UI::IUIModelUpdater*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::IUIModelUpdater*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::UI::IUIModelUpdater"
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::IUIModelUpdater* UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::i___UnityEngine__XR__Interaction__Toolkit__UI__IUIModelUpdater() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::IUIModelUpdater*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster::CurveInteractionCaster()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster_RaycastHitComparer.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster_RaycastHitComparer::*)(::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster_RaycastHitComparer::Compare)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb4902c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster_RaycastHitComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster_RaycastHitComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster_RaycastHitComparer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster_RaycastHitComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb49015c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster_RaycastHitComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster_RaycastHitComparer::Compare(::UnityEngine::RaycastHit  a, ::UnityEngine::RaycastHit  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster_RaycastHitComparer*>(),
                        {"Compare", {}, {::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster_RaycastHitComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster_RaycastHitComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster_RaycastHitComparer* UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster_RaycastHitComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster_RaycastHitComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster_RaycastHitComparer::operator ::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>*() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>* UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster_RaycastHitComparer::i___System__Collections__Generic__IComparer_1___UnityEngine__RaycastHit_() noexcept {
return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::RaycastHit>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::CurveInteractionCaster_RaycastHitComparer::CurveInteractionCaster_RaycastHitComparer()   {
}
