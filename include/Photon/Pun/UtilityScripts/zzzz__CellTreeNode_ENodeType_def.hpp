#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/CellTreeNode_ENodeType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CellTreeNode_ENodeType)
// Forward declare root types
namespace GlobalNamespace {
struct CellTreeNode_ENodeType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CellTreeNode_ENodeType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CellTreeNode_ENodeType, "Photon.Pun.UtilityScripts", "CellTreeNode/ENodeType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Photon.Pun.UtilityScripts.CellTreeNode/ENodeType
struct CORDL_TYPE CellTreeNode_ENodeType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __CellTreeNode_ENodeType_Unwrapped
enum struct __CellTreeNode_ENodeType_Unwrapped : uint8_t {
__E_Root = static_cast<uint8_t>(0x0u),
__E_Node = static_cast<uint8_t>(0x1u),
__E_Leaf = static_cast<uint8_t>(0x2u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CellTreeNode_ENodeType_Unwrapped () const noexcept {
return static_cast<__CellTreeNode_ENodeType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CellTreeNode_ENodeType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr CellTreeNode_ENodeType(uint8_t  value__) noexcept;

/// @brief Field Leaf value: U8(2)
static ::GlobalNamespace::CellTreeNode_ENodeType const Leaf;

/// @brief Field Node value: U8(1)
static ::GlobalNamespace::CellTreeNode_ENodeType const Node;

/// @brief Field Root value: U8(0)
static ::GlobalNamespace::CellTreeNode_ENodeType const Root;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31202};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CellTreeNode_ENodeType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CellTreeNode_ENodeType) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
