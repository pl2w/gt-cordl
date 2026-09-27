#pragma once
// IWYU pragma private; include "GlobalNamespace/GameSnappable_SnapJointOffset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SnapJointType_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GameSnappable_SnapJointOffset)
// Forward declare root types
namespace GlobalNamespace {
struct GameSnappable_SnapJointOffset;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameSnappable_SnapJointOffset);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameSnappable_SnapJointOffset, "", "GameSnappable/SnapJointOffset");
// Dependencies SnapJointType, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameSnappable/SnapJointOffset
struct CORDL_TYPE GameSnappable_SnapJointOffset {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GameSnappable_SnapJointOffset() ;

// Ctor Parameters [CppParam { name: "jointType", ty: "::GlobalNamespace::SnapJointType", modifiers: "", def_value: None, comment: None }, CppParam { name: "positionOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "rotationOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr GameSnappable_SnapJointOffset(::GlobalNamespace::SnapJointType  jointType, ::UnityEngine::Vector3  positionOffset, ::UnityEngine::Vector3  rotationOffset) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1793};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field jointType, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::SnapJointType  jointType;

/// @brief Field positionOffset, offset: 0x4, size: 0xc, def value: None
 ::UnityEngine::Vector3  positionOffset;

/// @brief Field rotationOffset, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  rotationOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameSnappable_SnapJointOffset, jointType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSnappable_SnapJointOffset, positionOffset) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameSnappable_SnapJointOffset, rotationOffset) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameSnappable_SnapJointOffset) == 0x1c, "Size mismatch!");

} // namespace end def GlobalNamespace
