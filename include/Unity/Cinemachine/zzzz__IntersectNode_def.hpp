#pragma once
// IWYU pragma private; include "Unity/Cinemachine/IntersectNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__Point64_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(IntersectNode)
namespace Unity::Cinemachine {
class Active;
}
namespace Unity::Cinemachine {
struct Point64;
}
// Forward declare root types
namespace Unity::Cinemachine {
struct IntersectNode;
}
// Write type traits
MARK_VAL_T(::Unity::Cinemachine::IntersectNode);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::IntersectNode, "Unity.Cinemachine", "IntersectNode");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies Unity.Cinemachine.Point64
namespace Unity::Cinemachine {
// Is value type: true
// CS Name: Unity.Cinemachine.IntersectNode
struct CORDL_TYPE IntersectNode {
public:
// Declarations
/// @brief Method .ctor, addr 0xaeef320, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::Unity::Cinemachine::Point64  pt, ::Unity::Cinemachine::Active*  edge1, ::Unity::Cinemachine::Active*  edge2) ;

// Ctor Parameters []
// @brief default ctor
constexpr IntersectNode() ;

// Ctor Parameters [CppParam { name: "pt", ty: "::Unity::Cinemachine::Point64", modifiers: "", def_value: None, comment: None }, CppParam { name: "edge1", ty: "::Unity::Cinemachine::Active*", modifiers: "", def_value: None, comment: None }, CppParam { name: "edge2", ty: "::Unity::Cinemachine::Active*", modifiers: "", def_value: None, comment: None }]
constexpr IntersectNode(::Unity::Cinemachine::Point64  pt, ::Unity::Cinemachine::Active*  edge1, ::Unity::Cinemachine::Active*  edge2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22508};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field pt, offset: 0x0, size: 0x10, def value: None
 ::Unity::Cinemachine::Point64  pt;

/// @brief Field edge1, offset: 0x10, size: 0x8, def value: None
 ::Unity::Cinemachine::Active*  edge1;

/// @brief Field edge2, offset: 0x18, size: 0x8, def value: None
 ::Unity::Cinemachine::Active*  edge2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::IntersectNode, pt) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::IntersectNode, edge1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::IntersectNode, edge2) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::IntersectNode) == 0x20, "Size mismatch!");

} // namespace end def Unity::Cinemachine
