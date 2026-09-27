#pragma once
// IWYU pragma private; include "GlobalNamespace/VerletLine_LineNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(VerletLine_LineNode)
// Forward declare root types
namespace GlobalNamespace {
struct VerletLine_LineNode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VerletLine_LineNode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VerletLine_LineNode, "", "VerletLine/LineNode");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: VerletLine/LineNode
struct CORDL_TYPE VerletLine_LineNode {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr VerletLine_LineNode() ;

// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "acceleration", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr VerletLine_LineNode(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  lastPosition, ::UnityEngine::Vector3  acceleration) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2636};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field position, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  position;

/// @brief Field lastPosition, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  lastPosition;

/// @brief Field acceleration, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  acceleration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VerletLine_LineNode, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VerletLine_LineNode, lastPosition) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VerletLine_LineNode, acceleration) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VerletLine_LineNode) == 0x24, "Size mismatch!");

} // namespace end def GlobalNamespace
