#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSkeleton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Skeleton2_def.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_SkeletonType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSkeleton)
namespace GlobalNamespace {
class OVRBoneCapsule;
}
namespace GlobalNamespace {
class OVRBone;
}
namespace GlobalNamespace {
struct OVRPlugin_BodyJointSet;
}
namespace GlobalNamespace {
struct OVRSkeleton_BoneId;
}
namespace GlobalNamespace {
class OVRSkeleton_IOVRSkeletonDataProvider;
}
namespace GlobalNamespace {
struct OVRSkeleton_SkeletonPoseData;
}
namespace GlobalNamespace {
struct OVRSkeleton_SkeletonType;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRSkeleton;
}
namespace GlobalNamespace {
class OVRSkeleton_IOVRSkeletonDataProvider;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRSkeleton*);
MARK_REF_T(::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSkeleton*, "", "OVRSkeleton");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*, "", "OVRSkeleton/IOVRSkeletonDataProvider");
// Dependencies OVRPlugin::Skeleton2, OVRSkeleton::SkeletonType, UnityEngine.MonoBehaviour, UnityEngine.Quaternion
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSkeleton
class CORDL_TYPE OVRSkeleton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using BoneId = ::GlobalNamespace::OVRSkeleton_BoneId;

using IOVRSkeletonDataProvider = ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider;

using SkeletonPoseData = ::GlobalNamespace::OVRSkeleton_SkeletonPoseData;

using SkeletonType = ::GlobalNamespace::OVRSkeleton_SkeletonType;

 __declspec(property(get=get_BindPoses, put=set_BindPoses)) ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*  BindPoses;

 __declspec(property(get=get_Bones, put=set_Bones)) ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*  Bones;

 __declspec(property(get=get_Capsules, put=set_Capsules)) ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>*  Capsules;

 __declspec(property(get=get_IsDataHighConfidence, put=set_IsDataHighConfidence)) bool  IsDataHighConfidence;

 __declspec(property(get=get_IsDataValid, put=set_IsDataValid)) bool  IsDataValid;

 __declspec(property(get=get_IsInitialized, put=set_IsInitialized)) bool  IsInitialized;

 __declspec(property(get=get_SkeletonChangedCount, put=set_SkeletonChangedCount)) int32_t  SkeletonChangedCount;

/// @brief Field <BindPoses>k__BackingField, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__BindPoses_k__BackingField, put=__cordl_internal_set__BindPoses_k__BackingField)) ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*  _BindPoses_k__BackingField;

/// @brief Field <Bones>k__BackingField, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Bones_k__BackingField, put=__cordl_internal_set__Bones_k__BackingField)) ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*  _Bones_k__BackingField;

/// @brief Field <Capsules>k__BackingField, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Capsules_k__BackingField, put=__cordl_internal_set__Capsules_k__BackingField)) ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>*  _Capsules_k__BackingField;

/// @brief Field <IsDataHighConfidence>k__BackingField, offset 0x9a, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsDataHighConfidence_k__BackingField, put=__cordl_internal_set__IsDataHighConfidence_k__BackingField)) bool  _IsDataHighConfidence_k__BackingField;

/// @brief Field <IsDataValid>k__BackingField, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsDataValid_k__BackingField, put=__cordl_internal_set__IsDataValid_k__BackingField)) bool  _IsDataValid_k__BackingField;

/// @brief Field <IsInitialized>k__BackingField, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsInitialized_k__BackingField, put=__cordl_internal_set__IsInitialized_k__BackingField)) bool  _IsInitialized_k__BackingField;

/// @brief Field <SkeletonChangedCount>k__BackingField, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get__SkeletonChangedCount_k__BackingField, put=__cordl_internal_set__SkeletonChangedCount_k__BackingField)) int32_t  _SkeletonChangedCount_k__BackingField;

/// @brief Field _applyBoneTranslations, offset 0x33, size 0x1 
 __declspec(property(get=__cordl_internal_get__applyBoneTranslations, put=__cordl_internal_set__applyBoneTranslations)) bool  _applyBoneTranslations;

/// @brief Field _bindPoses, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__bindPoses, put=__cordl_internal_set__bindPoses)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>*  _bindPoses;

/// @brief Field _bindPosesGO, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__bindPosesGO, put=__cordl_internal_set__bindPosesGO)) ::UnityW<::UnityEngine::GameObject>  _bindPosesGO;

/// @brief Field _bones, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__bones, put=__cordl_internal_set__bones)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>*  _bones;

/// @brief Field _bonesGO, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__bonesGO, put=__cordl_internal_set__bonesGO)) ::UnityW<::UnityEngine::GameObject>  _bonesGO;

/// @brief Field _capsules, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__capsules, put=__cordl_internal_set__capsules)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBoneCapsule*>*  _capsules;

/// @brief Field _capsulesGO, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__capsulesGO, put=__cordl_internal_set__capsulesGO)) ::UnityW<::UnityEngine::GameObject>  _capsulesGO;

/// @brief Field _dataProvider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__dataProvider, put=__cordl_internal_set__dataProvider)) ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*  _dataProvider;

/// @brief Field _enablePhysicsCapsules, offset 0x32, size 0x1 
 __declspec(property(get=__cordl_internal_get__enablePhysicsCapsules, put=__cordl_internal_set__enablePhysicsCapsules)) bool  _enablePhysicsCapsules;

/// @brief Field _skeleton, offset 0x68, size 0x20 
 __declspec(property(get=__cordl_internal_get__skeleton, put=__cordl_internal_set__skeleton)) ::GlobalNamespace::OVRPlugin_Skeleton2  _skeleton;

/// @brief Field _skeletonType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__skeletonType, put=__cordl_internal_set__skeletonType)) ::GlobalNamespace::OVRSkeleton_SkeletonType  _skeletonType;

/// @brief Field _updateRootPose, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__updateRootPose, put=__cordl_internal_set__updateRootPose)) bool  _updateRootPose;

/// @brief Field _updateRootScale, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get__updateRootScale, put=__cordl_internal_set__updateRootScale)) bool  _updateRootScale;

/// @brief Field wristFixupRotation, offset 0x88, size 0x10 
 __declspec(property(get=__cordl_internal_get_wristFixupRotation, put=__cordl_internal_set_wristFixupRotation)) ::UnityEngine::Quaternion  wristFixupRotation;

/// @brief Method Awake, addr 0xa6740a8, size 0x280, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method BoneLabelFromBoneId, addr 0xa6757ac, size 0xab8, virtual false, abstract: false, final false
static inline ::StringW BoneLabelFromBoneId(::GlobalNamespace::OVRSkeleton_SkeletonType  skeletonType, ::GlobalNamespace::OVRSkeleton_BoneId  boneId) ;

/// @brief Method FixedUpdate, addr 0xa677100, size 0x29c, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method GetBoneTransform, addr 0xa674fcc, size 0x8, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetBoneTransform(::GlobalNamespace::OVRSkeleton_BoneId  boneId) ;

/// @brief Method GetCurrentEndBoneId, addr 0xa6773ac, size 0x24, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRSkeleton_BoneId GetCurrentEndBoneId() ;

/// @brief Method GetCurrentMaxSkinnableBoneId, addr 0xa6773d0, size 0x24, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRSkeleton_BoneId GetCurrentMaxSkinnableBoneId() ;

/// @brief Method GetCurrentNumBones, addr 0xa6773f4, size 0x40, virtual false, abstract: false, final false
inline int32_t GetCurrentNumBones() ;

/// @brief Method GetCurrentNumSkinnableBones, addr 0xa677434, size 0x40, virtual false, abstract: false, final false
inline int32_t GetCurrentNumSkinnableBones() ;

/// @brief Method GetCurrentStartBoneId, addr 0xa67739c, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRSkeleton_BoneId GetCurrentStartBoneId() ;

/// @brief Method GetRequiredBodyJointSet, addr 0xa674010, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_BodyJointSet GetRequiredBodyJointSet() ;

/// @brief Method GetSkeletonType, addr 0xa673ea0, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRSkeleton_SkeletonType GetSkeletonType() ;

/// @brief Method Initialize, addr 0xa673f78, size 0x98, virtual false, abstract: false, final false
inline void Initialize() ;

/// @brief Method InitializeBindPose, addr 0xa676274, size 0x778, virtual true, abstract: false, final false
inline void InitializeBindPose() ;

/// @brief Method InitializeBones, addr 0xa674fd4, size 0x718, virtual true, abstract: false, final false
inline void InitializeBones() ;

/// @brief Method InitializeCapsules, addr 0xa6745c8, size 0xa04, virtual false, abstract: false, final false
inline void InitializeCapsules() ;

/// @brief Method IsBodySkeleton, addr 0xa676264, size 0x10, virtual false, abstract: false, final false
static inline bool IsBodySkeleton(::GlobalNamespace::OVRSkeleton_SkeletonType  type) ;

/// @brief Method IsHandSkeleton, addr 0xa6745c0, size 0x8, virtual false, abstract: false, final false
static inline bool IsHandSkeleton(::GlobalNamespace::OVRSkeleton_SkeletonType  type) ;

/// @brief Method IsValidBone, addr 0xa67402c, size 0x6c, virtual false, abstract: false, final false
inline bool IsValidBone(::GlobalNamespace::OVRSkeleton_BoneId  bone) ;

static inline ::GlobalNamespace::OVRSkeleton* New_ctor() ;

/// @brief Method SearchSkeletonDataProvider, addr 0xa674328, size 0x128, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider* SearchSkeletonDataProvider() ;

/// @brief Method SetSkeletonType, addr 0xa673ea8, size 0xd0, virtual true, abstract: false, final false
inline void SetSkeletonType(::GlobalNamespace::OVRSkeleton_SkeletonType  type) ;

/// @brief Method ShouldInitialize, addr 0xa6744f0, size 0xd0, virtual false, abstract: false, final false
inline bool ShouldInitialize() ;

/// @brief Method Start, addr 0xa674450, size 0xa0, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa676abc, size 0x4, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateSkeleton, addr 0xa676ac0, size 0x640, virtual false, abstract: false, final false
inline void UpdateSkeleton() ;

constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* const& __cordl_internal_get__BindPoses_k__BackingField() const;

constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*& __cordl_internal_get__BindPoses_k__BackingField() ;

constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* const& __cordl_internal_get__Bones_k__BackingField() const;

constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*& __cordl_internal_get__Bones_k__BackingField() ;

constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>* const& __cordl_internal_get__Capsules_k__BackingField() const;

constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>*& __cordl_internal_get__Capsules_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsDataHighConfidence_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsDataHighConfidence_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsDataValid_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsDataValid_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsInitialized_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsInitialized_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__SkeletonChangedCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__SkeletonChangedCount_k__BackingField() ;

constexpr bool const& __cordl_internal_get__applyBoneTranslations() const;

constexpr bool& __cordl_internal_get__applyBoneTranslations() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>* const& __cordl_internal_get__bindPoses() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>*& __cordl_internal_get__bindPoses() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__bindPosesGO() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__bindPosesGO() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>* const& __cordl_internal_get__bones() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>*& __cordl_internal_get__bones() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__bonesGO() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__bonesGO() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBoneCapsule*>* const& __cordl_internal_get__capsules() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBoneCapsule*>*& __cordl_internal_get__capsules() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__capsulesGO() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__capsulesGO() ;

constexpr ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider* const& __cordl_internal_get__dataProvider() const;

constexpr ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*& __cordl_internal_get__dataProvider() ;

constexpr bool const& __cordl_internal_get__enablePhysicsCapsules() const;

constexpr bool& __cordl_internal_get__enablePhysicsCapsules() ;

constexpr ::GlobalNamespace::OVRPlugin_Skeleton2 const& __cordl_internal_get__skeleton() const;

constexpr ::GlobalNamespace::OVRPlugin_Skeleton2& __cordl_internal_get__skeleton() ;

constexpr ::GlobalNamespace::OVRSkeleton_SkeletonType const& __cordl_internal_get__skeletonType() const;

constexpr ::GlobalNamespace::OVRSkeleton_SkeletonType& __cordl_internal_get__skeletonType() ;

constexpr bool const& __cordl_internal_get__updateRootPose() const;

constexpr bool& __cordl_internal_get__updateRootPose() ;

constexpr bool const& __cordl_internal_get__updateRootScale() const;

constexpr bool& __cordl_internal_get__updateRootScale() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_wristFixupRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_wristFixupRotation() ;

constexpr void __cordl_internal_set__BindPoses_k__BackingField(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*  value) ;

constexpr void __cordl_internal_set__Bones_k__BackingField(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*  value) ;

constexpr void __cordl_internal_set__Capsules_k__BackingField(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>*  value) ;

constexpr void __cordl_internal_set__IsDataHighConfidence_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsDataValid_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsInitialized_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__SkeletonChangedCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__applyBoneTranslations(bool  value) ;

constexpr void __cordl_internal_set__bindPoses(::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>*  value) ;

constexpr void __cordl_internal_set__bindPosesGO(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__bones(::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>*  value) ;

constexpr void __cordl_internal_set__bonesGO(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__capsules(::System::Collections::Generic::List_1<::GlobalNamespace::OVRBoneCapsule*>*  value) ;

constexpr void __cordl_internal_set__capsulesGO(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__dataProvider(::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*  value) ;

constexpr void __cordl_internal_set__enablePhysicsCapsules(bool  value) ;

constexpr void __cordl_internal_set__skeleton(::GlobalNamespace::OVRPlugin_Skeleton2  value) ;

constexpr void __cordl_internal_set__skeletonType(::GlobalNamespace::OVRSkeleton_SkeletonType  value) ;

constexpr void __cordl_internal_set__updateRootPose(bool  value) ;

constexpr void __cordl_internal_set__updateRootScale(bool  value) ;

constexpr void __cordl_internal_set_wristFixupRotation(::UnityEngine::Quaternion  value) ;

/// @brief Method .ctor, addr 0xa677474, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_BindPoses, addr 0xa673e80, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* get_BindPoses() ;

/// [CompilerGenerated]
/// @brief Method get_Bones, addr 0xa673e70, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>* get_Bones() ;

/// [CompilerGenerated]
/// @brief Method get_Capsules, addr 0xa673e90, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>* get_Capsules() ;

/// [CompilerGenerated]
/// @brief Method get_IsDataHighConfidence, addr 0xa673e60, size 0x8, virtual false, abstract: false, final false
inline bool get_IsDataHighConfidence() ;

/// [CompilerGenerated]
/// @brief Method get_IsDataValid, addr 0xa673e50, size 0x8, virtual false, abstract: false, final false
inline bool get_IsDataValid() ;

/// [CompilerGenerated]
/// @brief Method get_IsInitialized, addr 0xa673e40, size 0x8, virtual false, abstract: false, final false
inline bool get_IsInitialized() ;

/// [CompilerGenerated]
/// @brief Method get_SkeletonChangedCount, addr 0xa674098, size 0x8, virtual false, abstract: false, final false
inline int32_t get_SkeletonChangedCount() ;

/// [CompilerGenerated]
/// @brief Method set_BindPoses, addr 0xa673e88, size 0x8, virtual false, abstract: false, final false
inline void set_BindPoses(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Bones, addr 0xa673e78, size 0x8, virtual false, abstract: false, final false
inline void set_Bones(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Capsules, addr 0xa673e98, size 0x8, virtual false, abstract: false, final false
inline void set_Capsules(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsDataHighConfidence, addr 0xa673e68, size 0x8, virtual false, abstract: false, final false
inline void set_IsDataHighConfidence(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsDataValid, addr 0xa673e58, size 0x8, virtual false, abstract: false, final false
inline void set_IsDataValid(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsInitialized, addr 0xa673e48, size 0x8, virtual false, abstract: false, final false
inline void set_IsInitialized(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_SkeletonChangedCount, addr 0xa6740a0, size 0x8, virtual false, abstract: false, final false
inline void set_SkeletonChangedCount(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRSkeleton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRSkeleton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRSkeleton(OVRSkeleton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRSkeleton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRSkeleton(OVRSkeleton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12713};

/// [SerializeField]
/// @brief Field _skeletonType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::OVRSkeleton_SkeletonType  ____skeletonType;

/// [SerializeField]
/// @brief Field _dataProvider, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::OVRSkeleton_IOVRSkeletonDataProvider*  ____dataProvider;

/// [SerializeField]
/// @brief Field _updateRootPose, offset: 0x30, size: 0x1, def value: None
 bool  ____updateRootPose;

/// [SerializeField]
/// @brief Field _updateRootScale, offset: 0x31, size: 0x1, def value: None
 bool  ____updateRootScale;

/// [SerializeField]
/// @brief Field _enablePhysicsCapsules, offset: 0x32, size: 0x1, def value: None
 bool  ____enablePhysicsCapsules;

/// [SerializeField]
/// @brief Field _applyBoneTranslations, offset: 0x33, size: 0x1, def value: None
 bool  ____applyBoneTranslations;

/// @brief Field _bonesGO, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____bonesGO;

/// @brief Field _bindPosesGO, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____bindPosesGO;

/// @brief Field _capsulesGO, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____capsulesGO;

/// @brief Field _bones, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>*  ____bones;

/// @brief Field _bindPoses, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBone*>*  ____bindPoses;

/// @brief Field _capsules, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBoneCapsule*>*  ____capsules;

/// @brief Field _skeleton, offset: 0x68, size: 0x20, def value: None
 ::GlobalNamespace::OVRPlugin_Skeleton2  ____skeleton;

/// @brief Field wristFixupRotation, offset: 0x88, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___wristFixupRotation;

/// [CompilerGenerated]
/// @brief Field <IsInitialized>k__BackingField, offset: 0x98, size: 0x1, def value: None
 bool  ____IsInitialized_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsDataValid>k__BackingField, offset: 0x99, size: 0x1, def value: None
 bool  ____IsDataValid_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsDataHighConfidence>k__BackingField, offset: 0x9a, size: 0x1, def value: None
 bool  ____IsDataHighConfidence_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Bones>k__BackingField, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*  ____Bones_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <BindPoses>k__BackingField, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*  ____BindPoses_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Capsules>k__BackingField, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBoneCapsule*>*  ____Capsules_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <SkeletonChangedCount>k__BackingField, offset: 0xb8, size: 0x4, def value: None
 int32_t  ____SkeletonChangedCount_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____skeletonType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____dataProvider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____updateRootPose) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____updateRootScale) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____enablePhysicsCapsules) == 0x32, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____applyBoneTranslations) == 0x33, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____bonesGO) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____bindPosesGO) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____capsulesGO) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____bones) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____bindPoses) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____capsules) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____skeleton) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ___wristFixupRotation) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____IsInitialized_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____IsDataValid_k__BackingField) == 0x99, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____IsDataHighConfidence_k__BackingField) == 0x9a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____Bones_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____BindPoses_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____Capsules_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeleton, ____SkeletonChangedCount_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSkeleton) == 0xc0, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSkeleton/IOVRSkeletonDataProvider
class CORDL_TYPE OVRSkeleton_IOVRSkeletonDataProvider {
public:
// Declarations
 __declspec(property(get=get_enabled)) bool  enabled;

/// @brief Method GetSkeletonPoseData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::GlobalNamespace::OVRSkeleton_SkeletonPoseData GetSkeletonPoseData() ;

/// @brief Method GetSkeletonType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::GlobalNamespace::OVRSkeleton_SkeletonType GetSkeletonType() ;

/// @brief Method get_enabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_enabled() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRSkeleton_IOVRSkeletonDataProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRSkeleton_IOVRSkeletonDataProvider(OVRSkeleton_IOVRSkeletonDataProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12709};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
