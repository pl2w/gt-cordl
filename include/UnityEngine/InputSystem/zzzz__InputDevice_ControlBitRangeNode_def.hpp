#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputDevice_ControlBitRangeNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputDevice_ControlBitRangeNode)
// Forward declare root types
namespace GlobalNamespace {
struct InputDevice_ControlBitRangeNode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputDevice_ControlBitRangeNode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputDevice_ControlBitRangeNode, "UnityEngine.InputSystem", "InputDevice/ControlBitRangeNode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputDevice/ControlBitRangeNode
#pragma pack(push, 1)
struct CORDL_TYPE InputDevice_ControlBitRangeNode {
public:
// Declarations
/// @brief Method .ctor, addr 0xaf5d2c8, size 0x14, virtual false, abstract: false, final false
inline void _ctor(uint16_t  endOffset) ;

// Ctor Parameters []
// @brief default ctor
constexpr InputDevice_ControlBitRangeNode() ;

// Ctor Parameters [CppParam { name: "endBitOffset", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "leftChildIndex", ty: "int16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "controlStartIndex", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "controlCount", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr InputDevice_ControlBitRangeNode(uint16_t  endBitOffset, int16_t  leftChildIndex, uint16_t  controlStartIndex, uint8_t  controlCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13450};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x7};

/// @brief Field endBitOffset, offset: 0x0, size: 0x2, def value: None
 uint16_t  endBitOffset;

/// @brief Field leftChildIndex, offset: 0x2, size: 0x2, def value: None
 int16_t  leftChildIndex;

/// @brief Field controlStartIndex, offset: 0x4, size: 0x2, def value: None
 uint16_t  controlStartIndex;

/// @brief Field controlCount, offset: 0x6, size: 0x1, def value: None
 uint8_t  controlCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputDevice_ControlBitRangeNode, endBitOffset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputDevice_ControlBitRangeNode, leftChildIndex) == 0x2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputDevice_ControlBitRangeNode, controlStartIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputDevice_ControlBitRangeNode, controlCount) == 0x6, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputDevice_ControlBitRangeNode) == 0x7, "Size mismatch!");

} // namespace end def GlobalNamespace
