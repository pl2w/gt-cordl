#pragma once
// IWYU pragma private; include "Pathfinding/NNInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NNInfo)
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
struct NNInfoInternal;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
struct NNInfo;
}
// Write type traits
MARK_VAL_T(::Pathfinding::NNInfo);
DEFINE_IL2CPP_CLASS(::Pathfinding::NNInfo, "Pathfinding", "NNInfo");
// Dependencies UnityEngine.Vector3
namespace Pathfinding {
// Is value type: true
// CS Name: Pathfinding.NNInfo
struct CORDL_TYPE NNInfo {
public:
// Declarations
/// @brief [Obsolete("This field has been renamed to \'position\'")]
 __declspec(property(get=get_clampedPosition)) ::UnityEngine::Vector3  clampedPosition;

/// @brief Method .ctor, addr 0x5e48474, size 0x48, virtual false, abstract: false, final false
inline void _ctor(::Pathfinding::NNInfoInternal  internalInfo) ;

/// @brief Method get_clampedPosition, addr 0x5e48468, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_clampedPosition() ;

/// @brief Method op_Explicit, addr 0x5e484c8, size 0x8, virtual false, abstract: false, final false
static inline ::Pathfinding::GraphNode* op_Explicit___Pathfinding__GraphNode_(::Pathfinding::NNInfo  ob) ;

/// @brief Method op_Explicit, addr 0x5e484bc, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 op_Explicit___UnityEngine__Vector3(::Pathfinding::NNInfo  ob) ;

// Ctor Parameters []
// @brief default ctor
constexpr NNInfo() ;

// Ctor Parameters [CppParam { name: "node", ty: "::Pathfinding::GraphNode*", modifiers: "", def_value: None, comment: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr NNInfo(::Pathfinding::GraphNode*  node, ::UnityEngine::Vector3  position) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21194};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field node, offset: 0x0, size: 0x8, def value: None
 ::Pathfinding::GraphNode*  node;

/// @brief Field position, offset: 0x8, size: 0xc, def value: None
 ::UnityEngine::Vector3  position;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::NNInfo, node) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NNInfo, position) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::NNInfo) == 0x18, "Size mismatch!");

} // namespace end def Pathfinding
