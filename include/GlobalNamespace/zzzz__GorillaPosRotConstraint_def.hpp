#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaPosRotConstraint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/CosmeticSystem/zzzz__GTHardCodedBones_SturdyEBone_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GorillaPosRotConstraint)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct GorillaPosRotConstraint;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaPosRotConstraint);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaPosRotConstraint, "", "GorillaPosRotConstraint");
// Dependencies GorillaTag.CosmeticSystem.GTHardCodedBones::SturdyEBone, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaPosRotConstraint
struct CORDL_TYPE GorillaPosRotConstraint {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GorillaPosRotConstraint() ;

// Ctor Parameters [CppParam { name: "follower", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "sourceGorillaBone", ty: "::GlobalNamespace::GTHardCodedBones_SturdyEBone", modifiers: "", def_value: None, comment: None }, CppParam { name: "source", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "sourceRelativePath", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "positionOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "rotationOffset", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }]
constexpr GorillaPosRotConstraint(::UnityW<::UnityEngine::Transform>  follower, ::GlobalNamespace::GTHardCodedBones_SturdyEBone  sourceGorillaBone, ::UnityW<::UnityEngine::Transform>  source, ::StringW  sourceRelativePath, ::UnityEngine::Vector3  positionOffset, ::UnityEngine::Quaternion  rotationOffset) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{850};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// [Tooltip("Transform that should be moved, rotated, and scaled to match the `source` Transform in world space.")]
/// @brief Field follower, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  follower;

/// [Tooltip("Bone that `follower` should match. Set to `None` to assign a specific Transform within the same prefab.")]
/// @brief Field sourceGorillaBone, offset: 0x8, size: 0x10, def value: None
 ::GlobalNamespace::GTHardCodedBones_SturdyEBone  sourceGorillaBone;

/// [Tooltip("Transform that `follower` should match. This is overridden at runtime if `sourceGorillaBone` is not `None`. If set in inspector, then it should be only set to a child of the the prefab this component belongs to.")]
/// @brief Field source, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  source;

/// @brief Field sourceRelativePath, offset: 0x20, size: 0x8, def value: None
 ::StringW  sourceRelativePath;

/// [Tooltip("Offset to be applied to the follower\'s position.")]
/// @brief Field positionOffset, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  positionOffset;

/// [Tooltip("Offset to be applied to the follower\'s rotation.")]
/// @brief Field rotationOffset, offset: 0x34, size: 0x10, def value: None
 ::UnityEngine::Quaternion  rotationOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaPosRotConstraint, follower) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPosRotConstraint, sourceGorillaBone) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPosRotConstraint, source) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPosRotConstraint, sourceRelativePath) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPosRotConstraint, positionOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPosRotConstraint, rotationOffset) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaPosRotConstraint) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
