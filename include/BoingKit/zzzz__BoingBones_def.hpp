#pragma once
// IWYU pragma private; include "BoingKit/BoingBones.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BoingKit/zzzz__BoingBoneCollider_def.hpp"
#include "BoingKit/zzzz__BoingBones_Chain_CurveType_def.hpp"
#include "BoingKit/zzzz__BoingReactor_def.hpp"
#include "BoingKit/zzzz__BoingWork_Params_InstanceData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BoingBones)
namespace BoingKit {
class BoingBones_Bone;
}
namespace BoingKit {
class BoingBones_Chain;
}
namespace BoingKit {
class BoingBones_RescanEntry;
}
namespace BoingKit {
class SharedBoingParams;
}
namespace BoingKit {
struct Version;
}
namespace GlobalNamespace {
struct BoingEffector_Params;
}
namespace GlobalNamespace {
struct Chain_BoingBones_CurveType;
}
namespace UnityEngine {
class AnimationCurve;
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
namespace BoingKit {
class BoingBones;
}
namespace BoingKit {
class BoingBones_Bone;
}
namespace BoingKit {
class BoingBones_Chain;
}
namespace BoingKit {
class BoingBones_RescanEntry;
}
// Write type traits
MARK_REF_T(::BoingKit::BoingBones*);
MARK_REF_T(::BoingKit::BoingBones_Bone*);
MARK_REF_T(::BoingKit::BoingBones_Chain*);
MARK_REF_T(::BoingKit::BoingBones_RescanEntry*);
DEFINE_IL2CPP_CLASS(::BoingKit::BoingBones*, "BoingKit", "BoingBones");
DEFINE_IL2CPP_CLASS(::BoingKit::BoingBones_Bone*, "BoingKit", "BoingBones/Bone");
DEFINE_IL2CPP_CLASS(::BoingKit::BoingBones_Chain*, "BoingKit", "BoingBones/Chain");
DEFINE_IL2CPP_CLASS(::BoingKit::BoingBones_RescanEntry*, "BoingKit", "BoingBones/RescanEntry");
// Dependencies BoingKit.BoingBoneCollider, BoingKit.BoingBones::Bone, BoingKit.BoingBones::Chain, BoingKit.BoingReactor, UnityEngine.Collider
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.BoingBones
class CORDL_TYPE BoingBones : public ::BoingKit::BoingReactor {
public:
// Declarations
using Bone = ::BoingKit::BoingBones_Bone;

using Chain = ::BoingKit::BoingBones_Chain;

using RescanEntry = ::BoingKit::BoingBones_RescanEntry;

/// @brief Field BoingColliders, offset 0x250, size 0x8 
 __declspec(property(get=__cordl_internal_get_BoingColliders, put=__cordl_internal_set_BoingColliders)) ::ArrayW<::UnityW<::BoingKit::BoingBoneCollider>>  BoingColliders;

/// @brief Field BoneChains, offset 0x240, size 0x8 
 __declspec(property(get=__cordl_internal_get_BoneChains, put=__cordl_internal_set_BoneChains)) ::ArrayW<::BoingKit::BoingBones_Chain*>  BoneChains;

/// @brief Field BoneData, offset 0x238, size 0x8 
 __declspec(property(get=__cordl_internal_get_BoneData, put=__cordl_internal_set_BoneData)) ::ArrayW<::ArrayW<::BoingKit::BoingBones_Bone*>>  BoneData;

/// @brief Field DebugDrawBoingBones, offset 0x262, size 0x1 
 __declspec(property(get=__cordl_internal_get_DebugDrawBoingBones, put=__cordl_internal_set_DebugDrawBoingBones)) bool  DebugDrawBoingBones;

/// @brief Field DebugDrawBoneNames, offset 0x266, size 0x1 
 __declspec(property(get=__cordl_internal_get_DebugDrawBoneNames, put=__cordl_internal_set_DebugDrawBoneNames)) bool  DebugDrawBoneNames;

/// @brief Field DebugDrawChainBounds, offset 0x265, size 0x1 
 __declspec(property(get=__cordl_internal_get_DebugDrawChainBounds, put=__cordl_internal_set_DebugDrawChainBounds)) bool  DebugDrawChainBounds;

/// @brief Field DebugDrawColliders, offset 0x264, size 0x1 
 __declspec(property(get=__cordl_internal_get_DebugDrawColliders, put=__cordl_internal_set_DebugDrawColliders)) bool  DebugDrawColliders;

/// @brief Field DebugDrawFinalBones, offset 0x263, size 0x1 
 __declspec(property(get=__cordl_internal_get_DebugDrawFinalBones, put=__cordl_internal_set_DebugDrawFinalBones)) bool  DebugDrawFinalBones;

/// @brief Field DebugDrawLengthFromRoot, offset 0x267, size 0x1 
 __declspec(property(get=__cordl_internal_get_DebugDrawLengthFromRoot, put=__cordl_internal_set_DebugDrawLengthFromRoot)) bool  DebugDrawLengthFromRoot;

/// @brief Field DebugDrawRawBones, offset 0x260, size 0x1 
 __declspec(property(get=__cordl_internal_get_DebugDrawRawBones, put=__cordl_internal_set_DebugDrawRawBones)) bool  DebugDrawRawBones;

/// @brief Field DebugDrawTargetBones, offset 0x261, size 0x1 
 __declspec(property(get=__cordl_internal_get_DebugDrawTargetBones, put=__cordl_internal_set_DebugDrawTargetBones)) bool  DebugDrawTargetBones;

/// @brief Field MaxCollisionResolutionSpeed, offset 0x24c, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxCollisionResolutionSpeed, put=__cordl_internal_set_MaxCollisionResolutionSpeed)) float_t  MaxCollisionResolutionSpeed;

 __declspec(property(get=get_MinScale)) float_t  MinScale;

/// @brief Field TwistPropagation, offset 0x248, size 0x1 
 __declspec(property(get=__cordl_internal_get_TwistPropagation, put=__cordl_internal_set_TwistPropagation)) bool  TwistPropagation;

/// @brief Field UnityColliders, offset 0x258, size 0x8 
 __declspec(property(get=__cordl_internal_get_UnityColliders, put=__cordl_internal_set_UnityColliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  UnityColliders;

/// @brief Field m_minScale, offset 0x268, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_minScale, put=__cordl_internal_set_m_minScale)) float_t  m_minScale;

/// @brief Method AccumulateTarget, addr 0x5e155e4, size 0x1d4, virtual false, abstract: false, final false
inline void AccumulateTarget(::by_ref<::GlobalNamespace::BoingEffector_Params>  effector, float_t  dt) ;

/// @brief Method EndAccumulateTargets, addr 0x5e157b8, size 0x17c, virtual false, abstract: false, final false
inline void EndAccumulateTargets() ;

static inline ::BoingKit::BoingBones* New_ctor() ;

/// @brief Method OnDisable, addr 0x5e14390, size 0x28, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5e14358, size 0x38, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnUpgrade, addr 0x5e136e8, size 0x88, virtual true, abstract: false, final false
inline void OnUpgrade(::BoingKit::Version  oldVersion, ::BoingKit::Version  newVersion) ;

/// @brief Method OnValidate, addr 0x5e13770, size 0x18, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method PrepareExecute, addr 0x5e14998, size 0xc44, virtual true, abstract: false, final false
inline void PrepareExecute() ;

/// @brief Method Reboot, addr 0x5e14848, size 0x50, virtual true, abstract: false, final false
inline void Reboot() ;

/// @brief Method Reboot, addr 0x5e14670, size 0x1d8, virtual false, abstract: false, final false
inline void Reboot(int32_t  iChain) ;

/// @brief Method Register, addr 0x5e13474, size 0x54, virtual true, abstract: false, final false
inline void Register() ;

/// @brief Method RescanBoneChains, addr 0x5e13788, size 0xa78, virtual false, abstract: false, final false
inline void RescanBoneChains() ;

/// @brief Method Restore, addr 0x5e15934, size 0x11c, virtual true, abstract: false, final false
inline void Restore() ;

/// @brief Method Unregister, addr 0x5e135b0, size 0x54, virtual true, abstract: false, final false
inline void Unregister() ;

/// @brief Method UpdateCollisionRadius, addr 0x5e14200, size 0x158, virtual false, abstract: false, final false
inline void UpdateCollisionRadius() ;

constexpr ::ArrayW<::UnityW<::BoingKit::BoingBoneCollider>> const& __cordl_internal_get_BoingColliders() const;

constexpr ::ArrayW<::UnityW<::BoingKit::BoingBoneCollider>>& __cordl_internal_get_BoingColliders() ;

constexpr ::ArrayW<::BoingKit::BoingBones_Chain*> const& __cordl_internal_get_BoneChains() const;

constexpr ::ArrayW<::BoingKit::BoingBones_Chain*>& __cordl_internal_get_BoneChains() ;

constexpr ::ArrayW<::ArrayW<::BoingKit::BoingBones_Bone*>> const& __cordl_internal_get_BoneData() const;

constexpr ::ArrayW<::ArrayW<::BoingKit::BoingBones_Bone*>>& __cordl_internal_get_BoneData() ;

constexpr bool const& __cordl_internal_get_DebugDrawBoingBones() const;

constexpr bool& __cordl_internal_get_DebugDrawBoingBones() ;

constexpr bool const& __cordl_internal_get_DebugDrawBoneNames() const;

constexpr bool& __cordl_internal_get_DebugDrawBoneNames() ;

constexpr bool const& __cordl_internal_get_DebugDrawChainBounds() const;

constexpr bool& __cordl_internal_get_DebugDrawChainBounds() ;

constexpr bool const& __cordl_internal_get_DebugDrawColliders() const;

constexpr bool& __cordl_internal_get_DebugDrawColliders() ;

constexpr bool const& __cordl_internal_get_DebugDrawFinalBones() const;

constexpr bool& __cordl_internal_get_DebugDrawFinalBones() ;

constexpr bool const& __cordl_internal_get_DebugDrawLengthFromRoot() const;

constexpr bool& __cordl_internal_get_DebugDrawLengthFromRoot() ;

constexpr bool const& __cordl_internal_get_DebugDrawRawBones() const;

constexpr bool& __cordl_internal_get_DebugDrawRawBones() ;

constexpr bool const& __cordl_internal_get_DebugDrawTargetBones() const;

constexpr bool& __cordl_internal_get_DebugDrawTargetBones() ;

constexpr float_t const& __cordl_internal_get_MaxCollisionResolutionSpeed() const;

constexpr float_t& __cordl_internal_get_MaxCollisionResolutionSpeed() ;

constexpr bool const& __cordl_internal_get_TwistPropagation() const;

constexpr bool& __cordl_internal_get_TwistPropagation() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_UnityColliders() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_UnityColliders() ;

constexpr float_t const& __cordl_internal_get_m_minScale() const;

constexpr float_t& __cordl_internal_get_m_minScale() ;

constexpr void __cordl_internal_set_BoingColliders(::ArrayW<::UnityW<::BoingKit::BoingBoneCollider>>  value) ;

constexpr void __cordl_internal_set_BoneChains(::ArrayW<::BoingKit::BoingBones_Chain*>  value) ;

constexpr void __cordl_internal_set_BoneData(::ArrayW<::ArrayW<::BoingKit::BoingBones_Bone*>>  value) ;

constexpr void __cordl_internal_set_DebugDrawBoingBones(bool  value) ;

constexpr void __cordl_internal_set_DebugDrawBoneNames(bool  value) ;

constexpr void __cordl_internal_set_DebugDrawChainBounds(bool  value) ;

constexpr void __cordl_internal_set_DebugDrawColliders(bool  value) ;

constexpr void __cordl_internal_set_DebugDrawFinalBones(bool  value) ;

constexpr void __cordl_internal_set_DebugDrawLengthFromRoot(bool  value) ;

constexpr void __cordl_internal_set_DebugDrawRawBones(bool  value) ;

constexpr void __cordl_internal_set_DebugDrawTargetBones(bool  value) ;

constexpr void __cordl_internal_set_MaxCollisionResolutionSpeed(float_t  value) ;

constexpr void __cordl_internal_set_TwistPropagation(bool  value) ;

constexpr void __cordl_internal_set_UnityColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_m_minScale(float_t  value) ;

/// @brief Method .ctor, addr 0x5e15a50, size 0xe0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_MinScale, addr 0x5e14990, size 0x8, virtual false, abstract: false, final false
inline float_t get_MinScale() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoingBones() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoingBones", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoingBones(BoingBones && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoingBones", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoingBones(BoingBones const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5170};

/// [SerializeField]
/// @brief Field BoneData, offset: 0x238, size: 0x8, def value: None
 ::ArrayW<::ArrayW<::BoingKit::BoingBones_Bone*>>  ___BoneData;

/// @brief Field BoneChains, offset: 0x240, size: 0x8, def value: None
 ::ArrayW<::BoingKit::BoingBones_Chain*>  ___BoneChains;

/// @brief Field TwistPropagation, offset: 0x248, size: 0x1, def value: None
 bool  ___TwistPropagation;

/// [Range(0.1, 20)]
/// @brief Field MaxCollisionResolutionSpeed, offset: 0x24c, size: 0x4, def value: None
 float_t  ___MaxCollisionResolutionSpeed;

/// @brief Field BoingColliders, offset: 0x250, size: 0x8, def value: None
 ::ArrayW<::UnityW<::BoingKit::BoingBoneCollider>>  ___BoingColliders;

/// @brief Field UnityColliders, offset: 0x258, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___UnityColliders;

/// @brief Field DebugDrawRawBones, offset: 0x260, size: 0x1, def value: None
 bool  ___DebugDrawRawBones;

/// @brief Field DebugDrawTargetBones, offset: 0x261, size: 0x1, def value: None
 bool  ___DebugDrawTargetBones;

/// @brief Field DebugDrawBoingBones, offset: 0x262, size: 0x1, def value: None
 bool  ___DebugDrawBoingBones;

/// @brief Field DebugDrawFinalBones, offset: 0x263, size: 0x1, def value: None
 bool  ___DebugDrawFinalBones;

/// @brief Field DebugDrawColliders, offset: 0x264, size: 0x1, def value: None
 bool  ___DebugDrawColliders;

/// @brief Field DebugDrawChainBounds, offset: 0x265, size: 0x1, def value: None
 bool  ___DebugDrawChainBounds;

/// @brief Field DebugDrawBoneNames, offset: 0x266, size: 0x1, def value: None
 bool  ___DebugDrawBoneNames;

/// @brief Field DebugDrawLengthFromRoot, offset: 0x267, size: 0x1, def value: None
 bool  ___DebugDrawLengthFromRoot;

/// @brief Field m_minScale, offset: 0x268, size: 0x4, def value: None
 float_t  ___m_minScale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BoingKit::BoingBones, ___BoneData) == 0x238, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones, ___BoneChains) == 0x240, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones, ___TwistPropagation) == 0x248, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones, ___MaxCollisionResolutionSpeed) == 0x24c, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones, ___BoingColliders) == 0x250, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones, ___UnityColliders) == 0x258, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones, ___DebugDrawRawBones) == 0x260, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones, ___DebugDrawTargetBones) == 0x261, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones, ___DebugDrawBoingBones) == 0x262, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones, ___DebugDrawFinalBones) == 0x263, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones, ___DebugDrawColliders) == 0x264, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones, ___DebugDrawChainBounds) == 0x265, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones, ___DebugDrawBoneNames) == 0x266, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones, ___DebugDrawLengthFromRoot) == 0x267, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones, ___m_minScale) == 0x268, "Offset mismatch!");

static_assert(sizeof(::BoingKit::BoingBones) == 0x270, "Size mismatch!");

} // namespace end def BoingKit
// Dependencies System.Object
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.BoingBones/RescanEntry
class CORDL_TYPE BoingBones_RescanEntry : public ::System::Object {
public:
// Declarations
/// @brief Field LengthFromRoot, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_LengthFromRoot, put=__cordl_internal_set_LengthFromRoot)) float_t  LengthFromRoot;

/// @brief Field ParentIndex, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_ParentIndex, put=__cordl_internal_set_ParentIndex)) int32_t  ParentIndex;

/// @brief Field Transform, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Transform, put=__cordl_internal_set_Transform)) ::UnityW<::UnityEngine::Transform>  Transform;

static inline ::BoingKit::BoingBones_RescanEntry* New_ctor(::UnityEngine::Transform*  transform, int32_t  iParent, float_t  lengthFromRoot) ;

constexpr float_t const& __cordl_internal_get_LengthFromRoot() const;

constexpr float_t& __cordl_internal_get_LengthFromRoot() ;

constexpr int32_t const& __cordl_internal_get_ParentIndex() const;

constexpr int32_t& __cordl_internal_get_ParentIndex() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_Transform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_Transform() ;

constexpr void __cordl_internal_set_LengthFromRoot(float_t  value) ;

constexpr void __cordl_internal_set_ParentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_Transform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5e143b8, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Transform*  transform, int32_t  iParent, float_t  lengthFromRoot) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoingBones_RescanEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoingBones_RescanEntry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoingBones_RescanEntry(BoingBones_RescanEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoingBones_RescanEntry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoingBones_RescanEntry(BoingBones_RescanEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5169};

/// @brief Field Transform, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___Transform;

/// @brief Field ParentIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  ___ParentIndex;

/// @brief Field LengthFromRoot, offset: 0x1c, size: 0x4, def value: None
 float_t  ___LengthFromRoot;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BoingKit::BoingBones_RescanEntry, ___Transform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_RescanEntry, ___ParentIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_RescanEntry, ___LengthFromRoot) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::BoingKit::BoingBones_RescanEntry) == 0x20, "Size mismatch!");

} // namespace end def BoingKit
// Dependencies BoingKit.BoingBones::Chain::CurveType, System.Object, UnityEngine.Bounds, UnityEngine.Transform, UnityEngine.Vector3
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.BoingBones/Chain
class CORDL_TYPE BoingBones_Chain : public ::System::Object {
public:
// Declarations
using CurveType = ::GlobalNamespace::Chain_BoingBones_CurveType;

/// @brief Field AnimationBlendCurveType, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_AnimationBlendCurveType, put=__cordl_internal_set_AnimationBlendCurveType)) ::GlobalNamespace::Chain_BoingBones_CurveType  AnimationBlendCurveType;

/// @brief Field AnimationBlendCustomCurve, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_AnimationBlendCustomCurve, put=__cordl_internal_set_AnimationBlendCustomCurve)) ::UnityEngine::AnimationCurve*  AnimationBlendCustomCurve;

/// @brief Field BendAngleCapCurveType, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_BendAngleCapCurveType, put=__cordl_internal_set_BendAngleCapCurveType)) ::GlobalNamespace::Chain_BoingBones_CurveType  BendAngleCapCurveType;

/// @brief Field BendAngleCapCustomCurve, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_BendAngleCapCustomCurve, put=__cordl_internal_set_BendAngleCapCustomCurve)) ::UnityEngine::AnimationCurve*  BendAngleCapCustomCurve;

/// @brief Field Bounds, offset 0x90, size 0x18 
 __declspec(property(get=__cordl_internal_get_Bounds, put=__cordl_internal_set_Bounds)) ::UnityEngine::Bounds  Bounds;

/// @brief Field CollisionRadiusCurveType, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_CollisionRadiusCurveType, put=__cordl_internal_set_CollisionRadiusCurveType)) ::GlobalNamespace::Chain_BoingBones_CurveType  CollisionRadiusCurveType;

/// @brief Field CollisionRadiusCustomCurve, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_CollisionRadiusCustomCurve, put=__cordl_internal_set_CollisionRadiusCustomCurve)) ::UnityEngine::AnimationCurve*  CollisionRadiusCustomCurve;

/// @brief Field EffectorReaction, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_EffectorReaction, put=__cordl_internal_set_EffectorReaction)) bool  EffectorReaction;

/// @brief Field EnableBoingKitCollision, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_EnableBoingKitCollision, put=__cordl_internal_set_EnableBoingKitCollision)) bool  EnableBoingKitCollision;

/// @brief Field EnableInterChainCollision, offset 0x82, size 0x1 
 __declspec(property(get=__cordl_internal_get_EnableInterChainCollision, put=__cordl_internal_set_EnableInterChainCollision)) bool  EnableInterChainCollision;

/// @brief Field EnableUnityCollision, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get_EnableUnityCollision, put=__cordl_internal_set_EnableUnityCollision)) bool  EnableUnityCollision;

/// @brief Field Exclusion, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Exclusion, put=__cordl_internal_set_Exclusion)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  Exclusion;

/// @brief Field Gravity, offset 0x84, size 0xc 
 __declspec(property(get=__cordl_internal_get_Gravity, put=__cordl_internal_set_Gravity)) ::UnityEngine::Vector3  Gravity;

/// @brief Field LengthStiffnessCurveType, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_LengthStiffnessCurveType, put=__cordl_internal_set_LengthStiffnessCurveType)) ::GlobalNamespace::Chain_BoingBones_CurveType  LengthStiffnessCurveType;

/// @brief Field LengthStiffnessCustomCurve, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_LengthStiffnessCustomCurve, put=__cordl_internal_set_LengthStiffnessCustomCurve)) ::UnityEngine::AnimationCurve*  LengthStiffnessCustomCurve;

/// @brief Field LooseRoot, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_LooseRoot, put=__cordl_internal_set_LooseRoot)) bool  LooseRoot;

/// @brief Field MaxBendAngleCap, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxBendAngleCap, put=__cordl_internal_set_MaxBendAngleCap)) float_t  MaxBendAngleCap;

/// @brief Field MaxCollisionRadius, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxCollisionRadius, put=__cordl_internal_set_MaxCollisionRadius)) float_t  MaxCollisionRadius;

/// @brief Field MaxLengthFromRoot, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxLengthFromRoot, put=__cordl_internal_set_MaxLengthFromRoot)) float_t  MaxLengthFromRoot;

/// @brief Field MaxSquash, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxSquash, put=__cordl_internal_set_MaxSquash)) float_t  MaxSquash;

/// @brief Field MaxStretch, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxStretch, put=__cordl_internal_set_MaxStretch)) float_t  MaxStretch;

/// @brief Field ParamsOverride, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ParamsOverride, put=__cordl_internal_set_ParamsOverride)) ::UnityW<::BoingKit::SharedBoingParams>  ParamsOverride;

/// @brief Field PoseStiffnessCurveType, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_PoseStiffnessCurveType, put=__cordl_internal_set_PoseStiffnessCurveType)) ::GlobalNamespace::Chain_BoingBones_CurveType  PoseStiffnessCurveType;

/// @brief Field PoseStiffnessCustomCurve, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_PoseStiffnessCustomCurve, put=__cordl_internal_set_PoseStiffnessCustomCurve)) ::UnityEngine::AnimationCurve*  PoseStiffnessCustomCurve;

/// @brief Field Root, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Root, put=__cordl_internal_set_Root)) ::UnityW<::UnityEngine::Transform>  Root;

/// @brief Field SquashAndStretchCurveType, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_SquashAndStretchCurveType, put=__cordl_internal_set_SquashAndStretchCurveType)) ::GlobalNamespace::Chain_BoingBones_CurveType  SquashAndStretchCurveType;

/// @brief Field SquashAndStretchCustomCurve, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_SquashAndStretchCustomCurve, put=__cordl_internal_set_SquashAndStretchCustomCurve)) ::UnityEngine::AnimationCurve*  SquashAndStretchCustomCurve;

/// @brief Field m_hierarchyHash, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_hierarchyHash, put=__cordl_internal_set_m_hierarchyHash)) int32_t  m_hierarchyHash;

/// @brief Field m_scannedExclusion, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_scannedExclusion, put=__cordl_internal_set_m_scannedExclusion)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  m_scannedExclusion;

/// @brief Field m_scannedRoot, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_scannedRoot, put=__cordl_internal_set_m_scannedRoot)) ::UnityW<::UnityEngine::Transform>  m_scannedRoot;

/// @brief Method EvaluateCurve, addr 0x5e1457c, size 0xf4, virtual false, abstract: false, final false
static inline float_t EvaluateCurve(::GlobalNamespace::Chain_BoingBones_CurveType  type, float_t  t, ::UnityEngine::AnimationCurve*  curve) ;

static inline ::BoingKit::BoingBones_Chain* New_ctor() ;

constexpr ::GlobalNamespace::Chain_BoingBones_CurveType const& __cordl_internal_get_AnimationBlendCurveType() const;

constexpr ::GlobalNamespace::Chain_BoingBones_CurveType& __cordl_internal_get_AnimationBlendCurveType() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_AnimationBlendCustomCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_AnimationBlendCustomCurve() ;

constexpr ::GlobalNamespace::Chain_BoingBones_CurveType const& __cordl_internal_get_BendAngleCapCurveType() const;

constexpr ::GlobalNamespace::Chain_BoingBones_CurveType& __cordl_internal_get_BendAngleCapCurveType() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_BendAngleCapCustomCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_BendAngleCapCustomCurve() ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get_Bounds() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get_Bounds() ;

constexpr ::GlobalNamespace::Chain_BoingBones_CurveType const& __cordl_internal_get_CollisionRadiusCurveType() const;

constexpr ::GlobalNamespace::Chain_BoingBones_CurveType& __cordl_internal_get_CollisionRadiusCurveType() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_CollisionRadiusCustomCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_CollisionRadiusCustomCurve() ;

constexpr bool const& __cordl_internal_get_EffectorReaction() const;

constexpr bool& __cordl_internal_get_EffectorReaction() ;

constexpr bool const& __cordl_internal_get_EnableBoingKitCollision() const;

constexpr bool& __cordl_internal_get_EnableBoingKitCollision() ;

constexpr bool const& __cordl_internal_get_EnableInterChainCollision() const;

constexpr bool& __cordl_internal_get_EnableInterChainCollision() ;

constexpr bool const& __cordl_internal_get_EnableUnityCollision() const;

constexpr bool& __cordl_internal_get_EnableUnityCollision() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_Exclusion() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_Exclusion() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Gravity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_Gravity() ;

constexpr ::GlobalNamespace::Chain_BoingBones_CurveType const& __cordl_internal_get_LengthStiffnessCurveType() const;

constexpr ::GlobalNamespace::Chain_BoingBones_CurveType& __cordl_internal_get_LengthStiffnessCurveType() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_LengthStiffnessCustomCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_LengthStiffnessCustomCurve() ;

constexpr bool const& __cordl_internal_get_LooseRoot() const;

constexpr bool& __cordl_internal_get_LooseRoot() ;

constexpr float_t const& __cordl_internal_get_MaxBendAngleCap() const;

constexpr float_t& __cordl_internal_get_MaxBendAngleCap() ;

constexpr float_t const& __cordl_internal_get_MaxCollisionRadius() const;

constexpr float_t& __cordl_internal_get_MaxCollisionRadius() ;

constexpr float_t const& __cordl_internal_get_MaxLengthFromRoot() const;

constexpr float_t& __cordl_internal_get_MaxLengthFromRoot() ;

constexpr float_t const& __cordl_internal_get_MaxSquash() const;

constexpr float_t& __cordl_internal_get_MaxSquash() ;

constexpr float_t const& __cordl_internal_get_MaxStretch() const;

constexpr float_t& __cordl_internal_get_MaxStretch() ;

constexpr ::UnityW<::BoingKit::SharedBoingParams> const& __cordl_internal_get_ParamsOverride() const;

constexpr ::UnityW<::BoingKit::SharedBoingParams>& __cordl_internal_get_ParamsOverride() ;

constexpr ::GlobalNamespace::Chain_BoingBones_CurveType const& __cordl_internal_get_PoseStiffnessCurveType() const;

constexpr ::GlobalNamespace::Chain_BoingBones_CurveType& __cordl_internal_get_PoseStiffnessCurveType() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_PoseStiffnessCustomCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_PoseStiffnessCustomCurve() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_Root() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_Root() ;

constexpr ::GlobalNamespace::Chain_BoingBones_CurveType const& __cordl_internal_get_SquashAndStretchCurveType() const;

constexpr ::GlobalNamespace::Chain_BoingBones_CurveType& __cordl_internal_get_SquashAndStretchCurveType() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_SquashAndStretchCustomCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_SquashAndStretchCustomCurve() ;

constexpr int32_t const& __cordl_internal_get_m_hierarchyHash() const;

constexpr int32_t& __cordl_internal_get_m_hierarchyHash() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_m_scannedExclusion() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_m_scannedExclusion() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_scannedRoot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_scannedRoot() ;

constexpr void __cordl_internal_set_AnimationBlendCurveType(::GlobalNamespace::Chain_BoingBones_CurveType  value) ;

constexpr void __cordl_internal_set_AnimationBlendCustomCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_BendAngleCapCurveType(::GlobalNamespace::Chain_BoingBones_CurveType  value) ;

constexpr void __cordl_internal_set_BendAngleCapCustomCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_Bounds(::UnityEngine::Bounds  value) ;

constexpr void __cordl_internal_set_CollisionRadiusCurveType(::GlobalNamespace::Chain_BoingBones_CurveType  value) ;

constexpr void __cordl_internal_set_CollisionRadiusCustomCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_EffectorReaction(bool  value) ;

constexpr void __cordl_internal_set_EnableBoingKitCollision(bool  value) ;

constexpr void __cordl_internal_set_EnableInterChainCollision(bool  value) ;

constexpr void __cordl_internal_set_EnableUnityCollision(bool  value) ;

constexpr void __cordl_internal_set_Exclusion(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_Gravity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_LengthStiffnessCurveType(::GlobalNamespace::Chain_BoingBones_CurveType  value) ;

constexpr void __cordl_internal_set_LengthStiffnessCustomCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_LooseRoot(bool  value) ;

constexpr void __cordl_internal_set_MaxBendAngleCap(float_t  value) ;

constexpr void __cordl_internal_set_MaxCollisionRadius(float_t  value) ;

constexpr void __cordl_internal_set_MaxLengthFromRoot(float_t  value) ;

constexpr void __cordl_internal_set_MaxSquash(float_t  value) ;

constexpr void __cordl_internal_set_MaxStretch(float_t  value) ;

constexpr void __cordl_internal_set_ParamsOverride(::UnityW<::BoingKit::SharedBoingParams>  value) ;

constexpr void __cordl_internal_set_PoseStiffnessCurveType(::GlobalNamespace::Chain_BoingBones_CurveType  value) ;

constexpr void __cordl_internal_set_PoseStiffnessCustomCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_Root(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_SquashAndStretchCurveType(::GlobalNamespace::Chain_BoingBones_CurveType  value) ;

constexpr void __cordl_internal_set_SquashAndStretchCustomCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_m_hierarchyHash(int32_t  value) ;

constexpr void __cordl_internal_set_m_scannedExclusion(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_m_scannedRoot(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5e15c20, size 0x18c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoingBones_Chain() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoingBones_Chain", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoingBones_Chain(BoingBones_Chain && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoingBones_Chain", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoingBones_Chain(BoingBones_Chain const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5168};

/// [Tooltip("Root Transform object from which to build a chain (or tree if a bone has multiple children) of bouncy boing bones.")]
/// @brief Field Root, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___Root;

/// [Tooltip("List of Transform objects to exclude from chain building.")]
/// @brief Field Exclusion, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___Exclusion;

/// [Tooltip("Enable to allow reaction to boing effectors.")]
/// @brief Field EffectorReaction, offset: 0x20, size: 0x1, def value: None
 bool  ___EffectorReaction;

/// [Tooltip("Enable to allow root Transform object to be sprung around as well. Otherwise, no effects will be applied to the root Transform object.")]
/// @brief Field LooseRoot, offset: 0x21, size: 0x1, def value: None
 bool  ___LooseRoot;

/// [Tooltip("Assign a SharedParamsOverride asset to override the parameters for this chain. Useful for chains using different parameters than that of the BoingBones component.")]
/// @brief Field ParamsOverride, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::BoingKit::SharedBoingParams>  ___ParamsOverride;

/// [ConditionalField(null, null, null, null, null, null, null, Label = "Animation Blend", Tooltip = "Animation blend determines each bone\'s final transform between the original raw transform and its corresponding boing bone. 1.0 means 100% contribution from raw (or animated) transform. 0.0 means 100% contribution from boing bone.\n\nEach curve type provides a type of mapping for each bone\'s percentage down the chain (0.0 at root & 1.0 at maximum chain length) to the bone\'s animation blend:\n\n - Constant One: 1.0 all the way.\n - Constant Half: 0.5 all the way.\n - Constant Zero: 0.0 all the way.\n - Root One Tail Half: 1.0 at 0% chain length and 0.5 at 100% chain length.\n - Root One Tail Zero: 1.0 at 0% chain length and 0.0 at 100% chain length.\n - Root Half Tail One: 0.5 at 0% chain length and 1.0 at 100% chain length.\n - Root Zero Tail One: 0.0 at 0% chain length and 1.0 at 100% chain length.\n - Custom: Custom curve.")]
/// @brief Field AnimationBlendCurveType, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::Chain_BoingBones_CurveType  ___AnimationBlendCurveType;

/// [ConditionalField("AnimationBlendCurveType", (BoingKit.BoingBones::Chain::CurveType)7, null, null, null, null, null, Label = "  Custom Curve")]
/// @brief Field AnimationBlendCustomCurve, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___AnimationBlendCustomCurve;

/// [ConditionalField(null, null, null, null, null, null, null, Label = "Length Stiffness", Tooltip = "Length stiffness determines how much each target bone (target transform each boing bone is sprung towards) tries to maintain original distance from its parent. 1.0 means 100% distance maintenance. 0.0 means 0% distance maintenance.\n\nEach curve type provides a type of mapping for each bone\'s percentage down the chain (0.0 at root & 1.0 at maximum chain length) to the bone\'s length stiffness:\n\n - Constant One: 1.0 all the way.\n - Constant Half: 0.5 all the way.\n - Constant Zero: 0.0 all the way.\n - Root One Tail Half: 1.0 at 0% chain length and 0.5 at 100% chain length.\n - Root One Tail Zero: 1.0 at 0% chain length and 0.0 at 100% chain length.\n - Root Half Tail One: 0.5 at 0% chain length and 1.0 at 100% chain length.\n - Root Zero Tail One: 0.0 at 0% chain length and 1.0 at 100% chain length.\n - Custom: Custom curve.")]
/// @brief Field LengthStiffnessCurveType, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::Chain_BoingBones_CurveType  ___LengthStiffnessCurveType;

/// [ConditionalField("LengthStiffnessCurveType", (BoingKit.BoingBones::Chain::CurveType)7, null, null, null, null, null, Label = "  Custom Curve")]
/// @brief Field LengthStiffnessCustomCurve, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___LengthStiffnessCustomCurve;

/// [ConditionalField(null, null, null, null, null, null, null, Label = "Pose Stiffness", Tooltip = "Pose stiffness determines how much each target bone (target transform each boing bone is sprung towards) tries to maintain original transform. 1.0 means 100% original transform maintenance. 0.0 means 0% original transform maintenance.\n\nEach curve type provides a type of mapping for each bone\'s percentage down the chain (0.0 at root & 1.0 at maximum chain length) to the bone\'s pose stiffness:\n\n - Constant One: 1.0 all the way.\n - Constant Half: 0.5 all the way.\n - Constant Zero: 0.0 all the way.\n - Root One Tail Half: 1.0 at 0% chain length and 0.5 at 100% chain length.\n - Root One Tail Zero: 1.0 at 0% chain length and 0.0 at 100% chain length.\n - Root Half Tail One: 0.5 at 0% chain length and 1.0 at 100% chain length.\n - Root Zero Tail One: 0.0 at 0% chain length and 1.0 at 100% chain length.\n - Custom: Custom curve.")]
/// @brief Field PoseStiffnessCurveType, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::Chain_BoingBones_CurveType  ___PoseStiffnessCurveType;

/// [ConditionalField("PoseStiffnessCurveType", (BoingKit.BoingBones::Chain::CurveType)7, null, null, null, null, null, Label = "  Custom Curve")]
/// @brief Field PoseStiffnessCustomCurve, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___PoseStiffnessCustomCurve;

/// [ConditionalField(null, null, null, null, null, null, null, Label = "Bend Angle Cap", Tooltip = "Maximum bone bend angle cap.", Min = 0, Max = 180)]
/// @brief Field MaxBendAngleCap, offset: 0x60, size: 0x4, def value: None
 float_t  ___MaxBendAngleCap;

/// [ConditionalField(null, null, null, null, null, null, null, Label = "  Curve Type", Tooltip = "Percentage(0.0 = 0 %; 1.0 = 100 %) of maximum bone bend angle cap.Bend angle cap limits how much each bone can bend relative to the root (in degrees). 1.0 means 100% maximum bend angle cap. 0.0 means 0% maximum bend angle cap.\n\nEach curve type provides a type of mapping for each bone\'s percentage down the chain (0.0 at root & 1.0 at maximum chain length) to the bone\'s pose stiffness:\n\n - Constant One: 1.0 all the way.\n - Constant Half: 0.5 all the way.\n - Constant Zero: 0.0 all the way.\n - Root One Tail Half: 1.0 at 0% chain length and 0.5 at 100% chain length.\n - Root One Tail Zero: 1.0 at 0% chain length and 0.0 at 100% chain length.\n - Root Half Tail One: 0.5 at 0% chain length and 1.0 at 100% chain length.\n - Root Zero Tail One: 0.0 at 0% chain length and 1.0 at 100% chain length.\n - Custom: Custom curve.")]
/// @brief Field BendAngleCapCurveType, offset: 0x64, size: 0x4, def value: None
 ::GlobalNamespace::Chain_BoingBones_CurveType  ___BendAngleCapCurveType;

/// [ConditionalField("BendAngleCapCurveType", (BoingKit.BoingBones::Chain::CurveType)7, null, null, null, null, null, Label = "    Custom Curve")]
/// @brief Field BendAngleCapCustomCurve, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___BendAngleCapCustomCurve;

/// [ConditionalField(null, null, null, null, null, null, null, Label = "Collision Radius", Tooltip = "Maximum bone collision radius.")]
/// @brief Field MaxCollisionRadius, offset: 0x70, size: 0x4, def value: None
 float_t  ___MaxCollisionRadius;

/// [ConditionalField(null, null, null, null, null, null, null, Label = "  Curve Type", Tooltip = "Percentage (0.0 = 0%; 1.0 = 100%) of maximum bone collision radius.\n\nEach curve type provides a type of mapping for each bone\'s percentage down the chain (0.0 at root & 1.0 at maximum chain length) to the bone\'s collision radius:\n\n - Constant One: 1.0 all the way.\n - Constant Half: 0.5 all the way.\n - Constant Zero: 0.0 all the way.\n - Root One Tail Half: 1.0 at 0% chain length and 0.5 at 100% chain length.\n - Root One Tail Zero: 1.0 at 0% chain length and 0.0 at 100% chain length.\n - Root Half Tail One: 0.5 at 0% chain length and 1.0 at 100% chain length.\n - Root Zero Tail One: 0.0 at 0% chain length and 1.0 at 100% chain length.\n - Custom: Custom curve.")]
/// @brief Field CollisionRadiusCurveType, offset: 0x74, size: 0x4, def value: None
 ::GlobalNamespace::Chain_BoingBones_CurveType  ___CollisionRadiusCurveType;

/// [ConditionalField("CollisionRadiusCurveType", (BoingKit.BoingBones::Chain::CurveType)7, null, null, null, null, null, Label = "    Custom Curve")]
/// @brief Field CollisionRadiusCustomCurve, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___CollisionRadiusCustomCurve;

/// [ConditionalField(null, null, null, null, null, null, null, Label = "Boing Kit Collision", Tooltip = "Enable to allow this chain to collide with Boing Kit\'s own implementation of lightweight colliders")]
/// @brief Field EnableBoingKitCollision, offset: 0x80, size: 0x1, def value: None
 bool  ___EnableBoingKitCollision;

/// [ConditionalField(null, null, null, null, null, null, null, Label = "Unity Collision", Tooltip = "Enable to allow this chain to collide with Unity colliders.")]
/// @brief Field EnableUnityCollision, offset: 0x81, size: 0x1, def value: None
 bool  ___EnableUnityCollision;

/// [ConditionalField(null, null, null, null, null, null, null, Label = "Inter-Chain Collision", Tooltip = "Enable to allow this chain to collide with other chain (under the same BoingBones component) with inter-chain collision enabled.")]
/// @brief Field EnableInterChainCollision, offset: 0x82, size: 0x1, def value: None
 bool  ___EnableInterChainCollision;

/// @brief Field Gravity, offset: 0x84, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___Gravity;

/// @brief Field Bounds, offset: 0x90, size: 0x18, def value: None
 ::UnityEngine::Bounds  ___Bounds;

/// [ConditionalField(null, null, null, null, null, null, null, Label = "Squash & Stretch", Tooltip = "Percentage (0.0 = 0%; 1.0 = 100%) of each bone\'s squash & stretch effect. Squash & stretch is the effect of volume preservation by scaling bones based on how compressed or stretched the distances between bones become.\n\nEach curve type provides a type of mapping for each bone\'s percentage down the chain (0.0 at root & 1.0 at maximum chain length) to the bone\'s squash & stretch effect amount:\n\n - Constant One: 1.0 all the way.\n - Constant Half: 0.5 all the way.\n - Constant Zero: 0.0 all the way.\n - Root One Tail Half: 1.0 at 0% chain length and 0.5 at 100% chain length.\n - Root One Tail Zero: 1.0 at 0% chain length and 0.0 at 100% chain length.\n - Root Half Tail One: 0.5 at 0% chain length and 1.0 at 100% chain length.\n - Root Zero Tail One: 0.0 at 0% chain length and 1.0 at 100% chain length.\n - Custom: Custom curve.")]
/// @brief Field SquashAndStretchCurveType, offset: 0xa8, size: 0x4, def value: None
 ::GlobalNamespace::Chain_BoingBones_CurveType  ___SquashAndStretchCurveType;

/// [ConditionalField("SquashAndStretchCurveType", (BoingKit.BoingBones::Chain::CurveType)7, null, null, null, null, null, Label = "  Custom Curve")]
/// @brief Field SquashAndStretchCustomCurve, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___SquashAndStretchCustomCurve;

/// [ConditionalField(null, null, null, null, null, null, null, Label = "  Max Squash", Tooltip = "Maximum squash amount. For example, 2.0 means a maximum scale of 200% when squashed.", Min = 1, Max = 5)]
/// @brief Field MaxSquash, offset: 0xb8, size: 0x4, def value: None
 float_t  ___MaxSquash;

/// [ConditionalField(null, null, null, null, null, null, null, Label = "  Max Stretch", Tooltip = "Maximum stretch amount. For example, 2.0 means a minimum scale of 50% when stretched (200% stretched).", Min = 1, Max = 5)]
/// @brief Field MaxStretch, offset: 0xbc, size: 0x4, def value: None
 float_t  ___MaxStretch;

/// @brief Field m_scannedRoot, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_scannedRoot;

/// @brief Field m_scannedExclusion, offset: 0xc8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___m_scannedExclusion;

/// @brief Field m_hierarchyHash, offset: 0xd0, size: 0x4, def value: None
 int32_t  ___m_hierarchyHash;

/// @brief Field MaxLengthFromRoot, offset: 0xd4, size: 0x4, def value: None
 float_t  ___MaxLengthFromRoot;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BoingKit::BoingBones_Chain, ___Root) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Chain, ___Exclusion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Chain, ___EffectorReaction) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Chain, ___LooseRoot) == 0x21, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Chain, ___ParamsOverride) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Chain, ___AnimationBlendCurveType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Chain, ___AnimationBlendCustomCurve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Chain, ___LengthStiffnessCurveType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Chain, ___LengthStiffnessCustomCurve) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Chain, ___PoseStiffnessCurveType) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Chain, ___PoseStiffnessCustomCurve) == 0x58, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Chain, ___MaxBendAngleCap) == 0x60, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Chain, ___BendAngleCapCurveType) == 0x64, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Chain, ___BendAngleCapCustomCurve) == 0x68, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Chain, ___MaxCollisionRadius) == 0x70, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Chain, ___CollisionRadiusCurveType) == 0x74, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Chain, ___CollisionRadiusCustomCurve) == 0x78, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Chain, ___EnableBoingKitCollision) == 0x80, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Chain, ___EnableUnityCollision) == 0x81, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Chain, ___EnableInterChainCollision) == 0x82, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Chain, ___Gravity) == 0x84, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Chain, ___Bounds) == 0x90, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Chain, ___SquashAndStretchCurveType) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Chain, ___SquashAndStretchCustomCurve) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Chain, ___MaxSquash) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Chain, ___MaxStretch) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Chain, ___m_scannedRoot) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Chain, ___m_scannedExclusion) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Chain, ___m_hierarchyHash) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Chain, ___MaxLengthFromRoot) == 0xd4, "Offset mismatch!");

static_assert(sizeof(::BoingKit::BoingBones_Chain) == 0xd8, "Size mismatch!");

} // namespace end def BoingKit
// Dependencies BoingKit.BoingWork::Params::InstanceData, System.Object, UnityEngine.Bounds, UnityEngine.Quaternion, UnityEngine.Vector3
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.BoingBones/Bone
class CORDL_TYPE BoingBones_Bone : public ::System::Object {
public:
// Declarations
/// @brief Field AnimationBlend, offset 0x1ec, size 0x4 
 __declspec(property(get=__cordl_internal_get_AnimationBlend, put=__cordl_internal_set_AnimationBlend)) float_t  AnimationBlend;

/// @brief Field BendAngleCap, offset 0x200, size 0x4 
 __declspec(property(get=__cordl_internal_get_BendAngleCap, put=__cordl_internal_set_BendAngleCap)) float_t  BendAngleCap;

/// @brief Field BlendedPositionWs, offset 0x120, size 0xc 
 __declspec(property(get=__cordl_internal_get_BlendedPositionWs, put=__cordl_internal_set_BlendedPositionWs)) ::UnityEngine::Vector3  BlendedPositionWs;

/// @brief Field BlendedRotationWs, offset 0x1b8, size 0x10 
 __declspec(property(get=__cordl_internal_get_BlendedRotationWs, put=__cordl_internal_set_BlendedRotationWs)) ::UnityEngine::Quaternion  BlendedRotationWs;

/// @brief Field BlendedScaleLs, offset 0x12c, size 0xc 
 __declspec(property(get=__cordl_internal_get_BlendedScaleLs, put=__cordl_internal_set_BlendedScaleLs)) ::UnityEngine::Vector3  BlendedScaleLs;

/// @brief Field Bounds, offset 0x150, size 0x18 
 __declspec(property(get=__cordl_internal_get_Bounds, put=__cordl_internal_set_Bounds)) ::UnityEngine::Bounds  Bounds;

/// @brief Field CachedPositionLs, offset 0x144, size 0xc 
 __declspec(property(get=__cordl_internal_get_CachedPositionLs, put=__cordl_internal_set_CachedPositionLs)) ::UnityEngine::Vector3  CachedPositionLs;

/// @brief Field CachedPositionWs, offset 0x138, size 0xc 
 __declspec(property(get=__cordl_internal_get_CachedPositionWs, put=__cordl_internal_set_CachedPositionWs)) ::UnityEngine::Vector3  CachedPositionWs;

/// @brief Field CachedRotationLs, offset 0x1a8, size 0x10 
 __declspec(property(get=__cordl_internal_get_CachedRotationLs, put=__cordl_internal_set_CachedRotationLs)) ::UnityEngine::Quaternion  CachedRotationLs;

/// @brief Field CachedRotationWs, offset 0x198, size 0x10 
 __declspec(property(get=__cordl_internal_get_CachedRotationWs, put=__cordl_internal_set_CachedRotationWs)) ::UnityEngine::Quaternion  CachedRotationWs;

/// @brief Field CachedScaleLs, offset 0x114, size 0xc 
 __declspec(property(get=__cordl_internal_get_CachedScaleLs, put=__cordl_internal_set_CachedScaleLs)) ::UnityEngine::Vector3  CachedScaleLs;

/// @brief Field ChildIndices, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_ChildIndices, put=__cordl_internal_set_ChildIndices)) ::ArrayW<int32_t>  ChildIndices;

/// @brief Field CollisionRadius, offset 0x204, size 0x4 
 __declspec(property(get=__cordl_internal_get_CollisionRadius, put=__cordl_internal_set_CollisionRadius)) float_t  CollisionRadius;

/// @brief Field FullyStiffToParentLength, offset 0x1f8, size 0x4 
 __declspec(property(get=__cordl_internal_get_FullyStiffToParentLength, put=__cordl_internal_set_FullyStiffToParentLength)) float_t  FullyStiffToParentLength;

/// @brief Field Instance, offset 0x10, size 0xf0 
 __declspec(property(get=__cordl_internal_get_Instance, put=__cordl_internal_set_Instance)) ::GlobalNamespace::Params_BoingWork_InstanceData  Instance;

/// @brief Field LengthFromRoot, offset 0x1e8, size 0x4 
 __declspec(property(get=__cordl_internal_get_LengthFromRoot, put=__cordl_internal_set_LengthFromRoot)) float_t  LengthFromRoot;

/// @brief Field LengthStiffness, offset 0x1f0, size 0x4 
 __declspec(property(get=__cordl_internal_get_LengthStiffness, put=__cordl_internal_set_LengthStiffness)) float_t  LengthStiffness;

/// @brief Field LengthStiffnessT, offset 0x1f4, size 0x4 
 __declspec(property(get=__cordl_internal_get_LengthStiffnessT, put=__cordl_internal_set_LengthStiffnessT)) float_t  LengthStiffnessT;

 __declspec(property(get=get_LocalScale)) ::UnityEngine::Vector3  LocalScale;

/// @brief Field ParentIndex, offset 0x1d8, size 0x4 
 __declspec(property(get=__cordl_internal_get_ParentIndex, put=__cordl_internal_set_ParentIndex)) int32_t  ParentIndex;

/// @brief Field PoseStiffness, offset 0x1fc, size 0x4 
 __declspec(property(get=__cordl_internal_get_PoseStiffness, put=__cordl_internal_set_PoseStiffness)) float_t  PoseStiffness;

 __declspec(property(get=get_Position)) ::UnityEngine::Vector3  Position;

 __declspec(property(get=get_Rotation)) ::UnityEngine::Quaternion  Rotation;

/// @brief Field RotationBackPropDeltaPs, offset 0x1c8, size 0x10 
 __declspec(property(get=__cordl_internal_get_RotationBackPropDeltaPs, put=__cordl_internal_set_RotationBackPropDeltaPs)) ::UnityEngine::Quaternion  RotationBackPropDeltaPs;

/// @brief Field RotationInverseWs, offset 0x168, size 0x10 
 __declspec(property(get=__cordl_internal_get_RotationInverseWs, put=__cordl_internal_set_RotationInverseWs)) ::UnityEngine::Quaternion  RotationInverseWs;

/// @brief Field ScaleWs, offset 0x108, size 0xc 
 __declspec(property(get=__cordl_internal_get_ScaleWs, put=__cordl_internal_set_ScaleWs)) ::UnityEngine::Vector3  ScaleWs;

/// @brief Field SpringRotationInverseWs, offset 0x188, size 0x10 
 __declspec(property(get=__cordl_internal_get_SpringRotationInverseWs, put=__cordl_internal_set_SpringRotationInverseWs)) ::UnityEngine::Quaternion  SpringRotationInverseWs;

/// @brief Field SpringRotationWs, offset 0x178, size 0x10 
 __declspec(property(get=__cordl_internal_get_SpringRotationWs, put=__cordl_internal_set_SpringRotationWs)) ::UnityEngine::Quaternion  SpringRotationWs;

/// @brief Field SquashAndStretch, offset 0x208, size 0x4 
 __declspec(property(get=__cordl_internal_get_SquashAndStretch, put=__cordl_internal_set_SquashAndStretch)) float_t  SquashAndStretch;

/// @brief Field Transform, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_Transform, put=__cordl_internal_set_Transform)) ::UnityW<::UnityEngine::Transform>  Transform;

/// @brief Field localScale, offset 0x22c, size 0xc 
 __declspec(property(get=__cordl_internal_get_localScale, put=__cordl_internal_set_localScale)) ::UnityEngine::Vector3  localScale;

/// @brief Field position, offset 0x210, size 0xc 
 __declspec(property(get=__cordl_internal_get_position, put=__cordl_internal_set_position)) ::UnityEngine::Vector3  position;

/// @brief Field rotation, offset 0x21c, size 0x10 
 __declspec(property(get=__cordl_internal_get_rotation, put=__cordl_internal_set_rotation)) ::UnityEngine::Quaternion  rotation;

/// @brief Field updatedPos, offset 0x20c, size 0x1 
 __declspec(property(get=__cordl_internal_get_updatedPos, put=__cordl_internal_set_updatedPos)) bool  updatedPos;

/// @brief Field updatedRot, offset 0x20d, size 0x1 
 __declspec(property(get=__cordl_internal_get_updatedRot, put=__cordl_internal_set_updatedRot)) bool  updatedRot;

/// @brief Field updatedScale, offset 0x20e, size 0x1 
 __declspec(property(get=__cordl_internal_get_updatedScale, put=__cordl_internal_set_updatedScale)) bool  updatedScale;

/// @brief Method CheckResetFlags, addr 0x5e15b34, size 0x50, virtual false, abstract: false, final false
inline void CheckResetFlags() ;

static inline ::BoingKit::BoingBones_Bone* New_ctor(::UnityEngine::Transform*  transform, int32_t  iParent, float_t  lengthFromRoot) ;

/// @brief Method UpdateBounds, addr 0x5e15b84, size 0x9c, virtual false, abstract: false, final false
inline void UpdateBounds() ;

constexpr float_t const& __cordl_internal_get_AnimationBlend() const;

constexpr float_t& __cordl_internal_get_AnimationBlend() ;

constexpr float_t const& __cordl_internal_get_BendAngleCap() const;

constexpr float_t& __cordl_internal_get_BendAngleCap() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_BlendedPositionWs() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_BlendedPositionWs() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_BlendedRotationWs() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_BlendedRotationWs() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_BlendedScaleLs() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_BlendedScaleLs() ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get_Bounds() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get_Bounds() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_CachedPositionLs() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_CachedPositionLs() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_CachedPositionWs() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_CachedPositionWs() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_CachedRotationLs() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_CachedRotationLs() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_CachedRotationWs() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_CachedRotationWs() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_CachedScaleLs() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_CachedScaleLs() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_ChildIndices() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_ChildIndices() ;

constexpr float_t const& __cordl_internal_get_CollisionRadius() const;

constexpr float_t& __cordl_internal_get_CollisionRadius() ;

constexpr float_t const& __cordl_internal_get_FullyStiffToParentLength() const;

constexpr float_t& __cordl_internal_get_FullyStiffToParentLength() ;

constexpr ::GlobalNamespace::Params_BoingWork_InstanceData const& __cordl_internal_get_Instance() const;

constexpr ::GlobalNamespace::Params_BoingWork_InstanceData& __cordl_internal_get_Instance() ;

constexpr float_t const& __cordl_internal_get_LengthFromRoot() const;

constexpr float_t& __cordl_internal_get_LengthFromRoot() ;

constexpr float_t const& __cordl_internal_get_LengthStiffness() const;

constexpr float_t& __cordl_internal_get_LengthStiffness() ;

constexpr float_t const& __cordl_internal_get_LengthStiffnessT() const;

constexpr float_t& __cordl_internal_get_LengthStiffnessT() ;

constexpr int32_t const& __cordl_internal_get_ParentIndex() const;

constexpr int32_t& __cordl_internal_get_ParentIndex() ;

constexpr float_t const& __cordl_internal_get_PoseStiffness() const;

constexpr float_t& __cordl_internal_get_PoseStiffness() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_RotationBackPropDeltaPs() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_RotationBackPropDeltaPs() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_RotationInverseWs() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_RotationInverseWs() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_ScaleWs() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_ScaleWs() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_SpringRotationInverseWs() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_SpringRotationInverseWs() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_SpringRotationWs() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_SpringRotationWs() ;

constexpr float_t const& __cordl_internal_get_SquashAndStretch() const;

constexpr float_t& __cordl_internal_get_SquashAndStretch() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_Transform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_Transform() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_localScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_localScale() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_position() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_position() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_rotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_rotation() ;

constexpr bool const& __cordl_internal_get_updatedPos() const;

constexpr bool& __cordl_internal_get_updatedPos() ;

constexpr bool const& __cordl_internal_get_updatedRot() const;

constexpr bool& __cordl_internal_get_updatedRot() ;

constexpr bool const& __cordl_internal_get_updatedScale() const;

constexpr bool& __cordl_internal_get_updatedScale() ;

constexpr void __cordl_internal_set_AnimationBlend(float_t  value) ;

constexpr void __cordl_internal_set_BendAngleCap(float_t  value) ;

constexpr void __cordl_internal_set_BlendedPositionWs(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_BlendedRotationWs(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_BlendedScaleLs(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_Bounds(::UnityEngine::Bounds  value) ;

constexpr void __cordl_internal_set_CachedPositionLs(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_CachedPositionWs(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_CachedRotationLs(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_CachedRotationWs(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_CachedScaleLs(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_ChildIndices(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_CollisionRadius(float_t  value) ;

constexpr void __cordl_internal_set_FullyStiffToParentLength(float_t  value) ;

constexpr void __cordl_internal_set_Instance(::GlobalNamespace::Params_BoingWork_InstanceData  value) ;

constexpr void __cordl_internal_set_LengthFromRoot(float_t  value) ;

constexpr void __cordl_internal_set_LengthStiffness(float_t  value) ;

constexpr void __cordl_internal_set_LengthStiffnessT(float_t  value) ;

constexpr void __cordl_internal_set_ParentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_PoseStiffness(float_t  value) ;

constexpr void __cordl_internal_set_RotationBackPropDeltaPs(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_RotationInverseWs(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_ScaleWs(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_SpringRotationInverseWs(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_SpringRotationWs(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_SquashAndStretch(float_t  value) ;

constexpr void __cordl_internal_set_Transform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_localScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_position(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_updatedPos(bool  value) ;

constexpr void __cordl_internal_set_updatedRot(bool  value) ;

constexpr void __cordl_internal_set_updatedScale(bool  value) ;

/// @brief Method .ctor, addr 0x5e14404, size 0x178, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Transform*  transform, int32_t  iParent, float_t  lengthFromRoot) ;

/// @brief Method get_LocalScale, addr 0x5e14940, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_LocalScale() ;

/// @brief Method get_Position, addr 0x5e14898, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Position() ;

/// @brief Method get_Rotation, addr 0x5e148e8, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_Rotation() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoingBones_Bone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoingBones_Bone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoingBones_Bone(BoingBones_Bone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoingBones_Bone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoingBones_Bone(BoingBones_Bone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5166};

/// @brief Field Instance, offset: 0x10, size: 0xf0, def value: None
 ::GlobalNamespace::Params_BoingWork_InstanceData  ___Instance;

/// @brief Field Transform, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___Transform;

/// @brief Field ScaleWs, offset: 0x108, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___ScaleWs;

/// @brief Field CachedScaleLs, offset: 0x114, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___CachedScaleLs;

/// @brief Field BlendedPositionWs, offset: 0x120, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___BlendedPositionWs;

/// @brief Field BlendedScaleLs, offset: 0x12c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___BlendedScaleLs;

/// @brief Field CachedPositionWs, offset: 0x138, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___CachedPositionWs;

/// @brief Field CachedPositionLs, offset: 0x144, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___CachedPositionLs;

/// @brief Field Bounds, offset: 0x150, size: 0x18, def value: None
 ::UnityEngine::Bounds  ___Bounds;

/// @brief Field RotationInverseWs, offset: 0x168, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___RotationInverseWs;

/// @brief Field SpringRotationWs, offset: 0x178, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___SpringRotationWs;

/// @brief Field SpringRotationInverseWs, offset: 0x188, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___SpringRotationInverseWs;

/// @brief Field CachedRotationWs, offset: 0x198, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___CachedRotationWs;

/// @brief Field CachedRotationLs, offset: 0x1a8, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___CachedRotationLs;

/// @brief Field BlendedRotationWs, offset: 0x1b8, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___BlendedRotationWs;

/// @brief Field RotationBackPropDeltaPs, offset: 0x1c8, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___RotationBackPropDeltaPs;

/// @brief Field ParentIndex, offset: 0x1d8, size: 0x4, def value: None
 int32_t  ___ParentIndex;

/// @brief Field ChildIndices, offset: 0x1e0, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___ChildIndices;

/// @brief Field LengthFromRoot, offset: 0x1e8, size: 0x4, def value: None
 float_t  ___LengthFromRoot;

/// @brief Field AnimationBlend, offset: 0x1ec, size: 0x4, def value: None
 float_t  ___AnimationBlend;

/// @brief Field LengthStiffness, offset: 0x1f0, size: 0x4, def value: None
 float_t  ___LengthStiffness;

/// @brief Field LengthStiffnessT, offset: 0x1f4, size: 0x4, def value: None
 float_t  ___LengthStiffnessT;

/// @brief Field FullyStiffToParentLength, offset: 0x1f8, size: 0x4, def value: None
 float_t  ___FullyStiffToParentLength;

/// @brief Field PoseStiffness, offset: 0x1fc, size: 0x4, def value: None
 float_t  ___PoseStiffness;

/// @brief Field BendAngleCap, offset: 0x200, size: 0x4, def value: None
 float_t  ___BendAngleCap;

/// @brief Field CollisionRadius, offset: 0x204, size: 0x4, def value: None
 float_t  ___CollisionRadius;

/// @brief Field SquashAndStretch, offset: 0x208, size: 0x4, def value: None
 float_t  ___SquashAndStretch;

/// @brief Field updatedPos, offset: 0x20c, size: 0x1, def value: None
 bool  ___updatedPos;

/// @brief Field updatedRot, offset: 0x20d, size: 0x1, def value: None
 bool  ___updatedRot;

/// @brief Field updatedScale, offset: 0x20e, size: 0x1, def value: None
 bool  ___updatedScale;

/// @brief Field position, offset: 0x210, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___position;

/// @brief Field rotation, offset: 0x21c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___rotation;

/// @brief Field localScale, offset: 0x22c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___localScale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BoingKit::BoingBones_Bone, ___Instance) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Bone, ___Transform) == 0x100, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Bone, ___ScaleWs) == 0x108, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Bone, ___CachedScaleLs) == 0x114, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Bone, ___BlendedPositionWs) == 0x120, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Bone, ___BlendedScaleLs) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Bone, ___CachedPositionWs) == 0x138, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Bone, ___CachedPositionLs) == 0x144, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Bone, ___Bounds) == 0x150, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Bone, ___RotationInverseWs) == 0x168, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Bone, ___SpringRotationWs) == 0x178, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Bone, ___SpringRotationInverseWs) == 0x188, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Bone, ___CachedRotationWs) == 0x198, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Bone, ___CachedRotationLs) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Bone, ___BlendedRotationWs) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Bone, ___RotationBackPropDeltaPs) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Bone, ___ParentIndex) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Bone, ___ChildIndices) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Bone, ___LengthFromRoot) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Bone, ___AnimationBlend) == 0x1ec, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Bone, ___LengthStiffness) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Bone, ___LengthStiffnessT) == 0x1f4, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Bone, ___FullyStiffToParentLength) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Bone, ___PoseStiffness) == 0x1fc, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Bone, ___BendAngleCap) == 0x200, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Bone, ___CollisionRadius) == 0x204, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Bone, ___SquashAndStretch) == 0x208, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Bone, ___updatedPos) == 0x20c, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Bone, ___updatedRot) == 0x20d, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Bone, ___updatedScale) == 0x20e, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Bone, ___position) == 0x210, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Bone, ___rotation) == 0x21c, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingBones_Bone, ___localScale) == 0x22c, "Offset mismatch!");

static_assert(sizeof(::BoingKit::BoingBones_Bone) == 0x238, "Size mismatch!");

} // namespace end def BoingKit
