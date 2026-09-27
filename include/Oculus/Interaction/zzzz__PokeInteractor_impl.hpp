#pragma once
// IWYU pragma private; include "Oculus/Interaction/PokeInteractor.hpp"
#include "Oculus/Interaction/zzzz__PointerInteractor_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/zzzz__PokeInteractor_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__SurfaceHit_def.hpp"
#include "Oculus/Interaction/zzzz__ITimeConsumer_def.hpp"
#include "Oculus/Interaction/zzzz__PokeInteractable_def.hpp"
#include "Oculus/Interaction/zzzz__PokeInteractor_CachedInteractable_def.hpp"
#include "Oculus/Interaction/zzzz__PokeInteractor_SurfaceHitCache_HitInfo_def.hpp"
#include "Oculus/Interaction/zzzz__PokeInteractor_def.hpp"
#include "Oculus/Interaction/zzzz__ProgressCurve_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.get_ClosestPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::PokeInteractor::*)()>(&::Oculus::Interaction::PokeInteractor::get_ClosestPoint)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4559a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"get_ClosestPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.set_ClosestPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractor::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::PokeInteractor::set_ClosestPoint)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4559b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"set_ClosestPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.get_TouchPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::PokeInteractor::*)()>(&::Oculus::Interaction::PokeInteractor::get_TouchPoint)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4559c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"get_TouchPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.set_TouchPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractor::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::PokeInteractor::set_TouchPoint)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4559d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"set_TouchPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.get_TouchNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::PokeInteractor::*)()>(&::Oculus::Interaction::PokeInteractor::get_TouchNormal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4559e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"get_TouchNormal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.set_TouchNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractor::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::PokeInteractor::set_TouchNormal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4559f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"set_TouchNormal", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.get_Radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PokeInteractor::*)()>(&::Oculus::Interaction::PokeInteractor::get_Radius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa455a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"get_Radius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.get_Origin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::PokeInteractor::*)()>(&::Oculus::Interaction::PokeInteractor::get_Origin)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa455a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"get_Origin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.set_Origin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractor::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::PokeInteractor::set_Origin)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa455a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"set_Origin", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.SetTimeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractor::*)(::System::Func_1<float_t>*)>(&::Oculus::Interaction::PokeInteractor::SetTimeProvider)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa455a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"SetTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.get_IsPassedSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PokeInteractor::*)()>(&::Oculus::Interaction::PokeInteractor::get_IsPassedSurface)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa455a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"get_IsPassedSurface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.set_IsPassedSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractor::*)(bool)>(&::Oculus::Interaction::PokeInteractor::set_IsPassedSurface)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa455a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"set_IsPassedSurface", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractor::*)()>(&::Oculus::Interaction::PokeInteractor::Awake)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa455a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractor::*)()>(&::Oculus::Interaction::PokeInteractor::Start)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa455adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.DoPreprocess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractor::*)()>(&::Oculus::Interaction::PokeInteractor::DoPreprocess)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa455c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.DoPostprocess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractor::*)()>(&::Oculus::Interaction::PokeInteractor::DoPostprocess)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0xa455ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.ComputeShouldSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PokeInteractor::*)()>(&::Oculus::Interaction::PokeInteractor::ComputeShouldSelect)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa45608c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.ComputeShouldUnselect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PokeInteractor::*)()>(&::Oculus::Interaction::PokeInteractor::ComputeShouldUnselect)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa45618c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.GetBackingHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PokeInteractor::*)(::Oculus::Interaction::PokeInteractable*, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>)>(&::Oculus::Interaction::PokeInteractor::GetBackingHit)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4561ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"GetBackingHit", {}, {::i2c::type_of<::Oculus::Interaction::PokeInteractable*>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.GetPatchHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PokeInteractor::*)(::Oculus::Interaction::PokeInteractable*, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>)>(&::Oculus::Interaction::PokeInteractor::GetPatchHit)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa456204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"GetPatchHit", {}, {::i2c::type_of<::Oculus::Interaction::PokeInteractable*>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.InteractableInRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PokeInteractor::*)(::Oculus::Interaction::PokeInteractable*)>(&::Oculus::Interaction::PokeInteractor::InteractableInRange)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0xa45621c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"InteractableInRange", {}, {::i2c::type_of<::Oculus::Interaction::PokeInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.DoHoverUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractor::*)()>(&::Oculus::Interaction::PokeInteractor::DoHoverUpdate)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xa4565a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.ComputeCandidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::PokeInteractable> (::Oculus::Interaction::PokeInteractor::*)()>(&::Oculus::Interaction::PokeInteractor::ComputeCandidate)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa456764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(), 64}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.ComputeCandidateTiebreaker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::PokeInteractor::*)(::Oculus::Interaction::PokeInteractable*, ::Oculus::Interaction::PokeInteractable*)>(&::Oculus::Interaction::PokeInteractor::ComputeCandidateTiebreaker)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa458028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(), 65}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.UpdateInteractablesInRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractor::*)(::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::PokeInteractor_CachedInteractable>*>)>(&::Oculus::Interaction::PokeInteractor::UpdateInteractablesInRange)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0xa45688c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"UpdateInteractablesInRange", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::PokeInteractor_CachedInteractable>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.ComputeSelectCandidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::PokeInteractable> (::Oculus::Interaction::PokeInteractor::*)(::System::Collections::Generic::List_1<::GlobalNamespace::PokeInteractor_CachedInteractable>*)>(&::Oculus::Interaction::PokeInteractor::ComputeSelectCandidate)> {
  constexpr static std::size_t size = 0xe70;
  constexpr static std::size_t addrs = 0xa456c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"ComputeSelectCandidate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::PokeInteractor_CachedInteractable>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.PassesEnterHoverDistanceCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PokeInteractor::*)(::UnityEngine::Vector3, ::Oculus::Interaction::PokeInteractable*)>(&::Oculus::Interaction::PokeInteractor::PassesEnterHoverDistanceCheck)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa4580c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"PassesEnterHoverDistanceCheck", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Oculus::Interaction::PokeInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.MinPokeDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PokeInteractor::*)(::Oculus::Interaction::PokeInteractable*)>(&::Oculus::Interaction::PokeInteractor::MinPokeDepth)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xa4581f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"MinPokeDepth", {}, {::i2c::type_of<::Oculus::Interaction::PokeInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.ComputeHoverCandidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::PokeInteractable> (::Oculus::Interaction::PokeInteractor::*)(::System::Collections::Generic::List_1<::GlobalNamespace::PokeInteractor_CachedInteractable>*)>(&::Oculus::Interaction::PokeInteractor::ComputeHoverCandidate)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0xa457afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"ComputeHoverCandidate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::PokeInteractor_CachedInteractable>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.InteractableSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractor::*)(::Oculus::Interaction::PokeInteractable*)>(&::Oculus::Interaction::PokeInteractor::InteractableSelected)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0xa4583b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.HandleDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractor::*)()>(&::Oculus::Interaction::PokeInteractor::HandleDisabled)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa458700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(), 68}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.ComputePointerPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::PokeInteractor::*)()>(&::Oculus::Interaction::PokeInteractor::ComputePointerPose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa458764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(), 74}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.ComputeDistanceAbove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PokeInteractor::*)(::Oculus::Interaction::PokeInteractable*, ::UnityEngine::Vector3)>(&::Oculus::Interaction::PokeInteractor::ComputeDistanceAbove)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa4581b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"ComputeDistanceAbove", {}, {::i2c::type_of<::Oculus::Interaction::PokeInteractable*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.ComputeDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PokeInteractor::*)(::Oculus::Interaction::PokeInteractable*, ::UnityEngine::Vector3)>(&::Oculus::Interaction::PokeInteractor::ComputeDepth)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa4588d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"ComputeDepth", {}, {::i2c::type_of<::Oculus::Interaction::PokeInteractable*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.ComputePokeDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PokeInteractor::*)(::Oculus::Interaction::PokeInteractable*, ::UnityEngine::Vector3)>(&::Oculus::Interaction::PokeInteractor::ComputePokeDepth)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa45616c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"ComputePokeDepth", {}, {::i2c::type_of<::Oculus::Interaction::PokeInteractable*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.ComputeDistanceFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PokeInteractor::*)(::Oculus::Interaction::PokeInteractable*, ::UnityEngine::Vector3)>(&::Oculus::Interaction::PokeInteractor::ComputeDistanceFrom)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa4588f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"ComputeDistanceFrom", {}, {::i2c::type_of<::Oculus::Interaction::PokeInteractable*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.ComputeTangentDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PokeInteractor::*)(::Oculus::Interaction::PokeInteractable*, ::UnityEngine::Vector3)>(&::Oculus::Interaction::PokeInteractor::ComputeTangentDistance)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa4581d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"ComputeTangentDistance", {}, {::i2c::type_of<::Oculus::Interaction::PokeInteractable*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.SurfaceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PokeInteractor::*)(::Oculus::Interaction::PokeInteractable*)>(&::Oculus::Interaction::PokeInteractor::SurfaceUpdate)> {
  constexpr static std::size_t size = 0x8a8;
  constexpr static std::size_t addrs = 0xa458910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(), 76}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.ShouldCancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PokeInteractor::*)(::Oculus::Interaction::PokeInteractable*)>(&::Oculus::Interaction::PokeInteractor::ShouldCancel)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa4591b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(), 77}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.ShouldRecoil
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PokeInteractor::*)(::Oculus::Interaction::PokeInteractable*)>(&::Oculus::Interaction::PokeInteractor::ShouldRecoil)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0xa459248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(), 78}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.DoSelectUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractor::*)()>(&::Oculus::Interaction::PokeInteractor::DoSelectUpdate)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa45965c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.InjectAllPokeInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractor::*)(::UnityEngine::Transform*, float_t)>(&::Oculus::Interaction::PokeInteractor::InjectAllPokeInteractor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4597e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"InjectAllPokeInteractor", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.InjectPointTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractor::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::PokeInteractor::InjectPointTransform)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa459814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"InjectPointTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.InjectRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractor::*)(float_t)>(&::Oculus::Interaction::PokeInteractor::InjectRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa459824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"InjectRadius", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.InjectOptionalTouchReleaseThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractor::*)(float_t)>(&::Oculus::Interaction::PokeInteractor::InjectOptionalTouchReleaseThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45982c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"InjectOptionalTouchReleaseThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.InjectOptionalEqualDistanceThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractor::*)(float_t)>(&::Oculus::Interaction::PokeInteractor::InjectOptionalEqualDistanceThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa459834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"InjectOptionalEqualDistanceThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor.InjectOptionalTimeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractor::*)(::System::Func_1<float_t>*)>(&::Oculus::Interaction::PokeInteractor::InjectOptionalTimeProvider)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa45983c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"InjectOptionalTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractor::*)()>(&::Oculus::Interaction::PokeInteractor::_ctor)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xa45984c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::PokeInteractor::__cordl_internal_get__pointTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::PokeInteractor::__cordl_internal_get__pointTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointTransform;
}
constexpr void Oculus::Interaction::PokeInteractor::__cordl_internal_set__pointTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pointTransform = value;
}
constexpr float_t& Oculus::Interaction::PokeInteractor::__cordl_internal_get__radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____radius;
}
constexpr float_t const& Oculus::Interaction::PokeInteractor::__cordl_internal_get__radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____radius;
}
constexpr void Oculus::Interaction::PokeInteractor::__cordl_internal_set__radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____radius = value;
}
constexpr float_t& Oculus::Interaction::PokeInteractor::__cordl_internal_get__touchReleaseThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____touchReleaseThreshold;
}
constexpr float_t const& Oculus::Interaction::PokeInteractor::__cordl_internal_get__touchReleaseThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____touchReleaseThreshold;
}
constexpr void Oculus::Interaction::PokeInteractor::__cordl_internal_set__touchReleaseThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____touchReleaseThreshold = value;
}
constexpr float_t& Oculus::Interaction::PokeInteractor::__cordl_internal_get__equalDistanceThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____equalDistanceThreshold;
}
constexpr float_t const& Oculus::Interaction::PokeInteractor::__cordl_internal_get__equalDistanceThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____equalDistanceThreshold;
}
constexpr void Oculus::Interaction::PokeInteractor::__cordl_internal_set__equalDistanceThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____equalDistanceThreshold = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::PokeInteractor::__cordl_internal_get__ClosestPoint_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClosestPoint_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::PokeInteractor::__cordl_internal_get__ClosestPoint_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClosestPoint_k__BackingField;
}
constexpr void Oculus::Interaction::PokeInteractor::__cordl_internal_set__ClosestPoint_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ClosestPoint_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::PokeInteractor::__cordl_internal_get__TouchPoint_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TouchPoint_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::PokeInteractor::__cordl_internal_get__TouchPoint_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TouchPoint_k__BackingField;
}
constexpr void Oculus::Interaction::PokeInteractor::__cordl_internal_set__TouchPoint_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TouchPoint_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::PokeInteractor::__cordl_internal_get__TouchNormal_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TouchNormal_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::PokeInteractor::__cordl_internal_get__TouchNormal_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TouchNormal_k__BackingField;
}
constexpr void Oculus::Interaction::PokeInteractor::__cordl_internal_set__TouchNormal_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TouchNormal_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::PokeInteractor::__cordl_internal_get__Origin_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Origin_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::PokeInteractor::__cordl_internal_get__Origin_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Origin_k__BackingField;
}
constexpr void Oculus::Interaction::PokeInteractor::__cordl_internal_set__Origin_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Origin_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::PokeInteractor::__cordl_internal_get__previousPokeOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousPokeOrigin;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::PokeInteractor::__cordl_internal_get__previousPokeOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousPokeOrigin;
}
constexpr void Oculus::Interaction::PokeInteractor::__cordl_internal_set__previousPokeOrigin(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousPokeOrigin = value;
}
constexpr ::UnityW<::Oculus::Interaction::PokeInteractable>& Oculus::Interaction::PokeInteractor::__cordl_internal_get__previousCandidate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousCandidate;
}
constexpr ::UnityW<::Oculus::Interaction::PokeInteractable> const& Oculus::Interaction::PokeInteractor::__cordl_internal_get__previousCandidate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousCandidate;
}
constexpr void Oculus::Interaction::PokeInteractor::__cordl_internal_set__previousCandidate(::UnityW<::Oculus::Interaction::PokeInteractable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousCandidate = value;
}
constexpr ::UnityW<::Oculus::Interaction::PokeInteractable>& Oculus::Interaction::PokeInteractor::__cordl_internal_get__hitInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hitInteractable;
}
constexpr ::UnityW<::Oculus::Interaction::PokeInteractable> const& Oculus::Interaction::PokeInteractor::__cordl_internal_get__hitInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hitInteractable;
}
constexpr void Oculus::Interaction::PokeInteractor::__cordl_internal_set__hitInteractable(::UnityW<::Oculus::Interaction::PokeInteractable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hitInteractable = value;
}
constexpr ::UnityW<::Oculus::Interaction::PokeInteractable>& Oculus::Interaction::PokeInteractor::__cordl_internal_get__recoilInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recoilInteractable;
}
constexpr ::UnityW<::Oculus::Interaction::PokeInteractable> const& Oculus::Interaction::PokeInteractor::__cordl_internal_get__recoilInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recoilInteractable;
}
constexpr void Oculus::Interaction::PokeInteractor::__cordl_internal_set__recoilInteractable(::UnityW<::Oculus::Interaction::PokeInteractable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recoilInteractable = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::PokeInteractor::__cordl_internal_get__previousSurfacePointLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousSurfacePointLocal;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::PokeInteractor::__cordl_internal_get__previousSurfacePointLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousSurfacePointLocal;
}
constexpr void Oculus::Interaction::PokeInteractor::__cordl_internal_set__previousSurfacePointLocal(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousSurfacePointLocal = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::PokeInteractor::__cordl_internal_get__firstTouchPointLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstTouchPointLocal;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::PokeInteractor::__cordl_internal_get__firstTouchPointLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____firstTouchPointLocal;
}
constexpr void Oculus::Interaction::PokeInteractor::__cordl_internal_set__firstTouchPointLocal(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____firstTouchPointLocal = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::PokeInteractor::__cordl_internal_get__targetTouchPointLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetTouchPointLocal;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::PokeInteractor::__cordl_internal_get__targetTouchPointLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetTouchPointLocal;
}
constexpr void Oculus::Interaction::PokeInteractor::__cordl_internal_set__targetTouchPointLocal(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetTouchPointLocal = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::PokeInteractor::__cordl_internal_get__easeTouchPointLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____easeTouchPointLocal;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::PokeInteractor::__cordl_internal_get__easeTouchPointLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____easeTouchPointLocal;
}
constexpr void Oculus::Interaction::PokeInteractor::__cordl_internal_set__easeTouchPointLocal(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____easeTouchPointLocal = value;
}
constexpr bool& Oculus::Interaction::PokeInteractor::__cordl_internal_get__isRecoiled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isRecoiled;
}
constexpr bool const& Oculus::Interaction::PokeInteractor::__cordl_internal_get__isRecoiled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isRecoiled;
}
constexpr void Oculus::Interaction::PokeInteractor::__cordl_internal_set__isRecoiled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isRecoiled = value;
}
constexpr bool& Oculus::Interaction::PokeInteractor::__cordl_internal_get__isDragging()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDragging;
}
constexpr bool const& Oculus::Interaction::PokeInteractor::__cordl_internal_get__isDragging() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDragging;
}
constexpr void Oculus::Interaction::PokeInteractor::__cordl_internal_set__isDragging(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isDragging = value;
}
constexpr ::Oculus::Interaction::ProgressCurve*& Oculus::Interaction::PokeInteractor::__cordl_internal_get__dragEaseCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dragEaseCurve;
}
constexpr ::Oculus::Interaction::ProgressCurve* const& Oculus::Interaction::PokeInteractor::__cordl_internal_get__dragEaseCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dragEaseCurve;
}
constexpr void Oculus::Interaction::PokeInteractor::__cordl_internal_set__dragEaseCurve(::Oculus::Interaction::ProgressCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dragEaseCurve = value;
}
constexpr ::Oculus::Interaction::ProgressCurve*& Oculus::Interaction::PokeInteractor::__cordl_internal_get__pinningResyncCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pinningResyncCurve;
}
constexpr ::Oculus::Interaction::ProgressCurve* const& Oculus::Interaction::PokeInteractor::__cordl_internal_get__pinningResyncCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pinningResyncCurve;
}
constexpr void Oculus::Interaction::PokeInteractor::__cordl_internal_set__pinningResyncCurve(::Oculus::Interaction::ProgressCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pinningResyncCurve = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::PokeInteractor::__cordl_internal_get__dragCompareSurfacePointLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dragCompareSurfacePointLocal;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::PokeInteractor::__cordl_internal_get__dragCompareSurfacePointLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dragCompareSurfacePointLocal;
}
constexpr void Oculus::Interaction::PokeInteractor::__cordl_internal_set__dragCompareSurfacePointLocal(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dragCompareSurfacePointLocal = value;
}
constexpr float_t& Oculus::Interaction::PokeInteractor::__cordl_internal_get__maxDistanceFromFirstTouchPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDistanceFromFirstTouchPoint;
}
constexpr float_t const& Oculus::Interaction::PokeInteractor::__cordl_internal_get__maxDistanceFromFirstTouchPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDistanceFromFirstTouchPoint;
}
constexpr void Oculus::Interaction::PokeInteractor::__cordl_internal_set__maxDistanceFromFirstTouchPoint(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxDistanceFromFirstTouchPoint = value;
}
constexpr float_t& Oculus::Interaction::PokeInteractor::__cordl_internal_get__recoilVelocityExpansion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recoilVelocityExpansion;
}
constexpr float_t const& Oculus::Interaction::PokeInteractor::__cordl_internal_get__recoilVelocityExpansion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recoilVelocityExpansion;
}
constexpr void Oculus::Interaction::PokeInteractor::__cordl_internal_set__recoilVelocityExpansion(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recoilVelocityExpansion = value;
}
constexpr float_t& Oculus::Interaction::PokeInteractor::__cordl_internal_get__selectMaxDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectMaxDepth;
}
constexpr float_t const& Oculus::Interaction::PokeInteractor::__cordl_internal_get__selectMaxDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectMaxDepth;
}
constexpr void Oculus::Interaction::PokeInteractor::__cordl_internal_set__selectMaxDepth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectMaxDepth = value;
}
constexpr float_t& Oculus::Interaction::PokeInteractor::__cordl_internal_get__reEnterDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reEnterDepth;
}
constexpr float_t const& Oculus::Interaction::PokeInteractor::__cordl_internal_get__reEnterDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reEnterDepth;
}
constexpr void Oculus::Interaction::PokeInteractor::__cordl_internal_set__reEnterDepth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reEnterDepth = value;
}
constexpr float_t& Oculus::Interaction::PokeInteractor::__cordl_internal_get__lastUpdateTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastUpdateTime;
}
constexpr float_t const& Oculus::Interaction::PokeInteractor::__cordl_internal_get__lastUpdateTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastUpdateTime;
}
constexpr void Oculus::Interaction::PokeInteractor::__cordl_internal_set__lastUpdateTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastUpdateTime = value;
}
constexpr ::System::Func_1<float_t>*& Oculus::Interaction::PokeInteractor::__cordl_internal_get__timeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProvider;
}
constexpr ::System::Func_1<float_t>* const& Oculus::Interaction::PokeInteractor::__cordl_internal_get__timeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProvider;
}
constexpr void Oculus::Interaction::PokeInteractor::__cordl_internal_set__timeProvider(::System::Func_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeProvider = value;
}
constexpr bool& Oculus::Interaction::PokeInteractor::__cordl_internal_get__isPassedSurface()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isPassedSurface;
}
constexpr bool const& Oculus::Interaction::PokeInteractor::__cordl_internal_get__isPassedSurface() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isPassedSurface;
}
constexpr void Oculus::Interaction::PokeInteractor::__cordl_internal_set__isPassedSurface(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isPassedSurface = value;
}
constexpr ::System::Action_1<bool>*& Oculus::Interaction::PokeInteractor::__cordl_internal_get_WhenPassedSurfaceChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenPassedSurfaceChanged;
}
constexpr ::System::Action_1<bool>* const& Oculus::Interaction::PokeInteractor::__cordl_internal_get_WhenPassedSurfaceChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenPassedSurfaceChanged;
}
constexpr void Oculus::Interaction::PokeInteractor::__cordl_internal_set_WhenPassedSurfaceChanged(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenPassedSurfaceChanged = value;
}
constexpr ::Oculus::Interaction::PokeInteractor_SurfaceHitCache*& Oculus::Interaction::PokeInteractor::__cordl_internal_get__hitCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hitCache;
}
constexpr ::Oculus::Interaction::PokeInteractor_SurfaceHitCache* const& Oculus::Interaction::PokeInteractor::__cordl_internal_get__hitCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hitCache;
}
constexpr void Oculus::Interaction::PokeInteractor::__cordl_internal_set__hitCache(::Oculus::Interaction::PokeInteractor_SurfaceHitCache*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hitCache = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Oculus::Interaction::PokeInteractable>,::UnityEngine::Matrix4x4>*& Oculus::Interaction::PokeInteractor::__cordl_internal_get__previousSurfaceTransformMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousSurfaceTransformMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Oculus::Interaction::PokeInteractable>,::UnityEngine::Matrix4x4>* const& Oculus::Interaction::PokeInteractor::__cordl_internal_get__previousSurfaceTransformMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousSurfaceTransformMap;
}
constexpr void Oculus::Interaction::PokeInteractor::__cordl_internal_set__previousSurfaceTransformMap(::System::Collections::Generic::Dictionary_2<::UnityW<::Oculus::Interaction::PokeInteractable>,::UnityEngine::Matrix4x4>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousSurfaceTransformMap = value;
}
constexpr float_t& Oculus::Interaction::PokeInteractor::__cordl_internal_get__previousDragCurveProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousDragCurveProgress;
}
constexpr float_t const& Oculus::Interaction::PokeInteractor::__cordl_internal_get__previousDragCurveProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousDragCurveProgress;
}
constexpr void Oculus::Interaction::PokeInteractor::__cordl_internal_set__previousDragCurveProgress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousDragCurveProgress = value;
}
constexpr float_t& Oculus::Interaction::PokeInteractor::__cordl_internal_get__previousPinningCurveProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousPinningCurveProgress;
}
constexpr float_t const& Oculus::Interaction::PokeInteractor::__cordl_internal_get__previousPinningCurveProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousPinningCurveProgress;
}
constexpr void Oculus::Interaction::PokeInteractor::__cordl_internal_set__previousPinningCurveProgress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousPinningCurveProgress = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PokeInteractor_CachedInteractable>*& Oculus::Interaction::PokeInteractor::__cordl_internal_get__cachedInteractablesInRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedInteractablesInRange;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PokeInteractor_CachedInteractable>* const& Oculus::Interaction::PokeInteractor::__cordl_internal_get__cachedInteractablesInRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedInteractablesInRange;
}
constexpr void Oculus::Interaction::PokeInteractor::__cordl_internal_set__cachedInteractablesInRange(::System::Collections::Generic::List_1<::GlobalNamespace::PokeInteractor_CachedInteractable>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedInteractablesInRange = value;
}
inline ::UnityEngine::Vector3 Oculus::Interaction::PokeInteractor::get_ClosestPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"get_ClosestPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Oculus::Interaction::PokeInteractor::set_ClosestPoint(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"set_ClosestPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::PokeInteractor::get_TouchPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"get_TouchPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Oculus::Interaction::PokeInteractor::set_TouchPoint(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"set_TouchPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::PokeInteractor::get_TouchNormal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"get_TouchNormal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Oculus::Interaction::PokeInteractor::set_TouchNormal(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"set_TouchNormal", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::PokeInteractor::get_Radius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"get_Radius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::PokeInteractor::get_Origin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"get_Origin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Oculus::Interaction::PokeInteractor::set_Origin(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"set_Origin", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::PokeInteractor::SetTimeProvider(::System::Func_1<float_t>*  timeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"SetTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeProvider);
}
inline bool Oculus::Interaction::PokeInteractor::get_IsPassedSurface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"get_IsPassedSurface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::PokeInteractor::set_IsPassedSurface(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"set_IsPassedSurface", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::PokeInteractor::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PokeInteractor::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PokeInteractor::DoPreprocess()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PokeInteractor::DoPostprocess()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::PokeInteractor::ComputeShouldSelect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::PokeInteractor::ComputeShouldUnselect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::PokeInteractor::GetBackingHit(::Oculus::Interaction::PokeInteractable*  interactable, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"GetBackingHit", {}, {::i2c::type_of<::Oculus::Interaction::PokeInteractable*>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable, hit);
}
inline bool Oculus::Interaction::PokeInteractor::GetPatchHit(::Oculus::Interaction::PokeInteractable*  interactable, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"GetPatchHit", {}, {::i2c::type_of<::Oculus::Interaction::PokeInteractable*>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable, hit);
}
inline bool Oculus::Interaction::PokeInteractor::InteractableInRange(::Oculus::Interaction::PokeInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"InteractableInRange", {}, {::i2c::type_of<::Oculus::Interaction::PokeInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable);
}
inline void Oculus::Interaction::PokeInteractor::DoHoverUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::Oculus::Interaction::PokeInteractable> Oculus::Interaction::PokeInteractor::ComputeCandidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::PokeInteractable>>(this, ___internal_method);
}
inline int32_t Oculus::Interaction::PokeInteractor::ComputeCandidateTiebreaker(::Oculus::Interaction::PokeInteractable*  a, ::Oculus::Interaction::PokeInteractable*  b)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(), 65}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline void Oculus::Interaction::PokeInteractor::UpdateInteractablesInRange(::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::PokeInteractor_CachedInteractable>*>  cachedInteractables)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"UpdateInteractablesInRange", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::PokeInteractor_CachedInteractable>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cachedInteractables);
}
inline ::UnityW<::Oculus::Interaction::PokeInteractable> Oculus::Interaction::PokeInteractor::ComputeSelectCandidate(::System::Collections::Generic::List_1<::GlobalNamespace::PokeInteractor_CachedInteractable>*  interactables)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"ComputeSelectCandidate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::PokeInteractor_CachedInteractable>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::PokeInteractable>>(this, ___internal_method, interactables);
}
inline bool Oculus::Interaction::PokeInteractor::PassesEnterHoverDistanceCheck(::UnityEngine::Vector3  position, ::Oculus::Interaction::PokeInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"PassesEnterHoverDistanceCheck", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Oculus::Interaction::PokeInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position, interactable);
}
inline float_t Oculus::Interaction::PokeInteractor::MinPokeDepth(::Oculus::Interaction::PokeInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"MinPokeDepth", {}, {::i2c::type_of<::Oculus::Interaction::PokeInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, interactable);
}
inline ::UnityW<::Oculus::Interaction::PokeInteractable> Oculus::Interaction::PokeInteractor::ComputeHoverCandidate(::System::Collections::Generic::List_1<::GlobalNamespace::PokeInteractor_CachedInteractable>*  interactables)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"ComputeHoverCandidate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::PokeInteractor_CachedInteractable>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::PokeInteractable>>(this, ___internal_method, interactables);
}
inline void Oculus::Interaction::PokeInteractor::InteractableSelected(::Oculus::Interaction::PokeInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void Oculus::Interaction::PokeInteractor::HandleDisabled()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(), 68}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::PokeInteractor::ComputePointerPose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(), 74}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline float_t Oculus::Interaction::PokeInteractor::ComputeDistanceAbove(::Oculus::Interaction::PokeInteractable*  interactable, ::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"ComputeDistanceAbove", {}, {::i2c::type_of<::Oculus::Interaction::PokeInteractable*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, interactable, point);
}
inline float_t Oculus::Interaction::PokeInteractor::ComputeDepth(::Oculus::Interaction::PokeInteractable*  interactable, ::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"ComputeDepth", {}, {::i2c::type_of<::Oculus::Interaction::PokeInteractable*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, interactable, point);
}
inline float_t Oculus::Interaction::PokeInteractor::ComputePokeDepth(::Oculus::Interaction::PokeInteractable*  interactable, ::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"ComputePokeDepth", {}, {::i2c::type_of<::Oculus::Interaction::PokeInteractable*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, interactable, point);
}
inline float_t Oculus::Interaction::PokeInteractor::ComputeDistanceFrom(::Oculus::Interaction::PokeInteractable*  interactable, ::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"ComputeDistanceFrom", {}, {::i2c::type_of<::Oculus::Interaction::PokeInteractable*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, interactable, point);
}
inline float_t Oculus::Interaction::PokeInteractor::ComputeTangentDistance(::Oculus::Interaction::PokeInteractable*  interactable, ::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"ComputeTangentDistance", {}, {::i2c::type_of<::Oculus::Interaction::PokeInteractable*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, interactable, point);
}
inline bool Oculus::Interaction::PokeInteractor::SurfaceUpdate(::Oculus::Interaction::PokeInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(), 76}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable);
}
inline bool Oculus::Interaction::PokeInteractor::ShouldCancel(::Oculus::Interaction::PokeInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(), 77}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable);
}
inline bool Oculus::Interaction::PokeInteractor::ShouldRecoil(::Oculus::Interaction::PokeInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(), 78}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable);
}
inline void Oculus::Interaction::PokeInteractor::DoSelectUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PokeInteractor::InjectAllPokeInteractor(::UnityEngine::Transform*  pointTransform, float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"InjectAllPokeInteractor", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointTransform, radius);
}
inline void Oculus::Interaction::PokeInteractor::InjectPointTransform(::UnityEngine::Transform*  pointTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"InjectPointTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointTransform);
}
inline void Oculus::Interaction::PokeInteractor::InjectRadius(float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"InjectRadius", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, radius);
}
inline void Oculus::Interaction::PokeInteractor::InjectOptionalTouchReleaseThreshold(float_t  touchReleaseThreshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"InjectOptionalTouchReleaseThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, touchReleaseThreshold);
}
inline void Oculus::Interaction::PokeInteractor::InjectOptionalEqualDistanceThreshold(float_t  equalDistanceThreshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"InjectOptionalEqualDistanceThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, equalDistanceThreshold);
}
inline void Oculus::Interaction::PokeInteractor::InjectOptionalTimeProvider(::System::Func_1<float_t>*  timeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {"InjectOptionalTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeProvider);
}
inline void Oculus::Interaction::PokeInteractor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PokeInteractor* Oculus::Interaction::PokeInteractor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PokeInteractor*>());
}
/// @brief Convert operator to "::Oculus::Interaction::ITimeConsumer"
constexpr  Oculus::Interaction::PokeInteractor::operator ::Oculus::Interaction::ITimeConsumer*() noexcept {
return static_cast<::Oculus::Interaction::ITimeConsumer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ITimeConsumer"
constexpr ::Oculus::Interaction::ITimeConsumer* Oculus::Interaction::PokeInteractor::i___Oculus__Interaction__ITimeConsumer() noexcept {
return static_cast<::Oculus::Interaction::ITimeConsumer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PokeInteractor::PokeInteractor()   {
}
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractor___c::*)()>(&::Oculus::Interaction::PokeInteractor___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45a078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor___c.__ctor_b__89_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PokeInteractor___c::*)()>(&::Oculus::Interaction::PokeInteractor___c::__ctor_b__89_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45a080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor___c*>(),
                        {"<.ctor>b__89_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor___c.__ctor_b__89_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractor___c::*)(bool)>(&::Oculus::Interaction::PokeInteractor___c::__ctor_b__89_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa45a088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor___c*>(),
                        {"<.ctor>b__89_1", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::PokeInteractor___c::setStaticF___9(::Oculus::Interaction::PokeInteractor___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::PokeInteractor___c*, "<>9", ::Oculus::Interaction::PokeInteractor___c*>(std::forward<::Oculus::Interaction::PokeInteractor___c*>(value));
}
inline ::Oculus::Interaction::PokeInteractor___c* Oculus::Interaction::PokeInteractor___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::PokeInteractor___c*, "<>9", ::Oculus::Interaction::PokeInteractor___c*>();
}
inline void Oculus::Interaction::PokeInteractor___c::setStaticF___9__89_0(::System::Func_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__89_0", ::Oculus::Interaction::PokeInteractor___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* Oculus::Interaction::PokeInteractor___c::getStaticF___9__89_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__89_0", ::Oculus::Interaction::PokeInteractor___c*>();
}
inline void Oculus::Interaction::PokeInteractor___c::setStaticF___9__89_1(::System::Action_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<bool>*, "<>9__89_1", ::Oculus::Interaction::PokeInteractor___c*>(std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* Oculus::Interaction::PokeInteractor___c::getStaticF___9__89_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "<>9__89_1", ::Oculus::Interaction::PokeInteractor___c*>();
}
inline void Oculus::Interaction::PokeInteractor___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::PokeInteractor___c::__ctor_b__89_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor___c*>(),
                        {"<.ctor>b__89_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::PokeInteractor___c::__ctor_b__89_1(bool  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor___c*>(),
                        {"<.ctor>b__89_1", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
inline ::Oculus::Interaction::PokeInteractor___c* Oculus::Interaction::PokeInteractor___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PokeInteractor___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PokeInteractor___c::PokeInteractor___c()   {
}
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor_SurfaceHitCache.GetPatchHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PokeInteractor_SurfaceHitCache::*)(::Oculus::Interaction::PokeInteractable*, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>)>(&::Oculus::Interaction::PokeInteractor_SurfaceHitCache::GetPatchHit)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xa459a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor_SurfaceHitCache*>(),
                        {"GetPatchHit", {}, {::i2c::type_of<::Oculus::Interaction::PokeInteractable*>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor_SurfaceHitCache.GetBackingHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PokeInteractor_SurfaceHitCache::*)(::Oculus::Interaction::PokeInteractable*, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>)>(&::Oculus::Interaction::PokeInteractor_SurfaceHitCache::GetBackingHit)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0xa459c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor_SurfaceHitCache*>(),
                        {"GetBackingHit", {}, {::i2c::type_of<::Oculus::Interaction::PokeInteractable*>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor_SurfaceHitCache._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractor_SurfaceHitCache::*)()>(&::Oculus::Interaction::PokeInteractor_SurfaceHitCache::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa459ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor_SurfaceHitCache*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PokeInteractor_SurfaceHitCache.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PokeInteractor_SurfaceHitCache::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::PokeInteractor_SurfaceHitCache::Reset)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa459f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor_SurfaceHitCache*>(),
                        {"Reset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Oculus::Interaction::PokeInteractable>,::GlobalNamespace::SurfaceHitCache_PokeInteractor_HitInfo>*& Oculus::Interaction::PokeInteractor_SurfaceHitCache::__cordl_internal_get__surfacePatchHitCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____surfacePatchHitCache;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Oculus::Interaction::PokeInteractable>,::GlobalNamespace::SurfaceHitCache_PokeInteractor_HitInfo>* const& Oculus::Interaction::PokeInteractor_SurfaceHitCache::__cordl_internal_get__surfacePatchHitCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____surfacePatchHitCache;
}
constexpr void Oculus::Interaction::PokeInteractor_SurfaceHitCache::__cordl_internal_set__surfacePatchHitCache(::System::Collections::Generic::Dictionary_2<::UnityW<::Oculus::Interaction::PokeInteractable>,::GlobalNamespace::SurfaceHitCache_PokeInteractor_HitInfo>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____surfacePatchHitCache = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Oculus::Interaction::PokeInteractable>,::GlobalNamespace::SurfaceHitCache_PokeInteractor_HitInfo>*& Oculus::Interaction::PokeInteractor_SurfaceHitCache::__cordl_internal_get__backingSurfaceHitCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____backingSurfaceHitCache;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Oculus::Interaction::PokeInteractable>,::GlobalNamespace::SurfaceHitCache_PokeInteractor_HitInfo>* const& Oculus::Interaction::PokeInteractor_SurfaceHitCache::__cordl_internal_get__backingSurfaceHitCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____backingSurfaceHitCache;
}
constexpr void Oculus::Interaction::PokeInteractor_SurfaceHitCache::__cordl_internal_set__backingSurfaceHitCache(::System::Collections::Generic::Dictionary_2<::UnityW<::Oculus::Interaction::PokeInteractable>,::GlobalNamespace::SurfaceHitCache_PokeInteractor_HitInfo>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____backingSurfaceHitCache = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::PokeInteractor_SurfaceHitCache::__cordl_internal_get__origin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____origin;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::PokeInteractor_SurfaceHitCache::__cordl_internal_get__origin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____origin;
}
constexpr void Oculus::Interaction::PokeInteractor_SurfaceHitCache::__cordl_internal_set__origin(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____origin = value;
}
inline bool Oculus::Interaction::PokeInteractor_SurfaceHitCache::GetPatchHit(::Oculus::Interaction::PokeInteractable*  interactable, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor_SurfaceHitCache*>(),
                        {"GetPatchHit", {}, {::i2c::type_of<::Oculus::Interaction::PokeInteractable*>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable, hit);
}
inline bool Oculus::Interaction::PokeInteractor_SurfaceHitCache::GetBackingHit(::Oculus::Interaction::PokeInteractable*  interactable, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor_SurfaceHitCache*>(),
                        {"GetBackingHit", {}, {::i2c::type_of<::Oculus::Interaction::PokeInteractable*>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable, hit);
}
inline void Oculus::Interaction::PokeInteractor_SurfaceHitCache::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor_SurfaceHitCache*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PokeInteractor_SurfaceHitCache::Reset(::UnityEngine::Vector3  origin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PokeInteractor_SurfaceHitCache*>(),
                        {"Reset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, origin);
}
inline ::Oculus::Interaction::PokeInteractor_SurfaceHitCache* Oculus::Interaction::PokeInteractor_SurfaceHitCache::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PokeInteractor_SurfaceHitCache*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PokeInteractor_SurfaceHitCache::PokeInteractor_SurfaceHitCache()   {
}
