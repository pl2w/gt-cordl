#pragma once
// IWYU pragma private; include "Pathfinding/Connection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Connection)
namespace Pathfinding {
class GraphNode;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Pathfinding {
struct Connection;
}
// Write type traits
MARK_VAL_T(::Pathfinding::Connection);
DEFINE_IL2CPP_CLASS(::Pathfinding::Connection, "Pathfinding", "Connection");
// Dependencies 
namespace Pathfinding {
// Is value type: true
// CS Name: Pathfinding.Connection
struct CORDL_TYPE Connection {
public:
// Declarations
/// @brief Method Equals, addr 0x5e67770, size 0xa4, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0x5e67740, size 0x30, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method .ctor, addr 0x5e67710, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Pathfinding::GraphNode*  node, uint32_t  cost, uint8_t  shapeEdge) ;

// Ctor Parameters []
// @brief default ctor
constexpr Connection() ;

// Ctor Parameters [CppParam { name: "node", ty: "::Pathfinding::GraphNode*", modifiers: "", def_value: None, comment: None }, CppParam { name: "cost", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "shapeEdge", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr Connection(::Pathfinding::GraphNode*  node, uint32_t  cost, uint8_t  shapeEdge) noexcept;

/// @brief Field NoSharedEdge offset 0xffffffff size 0x1
static constexpr uint8_t  NoSharedEdge{static_cast<uint8_t>(0xffu)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21271};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field node, offset: 0x0, size: 0x8, def value: None
 ::Pathfinding::GraphNode*  node;

/// @brief Field cost, offset: 0x8, size: 0x4, def value: None
 uint32_t  cost;

/// @brief Field shapeEdge, offset: 0xc, size: 0x1, def value: None
 uint8_t  shapeEdge;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Connection, node) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Connection, cost) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Connection, shapeEdge) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Connection) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding
