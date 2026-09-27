#pragma once
// IWYU pragma private; include "GlobalNamespace/GliderHoldable.hpp"
#include "GlobalNamespace/zzzz__GliderHoldable_CosmeticMaterialOverride_impl.hpp"
#include "GlobalNamespace/zzzz__GliderHoldable_GliderState_impl.hpp"
#include "GlobalNamespace/zzzz__GliderHoldable_SyncedState_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkHoldableObject_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GliderHoldable_def.hpp"
#include "GlobalNamespace/zzzz__AverageVector3_def.hpp"
#include "GlobalNamespace/zzzz__DropZone_def.hpp"
#include "GlobalNamespace/zzzz__GliderHoldable_CosmeticMaterialOverride_def.hpp"
#include "GlobalNamespace/zzzz__GliderHoldable_GliderState_def.hpp"
#include "GlobalNamespace/zzzz__GliderHoldable_SyncedState_def.hpp"
#include "GlobalNamespace/zzzz__GliderHoldable_def.hpp"
#include "GlobalNamespace/zzzz__IRequestableOwnershipGuardCallbacks_def.hpp"
#include "GlobalNamespace/zzzz__InteractionPoint_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__RequestableOwnershipGuard_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.get_OutOfBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GliderHoldable::*)()>(&::GlobalNamespace::GliderHoldable::get_OutOfBounds)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5ab328c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"get_OutOfBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable::*)()>(&::GlobalNamespace::GliderHoldable::Awake)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5ab3374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::GliderHoldable*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable::*)()>(&::GlobalNamespace::GliderHoldable::OnDestroy)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5ab35b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable::*)()>(&::GlobalNamespace::GliderHoldable::OnEnable)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5ab36d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::GliderHoldable*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable::*)()>(&::GlobalNamespace::GliderHoldable::OnDisable)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5ab37ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::GliderHoldable*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.Respawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable::*)()>(&::GlobalNamespace::GliderHoldable::Respawn)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5ab3888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"Respawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.CustomMapLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable::*)(::UnityEngine::Transform*, float_t)>(&::GlobalNamespace::GliderHoldable::CustomMapLoad)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5ab3ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"CustomMapLoad", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.CustomMapUnload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable::*)()>(&::GlobalNamespace::GliderHoldable::CustomMapUnload)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5ab3b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"CustomMapUnload", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.get_TwoHanded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GliderHoldable::*)()>(&::GlobalNamespace::GliderHoldable::get_TwoHanded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ab3b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::GliderHoldable*>(), 64}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.OnHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::GliderHoldable::OnHover)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5ab3b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::GliderHoldable*>(), 65}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.OnGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::GliderHoldable::OnGrab)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5ab3d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::GliderHoldable*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.OnGrabAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::GliderHoldable::OnGrabAuthority)> {
  constexpr static std::size_t size = 0x9c0;
  constexpr static std::size_t addrs = 0x5ab3eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"OnGrabAuthority", {}, {::i2c::type_of<::GlobalNamespace::InteractionPoint*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.OnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GliderHoldable::*)(::GlobalNamespace::DropZone*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::GliderHoldable::OnRelease)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x5ab516c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::GliderHoldable*>(), 68}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.DropItemCleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable::*)()>(&::GlobalNamespace::GliderHoldable::DropItemCleanup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ab55dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::GliderHoldable*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable::*)()>(&::GlobalNamespace::GliderHoldable::FixedUpdate)> {
  constexpr static std::size_t size = 0x9d0;
  constexpr static std::size_t addrs = 0x5ab55e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable::*)()>(&::GlobalNamespace::GliderHoldable::LateUpdate)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5ab643c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.AuthorityUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable::*)(float_t)>(&::GlobalNamespace::GliderHoldable::AuthorityUpdate)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5ab6500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"AuthorityUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.AuthorityUpdateHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable::*)(float_t)>(&::GlobalNamespace::GliderHoldable::AuthorityUpdateHeld)> {
  constexpr static std::size_t size = 0x2930;
  constexpr static std::size_t addrs = 0x5ab6d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"AuthorityUpdateHeld", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.AuthorityUpdateUnheld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable::*)(float_t)>(&::GlobalNamespace::GliderHoldable::AuthorityUpdateUnheld)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5ab6bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"AuthorityUpdateUnheld", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.RemoteSyncUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable::*)(float_t)>(&::GlobalNamespace::GliderHoldable::RemoteSyncUpdate)> {
  constexpr static std::size_t size = 0x5fc;
  constexpr static std::size_t addrs = 0x5ab65bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"RemoteSyncUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.getNewHolderRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRRig> (::GlobalNamespace::GliderHoldable::*)(int32_t)>(&::GlobalNamespace::GliderHoldable::getNewHolderRig)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5ab48ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"getNewHolderRig", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.ClosestPointInHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::GliderHoldable::*)(::UnityEngine::Vector3, ::GlobalNamespace::InteractionPoint*)>(&::GlobalNamespace::GliderHoldable::ClosestPointInHandle)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x5ab4a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"ClosestPointInHandle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::InteractionPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.UpdateGliderPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable::*)()>(&::GlobalNamespace::GliderHoldable::UpdateGliderPosition)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5ab9668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"UpdateGliderPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.GetHandsVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::GliderHoldable::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, bool)>(&::GlobalNamespace::GliderHoldable::GetHandsVector)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5ab4edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"GetHandsVector", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.GetHandsOrientationVectors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Transform*, bool, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::GliderHoldable::GetHandsOrientationVectors)> {
  constexpr static std::size_t size = 0x988;
  constexpr static std::size_t addrs = 0x5ab9980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"GetHandsOrientationVectors", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.GetMaterialFromIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::GlobalNamespace::GliderHoldable::*)(uint8_t)>(&::GlobalNamespace::GliderHoldable::GetMaterialFromIndex)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5ab511c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"GetMaterialFromIndex", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.GetRollAngle180Wrapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GliderHoldable::*)()>(&::GlobalNamespace::GliderHoldable::GetRollAngle180Wrapping)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x5ab5fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"GetRollAngle180Wrapping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.SignedAngleInPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GliderHoldable::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::GliderHoldable::SignedAngleInPlane)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5aba308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"SignedAngleInPlane", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.NormalizeAngle180
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GliderHoldable::*)(float_t)>(&::GlobalNamespace::GliderHoldable::NormalizeAngle180)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5ab6300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"NormalizeAngle180", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.UpdateAudioSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable::*)(::UnityEngine::AudioSource*, float_t)>(&::GlobalNamespace::GliderHoldable::UpdateAudioSource)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5ab98d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"UpdateAudioSource", {}, {::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.GetInfectedMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::GlobalNamespace::GliderHoldable::*)()>(&::GlobalNamespace::GliderHoldable::GetInfectedMaterial)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5ab50a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"GetInfectedMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.OnTriggerStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GliderHoldable::OnTriggerStay)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x5aba440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.WindResistanceForceOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::GliderHoldable::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::GliderHoldable::WindResistanceForceOffset)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5ab6348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"WindResistanceForceOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GliderHoldable_SyncedState (::GlobalNamespace::GliderHoldable::*)()>(&::GlobalNamespace::GliderHoldable::get_Data)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5aba82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable::*)(::GlobalNamespace::GliderHoldable_SyncedState)>(&::GlobalNamespace::GliderHoldable::set_Data)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5aba894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"set_Data", {}, {::i2c::type_of<::GlobalNamespace::GliderHoldable_SyncedState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable::*)()>(&::GlobalNamespace::GliderHoldable::ReadDataFusion)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5aba904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::GliderHoldable*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable::*)()>(&::GlobalNamespace::GliderHoldable::WriteDataFusion)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5aba9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::GliderHoldable*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GliderHoldable::ReadDataPUN)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x5abaa00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::GliderHoldable*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GliderHoldable::WriteDataPUN)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5abadb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::GliderHoldable*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.ReenableOwnershipRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GliderHoldable::*)()>(&::GlobalNamespace::GliderHoldable::ReenableOwnershipRequest)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ab3cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"ReenableOwnershipRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.OnOwnershipTransferred
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GliderHoldable::OnOwnershipTransferred)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5abaf88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"OnOwnershipTransferred", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.OnOwnershipRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GliderHoldable::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GliderHoldable::OnOwnershipRequest)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5abb0bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"OnOwnershipRequest", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.OnMyOwnerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable::*)()>(&::GlobalNamespace::GliderHoldable::OnMyOwnerLeft)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5abb170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"OnMyOwnerLeft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.OnMasterClientAssistedTakeoverRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GliderHoldable::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GliderHoldable::OnMasterClientAssistedTakeoverRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5abb174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"OnMasterClientAssistedTakeoverRequest", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.OnMyCreatorLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable::*)()>(&::GlobalNamespace::GliderHoldable::OnMyCreatorLeft)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5abb17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"OnMyCreatorLeft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable::*)()>(&::GlobalNamespace::GliderHoldable::_ctor)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x5abb180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable._OnHover_b__139_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable::*)()>(&::GlobalNamespace::GliderHoldable::_OnHover_b__139_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5abb638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"<OnHover>b__139_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable._OnGrab_b__140_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable::*)()>(&::GlobalNamespace::GliderHoldable::_OnGrab_b__140_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5abb640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"<OnGrab>b__140_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable::*)(bool)>(&::GlobalNamespace::GliderHoldable::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5abb648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::GliderHoldable*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable::*)()>(&::GlobalNamespace::GliderHoldable::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5abb6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                    {::i2c::class_of<::GlobalNamespace::GliderHoldable*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector2& GlobalNamespace::GliderHoldable::__cordl_internal_get_pitchMinMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitchMinMax;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::GliderHoldable::__cordl_internal_get_pitchMinMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitchMinMax;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_pitchMinMax(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pitchMinMax = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::GliderHoldable::__cordl_internal_get_rollMinMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rollMinMax;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::GliderHoldable::__cordl_internal_get_rollMinMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rollMinMax;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_rollMinMax(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rollMinMax = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_pitchHalfLife()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitchHalfLife;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_pitchHalfLife() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitchHalfLife;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_pitchHalfLife(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pitchHalfLife = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::GliderHoldable::__cordl_internal_get_pitchVelocityTargetMinMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitchVelocityTargetMinMax;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::GliderHoldable::__cordl_internal_get_pitchVelocityTargetMinMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitchVelocityTargetMinMax;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_pitchVelocityTargetMinMax(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pitchVelocityTargetMinMax = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::GliderHoldable::__cordl_internal_get_pitchVelocityRampTimeMinMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitchVelocityRampTimeMinMax;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::GliderHoldable::__cordl_internal_get_pitchVelocityRampTimeMinMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitchVelocityRampTimeMinMax;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_pitchVelocityRampTimeMinMax(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pitchVelocityRampTimeMinMax = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_pitchVelocityFollowRateAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitchVelocityFollowRateAngle;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_pitchVelocityFollowRateAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitchVelocityFollowRateAngle;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_pitchVelocityFollowRateAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pitchVelocityFollowRateAngle = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_pitchVelocityFollowRateMagnitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitchVelocityFollowRateMagnitude;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_pitchVelocityFollowRateMagnitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitchVelocityFollowRateMagnitude;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_pitchVelocityFollowRateMagnitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pitchVelocityFollowRateMagnitude = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::GliderHoldable::__cordl_internal_get_liftVsAttack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___liftVsAttack;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::GliderHoldable::__cordl_internal_get_liftVsAttack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___liftVsAttack;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_liftVsAttack(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___liftVsAttack = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::GliderHoldable::__cordl_internal_get_dragVsAttack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dragVsAttack;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::GliderHoldable::__cordl_internal_get_dragVsAttack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dragVsAttack;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_dragVsAttack(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dragVsAttack = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_attackDragFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackDragFactor;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_attackDragFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackDragFactor;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_attackDragFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attackDragFactor = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::GliderHoldable::__cordl_internal_get_dragVsSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dragVsSpeed;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::GliderHoldable::__cordl_internal_get_dragVsSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dragVsSpeed;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_dragVsSpeed(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dragVsSpeed = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_dragVsSpeedMaxSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dragVsSpeedMaxSpeed;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_dragVsSpeedMaxSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dragVsSpeedMaxSpeed;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_dragVsSpeedMaxSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dragVsSpeedMaxSpeed = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_dragVsSpeedDragFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dragVsSpeedDragFactor;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_dragVsSpeedDragFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dragVsSpeedDragFactor;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_dragVsSpeedDragFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dragVsSpeedDragFactor = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::GliderHoldable::__cordl_internal_get_liftIncreaseVsRoll()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___liftIncreaseVsRoll;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::GliderHoldable::__cordl_internal_get_liftIncreaseVsRoll() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___liftIncreaseVsRoll;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_liftIncreaseVsRoll(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___liftIncreaseVsRoll = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_liftIncreaseVsRollMaxAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___liftIncreaseVsRollMaxAngle;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_liftIncreaseVsRollMaxAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___liftIncreaseVsRollMaxAngle;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_liftIncreaseVsRollMaxAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___liftIncreaseVsRollMaxAngle = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_gravityCompensation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityCompensation;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_gravityCompensation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityCompensation;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_gravityCompensation(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravityCompensation = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_pullUpLiftBonus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pullUpLiftBonus;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_pullUpLiftBonus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pullUpLiftBonus;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_pullUpLiftBonus(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pullUpLiftBonus = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_pullUpLiftActivationVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pullUpLiftActivationVelocity;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_pullUpLiftActivationVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pullUpLiftActivationVelocity;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_pullUpLiftActivationVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pullUpLiftActivationVelocity = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_pullUpLiftActivationAcceleration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pullUpLiftActivationAcceleration;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_pullUpLiftActivationAcceleration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pullUpLiftActivationAcceleration;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_pullUpLiftActivationAcceleration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pullUpLiftActivationAcceleration = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_riderPosDirectPitchMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___riderPosDirectPitchMax;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_riderPosDirectPitchMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___riderPosDirectPitchMax;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_riderPosDirectPitchMax(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___riderPosDirectPitchMax = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::GliderHoldable::__cordl_internal_get_riderPosRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___riderPosRange;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::GliderHoldable::__cordl_internal_get_riderPosRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___riderPosRange;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_riderPosRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___riderPosRange = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_riderPosRangeOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___riderPosRangeOffset;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_riderPosRangeOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___riderPosRangeOffset;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_riderPosRangeOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___riderPosRangeOffset = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::GliderHoldable::__cordl_internal_get_riderPosRangeNormalizedDeadzone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___riderPosRangeNormalizedDeadzone;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::GliderHoldable::__cordl_internal_get_riderPosRangeNormalizedDeadzone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___riderPosRangeNormalizedDeadzone;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_riderPosRangeNormalizedDeadzone(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___riderPosRangeNormalizedDeadzone = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_oneHandHoldRotationRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oneHandHoldRotationRate;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_oneHandHoldRotationRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oneHandHoldRotationRate;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_oneHandHoldRotationRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oneHandHoldRotationRate = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GliderHoldable::__cordl_internal_get_oneHandSimulatedHoldOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oneHandSimulatedHoldOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GliderHoldable::__cordl_internal_get_oneHandSimulatedHoldOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oneHandSimulatedHoldOffset;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_oneHandSimulatedHoldOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oneHandSimulatedHoldOffset = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_oneHandPitchMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oneHandPitchMultiplier;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_oneHandPitchMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oneHandPitchMultiplier;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_oneHandPitchMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oneHandPitchMultiplier = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_twoHandHoldRotationRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___twoHandHoldRotationRate;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_twoHandHoldRotationRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___twoHandHoldRotationRate;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_twoHandHoldRotationRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___twoHandHoldRotationRate = value;
}
constexpr bool& GlobalNamespace::GliderHoldable::__cordl_internal_get_twoHandGliderInversionOnYawInsteadOfRoll()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___twoHandGliderInversionOnYawInsteadOfRoll;
}
constexpr bool const& GlobalNamespace::GliderHoldable::__cordl_internal_get_twoHandGliderInversionOnYawInsteadOfRoll() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___twoHandGliderInversionOnYawInsteadOfRoll;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_twoHandGliderInversionOnYawInsteadOfRoll(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___twoHandGliderInversionOnYawInsteadOfRoll = value;
}
constexpr bool& GlobalNamespace::GliderHoldable::__cordl_internal_get_setMaxHandSlipDuringFlight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setMaxHandSlipDuringFlight;
}
constexpr bool const& GlobalNamespace::GliderHoldable::__cordl_internal_get_setMaxHandSlipDuringFlight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setMaxHandSlipDuringFlight;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_setMaxHandSlipDuringFlight(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setMaxHandSlipDuringFlight = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_maxSlipOverrideSpeedThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSlipOverrideSpeedThreshold;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_maxSlipOverrideSpeedThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSlipOverrideSpeedThreshold;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_maxSlipOverrideSpeedThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSlipOverrideSpeedThreshold = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_subtlePlayerPitchFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subtlePlayerPitchFactor;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_subtlePlayerPitchFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subtlePlayerPitchFactor;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_subtlePlayerPitchFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subtlePlayerPitchFactor = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_subtlePlayerPitchRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subtlePlayerPitchRate;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_subtlePlayerPitchRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subtlePlayerPitchRate;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_subtlePlayerPitchRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subtlePlayerPitchRate = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_subtlePlayerRollFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subtlePlayerRollFactor;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_subtlePlayerRollFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subtlePlayerRollFactor;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_subtlePlayerRollFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subtlePlayerRollFactor = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_subtlePlayerRollRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subtlePlayerRollRate;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_subtlePlayerRollRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subtlePlayerRollRate;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_subtlePlayerRollRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subtlePlayerRollRate = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::GliderHoldable::__cordl_internal_get_subtlePlayerRotationSpeedRampMinMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subtlePlayerRotationSpeedRampMinMax;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::GliderHoldable::__cordl_internal_get_subtlePlayerRotationSpeedRampMinMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subtlePlayerRotationSpeedRampMinMax;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_subtlePlayerRotationSpeedRampMinMax(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subtlePlayerRotationSpeedRampMinMax = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::GliderHoldable::__cordl_internal_get_subtlePlayerRollAccelMinMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subtlePlayerRollAccelMinMax;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::GliderHoldable::__cordl_internal_get_subtlePlayerRollAccelMinMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subtlePlayerRollAccelMinMax;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_subtlePlayerRollAccelMinMax(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subtlePlayerRollAccelMinMax = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::GliderHoldable::__cordl_internal_get_subtlePlayerPitchAccelMinMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subtlePlayerPitchAccelMinMax;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::GliderHoldable::__cordl_internal_get_subtlePlayerPitchAccelMinMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subtlePlayerPitchAccelMinMax;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_subtlePlayerPitchAccelMinMax(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subtlePlayerPitchAccelMinMax = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_accelSmoothingFollowRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accelSmoothingFollowRate;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_accelSmoothingFollowRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accelSmoothingFollowRate;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_accelSmoothingFollowRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___accelSmoothingFollowRate = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::GliderHoldable::__cordl_internal_get_hapticAccelInputRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticAccelInputRange;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::GliderHoldable::__cordl_internal_get_hapticAccelInputRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticAccelInputRange;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_hapticAccelInputRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticAccelInputRange = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_hapticAccelOutputMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticAccelOutputMax;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_hapticAccelOutputMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticAccelOutputMax;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_hapticAccelOutputMax(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticAccelOutputMax = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::GliderHoldable::__cordl_internal_get_hapticMaxSpeedInputRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticMaxSpeedInputRange;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::GliderHoldable::__cordl_internal_get_hapticMaxSpeedInputRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticMaxSpeedInputRange;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_hapticMaxSpeedInputRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticMaxSpeedInputRange = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::GliderHoldable::__cordl_internal_get_hapticSpeedInputRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticSpeedInputRange;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::GliderHoldable::__cordl_internal_get_hapticSpeedInputRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticSpeedInputRange;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_hapticSpeedInputRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticSpeedInputRange = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_hapticSpeedOutputMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticSpeedOutputMax;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_hapticSpeedOutputMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticSpeedOutputMax;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_hapticSpeedOutputMax(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticSpeedOutputMax = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::GliderHoldable::__cordl_internal_get_whistlingAudioSpeedInputRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whistlingAudioSpeedInputRange;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::GliderHoldable::__cordl_internal_get_whistlingAudioSpeedInputRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whistlingAudioSpeedInputRange;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_whistlingAudioSpeedInputRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___whistlingAudioSpeedInputRange = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_audioVolumeMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioVolumeMultiplier;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_audioVolumeMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioVolumeMultiplier;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_audioVolumeMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioVolumeMultiplier = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_infectedAudioVolumeMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___infectedAudioVolumeMultiplier;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_infectedAudioVolumeMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___infectedAudioVolumeMultiplier;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_infectedAudioVolumeMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___infectedAudioVolumeMultiplier = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::GliderHoldable::__cordl_internal_get_whooshSpeedThresholdInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whooshSpeedThresholdInput;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::GliderHoldable::__cordl_internal_get_whooshSpeedThresholdInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whooshSpeedThresholdInput;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_whooshSpeedThresholdInput(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___whooshSpeedThresholdInput = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::GliderHoldable::__cordl_internal_get_whooshVolumeOutput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whooshVolumeOutput;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::GliderHoldable::__cordl_internal_get_whooshVolumeOutput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whooshVolumeOutput;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_whooshVolumeOutput(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___whooshVolumeOutput = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_whooshCheckDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whooshCheckDistance;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_whooshCheckDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whooshCheckDistance;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_whooshCheckDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___whooshCheckDistance = value;
}
constexpr bool& GlobalNamespace::GliderHoldable::__cordl_internal_get_extendTagRangeInFlight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extendTagRangeInFlight;
}
constexpr bool const& GlobalNamespace::GliderHoldable::__cordl_internal_get_extendTagRangeInFlight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extendTagRangeInFlight;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_extendTagRangeInFlight(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extendTagRangeInFlight = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::GliderHoldable::__cordl_internal_get_tagRangeSpeedInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagRangeSpeedInput;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::GliderHoldable::__cordl_internal_get_tagRangeSpeedInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagRangeSpeedInput;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_tagRangeSpeedInput(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagRangeSpeedInput = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::GliderHoldable::__cordl_internal_get_tagRangeOutput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagRangeOutput;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::GliderHoldable::__cordl_internal_get_tagRangeOutput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagRangeOutput;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_tagRangeOutput(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagRangeOutput = value;
}
constexpr bool& GlobalNamespace::GliderHoldable::__cordl_internal_get_debugDrawTagRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugDrawTagRange;
}
constexpr bool const& GlobalNamespace::GliderHoldable::__cordl_internal_get_debugDrawTagRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugDrawTagRange;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_debugDrawTagRange(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugDrawTagRange = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_infectedSpeedIncrease()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___infectedSpeedIncrease;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_infectedSpeedIncrease() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___infectedSpeedIncrease;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_infectedSpeedIncrease(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___infectedSpeedIncrease = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::GliderHoldable::__cordl_internal_get_leafMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leafMesh;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::GliderHoldable::__cordl_internal_get_leafMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leafMesh;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_leafMesh(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leafMesh = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GliderHoldable::__cordl_internal_get_baseLeafMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseLeafMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GliderHoldable::__cordl_internal_get_baseLeafMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseLeafMaterial;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_baseLeafMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseLeafMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GliderHoldable::__cordl_internal_get_infectedLeafMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___infectedLeafMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GliderHoldable::__cordl_internal_get_infectedLeafMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___infectedLeafMaterial;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_infectedLeafMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___infectedLeafMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GliderHoldable::__cordl_internal_get_frozenLeafMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frozenLeafMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GliderHoldable::__cordl_internal_get_frozenLeafMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frozenLeafMaterial;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_frozenLeafMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frozenLeafMaterial = value;
}
constexpr ::ArrayW<::GlobalNamespace::GliderHoldable_CosmeticMaterialOverride>& GlobalNamespace::GliderHoldable::__cordl_internal_get_cosmeticMaterialOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticMaterialOverrides;
}
constexpr ::ArrayW<::GlobalNamespace::GliderHoldable_CosmeticMaterialOverride> const& GlobalNamespace::GliderHoldable::__cordl_internal_get_cosmeticMaterialOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticMaterialOverrides;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_cosmeticMaterialOverrides(::ArrayW<::GlobalNamespace::GliderHoldable_CosmeticMaterialOverride>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cosmeticMaterialOverrides = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_networkSyncFollowRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkSyncFollowRate;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_networkSyncFollowRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkSyncFollowRate;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_networkSyncFollowRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkSyncFollowRate = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GliderHoldable::__cordl_internal_get_maxDistanceRespawnOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceRespawnOrigin;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GliderHoldable::__cordl_internal_get_maxDistanceRespawnOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceRespawnOrigin;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_maxDistanceRespawnOrigin(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDistanceRespawnOrigin = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_maxDistanceBeforeRespawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceBeforeRespawn;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_maxDistanceBeforeRespawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceBeforeRespawn;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_maxDistanceBeforeRespawn(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDistanceBeforeRespawn = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_maxDroppedTimeToRespawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDroppedTimeToRespawn;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_maxDroppedTimeToRespawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDroppedTimeToRespawn;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_maxDroppedTimeToRespawn(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDroppedTimeToRespawn = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_windUprightTorqueMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windUprightTorqueMultiplier;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_windUprightTorqueMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windUprightTorqueMultiplier;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_windUprightTorqueMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windUprightTorqueMultiplier = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_gravityUprightTorqueMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityUprightTorqueMultiplier;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_gravityUprightTorqueMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityUprightTorqueMultiplier;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_gravityUprightTorqueMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravityUprightTorqueMultiplier = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_fallingGravityReduction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallingGravityReduction;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_fallingGravityReduction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallingGravityReduction;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_fallingGravityReduction(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fallingGravityReduction = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GliderHoldable::__cordl_internal_get_calmAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calmAudio;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GliderHoldable::__cordl_internal_get_calmAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calmAudio;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_calmAudio(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___calmAudio = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GliderHoldable::__cordl_internal_get_activeAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeAudio;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GliderHoldable::__cordl_internal_get_activeAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeAudio;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_activeAudio(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeAudio = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GliderHoldable::__cordl_internal_get_whistlingAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whistlingAudio;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GliderHoldable::__cordl_internal_get_whistlingAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whistlingAudio;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_whistlingAudio(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___whistlingAudio = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GliderHoldable::__cordl_internal_get_leftWhooshAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftWhooshAudio;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GliderHoldable::__cordl_internal_get_leftWhooshAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftWhooshAudio;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_leftWhooshAudio(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftWhooshAudio = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GliderHoldable::__cordl_internal_get_rightWhooshAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightWhooshAudio;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GliderHoldable::__cordl_internal_get_rightWhooshAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightWhooshAudio;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_rightWhooshAudio(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightWhooshAudio = value;
}
constexpr ::UnityW<::GlobalNamespace::InteractionPoint>& GlobalNamespace::GliderHoldable::__cordl_internal_get_handle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handle;
}
constexpr ::UnityW<::GlobalNamespace::InteractionPoint> const& GlobalNamespace::GliderHoldable::__cordl_internal_get_handle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handle;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_handle(::UnityW<::GlobalNamespace::InteractionPoint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handle = value;
}
constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>& GlobalNamespace::GliderHoldable::__cordl_internal_get_ownershipGuard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownershipGuard;
}
constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard> const& GlobalNamespace::GliderHoldable::__cordl_internal_get_ownershipGuard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownershipGuard;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_ownershipGuard(::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ownershipGuard = value;
}
constexpr bool& GlobalNamespace::GliderHoldable::__cordl_internal_get_subtlePlayerPitchActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subtlePlayerPitchActive;
}
constexpr bool const& GlobalNamespace::GliderHoldable::__cordl_internal_get_subtlePlayerPitchActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subtlePlayerPitchActive;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_subtlePlayerPitchActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subtlePlayerPitchActive = value;
}
constexpr bool& GlobalNamespace::GliderHoldable::__cordl_internal_get_subtlePlayerRollActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subtlePlayerRollActive;
}
constexpr bool const& GlobalNamespace::GliderHoldable::__cordl_internal_get_subtlePlayerRollActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subtlePlayerRollActive;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_subtlePlayerRollActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subtlePlayerRollActive = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_subtlePlayerPitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subtlePlayerPitch;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_subtlePlayerPitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subtlePlayerPitch;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_subtlePlayerPitch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subtlePlayerPitch = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_subtlePlayerRoll()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subtlePlayerRoll;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_subtlePlayerRoll() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subtlePlayerRoll;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_subtlePlayerRoll(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subtlePlayerRoll = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_subtlePlayerPitchRateExp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subtlePlayerPitchRateExp;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_subtlePlayerPitchRateExp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subtlePlayerPitchRateExp;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_subtlePlayerPitchRateExp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subtlePlayerPitchRateExp = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_subtlePlayerRollRateExp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subtlePlayerRollRateExp;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_subtlePlayerRollRateExp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subtlePlayerRollRateExp;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_subtlePlayerRollRateExp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subtlePlayerRollRateExp = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_defaultMaxDistanceBeforeRespawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultMaxDistanceBeforeRespawn;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_defaultMaxDistanceBeforeRespawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultMaxDistanceBeforeRespawn;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_defaultMaxDistanceBeforeRespawn(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultMaxDistanceBeforeRespawn = value;
}
constexpr ::GlobalNamespace::GliderHoldable_HoldingHand*& GlobalNamespace::GliderHoldable::__cordl_internal_get_leftHold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHold;
}
constexpr ::GlobalNamespace::GliderHoldable_HoldingHand* const& GlobalNamespace::GliderHoldable::__cordl_internal_get_leftHold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHold;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_leftHold(::GlobalNamespace::GliderHoldable_HoldingHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHold = value;
}
constexpr ::GlobalNamespace::GliderHoldable_HoldingHand*& GlobalNamespace::GliderHoldable::__cordl_internal_get_rightHold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHold;
}
constexpr ::GlobalNamespace::GliderHoldable_HoldingHand* const& GlobalNamespace::GliderHoldable::__cordl_internal_get_rightHold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHold;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_rightHold(::GlobalNamespace::GliderHoldable_HoldingHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHold = value;
}
constexpr ::GlobalNamespace::GliderHoldable_SyncedState& GlobalNamespace::GliderHoldable::__cordl_internal_get_syncedState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncedState;
}
constexpr ::GlobalNamespace::GliderHoldable_SyncedState const& GlobalNamespace::GliderHoldable::__cordl_internal_get_syncedState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncedState;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_syncedState(::GlobalNamespace::GliderHoldable_SyncedState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncedState = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GliderHoldable::__cordl_internal_get_twoHandRotationOffsetAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___twoHandRotationOffsetAxis;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GliderHoldable::__cordl_internal_get_twoHandRotationOffsetAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___twoHandRotationOffsetAxis;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_twoHandRotationOffsetAxis(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___twoHandRotationOffsetAxis = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_twoHandRotationOffsetAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___twoHandRotationOffsetAngle;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_twoHandRotationOffsetAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___twoHandRotationOffsetAngle;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_twoHandRotationOffsetAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___twoHandRotationOffsetAngle = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::GliderHoldable::__cordl_internal_get_rb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::GliderHoldable::__cordl_internal_get_rb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rb = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::GliderHoldable::__cordl_internal_get_riderPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___riderPosition;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::GliderHoldable::__cordl_internal_get_riderPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___riderPosition;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_riderPosition(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___riderPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GliderHoldable::__cordl_internal_get_previousVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GliderHoldable::__cordl_internal_get_previousVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousVelocity;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_previousVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousVelocity = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GliderHoldable::__cordl_internal_get_currentVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GliderHoldable::__cordl_internal_get_currentVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentVelocity;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_currentVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentVelocity = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_pitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitch;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_pitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitch;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_pitch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pitch = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_yaw()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yaw;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_yaw() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yaw;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_yaw(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___yaw = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_roll()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roll;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_roll() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roll;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_roll(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roll = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_pitchVel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitchVel;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_pitchVel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pitchVel;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_pitchVel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pitchVel = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_yawVel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yawVel;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_yawVel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yawVel;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_yawVel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___yawVel = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_rollVel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rollVel;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_rollVel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rollVel;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_rollVel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rollVel = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_oneHandRotationRateExp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oneHandRotationRateExp;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_oneHandRotationRateExp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oneHandRotationRateExp;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_oneHandRotationRateExp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oneHandRotationRateExp = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_twoHandRotationRateExp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___twoHandRotationRateExp;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_twoHandRotationRateExp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___twoHandRotationRateExp;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_twoHandRotationRateExp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___twoHandRotationRateExp = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::GliderHoldable::__cordl_internal_get_playerFacingRotationOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerFacingRotationOffset;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::GliderHoldable::__cordl_internal_get_playerFacingRotationOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerFacingRotationOffset;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_playerFacingRotationOffset(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerFacingRotationOffset = value;
}
constexpr ::GlobalNamespace::AverageVector3*& GlobalNamespace::GliderHoldable::__cordl_internal_get_accelerationAverage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accelerationAverage;
}
constexpr ::GlobalNamespace::AverageVector3* const& GlobalNamespace::GliderHoldable::__cordl_internal_get_accelerationAverage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accelerationAverage;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_accelerationAverage(::GlobalNamespace::AverageVector3*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___accelerationAverage = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_accelerationSmoothed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accelerationSmoothed;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_accelerationSmoothed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accelerationSmoothed;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_accelerationSmoothed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___accelerationSmoothed = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_turnAccelerationSmoothed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnAccelerationSmoothed;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_turnAccelerationSmoothed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnAccelerationSmoothed;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_turnAccelerationSmoothed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___turnAccelerationSmoothed = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_accelSmoothingFollowRateExp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accelSmoothingFollowRateExp;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_accelSmoothingFollowRateExp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accelSmoothingFollowRateExp;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_accelSmoothingFollowRateExp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___accelSmoothingFollowRateExp = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_networkSyncFollowRateExp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkSyncFollowRateExp;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_networkSyncFollowRateExp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkSyncFollowRateExp;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_networkSyncFollowRateExp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkSyncFollowRateExp = value;
}
constexpr bool& GlobalNamespace::GliderHoldable::__cordl_internal_get_pendingOwnershipRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingOwnershipRequest;
}
constexpr bool const& GlobalNamespace::GliderHoldable::__cordl_internal_get_pendingOwnershipRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingOwnershipRequest;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_pendingOwnershipRequest(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pendingOwnershipRequest = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GliderHoldable::__cordl_internal_get_positionLocalToVRRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionLocalToVRRig;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GliderHoldable::__cordl_internal_get_positionLocalToVRRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionLocalToVRRig;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_positionLocalToVRRig(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionLocalToVRRig = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::GliderHoldable::__cordl_internal_get_rotationLocalToVRRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationLocalToVRRig;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::GliderHoldable::__cordl_internal_get_rotationLocalToVRRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationLocalToVRRig;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_rotationLocalToVRRig(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationLocalToVRRig = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::GliderHoldable::__cordl_internal_get_reenableOwnershipRequestCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reenableOwnershipRequestCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::GliderHoldable::__cordl_internal_get_reenableOwnershipRequestCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reenableOwnershipRequestCoroutine;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_reenableOwnershipRequestCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reenableOwnershipRequestCoroutine = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GliderHoldable::__cordl_internal_get_spawnPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GliderHoldable::__cordl_internal_get_spawnPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPosition;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_spawnPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnPosition = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::GliderHoldable::__cordl_internal_get_spawnRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::GliderHoldable::__cordl_internal_get_spawnRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnRotation;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_spawnRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnRotation = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GliderHoldable::__cordl_internal_get_skyJungleSpawnPostion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyJungleSpawnPostion;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GliderHoldable::__cordl_internal_get_skyJungleSpawnPostion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyJungleSpawnPostion;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_skyJungleSpawnPostion(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skyJungleSpawnPostion = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::GliderHoldable::__cordl_internal_get_skyJungleSpawnRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyJungleSpawnRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::GliderHoldable::__cordl_internal_get_skyJungleSpawnRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyJungleSpawnRotation;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_skyJungleSpawnRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skyJungleSpawnRotation = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GliderHoldable::__cordl_internal_get_skyJungleRespawnOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyJungleRespawnOrigin;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GliderHoldable::__cordl_internal_get_skyJungleRespawnOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyJungleRespawnOrigin;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_skyJungleRespawnOrigin(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skyJungleRespawnOrigin = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_lastHeldTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHeldTime;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_lastHeldTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHeldTime;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_lastHeldTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastHeldTime = value;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3>& GlobalNamespace::GliderHoldable::__cordl_internal_get_leftHoldPositionLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHoldPositionLocal;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& GlobalNamespace::GliderHoldable::__cordl_internal_get_leftHoldPositionLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHoldPositionLocal;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_leftHoldPositionLocal(::System::Nullable_1<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHoldPositionLocal = value;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3>& GlobalNamespace::GliderHoldable::__cordl_internal_get_rightHoldPositionLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHoldPositionLocal;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& GlobalNamespace::GliderHoldable::__cordl_internal_get_rightHoldPositionLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHoldPositionLocal;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_rightHoldPositionLocal(::System::Nullable_1<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHoldPositionLocal = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_whooshSoundDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whooshSoundDuration;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_whooshSoundDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whooshSoundDuration;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_whooshSoundDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___whooshSoundDuration = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_whooshSoundRetriggerThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whooshSoundRetriggerThreshold;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_whooshSoundRetriggerThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whooshSoundRetriggerThreshold;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_whooshSoundRetriggerThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___whooshSoundRetriggerThreshold = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_leftWhooshStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftWhooshStartTime;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_leftWhooshStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftWhooshStartTime;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_leftWhooshStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftWhooshStartTime = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GliderHoldable::__cordl_internal_get_leftWhooshHitPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftWhooshHitPoint;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GliderHoldable::__cordl_internal_get_leftWhooshHitPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftWhooshHitPoint;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_leftWhooshHitPoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftWhooshHitPoint = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GliderHoldable::__cordl_internal_get_whooshAudioPositionOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whooshAudioPositionOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GliderHoldable::__cordl_internal_get_whooshAudioPositionOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whooshAudioPositionOffset;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_whooshAudioPositionOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___whooshAudioPositionOffset = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_rightWhooshStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightWhooshStartTime;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_rightWhooshStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightWhooshStartTime;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_rightWhooshStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightWhooshStartTime = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GliderHoldable::__cordl_internal_get_rightWhooshHitPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightWhooshHitPoint;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GliderHoldable::__cordl_internal_get_rightWhooshHitPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightWhooshHitPoint;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_rightWhooshHitPoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightWhooshHitPoint = value;
}
constexpr int32_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_ridersMaterialOverideIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ridersMaterialOverideIndex;
}
constexpr int32_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_ridersMaterialOverideIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ridersMaterialOverideIndex;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_ridersMaterialOverideIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ridersMaterialOverideIndex = value;
}
constexpr int32_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_windVolumeForceAppliedFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windVolumeForceAppliedFrame;
}
constexpr int32_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_windVolumeForceAppliedFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windVolumeForceAppliedFrame;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_windVolumeForceAppliedFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windVolumeForceAppliedFrame = value;
}
constexpr bool& GlobalNamespace::GliderHoldable::__cordl_internal_get_holdingTwoGliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holdingTwoGliders;
}
constexpr bool const& GlobalNamespace::GliderHoldable::__cordl_internal_get_holdingTwoGliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holdingTwoGliders;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_holdingTwoGliders(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___holdingTwoGliders = value;
}
constexpr ::GlobalNamespace::GliderHoldable_GliderState& GlobalNamespace::GliderHoldable::__cordl_internal_get_gliderState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gliderState;
}
constexpr ::GlobalNamespace::GliderHoldable_GliderState const& GlobalNamespace::GliderHoldable::__cordl_internal_get_gliderState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gliderState;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_gliderState(::GlobalNamespace::GliderHoldable_GliderState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gliderState = value;
}
constexpr float_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_audioLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioLevel;
}
constexpr float_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_audioLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioLevel;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_audioLevel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioLevel = value;
}
constexpr int32_t& GlobalNamespace::GliderHoldable::__cordl_internal_get_riderId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___riderId;
}
constexpr int32_t const& GlobalNamespace::GliderHoldable::__cordl_internal_get_riderId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___riderId;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_riderId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___riderId = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::GliderHoldable::__cordl_internal_get_cachedRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::GliderHoldable::__cordl_internal_get_cachedRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedRig;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_cachedRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cachedRig = value;
}
constexpr bool& GlobalNamespace::GliderHoldable::__cordl_internal_get_infectedState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___infectedState;
}
constexpr bool const& GlobalNamespace::GliderHoldable::__cordl_internal_get_infectedState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___infectedState;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set_infectedState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___infectedState = value;
}
constexpr ::GlobalNamespace::GliderHoldable_SyncedState& GlobalNamespace::GliderHoldable::__cordl_internal_get__Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr ::GlobalNamespace::GliderHoldable_SyncedState const& GlobalNamespace::GliderHoldable::__cordl_internal_get__Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr void GlobalNamespace::GliderHoldable::__cordl_internal_set__Data(::GlobalNamespace::GliderHoldable_SyncedState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Data = value;
}
inline bool GlobalNamespace::GliderHoldable::get_OutOfBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"get_OutOfBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GliderHoldable::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GliderHoldable*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GliderHoldable::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GliderHoldable::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GliderHoldable*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GliderHoldable::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GliderHoldable*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GliderHoldable::Respawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"Respawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GliderHoldable::CustomMapLoad(::UnityEngine::Transform*  placeholderTransform, float_t  respawnDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"CustomMapLoad", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, placeholderTransform, respawnDistance);
}
inline void GlobalNamespace::GliderHoldable::CustomMapUnload()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"CustomMapUnload", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GliderHoldable::get_TwoHanded()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GliderHoldable*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GliderHoldable::OnHover(::GlobalNamespace::InteractionPoint*  pointHovered, ::UnityEngine::GameObject*  hoveringHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GliderHoldable*>(), 65}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointHovered, hoveringHand);
}
inline void GlobalNamespace::GliderHoldable::OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GliderHoldable*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointGrabbed, grabbingHand);
}
inline void GlobalNamespace::GliderHoldable::OnGrabAuthority(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"OnGrabAuthority", {}, {::i2c::type_of<::GlobalNamespace::InteractionPoint*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointGrabbed, grabbingHand);
}
inline bool GlobalNamespace::GliderHoldable::OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GliderHoldable*>(), 68}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zoneReleased, releasingHand);
}
inline void GlobalNamespace::GliderHoldable::DropItemCleanup()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GliderHoldable*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GliderHoldable::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GliderHoldable::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GliderHoldable::AuthorityUpdate(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"AuthorityUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GliderHoldable::AuthorityUpdateHeld(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"AuthorityUpdateHeld", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GliderHoldable::AuthorityUpdateUnheld(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"AuthorityUpdateUnheld", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GliderHoldable::RemoteSyncUpdate(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"RemoteSyncUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline ::UnityW<::GlobalNamespace::VRRig> GlobalNamespace::GliderHoldable::getNewHolderRig(int32_t  riderId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"getNewHolderRig", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRRig>>(this, ___internal_method, riderId);
}
inline ::UnityEngine::Vector3 GlobalNamespace::GliderHoldable::ClosestPointInHandle(::UnityEngine::Vector3  startingPoint, ::GlobalNamespace::InteractionPoint*  interactionPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"ClosestPointInHandle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::InteractionPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, startingPoint, interactionPoint);
}
inline void GlobalNamespace::GliderHoldable::UpdateGliderPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"UpdateGliderPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::GliderHoldable::GetHandsVector(::UnityEngine::Vector3  leftHandPos, ::UnityEngine::Vector3  rightHandPos, ::UnityEngine::Vector3  headPos, bool  flipBasedOnFacingDir)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"GetHandsVector", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, leftHandPos, rightHandPos, headPos, flipBasedOnFacingDir);
}
inline void GlobalNamespace::GliderHoldable::GetHandsOrientationVectors(::UnityEngine::Vector3  leftHandPos, ::UnityEngine::Vector3  rightHandPos, ::UnityEngine::Transform*  head, bool  flipBasedOnFacingDir, ::by_ref<::UnityEngine::Vector3>  handsVector, ::by_ref<::UnityEngine::Vector3>  handsUpVector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"GetHandsOrientationVectors", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leftHandPos, rightHandPos, head, flipBasedOnFacingDir, handsVector, handsUpVector);
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::GliderHoldable::GetMaterialFromIndex(uint8_t  materialIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"GetMaterialFromIndex", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method, materialIndex);
}
inline float_t GlobalNamespace::GliderHoldable::GetRollAngle180Wrapping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"GetRollAngle180Wrapping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::GliderHoldable::SignedAngleInPlane(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, ::UnityEngine::Vector3  normal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"SignedAngleInPlane", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, from, to, normal);
}
inline float_t GlobalNamespace::GliderHoldable::NormalizeAngle180(float_t  angle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"NormalizeAngle180", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, angle);
}
inline void GlobalNamespace::GliderHoldable::UpdateAudioSource(::UnityEngine::AudioSource*  source, float_t  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"UpdateAudioSource", {}, {::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, level);
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::GliderHoldable::GetInfectedMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"GetInfectedMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void GlobalNamespace::GliderHoldable::OnTriggerStay(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline ::UnityEngine::Vector3 GlobalNamespace::GliderHoldable::WindResistanceForceOffset(::UnityEngine::Vector3  upDir, ::UnityEngine::Vector3  windDir)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"WindResistanceForceOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, upDir, windDir);
}
inline ::GlobalNamespace::GliderHoldable_SyncedState GlobalNamespace::GliderHoldable::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GliderHoldable_SyncedState>(this, ___internal_method);
}
inline void GlobalNamespace::GliderHoldable::set_Data(::GlobalNamespace::GliderHoldable_SyncedState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"set_Data", {}, {::i2c::type_of<::GlobalNamespace::GliderHoldable_SyncedState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GliderHoldable::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GliderHoldable*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GliderHoldable::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GliderHoldable*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GliderHoldable::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GliderHoldable*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::GliderHoldable::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GliderHoldable*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GliderHoldable::ReenableOwnershipRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"ReenableOwnershipRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::GliderHoldable::OnOwnershipTransferred(::GlobalNamespace::NetPlayer*  toPlayer, ::GlobalNamespace::NetPlayer*  fromPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"OnOwnershipTransferred", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toPlayer, fromPlayer);
}
inline bool GlobalNamespace::GliderHoldable::OnOwnershipRequest(::GlobalNamespace::NetPlayer*  fromPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"OnOwnershipRequest", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromPlayer);
}
inline void GlobalNamespace::GliderHoldable::OnMyOwnerLeft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"OnMyOwnerLeft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GliderHoldable::OnMasterClientAssistedTakeoverRequest(::GlobalNamespace::NetPlayer*  fromPlayer, ::GlobalNamespace::NetPlayer*  toPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"OnMasterClientAssistedTakeoverRequest", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromPlayer, toPlayer);
}
inline void GlobalNamespace::GliderHoldable::OnMyCreatorLeft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"OnMyCreatorLeft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GliderHoldable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GliderHoldable::_OnHover_b__139_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"<OnHover>b__139_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GliderHoldable::_OnGrab_b__140_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable*>(),
                        {"<OnGrab>b__140_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GliderHoldable::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GliderHoldable*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::GliderHoldable::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GliderHoldable*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GliderHoldable* GlobalNamespace::GliderHoldable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GliderHoldable*>());
}
/// @brief Convert operator to "::GlobalNamespace::IRequestableOwnershipGuardCallbacks"
constexpr  GlobalNamespace::GliderHoldable::operator ::GlobalNamespace::IRequestableOwnershipGuardCallbacks*() noexcept {
return static_cast<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IRequestableOwnershipGuardCallbacks"
constexpr ::GlobalNamespace::IRequestableOwnershipGuardCallbacks* GlobalNamespace::GliderHoldable::i___GlobalNamespace__IRequestableOwnershipGuardCallbacks() noexcept {
return static_cast<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GliderHoldable::GliderHoldable()   {
}
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178::*)(int32_t)>(&::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5abaf60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178::*)()>(&::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5abb738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178::*)()>(&::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178::MoveNext)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5abb73c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178::*)()>(&::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5abb7e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178::*)()>(&::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5abb7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178::*)()>(&::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5abb828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::GliderHoldable>& GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GliderHoldable> const& GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GliderHoldable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178* GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178::GliderHoldable__ReenableOwnershipRequest_d__178()   {
}
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable_HoldingHand.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable_HoldingHand::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::GlobalNamespace::GliderHoldable_HoldingHand::Activate)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5ab4d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable_HoldingHand*>(),
                        {"Activate", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable_HoldingHand.Deactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable_HoldingHand::*)()>(&::GlobalNamespace::GliderHoldable_HoldingHand::Deactivate)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5ab5528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable_HoldingHand*>(),
                        {"Deactivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GliderHoldable_HoldingHand._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GliderHoldable_HoldingHand::*)()>(&::GlobalNamespace::GliderHoldable_HoldingHand::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5abb630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable_HoldingHand*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::GliderHoldable_HoldingHand::__cordl_internal_get_active()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___active;
}
constexpr bool const& GlobalNamespace::GliderHoldable_HoldingHand::__cordl_internal_get_active() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___active;
}
constexpr void GlobalNamespace::GliderHoldable_HoldingHand::__cordl_internal_set_active(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___active = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GliderHoldable_HoldingHand::__cordl_internal_get_transform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GliderHoldable_HoldingHand::__cordl_internal_get_transform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transform;
}
constexpr void GlobalNamespace::GliderHoldable_HoldingHand::__cordl_internal_set_transform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transform = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GliderHoldable_HoldingHand::__cordl_internal_get_holdLocalPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holdLocalPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GliderHoldable_HoldingHand::__cordl_internal_get_holdLocalPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holdLocalPos;
}
constexpr void GlobalNamespace::GliderHoldable_HoldingHand::__cordl_internal_set_holdLocalPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___holdLocalPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GliderHoldable_HoldingHand::__cordl_internal_get_handleLocalPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handleLocalPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GliderHoldable_HoldingHand::__cordl_internal_get_handleLocalPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handleLocalPos;
}
constexpr void GlobalNamespace::GliderHoldable_HoldingHand::__cordl_internal_set_handleLocalPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handleLocalPos = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::GliderHoldable_HoldingHand::__cordl_internal_get_localHoldRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localHoldRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::GliderHoldable_HoldingHand::__cordl_internal_get_localHoldRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localHoldRotation;
}
constexpr void GlobalNamespace::GliderHoldable_HoldingHand::__cordl_internal_set_localHoldRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localHoldRotation = value;
}
inline void GlobalNamespace::GliderHoldable_HoldingHand::Activate(::UnityEngine::Transform*  handTransform, ::UnityEngine::Transform*  gliderTransform, ::UnityEngine::Vector3  worldGrabPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable_HoldingHand*>(),
                        {"Activate", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handTransform, gliderTransform, worldGrabPoint);
}
inline void GlobalNamespace::GliderHoldable_HoldingHand::Deactivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable_HoldingHand*>(),
                        {"Deactivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GliderHoldable_HoldingHand::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GliderHoldable_HoldingHand*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GliderHoldable_HoldingHand* GlobalNamespace::GliderHoldable_HoldingHand::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GliderHoldable_HoldingHand*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GliderHoldable_HoldingHand::GliderHoldable_HoldingHand()   {
}
