#pragma once
// IWYU pragma private; include "System/Data/RBTree`1_Node.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__RBTree`1_NodeColor_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RBTree`1_Node)
// Forward declare root types
namespace GlobalNamespace {
template<typename K>
struct RBTree_1_Node;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::RBTree_1_Node);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::RBTree_1_Node, "System.Data", "RBTree`1/Node");
// Dependencies System.Data.RBTree`1::NodeColor<K>
namespace GlobalNamespace {
// cpp template
template<typename K>
// Is value type: true
// CS Name: System.Data.RBTree`1/Node<K>
struct CORDL_TYPE RBTree_1_Node {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RBTree_1_Node() ;

// Ctor Parameters [CppParam { name: "_selfId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_leftId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_rightId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_parentId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_nextId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_subTreeSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_keyOfNode", ty: "K", modifiers: "", def_value: None, comment: None }, CppParam { name: "_nodeColor", ty: "::GlobalNamespace::RBTree_1_NodeColor<K>", modifiers: "", def_value: None, comment: None }]
constexpr RBTree_1_Node(int32_t  _selfId, int32_t  _leftId, int32_t  _rightId, int32_t  _parentId, int32_t  _nextId, int32_t  _subTreeSize, K  _keyOfNode, ::GlobalNamespace::RBTree_1_NodeColor<K>  _nodeColor) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21043};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field _selfId, offset: 0x0, size: 0x4, def value: None
 int32_t  _selfId;

/// @brief Field _leftId, offset: 0x4, size: 0x4, def value: None
 int32_t  _leftId;

/// @brief Field _rightId, offset: 0x8, size: 0x4, def value: None
 int32_t  _rightId;

/// @brief Field _parentId, offset: 0xc, size: 0x4, def value: None
 int32_t  _parentId;

/// @brief Field _nextId, offset: 0x10, size: 0x4, def value: None
 int32_t  _nextId;

/// @brief Field _subTreeSize, offset: 0x14, size: 0x4, def value: None
 int32_t  _subTreeSize;

/// @brief Field _keyOfNode, offset: 0x18, size: 0x8, def value: None
 K  _keyOfNode;

/// @brief Field _nodeColor, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::RBTree_1_NodeColor<K>  _nodeColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
