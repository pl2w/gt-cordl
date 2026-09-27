#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/SplineFollow_SplineNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(SplineFollow_SplineNode)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct SplineFollow_SplineNode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SplineFollow_SplineNode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SplineFollow_SplineNode, "GorillaLocomotion.Gameplay", "SplineFollow/SplineNode");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaLocomotion.Gameplay.SplineFollow/SplineNode
struct CORDL_TYPE SplineFollow_SplineNode {
public:
// Declarations
/// @brief Method Lerp, addr 0x5cf12ec, size 0x58, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SplineFollow_SplineNode Lerp(::GlobalNamespace::SplineFollow_SplineNode  a, ::GlobalNamespace::SplineFollow_SplineNode  b, float_t  t) ;

/// @brief Method .ctor, addr 0x5cf0e38, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  tangent, ::UnityEngine::Vector3  up) ;

// Ctor Parameters []
// @brief default ctor
constexpr SplineFollow_SplineNode() ;

// Ctor Parameters [CppParam { name: "Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Tangent", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Up", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr SplineFollow_SplineNode(::UnityEngine::Vector3  Position, ::UnityEngine::Vector3  Tangent, ::UnityEngine::Vector3  Up) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4538};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field Position, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  Position;

/// @brief Field Tangent, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  Tangent;

/// @brief Field Up, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  Up;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SplineFollow_SplineNode, Position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineFollow_SplineNode, Tangent) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SplineFollow_SplineNode, Up) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SplineFollow_SplineNode) == 0x24, "Size mismatch!");

} // namespace end def GlobalNamespace
