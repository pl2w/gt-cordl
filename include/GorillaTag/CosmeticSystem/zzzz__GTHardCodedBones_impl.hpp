#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticSystem/GTHardCodedBones.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__GTHardCodedBones_def.hpp"
#include "GlobalNamespace/zzzz__BodyDockPositions_DropPositions_def.hpp"
#include "GlobalNamespace/zzzz__EHandedness_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_PositionState_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__GTHardCodedBones_EBone_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__GTHardCodedBones_ECosmeticSlots_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__GTHardCodedBones_EHandAndStowSlots_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__GTHardCodedBones_EStowSlots_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__GTHardCodedBones_SturdyEBone_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTag::CosmeticSystem::GTHardCodedBones.HandleRuntimeInitialize_OnBeforeSceneLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTag::CosmeticSystem::GTHardCodedBones::HandleRuntimeInitialize_OnBeforeSceneLoad)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d48ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"HandleRuntimeInitialize_OnBeforeSceneLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CosmeticSystem::GTHardCodedBones.HandleVRRigCache_OnPostInitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTag::CosmeticSystem::GTHardCodedBones::HandleVRRigCache_OnPostInitialize)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5d48d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"HandleVRRigCache_OnPostInitialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CosmeticSystem::GTHardCodedBones.HandleVRRigCache_OnPostSpawnRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTag::CosmeticSystem::GTHardCodedBones::HandleVRRigCache_OnPostSpawnRig)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5d48e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"HandleVRRigCache_OnPostSpawnRig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CosmeticSystem::GTHardCodedBones.GetBoneIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::GTHardCodedBones_EBone)>(&::GorillaTag::CosmeticSystem::GTHardCodedBones::GetBoneIndex)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d48ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"GetBoneIndex", {}, {::i2c::type_of<::GlobalNamespace::GTHardCodedBones_EBone>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CosmeticSystem::GTHardCodedBones.GetBoneIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::GorillaTag::CosmeticSystem::GTHardCodedBones::GetBoneIndex)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5d48ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"GetBoneIndex", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CosmeticSystem::GTHardCodedBones.TryGetBoneIndexByName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<int32_t>)>(&::GorillaTag::CosmeticSystem::GTHardCodedBones::TryGetBoneIndexByName)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5d48fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"TryGetBoneIndexByName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CosmeticSystem::GTHardCodedBones.GetBone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GTHardCodedBones_EBone (*)(::StringW)>(&::GorillaTag::CosmeticSystem::GTHardCodedBones::GetBone)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d490a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"GetBone", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CosmeticSystem::GTHardCodedBones.TryGetBoneByName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::GlobalNamespace::GTHardCodedBones_EBone>)>(&::GorillaTag::CosmeticSystem::GTHardCodedBones::TryGetBoneByName)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5d490f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"TryGetBoneByName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GTHardCodedBones_EBone>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CosmeticSystem::GTHardCodedBones.GetBoneName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::GorillaTag::CosmeticSystem::GTHardCodedBones::GetBoneName)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5d49178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"GetBoneName", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CosmeticSystem::GTHardCodedBones.TryGetBoneName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<::StringW>)>(&::GorillaTag::CosmeticSystem::GTHardCodedBones::TryGetBoneName)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5d491f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"TryGetBoneName", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CosmeticSystem::GTHardCodedBones.GetBoneName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::GTHardCodedBones_EBone)>(&::GorillaTag::CosmeticSystem::GTHardCodedBones::GetBoneName)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5d492d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"GetBoneName", {}, {::i2c::type_of<::GlobalNamespace::GTHardCodedBones_EBone>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CosmeticSystem::GTHardCodedBones.TryGetBoneName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::GTHardCodedBones_EBone, ::by_ref<::StringW>)>(&::GorillaTag::CosmeticSystem::GTHardCodedBones::TryGetBoneName)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5d49380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"TryGetBoneName", {}, {::i2c::type_of<::GlobalNamespace::GTHardCodedBones_EBone>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CosmeticSystem::GTHardCodedBones.GetBoneBitFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::StringW)>(&::GorillaTag::CosmeticSystem::GTHardCodedBones::GetBoneBitFlag)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5d493e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"GetBoneBitFlag", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CosmeticSystem::GTHardCodedBones.GetBoneBitFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::GlobalNamespace::GTHardCodedBones_EBone)>(&::GorillaTag::CosmeticSystem::GTHardCodedBones::GetBoneBitFlag)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d494ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"GetBoneBitFlag", {}, {::i2c::type_of<::GlobalNamespace::GTHardCodedBones_EBone>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CosmeticSystem::GTHardCodedBones.GetHandednessFromBone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EHandedness (*)(::GlobalNamespace::GTHardCodedBones_EBone)>(&::GorillaTag::CosmeticSystem::GTHardCodedBones::GetHandednessFromBone)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5d49504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"GetHandednessFromBone", {}, {::i2c::type_of<::GlobalNamespace::GTHardCodedBones_EBone>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CosmeticSystem::GTHardCodedBones.TryGetBoneXforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::VRRig*, ::by_ref<::ArrayW<::UnityEngine::Transform*>>, ::by_ref<::StringW>)>(&::GorillaTag::CosmeticSystem::GTHardCodedBones::TryGetBoneXforms)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x5d495a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"TryGetBoneXforms", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Transform*>>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CosmeticSystem::GTHardCodedBones.TryGetSlotAnchorXforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::VRRig*, ::by_ref<::ArrayW<::UnityEngine::Transform*>>, ::by_ref<::StringW>)>(&::GorillaTag::CosmeticSystem::GTHardCodedBones::TryGetSlotAnchorXforms)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x5d4a8e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"TryGetSlotAnchorXforms", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Transform*>>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CosmeticSystem::GTHardCodedBones.TryGetBoneXforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::SkinnedMeshRenderer*, ::by_ref<::ArrayW<::UnityEngine::Transform*>>, ::by_ref<::StringW>)>(&::GorillaTag::CosmeticSystem::GTHardCodedBones::TryGetBoneXforms)> {
  constexpr static std::size_t size = 0xeb4;
  constexpr static std::size_t addrs = 0x5d49a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"TryGetBoneXforms", {}, {::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Transform*>>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CosmeticSystem::GTHardCodedBones.TryGetBoneXform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::UnityEngine::Transform*>, ::StringW, ::by_ref<::UnityEngine::Transform*>)>(&::GorillaTag::CosmeticSystem::GTHardCodedBones::TryGetBoneXform)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5d4ad0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"TryGetBoneXform", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CosmeticSystem::GTHardCodedBones.TryGetBoneXform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::UnityEngine::Transform*>, ::GlobalNamespace::GTHardCodedBones_EBone, ::by_ref<::UnityEngine::Transform*>)>(&::GorillaTag::CosmeticSystem::GTHardCodedBones::TryGetBoneXform)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5d4add8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"TryGetBoneXform", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>(), ::i2c::type_of<::GlobalNamespace::GTHardCodedBones_EBone>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CosmeticSystem::GTHardCodedBones.TryGetFirstBoneInParents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Transform*, ::by_ref<::GlobalNamespace::GTHardCodedBones_EBone>, ::by_ref<::UnityEngine::Transform*>)>(&::GorillaTag::CosmeticSystem::GTHardCodedBones::TryGetFirstBoneInParents)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x5d4ae98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"TryGetFirstBoneInParents", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GTHardCodedBones_EBone>>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CosmeticSystem::GTHardCodedBones.GetBoneEnumOfCosmeticPosStateFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GTHardCodedBones_EBone (*)(::GlobalNamespace::TransferrableObject_PositionState)>(&::GorillaTag::CosmeticSystem::GTHardCodedBones::GetBoneEnumOfCosmeticPosStateFlag)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5d4b16c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"GetBoneEnumOfCosmeticPosStateFlag", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject_PositionState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CosmeticSystem::GTHardCodedBones.GetBoneEnumsFromCosmeticBodyDockDropPosFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::GTHardCodedBones_EBone>* (*)(::GlobalNamespace::BodyDockPositions_DropPositions)>(&::GorillaTag::CosmeticSystem::GTHardCodedBones::GetBoneEnumsFromCosmeticBodyDockDropPosFlags)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x5d4b274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"GetBoneEnumsFromCosmeticBodyDockDropPosFlags", {}, {::i2c::type_of<::GlobalNamespace::BodyDockPositions_DropPositions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CosmeticSystem::GTHardCodedBones.GetBoneEnumsFromCosmeticTransferrablePosStateFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::GTHardCodedBones_EBone>* (*)(::GlobalNamespace::TransferrableObject_PositionState)>(&::GorillaTag::CosmeticSystem::GTHardCodedBones::GetBoneEnumsFromCosmeticTransferrablePosStateFlags)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x5d4b4e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"GetBoneEnumsFromCosmeticTransferrablePosStateFlags", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject_PositionState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CosmeticSystem::GTHardCodedBones.TryGetTransferrablePosStateFromBoneEnum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::GTHardCodedBones_EBone, ::by_ref<::GlobalNamespace::TransferrableObject_PositionState>)>(&::GorillaTag::CosmeticSystem::GTHardCodedBones::TryGetTransferrablePosStateFromBoneEnum)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5d4b738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"TryGetTransferrablePosStateFromBoneEnum", {}, {::i2c::type_of<::GlobalNamespace::GTHardCodedBones_EBone>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TransferrableObject_PositionState>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::CosmeticSystem::GTHardCodedBones.GetBoneXformOfCosmeticPosStateFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (*)(::GlobalNamespace::TransferrableObject_PositionState, ::ArrayW<::UnityEngine::Transform*>)>(&::GorillaTag::CosmeticSystem::GTHardCodedBones::GetBoneXformOfCosmeticPosStateFlag)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5d4b7c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"GetBoneXformOfCosmeticPosStateFlag", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject_PositionState>(), ::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::CosmeticSystem::GTHardCodedBones::setStaticF_kBoneNames(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "kBoneNames", ::GorillaTag::CosmeticSystem::GTHardCodedBones*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> GorillaTag::CosmeticSystem::GTHardCodedBones::getStaticF_kBoneNames()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "kBoneNames", ::GorillaTag::CosmeticSystem::GTHardCodedBones*>();
}
inline void GorillaTag::CosmeticSystem::GTHardCodedBones::setStaticF__k_bodyDockDropPosition_to_eBone(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BodyDockPositions_DropPositions,::GlobalNamespace::GTHardCodedBones_EBone>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BodyDockPositions_DropPositions,::GlobalNamespace::GTHardCodedBones_EBone>*, "_k_bodyDockDropPosition_to_eBone", ::GorillaTag::CosmeticSystem::GTHardCodedBones*>(std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BodyDockPositions_DropPositions,::GlobalNamespace::GTHardCodedBones_EBone>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BodyDockPositions_DropPositions,::GlobalNamespace::GTHardCodedBones_EBone>* GorillaTag::CosmeticSystem::GTHardCodedBones::getStaticF__k_bodyDockDropPosition_to_eBone()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BodyDockPositions_DropPositions,::GlobalNamespace::GTHardCodedBones_EBone>*, "_k_bodyDockDropPosition_to_eBone", ::GorillaTag::CosmeticSystem::GTHardCodedBones*>();
}
inline void GorillaTag::CosmeticSystem::GTHardCodedBones::setStaticF__k_transferrablePosState_to_eBone(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::TransferrableObject_PositionState,::GlobalNamespace::GTHardCodedBones_EBone>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::TransferrableObject_PositionState,::GlobalNamespace::GTHardCodedBones_EBone>*, "_k_transferrablePosState_to_eBone", ::GorillaTag::CosmeticSystem::GTHardCodedBones*>(std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::TransferrableObject_PositionState,::GlobalNamespace::GTHardCodedBones_EBone>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::TransferrableObject_PositionState,::GlobalNamespace::GTHardCodedBones_EBone>* GorillaTag::CosmeticSystem::GTHardCodedBones::getStaticF__k_transferrablePosState_to_eBone()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::TransferrableObject_PositionState,::GlobalNamespace::GTHardCodedBones_EBone>*, "_k_transferrablePosState_to_eBone", ::GorillaTag::CosmeticSystem::GTHardCodedBones*>();
}
inline void GorillaTag::CosmeticSystem::GTHardCodedBones::setStaticF__k_eBone_to_transferrablePosState(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTHardCodedBones_EBone,::GlobalNamespace::TransferrableObject_PositionState>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTHardCodedBones_EBone,::GlobalNamespace::TransferrableObject_PositionState>*, "_k_eBone_to_transferrablePosState", ::GorillaTag::CosmeticSystem::GTHardCodedBones*>(std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTHardCodedBones_EBone,::GlobalNamespace::TransferrableObject_PositionState>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTHardCodedBones_EBone,::GlobalNamespace::TransferrableObject_PositionState>* GorillaTag::CosmeticSystem::GTHardCodedBones::getStaticF__k_eBone_to_transferrablePosState()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTHardCodedBones_EBone,::GlobalNamespace::TransferrableObject_PositionState>*, "_k_eBone_to_transferrablePosState", ::GorillaTag::CosmeticSystem::GTHardCodedBones*>();
}
inline void GorillaTag::CosmeticSystem::GTHardCodedBones::setStaticF__gMissingBonesReport(::System::Collections::Generic::List_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int32_t>*, "_gMissingBonesReport", ::GorillaTag::CosmeticSystem::GTHardCodedBones*>(std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::List_1<int32_t>* GorillaTag::CosmeticSystem::GTHardCodedBones::getStaticF__gMissingBonesReport()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int32_t>*, "_gMissingBonesReport", ::GorillaTag::CosmeticSystem::GTHardCodedBones*>();
}
inline void GorillaTag::CosmeticSystem::GTHardCodedBones::setStaticF__gInstIds_To_boneXforms(::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::UnityW<::UnityEngine::Transform>>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::UnityW<::UnityEngine::Transform>>>*, "_gInstIds_To_boneXforms", ::GorillaTag::CosmeticSystem::GTHardCodedBones*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::UnityW<::UnityEngine::Transform>>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::UnityW<::UnityEngine::Transform>>>* GorillaTag::CosmeticSystem::GTHardCodedBones::getStaticF__gInstIds_To_boneXforms()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::UnityW<::UnityEngine::Transform>>>*, "_gInstIds_To_boneXforms", ::GorillaTag::CosmeticSystem::GTHardCodedBones*>();
}
inline void GorillaTag::CosmeticSystem::GTHardCodedBones::setStaticF__gInstIds_To_slotXforms(::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::UnityW<::UnityEngine::Transform>>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::UnityW<::UnityEngine::Transform>>>*, "_gInstIds_To_slotXforms", ::GorillaTag::CosmeticSystem::GTHardCodedBones*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::UnityW<::UnityEngine::Transform>>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::UnityW<::UnityEngine::Transform>>>* GorillaTag::CosmeticSystem::GTHardCodedBones::getStaticF__gInstIds_To_slotXforms()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::UnityW<::UnityEngine::Transform>>>*, "_gInstIds_To_slotXforms", ::GorillaTag::CosmeticSystem::GTHardCodedBones*>();
}
inline void GorillaTag::CosmeticSystem::GTHardCodedBones::HandleRuntimeInitialize_OnBeforeSceneLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"HandleRuntimeInitialize_OnBeforeSceneLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaTag::CosmeticSystem::GTHardCodedBones::HandleVRRigCache_OnPostInitialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"HandleVRRigCache_OnPostInitialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaTag::CosmeticSystem::GTHardCodedBones::HandleVRRigCache_OnPostSpawnRig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"HandleVRRigCache_OnPostSpawnRig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline int32_t GorillaTag::CosmeticSystem::GTHardCodedBones::GetBoneIndex(::GlobalNamespace::GTHardCodedBones_EBone  bone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"GetBoneIndex", {}, {::i2c::type_of<::GlobalNamespace::GTHardCodedBones_EBone>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bone);
}
inline int32_t GorillaTag::CosmeticSystem::GTHardCodedBones::GetBoneIndex(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"GetBoneIndex", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, name);
}
inline bool GorillaTag::CosmeticSystem::GTHardCodedBones::TryGetBoneIndexByName(::StringW  name, ::by_ref<int32_t>  out_index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"TryGetBoneIndexByName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name, out_index);
}
inline ::GlobalNamespace::GTHardCodedBones_EBone GorillaTag::CosmeticSystem::GTHardCodedBones::GetBone(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"GetBone", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GTHardCodedBones_EBone>(nullptr, ___internal_method, name);
}
inline bool GorillaTag::CosmeticSystem::GTHardCodedBones::TryGetBoneByName(::StringW  name, ::by_ref<::GlobalNamespace::GTHardCodedBones_EBone>  out_eBone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"TryGetBoneByName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GTHardCodedBones_EBone>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name, out_eBone);
}
inline ::StringW GorillaTag::CosmeticSystem::GTHardCodedBones::GetBoneName(int32_t  boneIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"GetBoneName", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, boneIndex);
}
inline bool GorillaTag::CosmeticSystem::GTHardCodedBones::TryGetBoneName(int32_t  boneIndex, ::by_ref<::StringW>  out_name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"TryGetBoneName", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, boneIndex, out_name);
}
inline ::StringW GorillaTag::CosmeticSystem::GTHardCodedBones::GetBoneName(::GlobalNamespace::GTHardCodedBones_EBone  bone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"GetBoneName", {}, {::i2c::type_of<::GlobalNamespace::GTHardCodedBones_EBone>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, bone);
}
inline bool GorillaTag::CosmeticSystem::GTHardCodedBones::TryGetBoneName(::GlobalNamespace::GTHardCodedBones_EBone  bone, ::by_ref<::StringW>  out_name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"TryGetBoneName", {}, {::i2c::type_of<::GlobalNamespace::GTHardCodedBones_EBone>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bone, out_name);
}
inline int64_t GorillaTag::CosmeticSystem::GTHardCodedBones::GetBoneBitFlag(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"GetBoneBitFlag", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, name);
}
inline int64_t GorillaTag::CosmeticSystem::GTHardCodedBones::GetBoneBitFlag(::GlobalNamespace::GTHardCodedBones_EBone  bone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"GetBoneBitFlag", {}, {::i2c::type_of<::GlobalNamespace::GTHardCodedBones_EBone>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, bone);
}
inline ::GlobalNamespace::EHandedness GorillaTag::CosmeticSystem::GTHardCodedBones::GetHandednessFromBone(::GlobalNamespace::GTHardCodedBones_EBone  bone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"GetHandednessFromBone", {}, {::i2c::type_of<::GlobalNamespace::GTHardCodedBones_EBone>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EHandedness>(nullptr, ___internal_method, bone);
}
inline bool GorillaTag::CosmeticSystem::GTHardCodedBones::TryGetBoneXforms(::GlobalNamespace::VRRig*  vrRig, ::by_ref<::ArrayW<::UnityEngine::Transform*>>  outBoneXforms, ::by_ref<::StringW>  outErrorMsg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"TryGetBoneXforms", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Transform*>>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, vrRig, outBoneXforms, outErrorMsg);
}
inline bool GorillaTag::CosmeticSystem::GTHardCodedBones::TryGetSlotAnchorXforms(::GlobalNamespace::VRRig*  vrRig, ::by_ref<::ArrayW<::UnityEngine::Transform*>>  outSlotXforms, ::by_ref<::StringW>  outErrorMsg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"TryGetSlotAnchorXforms", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Transform*>>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, vrRig, outSlotXforms, outErrorMsg);
}
inline bool GorillaTag::CosmeticSystem::GTHardCodedBones::TryGetBoneXforms(::UnityEngine::SkinnedMeshRenderer*  skinnedMeshRenderer, ::by_ref<::ArrayW<::UnityEngine::Transform*>>  outBoneXforms, ::by_ref<::StringW>  outErrorMsg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"TryGetBoneXforms", {}, {::i2c::type_of<::UnityEngine::SkinnedMeshRenderer*>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Transform*>>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, skinnedMeshRenderer, outBoneXforms, outErrorMsg);
}
inline bool GorillaTag::CosmeticSystem::GTHardCodedBones::TryGetBoneXform(::ArrayW<::UnityEngine::Transform*>  boneXforms, ::StringW  boneName, ::by_ref<::UnityEngine::Transform*>  boneXform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"TryGetBoneXform", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, boneXforms, boneName, boneXform);
}
inline bool GorillaTag::CosmeticSystem::GTHardCodedBones::TryGetBoneXform(::ArrayW<::UnityEngine::Transform*>  boneXforms, ::GlobalNamespace::GTHardCodedBones_EBone  eBone, ::by_ref<::UnityEngine::Transform*>  boneXform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"TryGetBoneXform", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>(), ::i2c::type_of<::GlobalNamespace::GTHardCodedBones_EBone>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, boneXforms, eBone, boneXform);
}
inline bool GorillaTag::CosmeticSystem::GTHardCodedBones::TryGetFirstBoneInParents(::UnityEngine::Transform*  transform, ::by_ref<::GlobalNamespace::GTHardCodedBones_EBone>  eBone, ::by_ref<::UnityEngine::Transform*>  boneXform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"TryGetFirstBoneInParents", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GTHardCodedBones_EBone>>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, transform, eBone, boneXform);
}
inline ::GlobalNamespace::GTHardCodedBones_EBone GorillaTag::CosmeticSystem::GTHardCodedBones::GetBoneEnumOfCosmeticPosStateFlag(::GlobalNamespace::TransferrableObject_PositionState  positionState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"GetBoneEnumOfCosmeticPosStateFlag", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject_PositionState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GTHardCodedBones_EBone>(nullptr, ___internal_method, positionState);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GTHardCodedBones_EBone>* GorillaTag::CosmeticSystem::GTHardCodedBones::GetBoneEnumsFromCosmeticBodyDockDropPosFlags(::GlobalNamespace::BodyDockPositions_DropPositions  enumFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"GetBoneEnumsFromCosmeticBodyDockDropPosFlags", {}, {::i2c::type_of<::GlobalNamespace::BodyDockPositions_DropPositions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::GTHardCodedBones_EBone>*>(nullptr, ___internal_method, enumFlags);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GTHardCodedBones_EBone>* GorillaTag::CosmeticSystem::GTHardCodedBones::GetBoneEnumsFromCosmeticTransferrablePosStateFlags(::GlobalNamespace::TransferrableObject_PositionState  enumFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"GetBoneEnumsFromCosmeticTransferrablePosStateFlags", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject_PositionState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::GTHardCodedBones_EBone>*>(nullptr, ___internal_method, enumFlags);
}
inline bool GorillaTag::CosmeticSystem::GTHardCodedBones::TryGetTransferrablePosStateFromBoneEnum(::GlobalNamespace::GTHardCodedBones_EBone  eBone, ::by_ref<::GlobalNamespace::TransferrableObject_PositionState>  outPosState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"TryGetTransferrablePosStateFromBoneEnum", {}, {::i2c::type_of<::GlobalNamespace::GTHardCodedBones_EBone>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TransferrableObject_PositionState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, eBone, outPosState);
}
inline ::UnityW<::UnityEngine::Transform> GorillaTag::CosmeticSystem::GTHardCodedBones::GetBoneXformOfCosmeticPosStateFlag(::GlobalNamespace::TransferrableObject_PositionState  anchorPosState, ::ArrayW<::UnityEngine::Transform*>  bones)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::GTHardCodedBones*>(),
                        {"GetBoneXformOfCosmeticPosStateFlag", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject_PositionState>(), ::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(nullptr, ___internal_method, anchorPosState, bones);
}
// Ctor Parameters []
constexpr ::GorillaTag::CosmeticSystem::GTHardCodedBones::GTHardCodedBones()   {
}
