#pragma once
// IWYU pragma private; include "System/Data/RBTree`1_NodePath.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RBTree`1_NodePath)
// Forward declare root types
namespace GlobalNamespace {
template<typename K>
struct RBTree_1_NodePath;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::RBTree_1_NodePath);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::RBTree_1_NodePath, "System.Data", "RBTree`1/NodePath");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename K>
// Is value type: true
// CS Name: System.Data.RBTree`1/NodePath<K>
struct CORDL_TYPE RBTree_1_NodePath {
public:
// Declarations
/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  nodeID, int32_t  mainTreeNodeID) ;

// Ctor Parameters []
// @brief default ctor
constexpr RBTree_1_NodePath() ;

// Ctor Parameters [CppParam { name: "_nodeID", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_mainTreeNodeID", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RBTree_1_NodePath(int32_t  _nodeID, int32_t  _mainTreeNodeID) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21044};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _nodeID, offset: 0x0, size: 0x4, def value: None
 int32_t  _nodeID;

/// @brief Field _mainTreeNodeID, offset: 0x4, size: 0x4, def value: None
 int32_t  _mainTreeNodeID;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
