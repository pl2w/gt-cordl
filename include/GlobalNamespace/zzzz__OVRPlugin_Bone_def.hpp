#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Bone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_BoneId_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Posef_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_Bone)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_Bone;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_Bone);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_Bone, "", "OVRPlugin/Bone");
// Dependencies OVRPlugin::BoneId, OVRPlugin::Posef
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/Bone
struct CORDL_TYPE OVRPlugin_Bone {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_Bone() ;

// Ctor Parameters [CppParam { name: "Id", ty: "::GlobalNamespace::OVRPlugin_BoneId", modifiers: "", def_value: None, comment: None }, CppParam { name: "ParentBoneIndex", ty: "int16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Pose", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_Bone(::GlobalNamespace::OVRPlugin_BoneId  Id, int16_t  ParentBoneIndex, ::GlobalNamespace::OVRPlugin_Posef  Pose) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12142};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field Id, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_BoneId  Id;

/// @brief Field ParentBoneIndex, offset: 0x4, size: 0x2, def value: None
 int16_t  ParentBoneIndex;

/// @brief Field Pose, offset: 0x8, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  Pose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_Bone, Id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Bone, ParentBoneIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Bone, Pose) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_Bone) == 0x24, "Size mismatch!");

} // namespace end def GlobalNamespace
