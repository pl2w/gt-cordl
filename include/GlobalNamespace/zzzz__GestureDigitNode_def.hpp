#pragma once
// IWYU pragma private; include "GlobalNamespace/GestureDigitNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GestureNode_def.hpp"
CORDL_MODULE_EXPORT(GestureDigitNode)
// Forward declare root types
namespace GlobalNamespace {
class GestureDigitNode;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GestureDigitNode*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GestureDigitNode*, "", "GestureDigitNode");
// Dependencies GestureNode
namespace GlobalNamespace {
// Is value type: false
// CS Name: GestureDigitNode
class CORDL_TYPE GestureDigitNode : public ::GlobalNamespace::GestureNode {
public:
// Declarations
static inline ::GlobalNamespace::GestureDigitNode* New_ctor() ;

/// @brief Method .ctor, addr 0x564eca0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GestureDigitNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GestureDigitNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GestureDigitNode(GestureDigitNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GestureDigitNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GestureDigitNode(GestureDigitNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{718};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GestureDigitNode) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
