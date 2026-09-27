#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/BurstRopeNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BurstRopeNode)
// Forward declare root types
namespace GorillaLocomotion::Gameplay {
struct BurstRopeNode;
}
// Write type traits
MARK_VAL_T(::GorillaLocomotion::Gameplay::BurstRopeNode);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Gameplay::BurstRopeNode, "GorillaLocomotion.Gameplay", "BurstRopeNode");
// Dependencies UnityEngine.Vector3
namespace GorillaLocomotion::Gameplay {
// Is value type: true
// CS Name: GorillaLocomotion.Gameplay.BurstRopeNode
struct CORDL_TYPE BurstRopeNode {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BurstRopeNode() ;

// Ctor Parameters [CppParam { name: "lastPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "curPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr BurstRopeNode(::UnityEngine::Vector3  lastPos, ::UnityEngine::Vector3  curPos) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4525};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field lastPos, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  lastPos;

/// @brief Field curPos, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  curPos;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::Gameplay::BurstRopeNode, lastPos) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Gameplay::BurstRopeNode, curPos) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::Gameplay::BurstRopeNode) == 0x18, "Size mismatch!");

} // namespace end def GorillaLocomotion::Gameplay
