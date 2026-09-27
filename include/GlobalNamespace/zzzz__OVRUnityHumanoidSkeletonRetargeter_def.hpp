#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRUnityHumanoidSkeletonRetargeter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
#include "GlobalNamespace/zzzz__OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings_BodySection_def.hpp"
#include "GlobalNamespace/zzzz__OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings_BodyTrackingBoneId_def.hpp"
#include "GlobalNamespace/zzzz__OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings_FullBodyTrackingBoneId_def.hpp"
#include "GlobalNamespace/zzzz__OVRUnityHumanoidSkeletonRetargeter_UpdateType_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__HumanBodyBones_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OVRUnityHumanoidSkeletonRetargeter)
namespace GlobalNamespace {
class OVRBone;
}
namespace GlobalNamespace {
class OVRHumanBodyBonesMappingsInterface;
}
namespace GlobalNamespace {
struct OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection;
}
namespace GlobalNamespace {
struct OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId;
}
namespace GlobalNamespace {
struct OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId;
}
namespace GlobalNamespace {
class OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData;
}
namespace GlobalNamespace {
struct OVRSkeleton_BoneId;
}
namespace GlobalNamespace {
class OVRSkeleton;
}
namespace GlobalNamespace {
class OVRUnityHumanoidSkeletonRetargeter_JointAdjustment;
}
namespace GlobalNamespace {
class OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings;
}
namespace GlobalNamespace {
class OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata;
}
namespace GlobalNamespace {
struct OVRUnityHumanoidSkeletonRetargeter_UpdateType;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct HumanBodyBones;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData;
}
namespace GlobalNamespace {
class OVRUnityHumanoidSkeletonRetargeter;
}
namespace GlobalNamespace {
class OVRUnityHumanoidSkeletonRetargeter_JointAdjustment;
}
namespace GlobalNamespace {
class OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings;
}
namespace GlobalNamespace {
class OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData*);
MARK_REF_T(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter*);
MARK_REF_T(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*);
MARK_REF_T(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings*);
MARK_REF_T(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData*, "", "OVRUnityHumanoidSkeletonRetargeter/OVRSkeletonMetadata/BoneData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter*, "", "OVRUnityHumanoidSkeletonRetargeter");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*, "", "OVRUnityHumanoidSkeletonRetargeter/JointAdjustment");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings*, "", "OVRUnityHumanoidSkeletonRetargeter/OVRHumanBodyBonesMappings");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata*, "", "OVRUnityHumanoidSkeletonRetargeter/OVRSkeletonMetadata");
// [Feature((Meta.XR.Util.Feature)1)]
// Dependencies OVRSkeleton, OVRUnityHumanoidSkeletonRetargeter::JointAdjustment, OVRUnityHumanoidSkeletonRetargeter::OVRHumanBodyBonesMappings::BodySection, OVRUnityHumanoidSkeletonRetargeter::UpdateType, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRUnityHumanoidSkeletonRetargeter
class CORDL_TYPE OVRUnityHumanoidSkeletonRetargeter : public ::GlobalNamespace::OVRSkeleton {
public:
// Declarations
using JointAdjustment = ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment;

using OVRHumanBodyBonesMappings = ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings;

using OVRSkeletonMetadata = ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata;

using UpdateType = ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_UpdateType;

 __declspec(property(get=get_Adjustments)) ::ArrayW<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*>  Adjustments;

 __declspec(property(get=get_AnimatorTargetSkeleton)) ::UnityW<::UnityEngine::Animator>  AnimatorTargetSkeleton;

 __declspec(property(get=get_BodyBoneMappingsInterface, put=set_BodyBoneMappingsInterface)) ::GlobalNamespace::OVRHumanBodyBonesMappingsInterface*  BodyBoneMappingsInterface;

 __declspec(property(get=get_BodySectionToPosition)) ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>  BodySectionToPosition;

 __declspec(property(get=get_BodySectionsToAlign)) ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>  BodySectionsToAlign;

 __declspec(property(get=get_CustomBoneIdToHumanBodyBone)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId,::UnityEngine::HumanBodyBones>*  CustomBoneIdToHumanBodyBone;

 __declspec(property(get=get_FullBodySectionToPosition)) ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>  FullBodySectionToPosition;

 __declspec(property(get=get_FullBodySectionsToAlign)) ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>  FullBodySectionsToAlign;

 __declspec(property(get=get_SourceSkeletonData)) ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata*  SourceSkeletonData;

 __declspec(property(get=get_SourceSkeletonTPoseData)) ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata*  SourceSkeletonTPoseData;

 __declspec(property(get=get_TargetSkeletonData)) ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata*  TargetSkeletonData;

 __declspec(property(get=get_TargetTPoseRotations)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones,::UnityEngine::Quaternion>*  TargetTPoseRotations;

/// @brief Field _adjustments, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__adjustments, put=__cordl_internal_set__adjustments)) ::ArrayW<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*>  _adjustments;

/// @brief Field _animatorTargetSkeleton, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__animatorTargetSkeleton, put=__cordl_internal_set__animatorTargetSkeleton)) ::UnityW<::UnityEngine::Animator>  _animatorTargetSkeleton;

/// @brief Field _bodyBonesMappingInterface, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get__bodyBonesMappingInterface, put=__cordl_internal_set__bodyBonesMappingInterface)) ::GlobalNamespace::OVRHumanBodyBonesMappingsInterface*  _bodyBonesMappingInterface;

/// @brief Field _bodySectionToPosition, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get__bodySectionToPosition, put=__cordl_internal_set__bodySectionToPosition)) ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>  _bodySectionToPosition;

/// @brief Field _bodySectionsToAlign, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__bodySectionsToAlign, put=__cordl_internal_set__bodySectionsToAlign)) ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>  _bodySectionsToAlign;

/// @brief Field _customBoneIdToHumanBodyBone, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__customBoneIdToHumanBodyBone, put=__cordl_internal_set__customBoneIdToHumanBodyBone)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId,::UnityEngine::HumanBodyBones>*  _customBoneIdToHumanBodyBone;

/// @brief Field _fullBodySectionToPosition, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get__fullBodySectionToPosition, put=__cordl_internal_set__fullBodySectionToPosition)) ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>  _fullBodySectionToPosition;

/// @brief Field _fullBodySectionsToAlign, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__fullBodySectionsToAlign, put=__cordl_internal_set__fullBodySectionsToAlign)) ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>  _fullBodySectionsToAlign;

/// @brief Field _lastSkelChangeCount, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastSkelChangeCount, put=__cordl_internal_set__lastSkelChangeCount)) int32_t  _lastSkelChangeCount;

/// @brief Field _lastTrackedScale, offset 0xfc, size 0xc 
 __declspec(property(get=__cordl_internal_get__lastTrackedScale, put=__cordl_internal_set__lastTrackedScale)) ::UnityEngine::Vector3  _lastTrackedScale;

/// @brief Field _sourceSkeletonData, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__sourceSkeletonData, put=__cordl_internal_set__sourceSkeletonData)) ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata*  _sourceSkeletonData;

/// @brief Field _sourceSkeletonTPoseData, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__sourceSkeletonTPoseData, put=__cordl_internal_set__sourceSkeletonTPoseData)) ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata*  _sourceSkeletonTPoseData;

/// @brief Field _targetSkeletonData, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetSkeletonData, put=__cordl_internal_set__targetSkeletonData)) ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata*  _targetSkeletonData;

/// @brief Field _targetTPoseRotations, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetTPoseRotations, put=__cordl_internal_set__targetTPoseRotations)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones,::UnityEngine::Quaternion>*  _targetTPoseRotations;

/// @brief Field _targetTPoseTransformDup, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetTPoseTransformDup, put=__cordl_internal_set__targetTPoseTransformDup)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones,::UnityW<::UnityEngine::Transform>>*  _targetTPoseTransformDup;

/// @brief Field _updateType, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get__updateType, put=__cordl_internal_set__updateType)) ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_UpdateType  _updateType;

/// @brief Method AdjustCustomBoneIdToHumanBodyBoneMapping, addr 0xa55fc98, size 0x114, virtual false, abstract: false, final false
inline void AdjustCustomBoneIdToHumanBodyBoneMapping() ;

/// @brief Method AlignHierarchies, addr 0xa55f88c, size 0xe0, virtual false, abstract: false, final false
inline void AlignHierarchies(::UnityEngine::Transform*  transformToAlign, ::UnityEngine::Transform*  referenceTransform) ;

/// @brief Method AlignTargetWithSource, addr 0xa560020, size 0x81c, virtual false, abstract: false, final false
inline void AlignTargetWithSource() ;

/// @brief Method ComputeOffsetsUsingSkeletonComponent, addr 0xa560968, size 0x6e4, virtual false, abstract: false, final false
inline void ComputeOffsetsUsingSkeletonComponent() ;

/// @brief Method CopyBoneIdToHumanBodyBoneMapping, addr 0xa55f96c, size 0x32c, virtual false, abstract: false, final false
inline void CopyBoneIdToHumanBodyBoneMapping() ;

/// @brief Method CreateCustomBoneIdToHumanBodyBoneMapping, addr 0xa55e904, size 0x18, virtual false, abstract: false, final false
inline void CreateCustomBoneIdToHumanBodyBoneMapping() ;

/// @brief Method CreateDuplicateTransformHierarchy, addr 0xa55f418, size 0x3d0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> CreateDuplicateTransformHierarchy(::UnityEngine::Transform*  transformFromOriginalHierarchy) ;

/// @brief Method FindAdjustment, addr 0xa561268, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment* FindAdjustment(::UnityEngine::HumanBodyBones  boneId) ;

/// @brief Method FindHumanBodyBoneFromTransform, addr 0xa55f7e8, size 0xa4, virtual false, abstract: false, final false
inline ::UnityEngine::HumanBodyBones FindHumanBodyBoneFromTransform(::UnityEngine::Transform*  candidateTransform) ;

/// @brief Method IsBodySectionInArray, addr 0xa561208, size 0x60, virtual false, abstract: false, final false
static inline bool IsBodySectionInArray(::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection  bodySectionToCheck, ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>  sectionArrayToCheck) ;

static inline ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter* New_ctor() ;

/// @brief Method OffsetComputationNeededThisFrame, addr 0xa56083c, size 0x12c, virtual false, abstract: false, final false
inline bool OffsetComputationNeededThisFrame() ;

/// @brief Method OnValidate, addr 0xa55f414, size 0x4, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method PrecomputeAllRotationTweaks, addr 0xa55f24c, size 0x5c, virtual false, abstract: false, final false
inline void PrecomputeAllRotationTweaks() ;

/// @brief Method RecomputeSkeletalOffsetsIfNecessary, addr 0xa55fffc, size 0x24, virtual false, abstract: false, final false
inline void RecomputeSkeletalOffsetsIfNecessary() ;

/// @brief Method RemoveMappingCorrespondingToHumanBodyBone, addr 0xa55fdac, size 0x1b8, virtual false, abstract: false, final false
inline void RemoveMappingCorrespondingToHumanBodyBone(::UnityEngine::HumanBodyBones  boneId) ;

/// @brief Method ShouldRunUpdateThisFrame, addr 0xa55ffc4, size 0x38, virtual false, abstract: false, final false
inline bool ShouldRunUpdateThisFrame() ;

/// @brief Method Start, addr 0xa55e704, size 0x124, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method StoreTTargetPoseRotations, addr 0xa55e91c, size 0x1a4, virtual false, abstract: false, final false
inline void StoreTTargetPoseRotations() ;

/// @brief Method Update, addr 0xa55ff64, size 0x60, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method ValidateGameObjectForUnityHumanoidRetargeting, addr 0xa55e828, size 0xdc, virtual false, abstract: false, final false
static inline void ValidateGameObjectForUnityHumanoidRetargeting(::UnityEngine::GameObject*  go) ;

constexpr ::ArrayW<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*> const& __cordl_internal_get__adjustments() const;

constexpr ::ArrayW<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*>& __cordl_internal_get__adjustments() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get__animatorTargetSkeleton() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get__animatorTargetSkeleton() ;

constexpr ::GlobalNamespace::OVRHumanBodyBonesMappingsInterface* const& __cordl_internal_get__bodyBonesMappingInterface() const;

constexpr ::GlobalNamespace::OVRHumanBodyBonesMappingsInterface*& __cordl_internal_get__bodyBonesMappingInterface() ;

constexpr ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection> const& __cordl_internal_get__bodySectionToPosition() const;

constexpr ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>& __cordl_internal_get__bodySectionToPosition() ;

constexpr ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection> const& __cordl_internal_get__bodySectionsToAlign() const;

constexpr ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>& __cordl_internal_get__bodySectionsToAlign() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId,::UnityEngine::HumanBodyBones>* const& __cordl_internal_get__customBoneIdToHumanBodyBone() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId,::UnityEngine::HumanBodyBones>*& __cordl_internal_get__customBoneIdToHumanBodyBone() ;

constexpr ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection> const& __cordl_internal_get__fullBodySectionToPosition() const;

constexpr ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>& __cordl_internal_get__fullBodySectionToPosition() ;

constexpr ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection> const& __cordl_internal_get__fullBodySectionsToAlign() const;

constexpr ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>& __cordl_internal_get__fullBodySectionsToAlign() ;

constexpr int32_t const& __cordl_internal_get__lastSkelChangeCount() const;

constexpr int32_t& __cordl_internal_get__lastSkelChangeCount() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__lastTrackedScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__lastTrackedScale() ;

constexpr ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* const& __cordl_internal_get__sourceSkeletonData() const;

constexpr ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata*& __cordl_internal_get__sourceSkeletonData() ;

constexpr ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* const& __cordl_internal_get__sourceSkeletonTPoseData() const;

constexpr ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata*& __cordl_internal_get__sourceSkeletonTPoseData() ;

constexpr ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* const& __cordl_internal_get__targetSkeletonData() const;

constexpr ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata*& __cordl_internal_get__targetSkeletonData() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones,::UnityEngine::Quaternion>* const& __cordl_internal_get__targetTPoseRotations() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones,::UnityEngine::Quaternion>*& __cordl_internal_get__targetTPoseRotations() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones,::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get__targetTPoseTransformDup() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones,::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get__targetTPoseTransformDup() ;

constexpr ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_UpdateType const& __cordl_internal_get__updateType() const;

constexpr ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_UpdateType& __cordl_internal_get__updateType() ;

constexpr void __cordl_internal_set__adjustments(::ArrayW<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*>  value) ;

constexpr void __cordl_internal_set__animatorTargetSkeleton(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set__bodyBonesMappingInterface(::GlobalNamespace::OVRHumanBodyBonesMappingsInterface*  value) ;

constexpr void __cordl_internal_set__bodySectionToPosition(::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>  value) ;

constexpr void __cordl_internal_set__bodySectionsToAlign(::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>  value) ;

constexpr void __cordl_internal_set__customBoneIdToHumanBodyBone(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId,::UnityEngine::HumanBodyBones>*  value) ;

constexpr void __cordl_internal_set__fullBodySectionToPosition(::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>  value) ;

constexpr void __cordl_internal_set__fullBodySectionsToAlign(::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>  value) ;

constexpr void __cordl_internal_set__lastSkelChangeCount(int32_t  value) ;

constexpr void __cordl_internal_set__lastTrackedScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__sourceSkeletonData(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata*  value) ;

constexpr void __cordl_internal_set__sourceSkeletonTPoseData(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata*  value) ;

constexpr void __cordl_internal_set__targetSkeletonData(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata*  value) ;

constexpr void __cordl_internal_set__targetTPoseRotations(::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones,::UnityEngine::Quaternion>*  value) ;

constexpr void __cordl_internal_set__targetTPoseTransformDup(::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones,::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set__updateType(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_UpdateType  value) ;

/// @brief Method .ctor, addr 0xa55e2ac, size 0x36c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Adjustments, addr 0xa55e6c4, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*> get_Adjustments() ;

/// @brief Method get_AnimatorTargetSkeleton, addr 0xa55e294, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Animator> get_AnimatorTargetSkeleton() ;

/// @brief Method get_BodyBoneMappingsInterface, addr 0xa55e6ec, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRHumanBodyBonesMappingsInterface* get_BodyBoneMappingsInterface() ;

/// @brief Method get_BodySectionToPosition, addr 0xa55e6e4, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection> get_BodySectionToPosition() ;

/// @brief Method get_BodySectionsToAlign, addr 0xa55e6d4, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection> get_BodySectionsToAlign() ;

/// @brief Method get_CustomBoneIdToHumanBodyBone, addr 0xa55e29c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId,::UnityEngine::HumanBodyBones>* get_CustomBoneIdToHumanBodyBone() ;

/// @brief Method get_FullBodySectionToPosition, addr 0xa55e6dc, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection> get_FullBodySectionToPosition() ;

/// @brief Method get_FullBodySectionsToAlign, addr 0xa55e6cc, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection> get_FullBodySectionsToAlign() ;

/// @brief Method get_SourceSkeletonData, addr 0xa55e27c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* get_SourceSkeletonData() ;

/// @brief Method get_SourceSkeletonTPoseData, addr 0xa55e284, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* get_SourceSkeletonTPoseData() ;

/// @brief Method get_TargetSkeletonData, addr 0xa55e28c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* get_TargetSkeletonData() ;

/// @brief Method get_TargetTPoseRotations, addr 0xa55e2a4, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones,::UnityEngine::Quaternion>* get_TargetTPoseRotations() ;

/// @brief Method set_BodyBoneMappingsInterface, addr 0xa55e6f4, size 0x10, virtual false, abstract: false, final false
inline void set_BodyBoneMappingsInterface(::GlobalNamespace::OVRHumanBodyBonesMappingsInterface*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRUnityHumanoidSkeletonRetargeter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRUnityHumanoidSkeletonRetargeter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRUnityHumanoidSkeletonRetargeter(OVRUnityHumanoidSkeletonRetargeter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRUnityHumanoidSkeletonRetargeter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRUnityHumanoidSkeletonRetargeter(OVRUnityHumanoidSkeletonRetargeter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11805};

/// @brief Field _sourceSkeletonData, offset: 0xc0, size: 0x8, def value: None
 ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata*  ____sourceSkeletonData;

/// @brief Field _sourceSkeletonTPoseData, offset: 0xc8, size: 0x8, def value: None
 ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata*  ____sourceSkeletonTPoseData;

/// @brief Field _targetSkeletonData, offset: 0xd0, size: 0x8, def value: None
 ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata*  ____targetSkeletonData;

/// @brief Field _animatorTargetSkeleton, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ____animatorTargetSkeleton;

/// @brief Field _customBoneIdToHumanBodyBone, offset: 0xe0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId,::UnityEngine::HumanBodyBones>*  ____customBoneIdToHumanBodyBone;

/// @brief Field _targetTPoseRotations, offset: 0xe8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones,::UnityEngine::Quaternion>*  ____targetTPoseRotations;

/// @brief Field _targetTPoseTransformDup, offset: 0xf0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones,::UnityW<::UnityEngine::Transform>>*  ____targetTPoseTransformDup;

/// @brief Field _lastSkelChangeCount, offset: 0xf8, size: 0x4, def value: None
 int32_t  ____lastSkelChangeCount;

/// @brief Field _lastTrackedScale, offset: 0xfc, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____lastTrackedScale;

/// [SerializeField]
/// @brief Field _adjustments, offset: 0x108, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment*>  ____adjustments;

/// [SerializeField]
/// @brief Field _fullBodySectionsToAlign, offset: 0x110, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>  ____fullBodySectionsToAlign;

/// [SerializeField]
/// @brief Field _bodySectionsToAlign, offset: 0x118, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>  ____bodySectionsToAlign;

/// [SerializeField]
/// @brief Field _fullBodySectionToPosition, offset: 0x120, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>  ____fullBodySectionToPosition;

/// [SerializeField]
/// @brief Field _bodySectionToPosition, offset: 0x128, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>  ____bodySectionToPosition;

/// [SerializeField]
/// [Tooltip("Controls if we run retargeting from FixedUpdate, Update, or both.")]
/// @brief Field _updateType, offset: 0x130, size: 0x4, def value: None
 ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_UpdateType  ____updateType;

/// @brief Field _bodyBonesMappingInterface, offset: 0x138, size: 0x8, def value: None
 ::GlobalNamespace::OVRHumanBodyBonesMappingsInterface*  ____bodyBonesMappingInterface;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____sourceSkeletonData) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____sourceSkeletonTPoseData) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____targetSkeletonData) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____animatorTargetSkeleton) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____customBoneIdToHumanBodyBone) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____targetTPoseRotations) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____targetTPoseTransformDup) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____lastSkelChangeCount) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____lastTrackedScale) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____adjustments) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____fullBodySectionsToAlign) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____bodySectionsToAlign) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____fullBodySectionToPosition) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____bodySectionToPosition) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____updateType) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter, ____bodyBonesMappingInterface) == 0x138, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter) == 0x140, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies OVRUnityHumanoidSkeletonRetargeter::OVRHumanBodyBonesMappings::BodyTrackingBoneId, OVRUnityHumanoidSkeletonRetargeter::OVRHumanBodyBonesMappings::FullBodyTrackingBoneId, System.Object, UnityEngine.HumanBodyBones, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRUnityHumanoidSkeletonRetargeter/JointAdjustment
class CORDL_TYPE OVRUnityHumanoidSkeletonRetargeter_JointAdjustment : public ::System::Object {
public:
// Declarations
/// @brief Field BoneIdOverrideValue, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_BoneIdOverrideValue, put=__cordl_internal_set_BoneIdOverrideValue)) ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId  BoneIdOverrideValue;

/// @brief Field DisablePositionTransform, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_DisablePositionTransform, put=__cordl_internal_set_DisablePositionTransform)) bool  DisablePositionTransform;

/// @brief Field DisableRotationTransform, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_DisableRotationTransform, put=__cordl_internal_set_DisableRotationTransform)) bool  DisableRotationTransform;

/// @brief Field FullBodyBoneIdOverrideValue, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_FullBodyBoneIdOverrideValue, put=__cordl_internal_set_FullBodyBoneIdOverrideValue)) ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId  FullBodyBoneIdOverrideValue;

/// @brief Field Joint, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Joint, put=__cordl_internal_set_Joint)) ::UnityEngine::HumanBodyBones  Joint;

/// @brief Field PositionChange, offset 0x14, size 0xc 
 __declspec(property(get=__cordl_internal_get_PositionChange, put=__cordl_internal_set_PositionChange)) ::UnityEngine::Vector3  PositionChange;

 __declspec(property(get=get_PrecomputedRotationTweaks, put=set_PrecomputedRotationTweaks)) ::UnityEngine::Quaternion  PrecomputedRotationTweaks;

/// @brief Field RotationChange, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_RotationChange, put=__cordl_internal_set_RotationChange)) ::UnityEngine::Quaternion  RotationChange;

/// @brief Field RotationTweaks, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_RotationTweaks, put=__cordl_internal_set_RotationTweaks)) ::ArrayW<::UnityEngine::Quaternion>  RotationTweaks;

/// @brief Field <PrecomputedRotationTweaks>k__BackingField, offset 0x44, size 0x10 
 __declspec(property(get=__cordl_internal_get__PrecomputedRotationTweaks_k__BackingField, put=__cordl_internal_set__PrecomputedRotationTweaks_k__BackingField)) ::UnityEngine::Quaternion  _PrecomputedRotationTweaks_k__BackingField;

static inline ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment* New_ctor() ;

/// @brief Method PrecomputeRotationTweaks, addr 0xa55f2a8, size 0x16c, virtual false, abstract: false, final false
inline void PrecomputeRotationTweaks() ;

constexpr ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId const& __cordl_internal_get_BoneIdOverrideValue() const;

constexpr ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId& __cordl_internal_get_BoneIdOverrideValue() ;

constexpr bool const& __cordl_internal_get_DisablePositionTransform() const;

constexpr bool& __cordl_internal_get_DisablePositionTransform() ;

constexpr bool const& __cordl_internal_get_DisableRotationTransform() const;

constexpr bool& __cordl_internal_get_DisableRotationTransform() ;

constexpr ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const& __cordl_internal_get_FullBodyBoneIdOverrideValue() const;

constexpr ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId& __cordl_internal_get_FullBodyBoneIdOverrideValue() ;

constexpr ::UnityEngine::HumanBodyBones const& __cordl_internal_get_Joint() const;

constexpr ::UnityEngine::HumanBodyBones& __cordl_internal_get_Joint() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_PositionChange() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_PositionChange() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_RotationChange() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_RotationChange() ;

constexpr ::ArrayW<::UnityEngine::Quaternion> const& __cordl_internal_get_RotationTweaks() const;

constexpr ::ArrayW<::UnityEngine::Quaternion>& __cordl_internal_get_RotationTweaks() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__PrecomputedRotationTweaks_k__BackingField() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__PrecomputedRotationTweaks_k__BackingField() ;

constexpr void __cordl_internal_set_BoneIdOverrideValue(::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId  value) ;

constexpr void __cordl_internal_set_DisablePositionTransform(bool  value) ;

constexpr void __cordl_internal_set_DisableRotationTransform(bool  value) ;

constexpr void __cordl_internal_set_FullBodyBoneIdOverrideValue(::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId  value) ;

constexpr void __cordl_internal_set_Joint(::UnityEngine::HumanBodyBones  value) ;

constexpr void __cordl_internal_set_PositionChange(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_RotationChange(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_RotationTweaks(::ArrayW<::UnityEngine::Quaternion>  value) ;

constexpr void __cordl_internal_set__PrecomputedRotationTweaks_k__BackingField(::UnityEngine::Quaternion  value) ;

/// @brief Method .ctor, addr 0xa55e618, size 0xa4, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_PrecomputedRotationTweaks, addr 0xa5667a8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_PrecomputedRotationTweaks() ;

/// [CompilerGenerated]
/// @brief Method set_PrecomputedRotationTweaks, addr 0xa5667b4, size 0xc, virtual false, abstract: false, final false
inline void set_PrecomputedRotationTweaks(::UnityEngine::Quaternion  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRUnityHumanoidSkeletonRetargeter_JointAdjustment() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRUnityHumanoidSkeletonRetargeter_JointAdjustment", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRUnityHumanoidSkeletonRetargeter_JointAdjustment(OVRUnityHumanoidSkeletonRetargeter_JointAdjustment && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRUnityHumanoidSkeletonRetargeter_JointAdjustment", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRUnityHumanoidSkeletonRetargeter_JointAdjustment(OVRUnityHumanoidSkeletonRetargeter_JointAdjustment const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11803};

/// @brief Field Joint, offset: 0x10, size: 0x4, def value: None
 ::UnityEngine::HumanBodyBones  ___Joint;

/// @brief Field PositionChange, offset: 0x14, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___PositionChange;

/// @brief Field RotationChange, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___RotationChange;

/// @brief Field RotationTweaks, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Quaternion>  ___RotationTweaks;

/// @brief Field DisableRotationTransform, offset: 0x38, size: 0x1, def value: None
 bool  ___DisableRotationTransform;

/// @brief Field DisablePositionTransform, offset: 0x39, size: 0x1, def value: None
 bool  ___DisablePositionTransform;

/// @brief Field FullBodyBoneIdOverrideValue, offset: 0x3c, size: 0x4, def value: None
 ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId  ___FullBodyBoneIdOverrideValue;

/// @brief Field BoneIdOverrideValue, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId  ___BoneIdOverrideValue;

/// [CompilerGenerated]
/// @brief Field <PrecomputedRotationTweaks>k__BackingField, offset: 0x44, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____PrecomputedRotationTweaks_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment, ___Joint) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment, ___PositionChange) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment, ___RotationChange) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment, ___RotationTweaks) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment, ___DisableRotationTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment, ___DisablePositionTransform) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment, ___FullBodyBoneIdOverrideValue) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment, ___BoneIdOverrideValue) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment, ____PrecomputedRotationTweaks_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_JointAdjustment) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object, UnityEngine.HumanBodyBones
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRUnityHumanoidSkeletonRetargeter/OVRSkeletonMetadata
class CORDL_TYPE OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata : public ::System::Object {
public:
// Declarations
using BoneData = ::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData;

 __declspec(property(get=get_BodyToBoneData)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones,::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData*>*  BodyToBoneData;

/// @brief Field <BodyToBoneData>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__BodyToBoneData_k__BackingField, put=__cordl_internal_set__BodyToBoneData_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones,::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData*>*  _BodyToBoneData_k__BackingField;

/// @brief Field _boneEnumValues, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__boneEnumValues, put=__cordl_internal_set__boneEnumValues)) ::ArrayW<::UnityEngine::HumanBodyBones>  _boneEnumValues;

/// @brief Method AssembleSkeleton, addr 0xa565664, size 0x768, virtual false, abstract: false, final false
inline void AssembleSkeleton(::GlobalNamespace::OVRSkeleton*  skeleton, bool  useBindPose, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId,::UnityEngine::HumanBodyBones>*  customBoneIdToHumanBodyBone, ::GlobalNamespace::OVRHumanBodyBonesMappingsInterface*  bodyBonesMappingInterface, bool  useFullBody) ;

/// @brief Method BuildBoneData, addr 0xa564d64, size 0x760, virtual false, abstract: false, final false
inline void BuildBoneData(::UnityEngine::Animator*  animator, ::GlobalNamespace::OVRHumanBodyBonesMappingsInterface*  bodyBonesMappingInterface) ;

/// @brief Method BuildBoneDataSkeleton, addr 0xa561200, size 0x8, virtual false, abstract: false, final false
inline void BuildBoneDataSkeleton(::GlobalNamespace::OVRSkeleton*  skeleton, bool  useBindPose, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId,::UnityEngine::HumanBodyBones>*  customBoneIdToHumanBodyBone, ::GlobalNamespace::OVRHumanBodyBonesMappingsInterface*  bodyBonesMappingInterface) ;

/// @brief Method BuildBoneDataSkeletonFullBody, addr 0xa5611f8, size 0x8, virtual false, abstract: false, final false
inline void BuildBoneDataSkeletonFullBody(::GlobalNamespace::OVRSkeleton*  skeleton, bool  useBindPose, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId,::UnityEngine::HumanBodyBones>*  customBoneIdToHumanBodyBone, ::GlobalNamespace::OVRHumanBodyBonesMappingsInterface*  bodyBonesMappingInterface) ;

/// @brief Method BuildCoordinateAxesForAllBones, addr 0xa55ec44, size 0x608, virtual false, abstract: false, final false
inline void BuildCoordinateAxesForAllBones() ;

/// @brief Method CreateQuaternionForBoneData, addr 0xa56646c, size 0x17c, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion CreateQuaternionForBoneData(::UnityEngine::Vector3  fromPosition, ::UnityEngine::Vector3  toPosition) ;

/// @brief Method CreateQuaternionForBoneDataWithRightVec, addr 0xa5665e8, size 0x1c0, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion CreateQuaternionForBoneDataWithRightVec(::UnityEngine::Vector3  fromPosition, ::UnityEngine::Vector3  toPosition, ::UnityEngine::Vector3  rightVector) ;

/// @brief Method FindBoneWithBoneId, addr 0xa565dd4, size 0x1ac, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRBone* FindBoneWithBoneId(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRBone*>*  bones, ::GlobalNamespace::OVRSkeleton_BoneId  boneId) ;

/// @brief Method FindFirstChild, addr 0xa565f80, size 0x110, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Transform> FindFirstChild(::UnityEngine::Transform*  startTransform, ::UnityEngine::Transform*  currTransform) ;

/// @brief Method FixJointPairEndPositionHand, addr 0xa566090, size 0x3dc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 FixJointPairEndPositionHand(::UnityEngine::Vector3  jointPairEndPosition, ::UnityEngine::HumanBodyBones  humanBodyBone) ;

static inline ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* New_ctor(::UnityEngine::Animator*  animator, ::GlobalNamespace::OVRHumanBodyBonesMappingsInterface*  bodyBonesMappingInterface) ;

static inline ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* New_ctor(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata*  otherSkeletonMetaData) ;

static inline ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* New_ctor(::GlobalNamespace::OVRSkeleton*  skeleton, bool  useBindPose, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId,::UnityEngine::HumanBodyBones>*  customBoneIdToHumanBodyBone, ::GlobalNamespace::OVRHumanBodyBonesMappingsInterface*  bodyBonesMappingInterface) ;

static inline ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata* New_ctor(::GlobalNamespace::OVRSkeleton*  skeleton, bool  useBindPose, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId,::UnityEngine::HumanBodyBones>*  customBoneIdToHumanBodyBone, bool  useFullBody, ::GlobalNamespace::OVRHumanBodyBonesMappingsInterface*  bodyBonesMappingInterface) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones,::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData*>* const& __cordl_internal_get__BodyToBoneData_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones,::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData*>*& __cordl_internal_get__BodyToBoneData_k__BackingField() ;

constexpr ::ArrayW<::UnityEngine::HumanBodyBones> const& __cordl_internal_get__boneEnumValues() const;

constexpr ::ArrayW<::UnityEngine::HumanBodyBones>& __cordl_internal_get__boneEnumValues() ;

constexpr void __cordl_internal_set__BodyToBoneData_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones,::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData*>*  value) ;

constexpr void __cordl_internal_set__boneEnumValues(::ArrayW<::UnityEngine::HumanBodyBones>  value) ;

/// @brief Method .ctor, addr 0xa55eac0, size 0x184, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Animator*  animator, ::GlobalNamespace::OVRHumanBodyBonesMappingsInterface*  bodyBonesMappingInterface) ;

/// @brief Method .ctor, addr 0xa564960, size 0x358, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata*  otherSkeletonMetaData) ;

/// @brief Method .ctor, addr 0xa5654c4, size 0x1a0, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::OVRSkeleton*  skeleton, bool  useBindPose, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId,::UnityEngine::HumanBodyBones>*  customBoneIdToHumanBodyBone, ::GlobalNamespace::OVRHumanBodyBonesMappingsInterface*  bodyBonesMappingInterface) ;

/// @brief Method .ctor, addr 0xa56104c, size 0x1ac, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::OVRSkeleton*  skeleton, bool  useBindPose, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId,::UnityEngine::HumanBodyBones>*  customBoneIdToHumanBodyBone, bool  useFullBody, ::GlobalNamespace::OVRHumanBodyBonesMappingsInterface*  bodyBonesMappingInterface) ;

/// [CompilerGenerated]
/// @brief Method get_BodyToBoneData, addr 0xa564958, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones,::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData*>* get_BodyToBoneData() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata(OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata(OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11802};

/// [CompilerGenerated]
/// @brief Field <BodyToBoneData>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones,::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData*>*  ____BodyToBoneData_k__BackingField;

/// @brief Field _boneEnumValues, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::HumanBodyBones>  ____boneEnumValues;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata, ____BodyToBoneData_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata, ____boneEnumValues) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Nullable`1<T>, System.Object, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRUnityHumanoidSkeletonRetargeter/OVRSkeletonMetadata/BoneData
class CORDL_TYPE OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData : public ::System::Object {
public:
// Declarations
/// @brief Field CorrectionQuaternion, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get_CorrectionQuaternion, put=__cordl_internal_set_CorrectionQuaternion)) ::System::Nullable_1<::UnityEngine::Quaternion>  CorrectionQuaternion;

/// @brief Field DegenerateJoint, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_DegenerateJoint, put=__cordl_internal_set_DegenerateJoint)) bool  DegenerateJoint;

/// @brief Field FromPosition, offset 0x18, size 0xc 
 __declspec(property(get=__cordl_internal_get_FromPosition, put=__cordl_internal_set_FromPosition)) ::UnityEngine::Vector3  FromPosition;

/// @brief Field JointPairEnd, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_JointPairEnd, put=__cordl_internal_set_JointPairEnd)) ::UnityW<::UnityEngine::Transform>  JointPairEnd;

/// @brief Field JointPairOrientation, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_JointPairOrientation, put=__cordl_internal_set_JointPairOrientation)) ::UnityEngine::Quaternion  JointPairOrientation;

/// @brief Field JointPairStart, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_JointPairStart, put=__cordl_internal_set_JointPairStart)) ::UnityW<::UnityEngine::Transform>  JointPairStart;

/// @brief Field OriginalJoint, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OriginalJoint, put=__cordl_internal_set_OriginalJoint)) ::UnityW<::UnityEngine::Transform>  OriginalJoint;

/// @brief Field ParentTransform, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_ParentTransform, put=__cordl_internal_set_ParentTransform)) ::UnityW<::UnityEngine::Transform>  ParentTransform;

/// @brief Field ToPosition, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_ToPosition, put=__cordl_internal_set_ToPosition)) ::UnityEngine::Vector3  ToPosition;

static inline ::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData* New_ctor() ;

static inline ::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData* New_ctor(::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData*  otherBoneData) ;

constexpr ::System::Nullable_1<::UnityEngine::Quaternion> const& __cordl_internal_get_CorrectionQuaternion() const;

constexpr ::System::Nullable_1<::UnityEngine::Quaternion>& __cordl_internal_get_CorrectionQuaternion() ;

constexpr bool const& __cordl_internal_get_DegenerateJoint() const;

constexpr bool& __cordl_internal_get_DegenerateJoint() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_FromPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_FromPosition() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_JointPairEnd() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_JointPairEnd() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_JointPairOrientation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_JointPairOrientation() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_JointPairStart() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_JointPairStart() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_OriginalJoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_OriginalJoint() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_ParentTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_ParentTransform() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_ToPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_ToPosition() ;

constexpr void __cordl_internal_set_CorrectionQuaternion(::System::Nullable_1<::UnityEngine::Quaternion>  value) ;

constexpr void __cordl_internal_set_DegenerateJoint(bool  value) ;

constexpr void __cordl_internal_set_FromPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_JointPairEnd(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_JointPairOrientation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_JointPairStart(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_OriginalJoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_ParentTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_ToPosition(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0xa565dcc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa564cb8, size 0xac, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData*  otherBoneData) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData(OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData(OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11801};

/// @brief Field OriginalJoint, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___OriginalJoint;

/// @brief Field FromPosition, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___FromPosition;

/// @brief Field ToPosition, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___ToPosition;

/// @brief Field JointPairStart, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___JointPairStart;

/// @brief Field JointPairEnd, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___JointPairEnd;

/// @brief Field JointPairOrientation, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___JointPairOrientation;

/// @brief Field CorrectionQuaternion, offset: 0x50, size: 0x10, def value: None
 ::System::Nullable_1<::UnityEngine::Quaternion>  ___CorrectionQuaternion;

/// @brief Field ParentTransform, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___ParentTransform;

/// @brief Field DegenerateJoint, offset: 0x68, size: 0x1, def value: None
 bool  ___DegenerateJoint;

/// @brief Size padding 0x78 - 0x70 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData, ___OriginalJoint) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData, ___FromPosition) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData, ___ToPosition) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData, ___JointPairStart) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData, ___JointPairEnd) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData, ___JointPairOrientation) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData, ___CorrectionQuaternion) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData, ___ParentTransform) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData, ___DegenerateJoint) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSkeletonMetadata_OVRUnityHumanoidSkeletonRetargeter_BoneData) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRUnityHumanoidSkeletonRetargeter/OVRHumanBodyBonesMappings
class CORDL_TYPE OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings : public ::System::Object {
public:
// Declarations
using BodySection = ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection;

using BodyTrackingBoneId = ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodyTrackingBoneId;

using FullBodyTrackingBoneId = ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId;

/// @brief Field BoneIdToHumanBodyBone, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BoneIdToHumanBodyBone, put=setStaticF_BoneIdToHumanBodyBone)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId,::UnityEngine::HumanBodyBones>*  BoneIdToHumanBodyBone;

/// @brief Field BoneIdToJointPair, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BoneIdToJointPair, put=setStaticF_BoneIdToJointPair)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId,::System::Tuple_2<::GlobalNamespace::OVRSkeleton_BoneId,::GlobalNamespace::OVRSkeleton_BoneId>*>*  BoneIdToJointPair;

/// @brief Field BoneToBodySection, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BoneToBodySection, put=setStaticF_BoneToBodySection)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones,::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*  BoneToBodySection;

/// @brief Field BoneToJointPair, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BoneToJointPair, put=setStaticF_BoneToJointPair)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones,::System::Tuple_2<::UnityEngine::HumanBodyBones,::UnityEngine::HumanBodyBones>*>*  BoneToJointPair;

/// @brief Field FullBodyBoneIdToHumanBodyBone, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FullBodyBoneIdToHumanBodyBone, put=setStaticF_FullBodyBoneIdToHumanBodyBone)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId,::UnityEngine::HumanBodyBones>*  FullBodyBoneIdToHumanBodyBone;

/// @brief Field FullBoneIdToJointPair, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FullBoneIdToJointPair, put=setStaticF_FullBoneIdToJointPair)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId,::System::Tuple_2<::GlobalNamespace::OVRSkeleton_BoneId,::GlobalNamespace::OVRSkeleton_BoneId>*>*  FullBoneIdToJointPair;

 __declspec(property(get=get_GetBoneIdToHumanBodyBone)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId,::UnityEngine::HumanBodyBones>*  GetBoneIdToHumanBodyBone;

 __declspec(property(get=get_GetBoneIdToJointPair)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId,::System::Tuple_2<::GlobalNamespace::OVRSkeleton_BoneId,::GlobalNamespace::OVRSkeleton_BoneId>*>*  GetBoneIdToJointPair;

 __declspec(property(get=get_GetBoneToBodySection)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones,::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*  GetBoneToBodySection;

 __declspec(property(get=get_GetBoneToJointPair)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones,::System::Tuple_2<::UnityEngine::HumanBodyBones,::UnityEngine::HumanBodyBones>*>*  GetBoneToJointPair;

 __declspec(property(get=get_GetFullBodyBoneIdToHumanBodyBone)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId,::UnityEngine::HumanBodyBones>*  GetFullBodyBoneIdToHumanBodyBone;

 __declspec(property(get=get_GetFullBodyBoneIdToJointPair)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId,::System::Tuple_2<::GlobalNamespace::OVRSkeleton_BoneId,::GlobalNamespace::OVRSkeleton_BoneId>*>*  GetFullBodyBoneIdToJointPair;

/// @brief Convert operator to "::GlobalNamespace::OVRHumanBodyBonesMappingsInterface"
constexpr operator  ::GlobalNamespace::OVRHumanBodyBonesMappingsInterface*() noexcept;

static inline ::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings* New_ctor() ;

/// @brief Method .ctor, addr 0xa55e6bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId,::UnityEngine::HumanBodyBones>* getStaticF_BoneIdToHumanBodyBone() ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId,::System::Tuple_2<::GlobalNamespace::OVRSkeleton_BoneId,::GlobalNamespace::OVRSkeleton_BoneId>*>* getStaticF_BoneIdToJointPair() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones,::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>* getStaticF_BoneToBodySection() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones,::System::Tuple_2<::UnityEngine::HumanBodyBones,::UnityEngine::HumanBodyBones>*>* getStaticF_BoneToJointPair() ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId,::UnityEngine::HumanBodyBones>* getStaticF_FullBodyBoneIdToHumanBodyBone() ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId,::System::Tuple_2<::GlobalNamespace::OVRSkeleton_BoneId,::GlobalNamespace::OVRSkeleton_BoneId>*>* getStaticF_FullBoneIdToJointPair() ;

/// @brief Method get_GetBoneIdToHumanBodyBone, addr 0xa5613d0, size 0x58, virtual true, abstract: false, final true
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId,::UnityEngine::HumanBodyBones>* get_GetBoneIdToHumanBodyBone() ;

/// @brief Method get_GetBoneIdToJointPair, addr 0xa561480, size 0x58, virtual true, abstract: false, final true
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId,::System::Tuple_2<::GlobalNamespace::OVRSkeleton_BoneId,::GlobalNamespace::OVRSkeleton_BoneId>*>* get_GetBoneIdToJointPair() ;

/// @brief Method get_GetBoneToBodySection, addr 0xa561320, size 0x58, virtual true, abstract: false, final true
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones,::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>* get_GetBoneToBodySection() ;

/// @brief Method get_GetBoneToJointPair, addr 0xa5612c8, size 0x58, virtual true, abstract: false, final true
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones,::System::Tuple_2<::UnityEngine::HumanBodyBones,::UnityEngine::HumanBodyBones>*>* get_GetBoneToJointPair() ;

/// @brief Method get_GetFullBodyBoneIdToHumanBodyBone, addr 0xa561378, size 0x58, virtual true, abstract: false, final true
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId,::UnityEngine::HumanBodyBones>* get_GetFullBodyBoneIdToHumanBodyBone() ;

/// @brief Method get_GetFullBodyBoneIdToJointPair, addr 0xa561428, size 0x58, virtual true, abstract: false, final true
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId,::System::Tuple_2<::GlobalNamespace::OVRSkeleton_BoneId,::GlobalNamespace::OVRSkeleton_BoneId>*>* get_GetFullBodyBoneIdToJointPair() ;

/// @brief Convert to "::GlobalNamespace::OVRHumanBodyBonesMappingsInterface"
constexpr ::GlobalNamespace::OVRHumanBodyBonesMappingsInterface* i___GlobalNamespace__OVRHumanBodyBonesMappingsInterface() noexcept;

static inline void setStaticF_BoneIdToHumanBodyBone(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId,::UnityEngine::HumanBodyBones>*  value) ;

static inline void setStaticF_BoneIdToJointPair(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId,::System::Tuple_2<::GlobalNamespace::OVRSkeleton_BoneId,::GlobalNamespace::OVRSkeleton_BoneId>*>*  value) ;

static inline void setStaticF_BoneToBodySection(::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones,::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_BodySection>*  value) ;

static inline void setStaticF_BoneToJointPair(::System::Collections::Generic::Dictionary_2<::UnityEngine::HumanBodyBones,::System::Tuple_2<::UnityEngine::HumanBodyBones,::UnityEngine::HumanBodyBones>*>*  value) ;

static inline void setStaticF_FullBodyBoneIdToHumanBodyBone(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId,::UnityEngine::HumanBodyBones>*  value) ;

static inline void setStaticF_FullBoneIdToJointPair(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRSkeleton_BoneId,::System::Tuple_2<::GlobalNamespace::OVRSkeleton_BoneId,::GlobalNamespace::OVRSkeleton_BoneId>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings(OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings(OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11800};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
