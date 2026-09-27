#pragma once
// IWYU pragma private; include "Oculus/Interaction/RayInteractor.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__SurfaceHit_impl.hpp"
#include "Oculus/Interaction/zzzz__PointerInteractor_2_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Ray_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/zzzz__RayInteractor_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__SurfaceHit_def.hpp"
#include "Oculus/Interaction/zzzz__ICandidatePosition_def.hpp"
#include "Oculus/Interaction/zzzz__IMovement_def.hpp"
#include "Oculus/Interaction/zzzz__ISelector_def.hpp"
#include "Oculus/Interaction/zzzz__RayInteractable_def.hpp"
#include "Oculus/Interaction/zzzz__RayInteractor_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::RayInteractor.get_Origin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::RayInteractor::*)()>(&::Oculus::Interaction::RayInteractor::get_Origin)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa45be24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {"get_Origin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractor.set_Origin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractor::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::RayInteractor::set_Origin)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa45be34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {"set_Origin", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractor.get_Rotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Oculus::Interaction::RayInteractor::*)()>(&::Oculus::Interaction::RayInteractor::get_Rotation)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa45be44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {"get_Rotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractor.set_Rotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractor::*)(::UnityEngine::Quaternion)>(&::Oculus::Interaction::RayInteractor::set_Rotation)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa45be58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {"set_Rotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractor.get_Forward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::RayInteractor::*)()>(&::Oculus::Interaction::RayInteractor::get_Forward)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa45be6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {"get_Forward", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractor.set_Forward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractor::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::RayInteractor::set_Forward)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa45be7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {"set_Forward", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractor.get_End
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::RayInteractor::*)()>(&::Oculus::Interaction::RayInteractor::get_End)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa45be8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {"get_End", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractor.set_End
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractor::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::RayInteractor::set_End)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa45be9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {"set_End", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractor.get_MaxRayLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::RayInteractor::*)()>(&::Oculus::Interaction::RayInteractor::get_MaxRayLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45beac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {"get_MaxRayLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractor.set_MaxRayLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractor::*)(float_t)>(&::Oculus::Interaction::RayInteractor::set_MaxRayLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45beb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {"set_MaxRayLength", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractor.get_CollisionInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Oculus::Interaction::Surfaces::SurfaceHit> (::Oculus::Interaction::RayInteractor::*)()>(&::Oculus::Interaction::RayInteractor::get_CollisionInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa45bebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {"get_CollisionInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractor.set_CollisionInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractor::*)(::System::Nullable_1<::Oculus::Interaction::Surfaces::SurfaceHit>)>(&::Oculus::Interaction::RayInteractor::set_CollisionInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa45becc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {"set_CollisionInfo", {}, {::i2c::type_of<::System::Nullable_1<::Oculus::Interaction::Surfaces::SurfaceHit>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractor.get_Ray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Ray (::Oculus::Interaction::RayInteractor::*)()>(&::Oculus::Interaction::RayInteractor::get_Ray)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa45bedc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {"get_Ray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractor.set_Ray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractor::*)(::UnityEngine::Ray)>(&::Oculus::Interaction::RayInteractor::set_Ray)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa45bef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {"set_Ray", {}, {::i2c::type_of<::UnityEngine::Ray>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractor.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractor::*)()>(&::Oculus::Interaction::RayInteractor::Awake)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa45bf0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::RayInteractor*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractor.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractor::*)()>(&::Oculus::Interaction::RayInteractor::Start)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa45bfb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::RayInteractor*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractor.DoPreprocess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractor::*)()>(&::Oculus::Interaction::RayInteractor::DoPreprocess)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xa45c000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::RayInteractor*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractor.get_CandidateProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::RayInteractor::*)()>(&::Oculus::Interaction::RayInteractor::get_CandidateProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45c19c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::RayInteractor*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractor.ComputeCandidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::RayInteractable> (::Oculus::Interaction::RayInteractor::*)()>(&::Oculus::Interaction::RayInteractor::ComputeCandidate)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0xa45c1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::RayInteractor*>(), 64}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractor.ComputeCandidateTiebreaker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::RayInteractor::*)(::Oculus::Interaction::RayInteractable*, ::Oculus::Interaction::RayInteractable*)>(&::Oculus::Interaction::RayInteractor::ComputeCandidateTiebreaker)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa45c664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::RayInteractor*>(), 65}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractor.InteractableSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractor::*)(::Oculus::Interaction::RayInteractable*)>(&::Oculus::Interaction::RayInteractor::InteractableSelected)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0xa45c6fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::RayInteractor*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractor.InteractableUnselected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractor::*)(::Oculus::Interaction::RayInteractable*)>(&::Oculus::Interaction::RayInteractor::InteractableUnselected)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xa45ca04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::RayInteractor*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractor.DoSelectUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractor::*)()>(&::Oculus::Interaction::RayInteractor::DoSelectUpdate)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0xa45cb74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::RayInteractor*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractor.ComputePointerPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::RayInteractor::*)()>(&::Oculus::Interaction::RayInteractor::ComputePointerPose)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xa45cf44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::RayInteractor*>(), 74}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractor.InjectAllRayInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractor::*)(::Oculus::Interaction::ISelector*, ::UnityEngine::Transform*)>(&::Oculus::Interaction::RayInteractor::InjectAllRayInteractor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa45d114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {"InjectAllRayInteractor", {}, {::i2c::type_of<::Oculus::Interaction::ISelector*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractor.InjectSelector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractor::*)(::Oculus::Interaction::ISelector*)>(&::Oculus::Interaction::RayInteractor::InjectSelector)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa45d140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {"InjectSelector", {}, {::i2c::type_of<::Oculus::Interaction::ISelector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractor.InjectRayOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractor::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::RayInteractor::InjectRayOrigin)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa45d224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {"InjectRayOrigin", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractor.InjectOptionalEqualDistanceThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractor::*)(float_t)>(&::Oculus::Interaction::RayInteractor::InjectOptionalEqualDistanceThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45d234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {"InjectOptionalEqualDistanceThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractor::*)()>(&::Oculus::Interaction::RayInteractor::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa45d23c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::RayInteractor::__cordl_internal_get__selector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selector;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::RayInteractor::__cordl_internal_get__selector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selector;
}
constexpr void Oculus::Interaction::RayInteractor::__cordl_internal_set__selector(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selector = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::RayInteractor::__cordl_internal_get__rayOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rayOrigin;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::RayInteractor::__cordl_internal_get__rayOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rayOrigin;
}
constexpr void Oculus::Interaction::RayInteractor::__cordl_internal_set__rayOrigin(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rayOrigin = value;
}
constexpr float_t& Oculus::Interaction::RayInteractor::__cordl_internal_get__maxRayLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxRayLength;
}
constexpr float_t const& Oculus::Interaction::RayInteractor::__cordl_internal_get__maxRayLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxRayLength;
}
constexpr void Oculus::Interaction::RayInteractor::__cordl_internal_set__maxRayLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxRayLength = value;
}
constexpr float_t& Oculus::Interaction::RayInteractor::__cordl_internal_get__equalDistanceThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____equalDistanceThreshold;
}
constexpr float_t const& Oculus::Interaction::RayInteractor::__cordl_internal_get__equalDistanceThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____equalDistanceThreshold;
}
constexpr void Oculus::Interaction::RayInteractor::__cordl_internal_set__equalDistanceThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____equalDistanceThreshold = value;
}
constexpr ::Oculus::Interaction::RayInteractor_RayCandidateProperties*& Oculus::Interaction::RayInteractor::__cordl_internal_get__rayCandidateProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rayCandidateProperties;
}
constexpr ::Oculus::Interaction::RayInteractor_RayCandidateProperties* const& Oculus::Interaction::RayInteractor::__cordl_internal_get__rayCandidateProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rayCandidateProperties;
}
constexpr void Oculus::Interaction::RayInteractor::__cordl_internal_set__rayCandidateProperties(::Oculus::Interaction::RayInteractor_RayCandidateProperties*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rayCandidateProperties = value;
}
constexpr ::Oculus::Interaction::IMovement*& Oculus::Interaction::RayInteractor::__cordl_internal_get__movement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____movement;
}
constexpr ::Oculus::Interaction::IMovement* const& Oculus::Interaction::RayInteractor::__cordl_internal_get__movement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____movement;
}
constexpr void Oculus::Interaction::RayInteractor::__cordl_internal_set__movement(::Oculus::Interaction::IMovement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____movement = value;
}
constexpr ::Oculus::Interaction::Surfaces::SurfaceHit& Oculus::Interaction::RayInteractor::__cordl_internal_get__movedHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____movedHit;
}
constexpr ::Oculus::Interaction::Surfaces::SurfaceHit const& Oculus::Interaction::RayInteractor::__cordl_internal_get__movedHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____movedHit;
}
constexpr void Oculus::Interaction::RayInteractor::__cordl_internal_set__movedHit(::Oculus::Interaction::Surfaces::SurfaceHit  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____movedHit = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::RayInteractor::__cordl_internal_get__movementHitDelta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____movementHitDelta;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::RayInteractor::__cordl_internal_get__movementHitDelta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____movementHitDelta;
}
constexpr void Oculus::Interaction::RayInteractor::__cordl_internal_set__movementHitDelta(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____movementHitDelta = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::RayInteractor::__cordl_internal_get__Origin_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Origin_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::RayInteractor::__cordl_internal_get__Origin_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Origin_k__BackingField;
}
constexpr void Oculus::Interaction::RayInteractor::__cordl_internal_set__Origin_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Origin_k__BackingField = value;
}
constexpr ::UnityEngine::Quaternion& Oculus::Interaction::RayInteractor::__cordl_internal_get__Rotation_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Rotation_k__BackingField;
}
constexpr ::UnityEngine::Quaternion const& Oculus::Interaction::RayInteractor::__cordl_internal_get__Rotation_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Rotation_k__BackingField;
}
constexpr void Oculus::Interaction::RayInteractor::__cordl_internal_set__Rotation_k__BackingField(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Rotation_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::RayInteractor::__cordl_internal_get__Forward_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Forward_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::RayInteractor::__cordl_internal_get__Forward_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Forward_k__BackingField;
}
constexpr void Oculus::Interaction::RayInteractor::__cordl_internal_set__Forward_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Forward_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::RayInteractor::__cordl_internal_get__End_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____End_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::RayInteractor::__cordl_internal_get__End_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____End_k__BackingField;
}
constexpr void Oculus::Interaction::RayInteractor::__cordl_internal_set__End_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____End_k__BackingField = value;
}
constexpr ::System::Nullable_1<::Oculus::Interaction::Surfaces::SurfaceHit>& Oculus::Interaction::RayInteractor::__cordl_internal_get__CollisionInfo_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CollisionInfo_k__BackingField;
}
constexpr ::System::Nullable_1<::Oculus::Interaction::Surfaces::SurfaceHit> const& Oculus::Interaction::RayInteractor::__cordl_internal_get__CollisionInfo_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CollisionInfo_k__BackingField;
}
constexpr void Oculus::Interaction::RayInteractor::__cordl_internal_set__CollisionInfo_k__BackingField(::System::Nullable_1<::Oculus::Interaction::Surfaces::SurfaceHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CollisionInfo_k__BackingField = value;
}
constexpr ::UnityEngine::Ray& Oculus::Interaction::RayInteractor::__cordl_internal_get__Ray_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Ray_k__BackingField;
}
constexpr ::UnityEngine::Ray const& Oculus::Interaction::RayInteractor::__cordl_internal_get__Ray_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Ray_k__BackingField;
}
constexpr void Oculus::Interaction::RayInteractor::__cordl_internal_set__Ray_k__BackingField(::UnityEngine::Ray  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Ray_k__BackingField = value;
}
inline ::UnityEngine::Vector3 Oculus::Interaction::RayInteractor::get_Origin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {"get_Origin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Oculus::Interaction::RayInteractor::set_Origin(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {"set_Origin", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Quaternion Oculus::Interaction::RayInteractor::get_Rotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {"get_Rotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void Oculus::Interaction::RayInteractor::set_Rotation(::UnityEngine::Quaternion  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {"set_Rotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::RayInteractor::get_Forward()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {"get_Forward", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Oculus::Interaction::RayInteractor::set_Forward(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {"set_Forward", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::RayInteractor::get_End()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {"get_End", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Oculus::Interaction::RayInteractor::set_End(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {"set_End", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::RayInteractor::get_MaxRayLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {"get_MaxRayLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::RayInteractor::set_MaxRayLength(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {"set_MaxRayLength", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<::Oculus::Interaction::Surfaces::SurfaceHit> Oculus::Interaction::RayInteractor::get_CollisionInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {"get_CollisionInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Oculus::Interaction::Surfaces::SurfaceHit>>(this, ___internal_method);
}
inline void Oculus::Interaction::RayInteractor::set_CollisionInfo(::System::Nullable_1<::Oculus::Interaction::Surfaces::SurfaceHit>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {"set_CollisionInfo", {}, {::i2c::type_of<::System::Nullable_1<::Oculus::Interaction::Surfaces::SurfaceHit>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Ray Oculus::Interaction::RayInteractor::get_Ray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {"get_Ray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ray>(this, ___internal_method);
}
inline void Oculus::Interaction::RayInteractor::set_Ray(::UnityEngine::Ray  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {"set_Ray", {}, {::i2c::type_of<::UnityEngine::Ray>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::RayInteractor::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::RayInteractor*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::RayInteractor::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::RayInteractor*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::RayInteractor::DoPreprocess()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::RayInteractor*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Oculus::Interaction::RayInteractor::get_CandidateProperties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::RayInteractor*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::UnityW<::Oculus::Interaction::RayInteractable> Oculus::Interaction::RayInteractor::ComputeCandidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::RayInteractor*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::RayInteractable>>(this, ___internal_method);
}
inline int32_t Oculus::Interaction::RayInteractor::ComputeCandidateTiebreaker(::Oculus::Interaction::RayInteractable*  a, ::Oculus::Interaction::RayInteractable*  b)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::RayInteractor*>(), 65}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline void Oculus::Interaction::RayInteractor::InteractableSelected(::Oculus::Interaction::RayInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::RayInteractor*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void Oculus::Interaction::RayInteractor::InteractableUnselected(::Oculus::Interaction::RayInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::RayInteractor*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void Oculus::Interaction::RayInteractor::DoSelectUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::RayInteractor*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::RayInteractor::ComputePointerPose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::RayInteractor*>(), 74}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline void Oculus::Interaction::RayInteractor::InjectAllRayInteractor(::Oculus::Interaction::ISelector*  selector, ::UnityEngine::Transform*  rayOrigin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {"InjectAllRayInteractor", {}, {::i2c::type_of<::Oculus::Interaction::ISelector*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selector, rayOrigin);
}
inline void Oculus::Interaction::RayInteractor::InjectSelector(::Oculus::Interaction::ISelector*  selector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {"InjectSelector", {}, {::i2c::type_of<::Oculus::Interaction::ISelector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selector);
}
inline void Oculus::Interaction::RayInteractor::InjectRayOrigin(::UnityEngine::Transform*  rayOrigin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {"InjectRayOrigin", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayOrigin);
}
inline void Oculus::Interaction::RayInteractor::InjectOptionalEqualDistanceThreshold(float_t  equalDistanceThreshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {"InjectOptionalEqualDistanceThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, equalDistanceThreshold);
}
inline void Oculus::Interaction::RayInteractor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::RayInteractor* Oculus::Interaction::RayInteractor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::RayInteractor*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::RayInteractor::RayInteractor()   {
}
//  Writing Method size for method: ::Oculus::Interaction::RayInteractor_RayCandidateProperties.get_ClosestInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::RayInteractable> (::Oculus::Interaction::RayInteractor_RayCandidateProperties::*)()>(&::Oculus::Interaction::RayInteractor_RayCandidateProperties::get_ClosestInteractable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa45d2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor_RayCandidateProperties*>(),
                        {"get_ClosestInteractable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractor_RayCandidateProperties.get_CandidatePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::RayInteractor_RayCandidateProperties::*)()>(&::Oculus::Interaction::RayInteractor_RayCandidateProperties::get_CandidatePosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa45d2e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor_RayCandidateProperties*>(),
                        {"get_CandidatePosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RayInteractor_RayCandidateProperties._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RayInteractor_RayCandidateProperties::*)(::Oculus::Interaction::RayInteractable*, ::UnityEngine::Vector3)>(&::Oculus::Interaction::RayInteractor_RayCandidateProperties::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa45c60c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor_RayCandidateProperties*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::RayInteractable*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::RayInteractable>& Oculus::Interaction::RayInteractor_RayCandidateProperties::__cordl_internal_get__ClosestInteractable_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClosestInteractable_k__BackingField;
}
constexpr ::UnityW<::Oculus::Interaction::RayInteractable> const& Oculus::Interaction::RayInteractor_RayCandidateProperties::__cordl_internal_get__ClosestInteractable_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClosestInteractable_k__BackingField;
}
constexpr void Oculus::Interaction::RayInteractor_RayCandidateProperties::__cordl_internal_set__ClosestInteractable_k__BackingField(::UnityW<::Oculus::Interaction::RayInteractable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ClosestInteractable_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::RayInteractor_RayCandidateProperties::__cordl_internal_get__CandidatePosition_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CandidatePosition_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::RayInteractor_RayCandidateProperties::__cordl_internal_get__CandidatePosition_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CandidatePosition_k__BackingField;
}
constexpr void Oculus::Interaction::RayInteractor_RayCandidateProperties::__cordl_internal_set__CandidatePosition_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CandidatePosition_k__BackingField = value;
}
inline ::UnityW<::Oculus::Interaction::RayInteractable> Oculus::Interaction::RayInteractor_RayCandidateProperties::get_ClosestInteractable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor_RayCandidateProperties*>(),
                        {"get_ClosestInteractable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::RayInteractable>>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::RayInteractor_RayCandidateProperties::get_CandidatePosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor_RayCandidateProperties*>(),
                        {"get_CandidatePosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Oculus::Interaction::RayInteractor_RayCandidateProperties::_ctor(::Oculus::Interaction::RayInteractable*  closestInteractable, ::UnityEngine::Vector3  candidatePosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RayInteractor_RayCandidateProperties*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::RayInteractable*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, closestInteractable, candidatePosition);
}
inline ::Oculus::Interaction::RayInteractor_RayCandidateProperties* Oculus::Interaction::RayInteractor_RayCandidateProperties::New_ctor(::Oculus::Interaction::RayInteractable*  closestInteractable, ::UnityEngine::Vector3  candidatePosition)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::RayInteractor_RayCandidateProperties*>(closestInteractable, candidatePosition));
}
/// @brief Convert operator to "::Oculus::Interaction::ICandidatePosition"
constexpr  Oculus::Interaction::RayInteractor_RayCandidateProperties::operator ::Oculus::Interaction::ICandidatePosition*() noexcept {
return static_cast<::Oculus::Interaction::ICandidatePosition*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ICandidatePosition"
constexpr ::Oculus::Interaction::ICandidatePosition* Oculus::Interaction::RayInteractor_RayCandidateProperties::i___Oculus__Interaction__ICandidatePosition() noexcept {
return static_cast<::Oculus::Interaction::ICandidatePosition*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::RayInteractor_RayCandidateProperties::RayInteractor_RayCandidateProperties()   {
}
