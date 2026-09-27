#pragma once
// IWYU pragma private; include "GlobalNamespace/GestureHandNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GestureNode_def.hpp"
CORDL_MODULE_EXPORT(GestureHandNode)
// Forward declare root types
namespace GlobalNamespace {
class GestureHandNode;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GestureHandNode*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GestureHandNode*, "", "GestureHandNode");
// Dependencies GestureNode
namespace GlobalNamespace {
// Is value type: false
// CS Name: GestureHandNode
class CORDL_TYPE GestureHandNode : public ::GlobalNamespace::GestureNode {
public:
// Declarations
static inline ::GlobalNamespace::GestureHandNode* New_ctor() ;

/// @brief Method .ctor, addr 0x564ec90, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GestureHandNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GestureHandNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GestureHandNode(GestureHandNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GestureHandNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GestureHandNode(GestureHandNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{717};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GestureHandNode) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
