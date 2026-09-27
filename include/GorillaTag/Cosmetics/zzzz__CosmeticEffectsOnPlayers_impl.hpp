#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/CosmeticEffectsOnPlayers.hpp"
#include "GorillaGameModes/zzzz__GameModeType_impl.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__CosmeticEffectsOnPlayers_EFFECTTYPE_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__CosmeticEffectsOnPlayers_TargetType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__CosmeticEffectsOnPlayers_def.hpp"
#include "GlobalNamespace/zzzz__GorillaSkin_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__CosmeticEffectsOnPlayers_EFFECTTYPE_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__CosmeticEffectsOnPlayers_TargetType_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__CosmeticEffectsOnPlayers_def.hpp"
#include "GorillaTag/zzzz__ISpawnable_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers.ShouldAffectRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::*)(::GlobalNamespace::VRRig*, ::GlobalNamespace::CosmeticEffectsOnPlayers_TargetType)>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::ShouldAffectRig)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d6df3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"ShouldAffectRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::GlobalNamespace::CosmeticEffectsOnPlayers_TargetType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::*)()>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d6dfdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers.SetKnockbackStrengthMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::*)(float_t)>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::SetKnockbackStrengthMultiplier)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5d6e07c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"SetKnockbackStrengthMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers.ApplyAllEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::*)()>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::ApplyAllEffects)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5d6e1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"ApplyAllEffects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers.ApplyAllEffectsByDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::*)(::UnityEngine::Transform*)>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::ApplyAllEffectsByDistance)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5d6e3ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"ApplyAllEffectsByDistance", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers.ApplyAllEffectsByDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::*)(::UnityEngine::Vector3)>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::ApplyAllEffectsByDistance)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5d6e1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"ApplyAllEffectsByDistance", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers.ApplyAllEffectsForRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::*)(::GlobalNamespace::VRRig*)>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::ApplyAllEffectsForRig)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5d7012c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"ApplyAllEffectsForRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers.ApplySkinByDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::*)(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>, ::UnityEngine::Vector3)>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::ApplySkinByDistance)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x5d6e414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"ApplySkinByDistance", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers.ApplySkinForRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::*)(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>, ::GlobalNamespace::VRRig*)>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::ApplySkinForRig)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5d70308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"ApplySkinForRig", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>>(), ::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers.ApplyTagWithKnockbackForRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::*)(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>, ::GlobalNamespace::VRRig*)>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::ApplyTagWithKnockbackForRig)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5d703f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"ApplyTagWithKnockbackForRig", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>>(), ::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers.ApplyTagWithKnockbackByDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::*)(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>, ::UnityEngine::Vector3)>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::ApplyTagWithKnockbackByDistance)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x5d6e984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"ApplyTagWithKnockbackByDistance", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers.ApplyInstantKnockbackForRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::*)(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>, ::GlobalNamespace::VRRig*)>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::ApplyInstantKnockbackForRig)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x5d704d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"ApplyInstantKnockbackForRig", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>>(), ::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers.ApplyInstantKnockbackByDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::*)(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>, ::UnityEngine::Vector3)>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::ApplyInstantKnockbackByDistance)> {
  constexpr static std::size_t size = 0x758;
  constexpr static std::size_t addrs = 0x5d6eef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"ApplyInstantKnockbackByDistance", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers.ApplyVOForRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::*)(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>, ::GlobalNamespace::VRRig*)>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::ApplyVOForRig)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5d7081c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"ApplyVOForRig", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>>(), ::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers.PlaySfxForRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::*)(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>, ::GlobalNamespace::VRRig*)>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::PlaySfxForRig)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5d70904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"PlaySfxForRig", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>>(), ::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers.PlaySfxByDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::*)(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>, ::UnityEngine::Vector3)>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::PlaySfxByDistance)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x5d6f64c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"PlaySfxByDistance", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers.PlayVFXForRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::*)(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>, ::GlobalNamespace::VRRig*)>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::PlayVFXForRig)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5d709ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"PlayVFXForRig", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>>(), ::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers.PlayVFXByDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::*)(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>, ::UnityEngine::Vector3)>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::PlayVFXByDistance)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x5d6fbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"PlayVFXByDistance", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers.get_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::*)()>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::get_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d70c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"get_IsSpawned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers.set_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::*)(bool)>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::set_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d70c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers.get_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::CosmeticSystem::ECosmeticSelectSide (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::*)()>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::get_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d70c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"get_CosmeticSelectedSide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers.set_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::*)(::GorillaTag::CosmeticSystem::ECosmeticSelectSide)>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::set_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d70c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers.OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::*)(::GlobalNamespace::VRRig*)>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::OnSpawn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d70c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers.OnDespawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::*)()>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::OnDespawn)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d70c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"OnDespawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::*)()>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5d70c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::__cordl_internal_get_allEffects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allEffects;
}
constexpr ::ArrayW<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*> const& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::__cordl_internal_get_allEffects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allEffects;
}
constexpr void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::__cordl_internal_set_allEffects(::ArrayW<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allEffects = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::__cordl_internal_get_myRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::__cordl_internal_get_myRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::__cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myRig = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>*& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::__cordl_internal_get_allEffectsDict()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allEffectsDict;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>* const& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::__cordl_internal_get_allEffectsDict() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allEffectsDict;
}
constexpr void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::__cordl_internal_set_allEffectsDict(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allEffectsDict = value;
}
constexpr bool& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::__cordl_internal_get__IsSpawned_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSpawned_k__BackingField;
}
constexpr bool const& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::__cordl_internal_get__IsSpawned_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSpawned_k__BackingField;
}
constexpr void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::__cordl_internal_set__IsSpawned_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsSpawned_k__BackingField = value;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::__cordl_internal_get__CosmeticSelectedSide_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CosmeticSelectedSide_k__BackingField;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::__cordl_internal_get__CosmeticSelectedSide_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CosmeticSelectedSide_k__BackingField;
}
constexpr void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::__cordl_internal_set__CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CosmeticSelectedSide_k__BackingField = value;
}
inline bool GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::ShouldAffectRig(::GlobalNamespace::VRRig*  rig, ::GlobalNamespace::CosmeticEffectsOnPlayers_TargetType  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"ShouldAffectRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::GlobalNamespace::CosmeticEffectsOnPlayers_TargetType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rig, target);
}
inline void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::SetKnockbackStrengthMultiplier(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"SetKnockbackStrengthMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::ApplyAllEffects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"ApplyAllEffects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::ApplyAllEffectsByDistance(::UnityEngine::Transform*  _transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"ApplyAllEffectsByDistance", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _transform);
}
inline void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::ApplyAllEffectsByDistance(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"ApplyAllEffectsByDistance", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position);
}
inline void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::ApplyAllEffectsForRig(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"ApplyAllEffectsForRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::ApplySkinByDistance(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>  effect, ::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"ApplySkinByDistance", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, effect, position);
}
inline void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::ApplySkinForRig(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>  effect, ::GlobalNamespace::VRRig*  vrRig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"ApplySkinForRig", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>>(), ::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, effect, vrRig);
}
inline void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::ApplyTagWithKnockbackForRig(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>  effect, ::GlobalNamespace::VRRig*  vrRig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"ApplyTagWithKnockbackForRig", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>>(), ::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, effect, vrRig);
}
inline void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::ApplyTagWithKnockbackByDistance(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>  effect, ::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"ApplyTagWithKnockbackByDistance", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, effect, position);
}
inline void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::ApplyInstantKnockbackForRig(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>  effect, ::GlobalNamespace::VRRig*  vrRig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"ApplyInstantKnockbackForRig", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>>(), ::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, effect, vrRig);
}
inline void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::ApplyInstantKnockbackByDistance(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>  effect, ::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"ApplyInstantKnockbackByDistance", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, effect, position);
}
inline void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::ApplyVOForRig(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>  effect, ::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"ApplyVOForRig", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>>(), ::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, effect, rig);
}
inline void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::PlaySfxForRig(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>  effect, ::GlobalNamespace::VRRig*  vrRig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"PlaySfxForRig", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>>(), ::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, effect, vrRig);
}
inline void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::PlaySfxByDistance(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>  effect, ::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"PlaySfxByDistance", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, effect, position);
}
inline void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::PlayVFXForRig(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>  effect, ::GlobalNamespace::VRRig*  vrRig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"PlayVFXForRig", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>>(), ::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, effect, vrRig);
}
inline void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::PlayVFXByDistance(::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>  effect, ::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"PlayVFXByDistance", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE,::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, effect, position);
}
inline bool GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::get_IsSpawned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"get_IsSpawned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::set_IsSpawned(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::get_CosmeticSelectedSide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"get_CosmeticSelectedSide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::OnSpawn(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::OnDespawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {"OnDespawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers* GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers*>());
}
/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr  GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::operator ::GorillaTag::ISpawnable*() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::i___GorillaTag__ISpawnable() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers::CosmeticEffectsOnPlayers()   {
}
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect.get_knockbackStrengthMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::*)()>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::get_knockbackStrengthMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d70d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>(),
                        {"get_knockbackStrengthMultiplier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect.set_knockbackStrengthMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::*)(float_t)>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::set_knockbackStrengthMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d70d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>(),
                        {"set_knockbackStrengthMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect.IsGameModeAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::*)()>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::IsGameModeAllowed)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5d70ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>(),
                        {"IsGameModeAllowed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect.get_EffectDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::*)()>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::get_EffectDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d70d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>(),
                        {"get_EffectDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect.set_EffectDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::*)(float_t)>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::set_EffectDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d70d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>(),
                        {"set_EffectDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect.get_EffectStartedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::*)()>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::get_EffectStartedTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d70d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>(),
                        {"get_EffectStartedTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect.set_EffectStartedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::*)(float_t)>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::set_EffectStartedTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d70d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>(),
                        {"set_EffectStartedTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect.IsSkin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::*)()>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::IsSkin)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d70d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>(),
                        {"IsSkin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect.IsTagKnockback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::*)()>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::IsTagKnockback)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d70d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>(),
                        {"IsTagKnockback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect.IsInstantKnockback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::*)()>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::IsInstantKnockback)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d70d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>(),
                        {"IsInstantKnockback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect.HasKnockback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::*)()>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::HasKnockback)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5d70d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>(),
                        {"HasKnockback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect.IsVO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::*)()>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::IsVO)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d70d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>(),
                        {"IsVO", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect.IsSFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::*)()>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::IsSFX)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d70da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>(),
                        {"IsSFX", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect.IsVFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::*)()>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::IsVFX)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d70db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>(),
                        {"IsVFX", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect.get_Modes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>* (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::*)()>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::get_Modes)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5d70dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>(),
                        {"get_Modes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::*)()>(&::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5d70e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GorillaGameModes::GameModeType>& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_excludeForGameModes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___excludeForGameModes;
}
constexpr ::ArrayW<::GorillaGameModes::GameModeType> const& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_excludeForGameModes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___excludeForGameModes;
}
constexpr void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_set_excludeForGameModes(::ArrayW<::GorillaGameModes::GameModeType>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___excludeForGameModes = value;
}
constexpr ::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_effectType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectType;
}
constexpr ::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE const& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_effectType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectType;
}
constexpr void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_set_effectType(::GlobalNamespace::CosmeticEffectsOnPlayers_EFFECTTYPE  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___effectType = value;
}
constexpr float_t& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_effectDistanceRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectDistanceRadius;
}
constexpr float_t const& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_effectDistanceRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectDistanceRadius;
}
constexpr void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_set_effectDistanceRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___effectDistanceRadius = value;
}
constexpr ::GlobalNamespace::CosmeticEffectsOnPlayers_TargetType& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::GlobalNamespace::CosmeticEffectsOnPlayers_TargetType const& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_set_target(::GlobalNamespace::CosmeticEffectsOnPlayers_TargetType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr float_t& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_effectDurationOthers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectDurationOthers;
}
constexpr float_t const& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_effectDurationOthers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectDurationOthers;
}
constexpr void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_set_effectDurationOthers(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___effectDurationOthers = value;
}
constexpr float_t& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_effectDurationOwner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectDurationOwner;
}
constexpr float_t const& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_effectDurationOwner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectDurationOwner;
}
constexpr void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_set_effectDurationOwner(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___effectDurationOwner = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaSkin>& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_newSkin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newSkin;
}
constexpr ::UnityW<::GlobalNamespace::GorillaSkin> const& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_newSkin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newSkin;
}
constexpr void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_set_newSkin(::UnityW<::GlobalNamespace::GorillaSkin>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newSkin = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_knockbackVFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackVFX;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_knockbackVFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackVFX;
}
constexpr void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_set_knockbackVFX(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___knockbackVFX = value;
}
constexpr float_t& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_knockbackStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackStrength;
}
constexpr float_t const& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_knockbackStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackStrength;
}
constexpr void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_set_knockbackStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___knockbackStrength = value;
}
constexpr bool& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_applyScaleToKnockbackStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyScaleToKnockbackStrength;
}
constexpr bool const& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_applyScaleToKnockbackStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyScaleToKnockbackStrength;
}
constexpr void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_set_applyScaleToKnockbackStrength(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyScaleToKnockbackStrength = value;
}
constexpr bool& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_forceOffTheGround()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceOffTheGround;
}
constexpr bool const& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_forceOffTheGround() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceOffTheGround;
}
constexpr void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_set_forceOffTheGround(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forceOffTheGround = value;
}
constexpr bool& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_specialVerticalForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___specialVerticalForce;
}
constexpr bool const& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_specialVerticalForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___specialVerticalForce;
}
constexpr void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_set_specialVerticalForce(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___specialVerticalForce = value;
}
constexpr float_t& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_minKnockbackStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minKnockbackStrength;
}
constexpr float_t const& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_minKnockbackStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minKnockbackStrength;
}
constexpr void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_set_minKnockbackStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minKnockbackStrength = value;
}
constexpr float_t& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_maxKnockbackStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxKnockbackStrength;
}
constexpr float_t const& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_maxKnockbackStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxKnockbackStrength;
}
constexpr void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_set_maxKnockbackStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxKnockbackStrength = value;
}
constexpr float_t& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get__knockbackStrengthMultiplier_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____knockbackStrengthMultiplier_k__BackingField;
}
constexpr float_t const& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get__knockbackStrengthMultiplier_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____knockbackStrengthMultiplier_k__BackingField;
}
constexpr void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_set__knockbackStrengthMultiplier_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____knockbackStrengthMultiplier_k__BackingField = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_voiceOverrideNormalClips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceOverrideNormalClips;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_voiceOverrideNormalClips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceOverrideNormalClips;
}
constexpr void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_set_voiceOverrideNormalClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceOverrideNormalClips = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_voiceOverrideLoudClips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceOverrideLoudClips;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_voiceOverrideLoudClips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceOverrideLoudClips;
}
constexpr void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_set_voiceOverrideLoudClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceOverrideLoudClips = value;
}
constexpr float_t& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_voiceOverrideNormalVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceOverrideNormalVolume;
}
constexpr float_t const& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_voiceOverrideNormalVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceOverrideNormalVolume;
}
constexpr void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_set_voiceOverrideNormalVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceOverrideNormalVolume = value;
}
constexpr float_t& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_voiceOverrideLoudVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceOverrideLoudVolume;
}
constexpr float_t const& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_voiceOverrideLoudVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceOverrideLoudVolume;
}
constexpr void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_set_voiceOverrideLoudVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceOverrideLoudVolume = value;
}
constexpr float_t& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_voiceOverrideLoudThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceOverrideLoudThreshold;
}
constexpr float_t const& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_voiceOverrideLoudThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceOverrideLoudThreshold;
}
constexpr void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_set_voiceOverrideLoudThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceOverrideLoudThreshold = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_sfxAudioClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sfxAudioClip;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>* const& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_sfxAudioClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sfxAudioClip;
}
constexpr void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_set_sfxAudioClip(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sfxAudioClip = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_VFXGameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VFXGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_VFXGameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VFXGameObject;
}
constexpr void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_set_VFXGameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VFXGameObject = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_modesHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modesHash;
}
constexpr ::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>* const& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get_modesHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modesHash;
}
constexpr void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_set_modesHash(::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modesHash = value;
}
constexpr float_t& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get__EffectStartedTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EffectStartedTime_k__BackingField;
}
constexpr float_t const& GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_get__EffectStartedTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EffectStartedTime_k__BackingField;
}
constexpr void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::__cordl_internal_set__EffectStartedTime_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EffectStartedTime_k__BackingField = value;
}
inline float_t GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::get_knockbackStrengthMultiplier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>(),
                        {"get_knockbackStrengthMultiplier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::set_knockbackStrengthMultiplier(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>(),
                        {"set_knockbackStrengthMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::IsGameModeAllowed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>(),
                        {"IsGameModeAllowed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::get_EffectDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>(),
                        {"get_EffectDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::set_EffectDuration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>(),
                        {"set_EffectDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::get_EffectStartedTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>(),
                        {"get_EffectStartedTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::set_EffectStartedTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>(),
                        {"set_EffectStartedTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::IsSkin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>(),
                        {"IsSkin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::IsTagKnockback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>(),
                        {"IsTagKnockback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::IsInstantKnockback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>(),
                        {"IsInstantKnockback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::HasKnockback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>(),
                        {"HasKnockback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::IsVO()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>(),
                        {"IsVO", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::IsSFX()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>(),
                        {"IsSFX", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::IsVFX()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>(),
                        {"IsVFX", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>* GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::get_Modes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>(),
                        {"get_Modes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::GorillaGameModes::GameModeType>*>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect* GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers_CosmeticEffect::CosmeticEffectsOnPlayers_CosmeticEffect()   {
}
