#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/SkeletonJointsCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SkeletonJointsCache)
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class SkeletonJointsCache;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::SkeletonJointsCache*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::SkeletonJointsCache*, "Oculus.Interaction.Input", "SkeletonJointsCache");
// Dependencies System.Object, UnityEngine.Matrix4x4, UnityEngine.Pose
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.SkeletonJointsCache
class CORDL_TYPE SkeletonJointsCache : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_LocalDataVersion, put=set_LocalDataVersion)) int32_t  LocalDataVersion;

/// @brief Field <LocalDataVersion>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__LocalDataVersion_k__BackingField, put=__cordl_internal_set__LocalDataVersion_k__BackingField)) int32_t  _LocalDataVersion_k__BackingField;

/// @brief Field _dirtyArraySize, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get__dirtyArraySize, put=__cordl_internal_set__dirtyArraySize)) int32_t  _dirtyArraySize;

/// @brief Field _dirtyJointsFromRoot, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__dirtyJointsFromRoot, put=__cordl_internal_set__dirtyJointsFromRoot)) ::ArrayW<uint64_t>  _dirtyJointsFromRoot;

/// @brief Field _dirtyLocalJoints, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__dirtyLocalJoints, put=__cordl_internal_set__dirtyLocalJoints)) ::ArrayW<uint64_t>  _dirtyLocalJoints;

/// @brief Field _dirtyWorldJoints, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__dirtyWorldJoints, put=__cordl_internal_set__dirtyWorldJoints)) ::ArrayW<uint64_t>  _dirtyWorldJoints;

/// @brief Field _localPoses, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__localPoses, put=__cordl_internal_set__localPoses)) ::ArrayW<::UnityEngine::Pose>  _localPoses;

/// @brief Field _numJoints, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get__numJoints, put=__cordl_internal_set__numJoints)) int32_t  _numJoints;

/// @brief Field _originalPoses, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__originalPoses, put=__cordl_internal_set__originalPoses)) ::ArrayW<::UnityEngine::Pose>  _originalPoses;

/// @brief Field _posesFromRoot, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__posesFromRoot, put=__cordl_internal_set__posesFromRoot)) ::ArrayW<::UnityEngine::Pose>  _posesFromRoot;

/// @brief Field _rootPose, offset 0x90, size 0x1c 
 __declspec(property(get=__cordl_internal_get__rootPose, put=__cordl_internal_set__rootPose)) ::UnityEngine::Pose  _rootPose;

/// @brief Field _scale, offset 0x50, size 0x40 
 __declspec(property(get=__cordl_internal_get__scale, put=__cordl_internal_set__scale)) ::UnityEngine::Matrix4x4  _scale;

/// @brief Field _worldPoses, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__worldPoses, put=__cordl_internal_set__worldPoses)) ::ArrayW<::UnityEngine::Pose>  _worldPoses;

/// @brief Field _worldRoot, offset 0xac, size 0x1c 
 __declspec(property(get=__cordl_internal_get__worldRoot, put=__cordl_internal_set__worldRoot)) ::UnityEngine::Pose  _worldRoot;

/// @brief Method CheckJointDirty, addr 0xa5150dc, size 0x44, virtual false, abstract: false, final false
inline bool CheckJointDirty(int32_t  jointId, ::ArrayW<uint64_t>  dirtyFlags) ;

/// @brief Method GetJointPoseFromRoot, addr 0xa50ef14, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Pose GetJointPoseFromRoot(int32_t  jointId) ;

/// @brief Method GetLocalJointPose, addr 0xa50ee8c, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Pose GetLocalJointPose(int32_t  jointId) ;

/// @brief Method GetWorldJointPose, addr 0xa50ef9c, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Pose GetWorldJointPose(int32_t  jointId) ;

/// @brief Method GetWorldRootPose, addr 0xa5150c8, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Pose GetWorldRootPose() ;

static inline ::Oculus::Interaction::Input::SkeletonJointsCache* New_ctor(int32_t  numJoints) ;

/// @brief Method SetJointClean, addr 0xa515120, size 0x4c, virtual false, abstract: false, final false
inline void SetJointClean(int32_t  jointId, ::ArrayW<uint64_t>  dirtyFlags) ;

/// @brief Method TryGetParent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool TryGetParent(int32_t  joint, ::by_ref<int32_t>  parent) ;

/// @brief Method Update, addr 0xa50ea28, size 0x2c4, virtual false, abstract: false, final false
inline void Update(int32_t  dataVersion, ::UnityEngine::Pose  rootPose, ::ArrayW<::UnityEngine::Pose>  jointPoses, float_t  scale, ::UnityEngine::Transform*  trackingSpace) ;

/// @brief Method UpdateAllLocalPoses, addr 0xa50ed60, size 0x44, virtual false, abstract: false, final false
inline void UpdateAllLocalPoses() ;

/// @brief Method UpdateAllPosesFromRoot, addr 0xa50ee18, size 0x44, virtual false, abstract: false, final false
inline void UpdateAllPosesFromRoot() ;

/// @brief Method UpdateAllWorldPoses, addr 0xa51516c, size 0x44, virtual false, abstract: false, final false
inline void UpdateAllWorldPoses() ;

/// @brief Method UpdateJointPoseFromRoot, addr 0xa514f3c, size 0x98, virtual false, abstract: false, final false
inline void UpdateJointPoseFromRoot(int32_t  jointId) ;

/// @brief Method UpdateLocalJointPose, addr 0xa514cdc, size 0x260, virtual false, abstract: false, final false
inline void UpdateLocalJointPose(int32_t  jointId) ;

/// @brief Method UpdateWorldJointPose, addr 0xa514fd4, size 0xf4, virtual false, abstract: false, final false
inline void UpdateWorldJointPose(int32_t  jointId) ;

constexpr int32_t const& __cordl_internal_get__LocalDataVersion_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__LocalDataVersion_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__dirtyArraySize() const;

constexpr int32_t& __cordl_internal_get__dirtyArraySize() ;

constexpr ::ArrayW<uint64_t> const& __cordl_internal_get__dirtyJointsFromRoot() const;

constexpr ::ArrayW<uint64_t>& __cordl_internal_get__dirtyJointsFromRoot() ;

constexpr ::ArrayW<uint64_t> const& __cordl_internal_get__dirtyLocalJoints() const;

constexpr ::ArrayW<uint64_t>& __cordl_internal_get__dirtyLocalJoints() ;

constexpr ::ArrayW<uint64_t> const& __cordl_internal_get__dirtyWorldJoints() const;

constexpr ::ArrayW<uint64_t>& __cordl_internal_get__dirtyWorldJoints() ;

constexpr ::ArrayW<::UnityEngine::Pose> const& __cordl_internal_get__localPoses() const;

constexpr ::ArrayW<::UnityEngine::Pose>& __cordl_internal_get__localPoses() ;

constexpr int32_t const& __cordl_internal_get__numJoints() const;

constexpr int32_t& __cordl_internal_get__numJoints() ;

constexpr ::ArrayW<::UnityEngine::Pose> const& __cordl_internal_get__originalPoses() const;

constexpr ::ArrayW<::UnityEngine::Pose>& __cordl_internal_get__originalPoses() ;

constexpr ::ArrayW<::UnityEngine::Pose> const& __cordl_internal_get__posesFromRoot() const;

constexpr ::ArrayW<::UnityEngine::Pose>& __cordl_internal_get__posesFromRoot() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__rootPose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__rootPose() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get__scale() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get__scale() ;

constexpr ::ArrayW<::UnityEngine::Pose> const& __cordl_internal_get__worldPoses() const;

constexpr ::ArrayW<::UnityEngine::Pose>& __cordl_internal_get__worldPoses() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__worldRoot() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__worldRoot() ;

constexpr void __cordl_internal_set__LocalDataVersion_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__dirtyArraySize(int32_t  value) ;

constexpr void __cordl_internal_set__dirtyJointsFromRoot(::ArrayW<uint64_t>  value) ;

constexpr void __cordl_internal_set__dirtyLocalJoints(::ArrayW<uint64_t>  value) ;

constexpr void __cordl_internal_set__dirtyWorldJoints(::ArrayW<uint64_t>  value) ;

constexpr void __cordl_internal_set__localPoses(::ArrayW<::UnityEngine::Pose>  value) ;

constexpr void __cordl_internal_set__numJoints(int32_t  value) ;

constexpr void __cordl_internal_set__originalPoses(::ArrayW<::UnityEngine::Pose>  value) ;

constexpr void __cordl_internal_set__posesFromRoot(::ArrayW<::UnityEngine::Pose>  value) ;

constexpr void __cordl_internal_set__rootPose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__scale(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set__worldPoses(::ArrayW<::UnityEngine::Pose>  value) ;

constexpr void __cordl_internal_set__worldRoot(::UnityEngine::Pose  value) ;

/// @brief Method .ctor, addr 0xa50e860, size 0x150, virtual false, abstract: false, final false
inline void _ctor(int32_t  numJoints) ;

/// [CompilerGenerated]
/// @brief Method get_LocalDataVersion, addr 0xa514ccc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_LocalDataVersion() ;

/// [CompilerGenerated]
/// @brief Method set_LocalDataVersion, addr 0xa514cd4, size 0x8, virtual false, abstract: false, final false
inline void set_LocalDataVersion(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SkeletonJointsCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SkeletonJointsCache", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SkeletonJointsCache(SkeletonJointsCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SkeletonJointsCache", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SkeletonJointsCache(SkeletonJointsCache const& ) = delete;

/// @brief Field ULONG_BITS offset 0xffffffff size 0x4
static constexpr int32_t  ULONG_BITS{static_cast<int32_t>(0x40)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16523};

/// [CompilerGenerated]
/// @brief Field <LocalDataVersion>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____LocalDataVersion_k__BackingField;

/// @brief Field _originalPoses, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Pose>  ____originalPoses;

/// @brief Field _posesFromRoot, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Pose>  ____posesFromRoot;

/// @brief Field _localPoses, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Pose>  ____localPoses;

/// @brief Field _worldPoses, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Pose>  ____worldPoses;

/// @brief Field _dirtyJointsFromRoot, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<uint64_t>  ____dirtyJointsFromRoot;

/// @brief Field _dirtyLocalJoints, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<uint64_t>  ____dirtyLocalJoints;

/// @brief Field _dirtyWorldJoints, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<uint64_t>  ____dirtyWorldJoints;

/// @brief Field _scale, offset: 0x50, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ____scale;

/// @brief Field _rootPose, offset: 0x90, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____rootPose;

/// @brief Field _worldRoot, offset: 0xac, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____worldRoot;

/// @brief Field _numJoints, offset: 0xc8, size: 0x4, def value: None
 int32_t  ____numJoints;

/// @brief Field _dirtyArraySize, offset: 0xcc, size: 0x4, def value: None
 int32_t  ____dirtyArraySize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::SkeletonJointsCache, ____LocalDataVersion_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SkeletonJointsCache, ____originalPoses) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SkeletonJointsCache, ____posesFromRoot) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SkeletonJointsCache, ____localPoses) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SkeletonJointsCache, ____worldPoses) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SkeletonJointsCache, ____dirtyJointsFromRoot) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SkeletonJointsCache, ____dirtyLocalJoints) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SkeletonJointsCache, ____dirtyWorldJoints) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SkeletonJointsCache, ____scale) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SkeletonJointsCache, ____rootPose) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SkeletonJointsCache, ____worldRoot) == 0xac, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SkeletonJointsCache, ____numJoints) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::SkeletonJointsCache, ____dirtyArraySize) == 0xcc, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::SkeletonJointsCache) == 0xd0, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
