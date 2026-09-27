#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HandJointCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__SkeletonJointsCache_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HandJointCache)
namespace Oculus::Interaction::Input {
class HandDataAsset;
}
namespace Oculus::Interaction::Input {
struct HandJointId;
}
namespace Oculus::Interaction::Input {
class ReadOnlyHandJointPoses;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class HandJointCache;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::HandJointCache*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::HandJointCache*, "Oculus.Interaction.Input", "HandJointCache");
// Dependencies Oculus.Interaction.Input.SkeletonJointsCache
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.HandJointCache
class CORDL_TYPE HandJointCache : public ::Oculus::Interaction::Input::SkeletonJointsCache {
public:
// Declarations
/// @brief Field _localPosesCollection, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__localPosesCollection, put=__cordl_internal_set__localPosesCollection)) ::Oculus::Interaction::Input::ReadOnlyHandJointPoses*  _localPosesCollection;

/// @brief Field _posesFromWristCollection, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__posesFromWristCollection, put=__cordl_internal_set__posesFromWristCollection)) ::Oculus::Interaction::Input::ReadOnlyHandJointPoses*  _posesFromWristCollection;

/// @brief Method GetAllLocalPoses, addr 0xa50ecec, size 0x74, virtual false, abstract: false, final false
inline bool GetAllLocalPoses(::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>  localJointPoses) ;

/// @brief Method GetAllPosesFromWrist, addr 0xa50eda4, size 0x74, virtual false, abstract: false, final false
inline bool GetAllPosesFromWrist(::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>  jointPosesFromWrist) ;

/// @brief Method GetJointPoseFromRoot, addr 0xa50eee4, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Pose GetJointPoseFromRoot(::Oculus::Interaction::Input::HandJointId  jointId) ;

/// @brief Method GetLocalJointPose, addr 0xa50ee5c, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Pose GetLocalJointPose(::Oculus::Interaction::Input::HandJointId  jointId) ;

/// @brief Method GetWorldJointPose, addr 0xa50ef6c, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Pose GetWorldJointPose(::Oculus::Interaction::Input::HandJointId  jointId) ;

/// [Obsolete("Use GetLocalJointPose instead")]
/// @brief Method LocalJointPose, addr 0xa50eff4, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Pose LocalJointPose(::Oculus::Interaction::Input::HandJointId  jointid) ;

static inline ::Oculus::Interaction::Input::HandJointCache* New_ctor() ;

/// [Obsolete("Use GetJointPoseFromRoot instead")]
/// @brief Method PoseFromWrist, addr 0xa50f024, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Pose PoseFromWrist(::Oculus::Interaction::Input::HandJointId  jointid) ;

/// @brief Method TryGetParent, addr 0xa50e724, size 0x94, virtual true, abstract: false, final false
inline bool TryGetParent(int32_t  joint, ::by_ref<int32_t>  parent) ;

/// @brief Method Update, addr 0xa50e9b0, size 0x78, virtual false, abstract: false, final false
inline void Update(::Oculus::Interaction::Input::HandDataAsset*  data, int32_t  dataVersion, ::UnityEngine::Transform*  trackingSpace) ;

/// [Obsolete("Use GetWorldJointPose instead")]
/// @brief Method WorldJointPose, addr 0xa50f054, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Pose WorldJointPose(::Oculus::Interaction::Input::HandJointId  jointid, ::UnityEngine::Pose  rootPose, float_t  handScale) ;

constexpr ::Oculus::Interaction::Input::ReadOnlyHandJointPoses* const& __cordl_internal_get__localPosesCollection() const;

constexpr ::Oculus::Interaction::Input::ReadOnlyHandJointPoses*& __cordl_internal_get__localPosesCollection() ;

constexpr ::Oculus::Interaction::Input::ReadOnlyHandJointPoses* const& __cordl_internal_get__posesFromWristCollection() const;

constexpr ::Oculus::Interaction::Input::ReadOnlyHandJointPoses*& __cordl_internal_get__posesFromWristCollection() ;

constexpr void __cordl_internal_set__localPosesCollection(::Oculus::Interaction::Input::ReadOnlyHandJointPoses*  value) ;

constexpr void __cordl_internal_set__posesFromWristCollection(::Oculus::Interaction::Input::ReadOnlyHandJointPoses*  value) ;

/// @brief Method .ctor, addr 0xa50e7b8, size 0xa8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandJointCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandJointCache", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandJointCache(HandJointCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandJointCache", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandJointCache(HandJointCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16490};

/// @brief Field _posesFromWristCollection, offset: 0xd0, size: 0x8, def value: None
 ::Oculus::Interaction::Input::ReadOnlyHandJointPoses*  ____posesFromWristCollection;

/// @brief Field _localPosesCollection, offset: 0xd8, size: 0x8, def value: None
 ::Oculus::Interaction::Input::ReadOnlyHandJointPoses*  ____localPosesCollection;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::HandJointCache, ____posesFromWristCollection) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandJointCache, ____localPosesCollection) == 0xd8, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::HandJointCache) == 0xe0, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
