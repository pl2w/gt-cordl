#pragma once
// IWYU pragma private; include "GlobalNamespace/SerializableBSPNode_Axis.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SerializableBSPNode_Axis)
// Forward declare root types
namespace GlobalNamespace {
struct SerializableBSPNode_Axis;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SerializableBSPNode_Axis);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SerializableBSPNode_Axis, "", "SerializableBSPNode/Axis");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SerializableBSPNode/Axis
struct CORDL_TYPE SerializableBSPNode_Axis {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SerializableBSPNode_Axis_Unwrapped
enum struct __SerializableBSPNode_Axis_Unwrapped : int32_t {
__E_X = static_cast<int32_t>(0x0),
__E_Y = static_cast<int32_t>(0x1),
__E_Z = static_cast<int32_t>(0x2),
__E_MatrixChain = static_cast<int32_t>(0x3),
__E_MatrixFinal = static_cast<int32_t>(0x4),
__E_Zone = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SerializableBSPNode_Axis_Unwrapped () const noexcept {
return static_cast<__SerializableBSPNode_Axis_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SerializableBSPNode_Axis() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SerializableBSPNode_Axis(int32_t  value__) noexcept;

/// @brief Field MatrixChain value: I32(3)
static ::GlobalNamespace::SerializableBSPNode_Axis const MatrixChain;

/// @brief Field MatrixFinal value: I32(4)
static ::GlobalNamespace::SerializableBSPNode_Axis const MatrixFinal;

/// @brief Field X value: I32(0)
static ::GlobalNamespace::SerializableBSPNode_Axis const X;

/// @brief Field Y value: I32(1)
static ::GlobalNamespace::SerializableBSPNode_Axis const Y;

/// @brief Field Z value: I32(2)
static ::GlobalNamespace::SerializableBSPNode_Axis const Z;

/// @brief Field Zone value: I32(5)
static ::GlobalNamespace::SerializableBSPNode_Axis const Zone;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3737};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SerializableBSPNode_Axis, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SerializableBSPNode_Axis) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
