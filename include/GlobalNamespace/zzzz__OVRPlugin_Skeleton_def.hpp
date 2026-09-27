#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Skeleton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_BoneCapsule_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Bone_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SkeletonType_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_Skeleton)
namespace GlobalNamespace {
struct OVRPlugin_BoneCapsule;
}
namespace GlobalNamespace {
struct OVRPlugin_Bone;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_Skeleton;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_Skeleton);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_Skeleton, "", "OVRPlugin/Skeleton");
// Dependencies OVRPlugin::Bone, OVRPlugin::BoneCapsule, OVRPlugin::SkeletonType
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/Skeleton
struct CORDL_TYPE OVRPlugin_Skeleton {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_Skeleton() ;

// Ctor Parameters [CppParam { name: "Type", ty: "::GlobalNamespace::OVRPlugin_SkeletonType", modifiers: "", def_value: None, comment: None }, CppParam { name: "NumBones", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "NumBoneCapsules", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bones", ty: "::ArrayW<::GlobalNamespace::OVRPlugin_Bone>", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneCapsules", ty: "::ArrayW<::GlobalNamespace::OVRPlugin_BoneCapsule>", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_Skeleton(::GlobalNamespace::OVRPlugin_SkeletonType  Type, uint32_t  NumBones, uint32_t  NumBoneCapsules, ::ArrayW<::GlobalNamespace::OVRPlugin_Bone>  Bones, ::ArrayW<::GlobalNamespace::OVRPlugin_BoneCapsule>  BoneCapsules) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12145};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Type, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_SkeletonType  Type;

/// @brief Field NumBones, offset: 0x4, size: 0x4, def value: None
 uint32_t  NumBones;

/// @brief Field NumBoneCapsules, offset: 0x8, size: 0x4, def value: None
 uint32_t  NumBoneCapsules;

/// @brief Field Bones, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::OVRPlugin_Bone>  Bones;

/// @brief Field BoneCapsules, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::OVRPlugin_BoneCapsule>  BoneCapsules;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton, Type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton, NumBones) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton, NumBoneCapsules) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton, Bones) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Skeleton, BoneCapsules) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_Skeleton) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
