#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/Input/BodyJointsCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__SkeletonJointsCache_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BodyJointsCache)
namespace Oculus::Interaction::Body::Input {
class BodyDataAsset;
}
namespace Oculus::Interaction::Body::Input {
struct BodyJointId;
}
namespace Oculus::Interaction::Body::Input {
class ISkeletonMapping;
}
namespace Oculus::Interaction::Body::Input {
class ReadOnlyBodyJointPoses;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction::Body::Input {
class BodyJointsCache;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Body::Input::BodyJointsCache*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Body::Input::BodyJointsCache*, "Oculus.Interaction.Body.Input", "BodyJointsCache");
// Dependencies Oculus.Interaction.Input.SkeletonJointsCache
namespace Oculus::Interaction::Body::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Body.Input.BodyJointsCache
class CORDL_TYPE BodyJointsCache : public ::Oculus::Interaction::Input::SkeletonJointsCache {
public:
// Declarations
/// @brief Field _localPosesCollection, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__localPosesCollection, put=__cordl_internal_set__localPosesCollection)) ::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses*  _localPosesCollection;

/// @brief Field _mapping, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__mapping, put=__cordl_internal_set__mapping)) ::Oculus::Interaction::Body::Input::ISkeletonMapping*  _mapping;

/// @brief Field _posesFromRootCollection, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__posesFromRootCollection, put=__cordl_internal_set__posesFromRootCollection)) ::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses*  _posesFromRootCollection;

/// @brief Field _worldPosesCollection, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__worldPosesCollection, put=__cordl_internal_set__worldPosesCollection)) ::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses*  _worldPosesCollection;

/// [Obsolete]
/// @brief Method GetAllLocalPoses, addr 0xa4f87c8, size 0x54, virtual false, abstract: false, final false
inline bool GetAllLocalPoses(::by_ref<::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses*>  localJointPoses) ;

/// [Obsolete]
/// @brief Method GetAllPosesFromRoot, addr 0xa4f8834, size 0x54, virtual false, abstract: false, final false
inline bool GetAllPosesFromRoot(::by_ref<::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses*>  posesFromRoot) ;

/// [Obsolete]
/// @brief Method GetAllWorldPoses, addr 0xa4f8888, size 0x54, virtual false, abstract: false, final false
inline bool GetAllWorldPoses(::by_ref<::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses*>  worldJointPoses) ;

/// @brief Method GetJointPoseFromRoot, addr 0xa4f7f80, size 0x34, virtual false, abstract: false, final false
inline ::UnityEngine::Pose GetJointPoseFromRoot(::Oculus::Interaction::Body::Input::BodyJointId  jointId) ;

/// @brief Method GetLocalJointPose, addr 0xa4f7d80, size 0x34, virtual false, abstract: false, final false
inline ::UnityEngine::Pose GetLocalJointPose(::Oculus::Interaction::Body::Input::BodyJointId  jointId) ;

/// @brief Method GetWorldJointPose, addr 0xa4f7b80, size 0x34, virtual false, abstract: false, final false
inline ::UnityEngine::Pose GetWorldJointPose(::Oculus::Interaction::Body::Input::BodyJointId  jointId) ;

static inline ::Oculus::Interaction::Body::Input::BodyJointsCache* New_ctor(::Oculus::Interaction::Body::Input::ISkeletonMapping*  mapping) ;

/// @brief Method TryGetParent, addr 0xa4f86c4, size 0xd4, virtual true, abstract: false, final false
inline bool TryGetParent(int32_t  joint, ::by_ref<int32_t>  parent) ;

/// @brief Method Update, addr 0xa4f8218, size 0x54, virtual false, abstract: false, final false
inline void Update(::Oculus::Interaction::Body::Input::BodyDataAsset*  data, int32_t  dataVersion, ::UnityEngine::Transform*  trackingSpace) ;

constexpr ::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses* const& __cordl_internal_get__localPosesCollection() const;

constexpr ::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses*& __cordl_internal_get__localPosesCollection() ;

constexpr ::Oculus::Interaction::Body::Input::ISkeletonMapping* const& __cordl_internal_get__mapping() const;

constexpr ::Oculus::Interaction::Body::Input::ISkeletonMapping*& __cordl_internal_get__mapping() ;

constexpr ::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses* const& __cordl_internal_get__posesFromRootCollection() const;

constexpr ::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses*& __cordl_internal_get__posesFromRootCollection() ;

constexpr ::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses* const& __cordl_internal_get__worldPosesCollection() const;

constexpr ::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses*& __cordl_internal_get__worldPosesCollection() ;

constexpr void __cordl_internal_set__localPosesCollection(::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses*  value) ;

constexpr void __cordl_internal_set__mapping(::Oculus::Interaction::Body::Input::ISkeletonMapping*  value) ;

constexpr void __cordl_internal_set__posesFromRootCollection(::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses*  value) ;

constexpr void __cordl_internal_set__worldPosesCollection(::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses*  value) ;

/// @brief Method .ctor, addr 0xa4f8108, size 0x110, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::Body::Input::ISkeletonMapping*  mapping) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BodyJointsCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BodyJointsCache", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BodyJointsCache(BodyJointsCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BodyJointsCache", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BodyJointsCache(BodyJointsCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16401};

/// @brief Field _posesFromRootCollection, offset: 0xd0, size: 0x8, def value: None
 ::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses*  ____posesFromRootCollection;

/// @brief Field _worldPosesCollection, offset: 0xd8, size: 0x8, def value: None
 ::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses*  ____worldPosesCollection;

/// @brief Field _localPosesCollection, offset: 0xe0, size: 0x8, def value: None
 ::Oculus::Interaction::Body::Input::ReadOnlyBodyJointPoses*  ____localPosesCollection;

/// @brief Field _mapping, offset: 0xe8, size: 0x8, def value: None
 ::Oculus::Interaction::Body::Input::ISkeletonMapping*  ____mapping;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Body::Input::BodyJointsCache, ____posesFromRootCollection) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::Input::BodyJointsCache, ____worldPosesCollection) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::Input::BodyJointsCache, ____localPosesCollection) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::Input::BodyJointsCache, ____mapping) == 0xe8, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Body::Input::BodyJointsCache) == 0xf0, "Size mismatch!");

} // namespace end def Oculus::Interaction::Body::Input
