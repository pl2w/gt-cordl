#pragma once
// IWYU pragma private; include "GlobalNamespace/SerializableBSPNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SerializableBSPNode_Axis_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SerializableBSPNode)
namespace GlobalNamespace {
struct SerializableBSPNode_Axis;
}
// Forward declare root types
namespace GlobalNamespace {
struct SerializableBSPNode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SerializableBSPNode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SerializableBSPNode, "", "SerializableBSPNode");
// Dependencies SerializableBSPNode::Axis
namespace GlobalNamespace {
// Is value type: true
// CS Name: SerializableBSPNode
struct CORDL_TYPE SerializableBSPNode {
public:
// Declarations
using Axis = ::GlobalNamespace::SerializableBSPNode_Axis;

 __declspec(property(get=get_matrixIndex)) int32_t  matrixIndex;

 __declspec(property(get=get_outsideChildIndex)) int32_t  outsideChildIndex;

 __declspec(property(get=get_zoneIndex)) int32_t  zoneIndex;

/// @brief Method get_matrixIndex, addr 0x5b49b5c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_matrixIndex() ;

/// @brief Method get_outsideChildIndex, addr 0x5b49b64, size 0x8, virtual false, abstract: false, final false
inline int32_t get_outsideChildIndex() ;

/// @brief Method get_zoneIndex, addr 0x5b49b6c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_zoneIndex() ;

// Ctor Parameters []
// @brief default ctor
constexpr SerializableBSPNode() ;

// Ctor Parameters [CppParam { name: "axis", ty: "::GlobalNamespace::SerializableBSPNode_Axis", modifiers: "", def_value: None, comment: None }, CppParam { name: "splitValue", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "leftChildIndex", ty: "int16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "rightChildIndex", ty: "int16_t", modifiers: "", def_value: None, comment: None }]
constexpr SerializableBSPNode(::GlobalNamespace::SerializableBSPNode_Axis  axis, float_t  splitValue, int16_t  leftChildIndex, int16_t  rightChildIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3738};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// [SerializeField]
/// @brief Field axis, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::SerializableBSPNode_Axis  axis;

/// [SerializeField]
/// @brief Field splitValue, offset: 0x4, size: 0x4, def value: None
 float_t  splitValue;

/// [SerializeField]
/// @brief Field leftChildIndex, offset: 0x8, size: 0x2, def value: None
 int16_t  leftChildIndex;

/// [SerializeField]
/// @brief Field rightChildIndex, offset: 0xa, size: 0x2, def value: None
 int16_t  rightChildIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SerializableBSPNode, axis) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SerializableBSPNode, splitValue) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SerializableBSPNode, leftChildIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SerializableBSPNode, rightChildIndex) == 0xa, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SerializableBSPNode) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
