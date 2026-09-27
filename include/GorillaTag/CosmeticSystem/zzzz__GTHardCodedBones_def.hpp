#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticSystem/GTHardCodedBones.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GTHardCodedBones)
namespace GlobalNamespace {
struct BodyDockPositions_DropPositions;
}
namespace GlobalNamespace {
struct EHandedness;
}
namespace GlobalNamespace {
struct GTHardCodedBones_EBone;
}
namespace GlobalNamespace {
struct GTHardCodedBones_ECosmeticSlots;
}
namespace GlobalNamespace {
struct GTHardCodedBones_EHandAndStowSlots;
}
namespace GlobalNamespace {
struct GTHardCodedBones_EStowSlots;
}
namespace GlobalNamespace {
struct GTHardCodedBones_SturdyEBone;
}
namespace GlobalNamespace {
struct TransferrableObject_PositionState;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTag::CosmeticSystem {
class GTHardCodedBones;
}
// Write type traits
MARK_REF_T(::GorillaTag::CosmeticSystem::GTHardCodedBones*);
DEFINE_IL2CPP_CLASS(::GorillaTag::CosmeticSystem::GTHardCodedBones*, "GorillaTag.CosmeticSystem", "GTHardCodedBones");
// Dependencies System.Object
namespace GorillaTag::CosmeticSystem {
// Is value type: false
// CS Name: GorillaTag.CosmeticSystem.GTHardCodedBones
class CORDL_TYPE GTHardCodedBones : public ::System::Object {
public:
// Declarations
using EBone = ::GlobalNamespace::GTHardCodedBones_EBone;

using ECosmeticSlots = ::GlobalNamespace::GTHardCodedBones_ECosmeticSlots;

using EHandAndStowSlots = ::GlobalNamespace::GTHardCodedBones_EHandAndStowSlots;

using EStowSlots = ::GlobalNamespace::GTHardCodedBones_EStowSlots;

using SturdyEBone = ::GlobalNamespace::GTHardCodedBones_SturdyEBone;

/// @brief Field _gInstIds_To_boneXforms, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__gInstIds_To_boneXforms, put=setStaticF__gInstIds_To_boneXforms)) ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::UnityW<::UnityEngine::Transform>>>*  _gInstIds_To_boneXforms;

/// @brief Field _gInstIds_To_slotXforms, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__gInstIds_To_slotXforms, put=setStaticF__gInstIds_To_slotXforms)) ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::UnityW<::UnityEngine::Transform>>>*  _gInstIds_To_slotXforms;

/// @brief Field _gMissingBonesReport, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__gMissingBonesReport, put=setStaticF__gMissingBonesReport)) ::System::Collections::Generic::List_1<int32_t>*  _gMissingBonesReport;

/// @brief Field _k_bodyDockDropPosition_to_eBone, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__k_bodyDockDropPosition_to_eBone, put=setStaticF__k_bodyDockDropPosition_to_eBone)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BodyDockPositions_DropPositions,::GlobalNamespace::GTHardCodedBones_EBone>*  _k_bodyDockDropPosition_to_eBone;

/// @brief Field _k_eBone_to_transferrablePosState, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__k_eBone_to_transferrablePosState, put=setStaticF__k_eBone_to_transferrablePosState)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTHardCodedBones_EBone,::GlobalNamespace::TransferrableObject_PositionState>*  _k_eBone_to_transferrablePosState;

/// @brief Field _k_transferrablePosState_to_eBone, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__k_transferrablePosState_to_eBone, put=setStaticF__k_transferrablePosState_to_eBone)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::TransferrableObject_PositionState,::GlobalNamespace::GTHardCodedBones_EBone>*  _k_transferrablePosState_to_eBone;

/// @brief Field kBoneNames, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kBoneNames, put=setStaticF_kBoneNames)) ::ArrayW<::StringW>  kBoneNames;

/// @brief Method GetBone, addr 0x5d490a0, size 0x58, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GTHardCodedBones_EBone GetBone(::StringW  name) ;

/// @brief Method GetBoneBitFlag, addr 0x5d494ec, size 0x18, virtual false, abstract: false, final false
static inline int64_t GetBoneBitFlag(::GlobalNamespace::GTHardCodedBones_EBone  bone) ;

/// @brief Method GetBoneBitFlag, addr 0x5d493e8, size 0x104, virtual false, abstract: false, final false
static inline int64_t GetBoneBitFlag(::StringW  name) ;

/// @brief Method GetBoneEnumOfCosmeticPosStateFlag, addr 0x5d4b16c, size 0x108, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GTHardCodedBones_EBone GetBoneEnumOfCosmeticPosStateFlag(::GlobalNamespace::TransferrableObject_PositionState  positionState) ;

/// @brief Method GetBoneEnumsFromCosmeticBodyDockDropPosFlags, addr 0x5d4b274, size 0x270, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::GlobalNamespace::GTHardCodedBones_EBone>* GetBoneEnumsFromCosmeticBodyDockDropPosFlags(::GlobalNamespace::BodyDockPositions_DropPositions  enumFlags) ;

/// @brief Method GetBoneEnumsFromCosmeticTransferrablePosStateFlags, addr 0x5d4b4e4, size 0x254, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::GlobalNamespace::GTHardCodedBones_EBone>* GetBoneEnumsFromCosmeticTransferrablePosStateFlags(::GlobalNamespace::TransferrableObject_PositionState  enumFlags) ;

/// @brief Method GetBoneIndex, addr 0x5d48ef0, size 0x4, virtual false, abstract: false, final false
static inline int32_t GetBoneIndex(::GlobalNamespace::GTHardCodedBones_EBone  bone) ;

/// @brief Method GetBoneIndex, addr 0x5d48ef4, size 0xc8, virtual false, abstract: false, final false
static inline int32_t GetBoneIndex(::StringW  name) ;

/// @brief Method GetBoneName, addr 0x5d492d4, size 0xac, virtual false, abstract: false, final false
static inline ::StringW GetBoneName(::GlobalNamespace::GTHardCodedBones_EBone  bone) ;

/// @brief Method GetBoneName, addr 0x5d49178, size 0x7c, virtual false, abstract: false, final false
static inline ::StringW GetBoneName(int32_t  boneIndex) ;

/// @brief Method GetBoneXformOfCosmeticPosStateFlag, addr 0x5d4b7c8, size 0x17c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Transform> GetBoneXformOfCosmeticPosStateFlag(::GlobalNamespace::TransferrableObject_PositionState  anchorPosState, ::ArrayW<::UnityEngine::Transform*>  bones) ;

/// @brief Method GetHandednessFromBone, addr 0x5d49504, size 0x9c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::EHandedness GetHandednessFromBone(::GlobalNamespace::GTHardCodedBones_EBone  bone) ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)1)]
/// @brief Method HandleRuntimeInitialize_OnBeforeSceneLoad, addr 0x5d48ca0, size 0xa0, virtual false, abstract: false, final false
static inline void HandleRuntimeInitialize_OnBeforeSceneLoad() ;

/// @brief Method HandleVRRigCache_OnPostInitialize, addr 0x5d48d40, size 0x104, virtual false, abstract: false, final false
static inline void HandleVRRigCache_OnPostInitialize() ;

/// @brief Method HandleVRRigCache_OnPostSpawnRig, addr 0x5d48e44, size 0xac, virtual false, abstract: false, final false
static inline void HandleVRRigCache_OnPostSpawnRig() ;

/// @brief Method TryGetBoneByName, addr 0x5d490f8, size 0x80, virtual false, abstract: false, final false
static inline bool TryGetBoneByName(::StringW  name, ::by_ref<::GlobalNamespace::GTHardCodedBones_EBone>  out_eBone) ;

/// @brief Method TryGetBoneIndexByName, addr 0x5d48fbc, size 0xe4, virtual false, abstract: false, final false
static inline bool TryGetBoneIndexByName(::StringW  name, ::by_ref<int32_t>  out_index) ;

/// @brief Method TryGetBoneName, addr 0x5d49380, size 0x68, virtual false, abstract: false, final false
static inline bool TryGetBoneName(::GlobalNamespace::GTHardCodedBones_EBone  bone, ::by_ref<::StringW>  out_name) ;

/// @brief Method TryGetBoneName, addr 0x5d491f4, size 0xe0, virtual false, abstract: false, final false
static inline bool TryGetBoneName(int32_t  boneIndex, ::by_ref<::StringW>  out_name) ;

/// @brief Method TryGetBoneXform, addr 0x5d4ad0c, size 0xcc, virtual false, abstract: false, final false
static inline bool TryGetBoneXform(::ArrayW<::UnityEngine::Transform*>  boneXforms, ::StringW  boneName, ::by_ref<::UnityEngine::Transform*>  boneXform) ;

/// @brief Method TryGetBoneXform, addr 0x5d4add8, size 0xc0, virtual false, abstract: false, final false
static inline bool TryGetBoneXform(::ArrayW<::UnityEngine::Transform*>  boneXforms, ::GlobalNamespace::GTHardCodedBones_EBone  eBone, ::by_ref<::UnityEngine::Transform*>  boneXform) ;

/// @brief Method TryGetBoneXforms, addr 0x5d49a30, size 0xeb4, virtual false, abstract: false, final false
static inline bool TryGetBoneXforms(::UnityEngine::SkinnedMeshRenderer*  skinnedMeshRenderer, ::by_ref<::ArrayW<::UnityEngine::Transform*>>  outBoneXforms, ::by_ref<::StringW>  outErrorMsg) ;

/// @brief Method TryGetBoneXforms, addr 0x5d495a0, size 0x490, virtual false, abstract: false, final false
static inline bool TryGetBoneXforms(::GlobalNamespace::VRRig*  vrRig, ::by_ref<::ArrayW<::UnityEngine::Transform*>>  outBoneXforms, ::by_ref<::StringW>  outErrorMsg) ;

/// @brief Method TryGetFirstBoneInParents, addr 0x5d4ae98, size 0x2d4, virtual false, abstract: false, final false
static inline bool TryGetFirstBoneInParents(::UnityEngine::Transform*  transform, ::by_ref<::GlobalNamespace::GTHardCodedBones_EBone>  eBone, ::by_ref<::UnityEngine::Transform*>  boneXform) ;

/// @brief Method TryGetSlotAnchorXforms, addr 0x5d4a8e4, size 0x428, virtual false, abstract: false, final false
static inline bool TryGetSlotAnchorXforms(::GlobalNamespace::VRRig*  vrRig, ::by_ref<::ArrayW<::UnityEngine::Transform*>>  outSlotXforms, ::by_ref<::StringW>  outErrorMsg) ;

/// @brief Method TryGetTransferrablePosStateFromBoneEnum, addr 0x5d4b738, size 0x90, virtual false, abstract: false, final false
static inline bool TryGetTransferrablePosStateFromBoneEnum(::GlobalNamespace::GTHardCodedBones_EBone  eBone, ::by_ref<::GlobalNamespace::TransferrableObject_PositionState>  outPosState) ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::UnityW<::UnityEngine::Transform>>>* getStaticF__gInstIds_To_boneXforms() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::UnityW<::UnityEngine::Transform>>>* getStaticF__gInstIds_To_slotXforms() ;

static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF__gMissingBonesReport() ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BodyDockPositions_DropPositions,::GlobalNamespace::GTHardCodedBones_EBone>* getStaticF__k_bodyDockDropPosition_to_eBone() ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTHardCodedBones_EBone,::GlobalNamespace::TransferrableObject_PositionState>* getStaticF__k_eBone_to_transferrablePosState() ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::TransferrableObject_PositionState,::GlobalNamespace::GTHardCodedBones_EBone>* getStaticF__k_transferrablePosState_to_eBone() ;

static inline ::ArrayW<::StringW> getStaticF_kBoneNames() ;

static inline void setStaticF__gInstIds_To_boneXforms(::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::UnityW<::UnityEngine::Transform>>>*  value) ;

static inline void setStaticF__gInstIds_To_slotXforms(::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::UnityW<::UnityEngine::Transform>>>*  value) ;

static inline void setStaticF__gMissingBonesReport(::System::Collections::Generic::List_1<int32_t>*  value) ;

static inline void setStaticF__k_bodyDockDropPosition_to_eBone(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BodyDockPositions_DropPositions,::GlobalNamespace::GTHardCodedBones_EBone>*  value) ;

static inline void setStaticF__k_eBone_to_transferrablePosState(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTHardCodedBones_EBone,::GlobalNamespace::TransferrableObject_PositionState>*  value) ;

static inline void setStaticF__k_transferrablePosState_to_eBone(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::TransferrableObject_PositionState,::GlobalNamespace::GTHardCodedBones_EBone>*  value) ;

static inline void setStaticF_kBoneNames(::ArrayW<::StringW>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTHardCodedBones() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTHardCodedBones", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTHardCodedBones(GTHardCodedBones && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTHardCodedBones", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTHardCodedBones(GTHardCodedBones const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4761};

/// @brief Field kBoneCount offset 0xffffffff size 0x4
static constexpr int32_t  kBoneCount{static_cast<int32_t>(0x35)};

/// @brief Field kLeftSideMask offset 0xffffffff size 0x8
static constexpr int64_t  kLeftSideMask{static_cast<int64_t>(0x62400003ffff0)};

/// @brief Field kRightSideMask offset 0xffffffff size 0x8
static constexpr int64_t  kRightSideMask{static_cast<int64_t>(0x648ffffc00000)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::CosmeticSystem::GTHardCodedBones) == 0x10, "Size mismatch!");

} // namespace end def GorillaTag::CosmeticSystem
