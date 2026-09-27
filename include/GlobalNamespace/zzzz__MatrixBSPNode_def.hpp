#pragma once
// IWYU pragma private; include "GlobalNamespace/MatrixBSPNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MatrixBSPNode)
// Forward declare root types
namespace GlobalNamespace {
struct MatrixBSPNode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MatrixBSPNode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MatrixBSPNode, "", "MatrixBSPNode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MatrixBSPNode
struct CORDL_TYPE MatrixBSPNode {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MatrixBSPNode() ;

// Ctor Parameters [CppParam { name: "matrixIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "outsideChildIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MatrixBSPNode(int32_t  matrixIndex, int32_t  outsideChildIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3735};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [SerializeField]
/// @brief Field matrixIndex, offset: 0x0, size: 0x4, def value: None
 int32_t  matrixIndex;

/// [SerializeField]
/// @brief Field outsideChildIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  outsideChildIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MatrixBSPNode, matrixIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MatrixBSPNode, outsideChildIndex) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MatrixBSPNode) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
