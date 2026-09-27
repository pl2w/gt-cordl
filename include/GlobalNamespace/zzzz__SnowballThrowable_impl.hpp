#pragma once
// IWYU pragma private; include "GlobalNamespace/SnowballThrowable.hpp"
#include "GlobalNamespace/zzzz__HoldableObject_impl.hpp"
#include "GorillaTag/zzzz__GTColor_HSVRanges_impl.hpp"
#include "GorillaTag/zzzz__XformOffset_impl.hpp"
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "GlobalNamespace/zzzz__SnowballThrowable_def.hpp"
#include "GlobalNamespace/zzzz__DropZone_def.hpp"
#include "GlobalNamespace/zzzz__GorillaVelocityEstimator_def.hpp"
#include "GlobalNamespace/zzzz__InteractionPoint_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectile_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__IHeldItem_def.hpp"
#include "GorillaTag/zzzz__XformOffset_def.hpp"
#include "GorillaTagScripts/zzzz__RandomProjectileThrowable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SnowballThrowable.get_SpawnOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::XformOffset (::GlobalNamespace::SnowballThrowable::*)()>(&::GlobalNamespace::SnowballThrowable::get_SpawnOffset)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e0408c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                        {"get_SpawnOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballThrowable.set_SpawnOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnowballThrowable::*)(::GorillaTag::XformOffset)>(&::GlobalNamespace::SnowballThrowable::set_SpawnOffset)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e040a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                        {"set_SpawnOffset", {}, {::i2c::type_of<::GorillaTag::XformOffset>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballThrowable.get_ProjectileHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SnowballThrowable::*)()>(&::GlobalNamespace::SnowballThrowable::get_ProjectileHash)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5e040c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                        {"get_ProjectileHash", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballThrowable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnowballThrowable::*)()>(&::GlobalNamespace::SnowballThrowable::Awake)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x5dff56c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballThrowable.IsMine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SnowballThrowable::*)()>(&::GlobalNamespace::SnowballThrowable::IsMine)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e041ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                        {"IsMine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballThrowable.GorillaTag_Cosmetics_IHeldItem_InLeftHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SnowballThrowable::*)()>(&::GlobalNamespace::SnowballThrowable::GorillaTag_Cosmetics_IHeldItem_InLeftHand)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5e04234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                        {"GorillaTag.Cosmetics.IHeldItem.InLeftHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballThrowable.GorillaTag_Cosmetics_IHeldItem_InHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SnowballThrowable::*)()>(&::GlobalNamespace::SnowballThrowable::GorillaTag_Cosmetics_IHeldItem_InHand)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e04268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                        {"GorillaTag.Cosmetics.IHeldItem.InHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballThrowable.GorillaTag_Cosmetics_IHeldItem_IsMyItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SnowballThrowable::*)()>(&::GlobalNamespace::SnowballThrowable::GorillaTag_Cosmetics_IHeldItem_IsMyItem)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e04288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                        {"GorillaTag.Cosmetics.IHeldItem.IsMyItem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballThrowable.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnowballThrowable::*)()>(&::GlobalNamespace::SnowballThrowable::OnEnable)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x5dff9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballThrowable.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnowballThrowable::*)()>(&::GlobalNamespace::SnowballThrowable::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e046e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballThrowable.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnowballThrowable::*)()>(&::GlobalNamespace::SnowballThrowable::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e046ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballThrowable.SetSnowballActiveLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnowballThrowable::*)(bool)>(&::GlobalNamespace::SnowballThrowable::SetSnowballActiveLocal)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x5e01478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                        {"SetSnowballActiveLocal", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballThrowable.GetRandomModelIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SnowballThrowable::*)()>(&::GlobalNamespace::SnowballThrowable::GetRandomModelIndex)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5e046f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                        {"GetRandomModelIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballThrowable.EnableRandomModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnowballThrowable::*)(int32_t, bool)>(&::GlobalNamespace::SnowballThrowable::EnableRandomModel)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e044b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                        {"EnableRandomModel", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballThrowable.LateUpdateLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnowballThrowable::*)()>(&::GlobalNamespace::SnowballThrowable::LateUpdateLocal)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5e012e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballThrowable.LateUpdateReplicated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnowballThrowable::*)()>(&::GlobalNamespace::SnowballThrowable::LateUpdateReplicated)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e047c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                        {"LateUpdateReplicated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballThrowable.LateUpdateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnowballThrowable::*)()>(&::GlobalNamespace::SnowballThrowable::LateUpdateShared)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e047cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                        {"LateUpdateShared", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballThrowable.Anchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::SnowballThrowable::*)()>(&::GlobalNamespace::SnowballThrowable::Anchor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e047d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                        {"Anchor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballThrowable.AnchorToHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnowballThrowable::*)()>(&::GlobalNamespace::SnowballThrowable::AnchorToHand)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5e04578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                        {"AnchorToHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballThrowable.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnowballThrowable::*)()>(&::GlobalNamespace::SnowballThrowable::LateUpdate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e047f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballThrowable.OnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SnowballThrowable::*)(::GlobalNamespace::DropZone*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::SnowballThrowable::OnRelease)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5e04820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballThrowable.OnSnowballRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnowballThrowable::*)()>(&::GlobalNamespace::SnowballThrowable::OnSnowballRelease)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e04860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballThrowable.PerformSnowballThrowAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnowballThrowable::*)()>(&::GlobalNamespace::SnowballThrowable::PerformSnowballThrowAuthority)> {
  constexpr static std::size_t size = 0x524;
  constexpr static std::size_t addrs = 0x5e04870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballThrowable.LaunchSnowballLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SlingshotProjectile> (::GlobalNamespace::SnowballThrowable::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, bool, ::UnityEngine::Color)>(&::GlobalNamespace::SnowballThrowable::LaunchSnowballLocal)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x5e04d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballThrowable.SpawnProjectile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SlingshotProjectile> (::GlobalNamespace::SnowballThrowable::*)()>(&::GlobalNamespace::SnowballThrowable::SpawnProjectile)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5e05138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballThrowable.OnProjectileImpact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnowballThrowable::*)(::GlobalNamespace::SlingshotProjectile*, ::UnityEngine::Vector3, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::SnowballThrowable::OnProjectileImpact)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x5e05210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballThrowable.ApplyColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnowballThrowable::*)(::UnityEngine::Color)>(&::GlobalNamespace::SnowballThrowable::ApplyColor)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5e0428c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                        {"ApplyColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballThrowable.OnHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnowballThrowable::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::SnowballThrowable::OnHover)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e05520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballThrowable.OnGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnowballThrowable::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::SnowballThrowable::OnGrab)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e05524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballThrowable.DropItemCleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnowballThrowable::*)()>(&::GlobalNamespace::SnowballThrowable::DropItemCleanup)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5e05528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                    {::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballThrowable.HandleOnDestroyRandomProjectile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnowballThrowable::*)(bool)>(&::GlobalNamespace::SnowballThrowable::HandleOnDestroyRandomProjectile)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e0556c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                        {"HandleOnDestroyRandomProjectile", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballThrowable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnowballThrowable::*)()>(&::GlobalNamespace::SnowballThrowable::_ctor)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5e02ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::SnowballThrowable::__cordl_internal_get_matDataIndexes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matDataIndexes;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::SnowballThrowable::__cordl_internal_get_matDataIndexes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matDataIndexes;
}
constexpr void GlobalNamespace::SnowballThrowable::__cordl_internal_set_matDataIndexes(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matDataIndexes = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SnowballThrowable::__cordl_internal_get_projectilePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectilePrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SnowballThrowable::__cordl_internal_get_projectilePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectilePrefab;
}
constexpr void GlobalNamespace::SnowballThrowable::__cordl_internal_set_projectilePrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectilePrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::SnowballThrowable::__cordl_internal_get_pickupSoundBankPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pickupSoundBankPlayer;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::SnowballThrowable::__cordl_internal_get_pickupSoundBankPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pickupSoundBankPlayer;
}
constexpr void GlobalNamespace::SnowballThrowable::__cordl_internal_set_pickupSoundBankPlayer(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pickupSoundBankPlayer = value;
}
constexpr bool& GlobalNamespace::SnowballThrowable::__cordl_internal_get_playHapticsOnPickup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playHapticsOnPickup;
}
constexpr bool const& GlobalNamespace::SnowballThrowable::__cordl_internal_get_playHapticsOnPickup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playHapticsOnPickup;
}
constexpr void GlobalNamespace::SnowballThrowable::__cordl_internal_set_playHapticsOnPickup(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playHapticsOnPickup = value;
}
constexpr float_t& GlobalNamespace::SnowballThrowable::__cordl_internal_get_pickupHapticStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pickupHapticStrength;
}
constexpr float_t const& GlobalNamespace::SnowballThrowable::__cordl_internal_get_pickupHapticStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pickupHapticStrength;
}
constexpr void GlobalNamespace::SnowballThrowable::__cordl_internal_set_pickupHapticStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pickupHapticStrength = value;
}
constexpr float_t& GlobalNamespace::SnowballThrowable::__cordl_internal_get_pickupHapticDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pickupHapticDuration;
}
constexpr float_t const& GlobalNamespace::SnowballThrowable::__cordl_internal_get_pickupHapticDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pickupHapticDuration;
}
constexpr void GlobalNamespace::SnowballThrowable::__cordl_internal_set_pickupHapticDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pickupHapticDuration = value;
}
constexpr bool& GlobalNamespace::SnowballThrowable::__cordl_internal_get_isLeftHanded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeftHanded;
}
constexpr bool const& GlobalNamespace::SnowballThrowable::__cordl_internal_get_isLeftHanded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeftHanded;
}
constexpr void GlobalNamespace::SnowballThrowable::__cordl_internal_set_isLeftHanded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLeftHanded = value;
}
constexpr int32_t& GlobalNamespace::SnowballThrowable::__cordl_internal_get_throwableMakerIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwableMakerIndex;
}
constexpr int32_t const& GlobalNamespace::SnowballThrowable::__cordl_internal_get_throwableMakerIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwableMakerIndex;
}
constexpr void GlobalNamespace::SnowballThrowable::__cordl_internal_set_throwableMakerIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___throwableMakerIndex = value;
}
constexpr float_t& GlobalNamespace::SnowballThrowable::__cordl_internal_get_linSpeedMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linSpeedMultiplier;
}
constexpr float_t const& GlobalNamespace::SnowballThrowable::__cordl_internal_get_linSpeedMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linSpeedMultiplier;
}
constexpr void GlobalNamespace::SnowballThrowable::__cordl_internal_set_linSpeedMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___linSpeedMultiplier = value;
}
constexpr float_t& GlobalNamespace::SnowballThrowable::__cordl_internal_get_maxLinSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxLinSpeed;
}
constexpr float_t const& GlobalNamespace::SnowballThrowable::__cordl_internal_get_maxLinSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxLinSpeed;
}
constexpr void GlobalNamespace::SnowballThrowable::__cordl_internal_set_maxLinSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxLinSpeed = value;
}
constexpr bool& GlobalNamespace::SnowballThrowable::__cordl_internal_get_randomizeColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomizeColor;
}
constexpr bool const& GlobalNamespace::SnowballThrowable::__cordl_internal_get_randomizeColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomizeColor;
}
constexpr void GlobalNamespace::SnowballThrowable::__cordl_internal_set_randomizeColor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomizeColor = value;
}
constexpr ::GlobalNamespace::GTColor_HSVRanges& GlobalNamespace::SnowballThrowable::__cordl_internal_get_randomColorHSVRanges()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomColorHSVRanges;
}
constexpr ::GlobalNamespace::GTColor_HSVRanges const& GlobalNamespace::SnowballThrowable::__cordl_internal_get_randomColorHSVRanges() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomColorHSVRanges;
}
constexpr void GlobalNamespace::SnowballThrowable::__cordl_internal_set_randomColorHSVRanges(::GlobalNamespace::GTColor_HSVRanges  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomColorHSVRanges = value;
}
constexpr bool& GlobalNamespace::SnowballThrowable::__cordl_internal_get_randomModelSelection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomModelSelection;
}
constexpr bool const& GlobalNamespace::SnowballThrowable::__cordl_internal_get_randomModelSelection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomModelSelection;
}
constexpr void GlobalNamespace::SnowballThrowable::__cordl_internal_set_randomModelSelection(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomModelSelection = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::RandomProjectileThrowable>>*& GlobalNamespace::SnowballThrowable::__cordl_internal_get_localModels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localModels;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::RandomProjectileThrowable>>* const& GlobalNamespace::SnowballThrowable::__cordl_internal_get_localModels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localModels;
}
constexpr void GlobalNamespace::SnowballThrowable::__cordl_internal_set_localModels(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::RandomProjectileThrowable>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localModels = value;
}
constexpr ::StringW& GlobalNamespace::SnowballThrowable::__cordl_internal_get_throwEventName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwEventName;
}
constexpr ::StringW const& GlobalNamespace::SnowballThrowable::__cordl_internal_get_throwEventName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwEventName;
}
constexpr void GlobalNamespace::SnowballThrowable::__cordl_internal_set_throwEventName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___throwEventName = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& GlobalNamespace::SnowballThrowable::__cordl_internal_get_velocityEstimator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimator;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& GlobalNamespace::SnowballThrowable::__cordl_internal_get_velocityEstimator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimator;
}
constexpr void GlobalNamespace::SnowballThrowable::__cordl_internal_set_velocityEstimator(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityEstimator = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::SnowballThrowable::__cordl_internal_get_targetRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::SnowballThrowable::__cordl_internal_get_targetRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRig;
}
constexpr void GlobalNamespace::SnowballThrowable::__cordl_internal_set_targetRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetRig = value;
}
constexpr bool& GlobalNamespace::SnowballThrowable::__cordl_internal_get_isOfflineRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOfflineRig;
}
constexpr bool const& GlobalNamespace::SnowballThrowable::__cordl_internal_get_isOfflineRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOfflineRig;
}
constexpr void GlobalNamespace::SnowballThrowable::__cordl_internal_set_isOfflineRig(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isOfflineRig = value;
}
constexpr bool& GlobalNamespace::SnowballThrowable::__cordl_internal_get_awakeHasBeenCalled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___awakeHasBeenCalled;
}
constexpr bool const& GlobalNamespace::SnowballThrowable::__cordl_internal_get_awakeHasBeenCalled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___awakeHasBeenCalled;
}
constexpr void GlobalNamespace::SnowballThrowable::__cordl_internal_set_awakeHasBeenCalled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___awakeHasBeenCalled = value;
}
constexpr bool& GlobalNamespace::SnowballThrowable::__cordl_internal_get_OnEnableHasBeenCalled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEnableHasBeenCalled;
}
constexpr bool const& GlobalNamespace::SnowballThrowable::__cordl_internal_get_OnEnableHasBeenCalled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEnableHasBeenCalled;
}
constexpr void GlobalNamespace::SnowballThrowable::__cordl_internal_set_OnEnableHasBeenCalled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnEnableHasBeenCalled = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& GlobalNamespace::SnowballThrowable::__cordl_internal_get_renderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& GlobalNamespace::SnowballThrowable::__cordl_internal_get_renderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderers;
}
constexpr void GlobalNamespace::SnowballThrowable::__cordl_internal_set_renderers(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderers = value;
}
constexpr int32_t& GlobalNamespace::SnowballThrowable::__cordl_internal_get_randModelIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randModelIndex;
}
constexpr int32_t const& GlobalNamespace::SnowballThrowable::__cordl_internal_get_randModelIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randModelIndex;
}
constexpr void GlobalNamespace::SnowballThrowable::__cordl_internal_set_randModelIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randModelIndex = value;
}
constexpr float_t& GlobalNamespace::SnowballThrowable::__cordl_internal_get_destroyTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyTimer;
}
constexpr float_t const& GlobalNamespace::SnowballThrowable::__cordl_internal_get_destroyTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destroyTimer;
}
constexpr void GlobalNamespace::SnowballThrowable::__cordl_internal_set_destroyTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destroyTimer = value;
}
constexpr ::GorillaTag::XformOffset& GlobalNamespace::SnowballThrowable::__cordl_internal_get_spawnOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnOffset;
}
constexpr ::GorillaTag::XformOffset const& GlobalNamespace::SnowballThrowable::__cordl_internal_get_spawnOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnOffset;
}
constexpr void GlobalNamespace::SnowballThrowable::__cordl_internal_set_spawnOffset(::GorillaTag::XformOffset  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnOffset = value;
}
inline ::GorillaTag::XformOffset GlobalNamespace::SnowballThrowable::get_SpawnOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                        {"get_SpawnOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::XformOffset>(this, ___internal_method);
}
inline void GlobalNamespace::SnowballThrowable::set_SpawnOffset(::GorillaTag::XformOffset  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                        {"set_SpawnOffset", {}, {::i2c::type_of<::GorillaTag::XformOffset>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::SnowballThrowable::get_ProjectileHash()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                        {"get_ProjectileHash", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::SnowballThrowable::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SnowballThrowable::IsMine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                        {"IsMine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::SnowballThrowable::GorillaTag_Cosmetics_IHeldItem_InLeftHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                        {"GorillaTag.Cosmetics.IHeldItem.InLeftHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::SnowballThrowable::GorillaTag_Cosmetics_IHeldItem_InHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                        {"GorillaTag.Cosmetics.IHeldItem.InHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::SnowballThrowable::GorillaTag_Cosmetics_IHeldItem_IsMyItem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                        {"GorillaTag.Cosmetics.IHeldItem.IsMyItem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SnowballThrowable::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SnowballThrowable::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SnowballThrowable::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SnowballThrowable::SetSnowballActiveLocal(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                        {"SetSnowballActiveLocal", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enabled);
}
inline int32_t GlobalNamespace::SnowballThrowable::GetRandomModelIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                        {"GetRandomModelIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::SnowballThrowable::EnableRandomModel(int32_t  index, bool  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                        {"EnableRandomModel", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, enable);
}
inline void GlobalNamespace::SnowballThrowable::LateUpdateLocal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SnowballThrowable::LateUpdateReplicated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                        {"LateUpdateReplicated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SnowballThrowable::LateUpdateShared()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                        {"LateUpdateShared", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::SnowballThrowable::Anchor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                        {"Anchor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void GlobalNamespace::SnowballThrowable::AnchorToHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                        {"AnchorToHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SnowballThrowable::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SnowballThrowable::OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zoneReleased, releasingHand);
}
inline void GlobalNamespace::SnowballThrowable::OnSnowballRelease()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SnowballThrowable::PerformSnowballThrowAuthority()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::SlingshotProjectile> GlobalNamespace::SnowballThrowable::LaunchSnowballLocal(::UnityEngine::Vector3  location, ::UnityEngine::Vector3  velocity, float_t  scale, bool  randomColour, ::UnityEngine::Color  colour)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SlingshotProjectile>>(this, ___internal_method, location, velocity, scale, randomColour, colour);
}
inline ::UnityW<::GlobalNamespace::SlingshotProjectile> GlobalNamespace::SnowballThrowable::SpawnProjectile()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SlingshotProjectile>>(this, ___internal_method);
}
inline void GlobalNamespace::SnowballThrowable::OnProjectileImpact(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Vector3  impactPos, ::GlobalNamespace::NetPlayer*  hitPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, projectile, impactPos, hitPlayer);
}
inline void GlobalNamespace::SnowballThrowable::ApplyColor(::UnityEngine::Color  newColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                        {"ApplyColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newColor);
}
inline void GlobalNamespace::SnowballThrowable::OnHover(::GlobalNamespace::InteractionPoint*  pointHovered, ::UnityEngine::GameObject*  hoveringHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointHovered, hoveringHand);
}
inline void GlobalNamespace::SnowballThrowable::OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointGrabbed, grabbingHand);
}
inline void GlobalNamespace::SnowballThrowable::DropItemCleanup()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SnowballThrowable::HandleOnDestroyRandomProjectile(bool  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                        {"HandleOnDestroyRandomProjectile", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable);
}
inline void GlobalNamespace::SnowballThrowable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballThrowable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SnowballThrowable* GlobalNamespace::SnowballThrowable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SnowballThrowable*>());
}
/// @brief Convert operator to "::GorillaTag::Cosmetics::IHeldItem"
constexpr  GlobalNamespace::SnowballThrowable::operator ::GorillaTag::Cosmetics::IHeldItem*() noexcept {
return static_cast<::GorillaTag::Cosmetics::IHeldItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::Cosmetics::IHeldItem"
constexpr ::GorillaTag::Cosmetics::IHeldItem* GlobalNamespace::SnowballThrowable::i___GorillaTag__Cosmetics__IHeldItem() noexcept {
return static_cast<::GorillaTag::Cosmetics::IHeldItem*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SnowballThrowable::SnowballThrowable()   {
}
