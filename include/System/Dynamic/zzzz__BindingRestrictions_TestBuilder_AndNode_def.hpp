#pragma once
// IWYU pragma private; include "System/Dynamic/BindingRestrictions_TestBuilder_AndNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BindingRestrictions_TestBuilder_AndNode)
namespace System::Linq::Expressions {
class Expression;
}
// Forward declare root types
namespace GlobalNamespace {
struct TestBuilder_BindingRestrictions_AndNode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TestBuilder_BindingRestrictions_AndNode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TestBuilder_BindingRestrictions_AndNode, "System.Dynamic", "BindingRestrictions/TestBuilder/AndNode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Dynamic.BindingRestrictions/TestBuilder/AndNode
struct CORDL_TYPE TestBuilder_BindingRestrictions_AndNode {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TestBuilder_BindingRestrictions_AndNode() ;

// Ctor Parameters [CppParam { name: "Depth", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Node", ty: "::System::Linq::Expressions::Expression*", modifiers: "", def_value: None, comment: None }]
constexpr TestBuilder_BindingRestrictions_AndNode(int32_t  Depth, ::System::Linq::Expressions::Expression*  Node) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24115};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Depth, offset: 0x0, size: 0x4, def value: None
 int32_t  Depth;

/// @brief Field Node, offset: 0x8, size: 0x8, def value: None
 ::System::Linq::Expressions::Expression*  Node;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TestBuilder_BindingRestrictions_AndNode, Depth) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TestBuilder_BindingRestrictions_AndNode, Node) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TestBuilder_BindingRestrictions_AndNode) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
