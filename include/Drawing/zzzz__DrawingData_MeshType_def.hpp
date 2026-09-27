#pragma once
// IWYU pragma private; include "Drawing/DrawingData_MeshType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawingData_MeshType)
// Forward declare root types
namespace GlobalNamespace {
struct DrawingData_MeshType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DrawingData_MeshType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DrawingData_MeshType, "Drawing", "DrawingData/MeshType");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.DrawingData/MeshType
struct CORDL_TYPE DrawingData_MeshType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DrawingData_MeshType_Unwrapped
enum struct __DrawingData_MeshType_Unwrapped : int32_t {
__E_Solid = static_cast<int32_t>(0x1),
__E_Lines = static_cast<int32_t>(0x2),
__E_Text = static_cast<int32_t>(0x4),
__E_Custom = static_cast<int32_t>(0x8),
__E_Pool = static_cast<int32_t>(0x10),
__E_BaseType = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DrawingData_MeshType_Unwrapped () const noexcept {
return static_cast<__DrawingData_MeshType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DrawingData_MeshType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DrawingData_MeshType(int32_t  value__) noexcept;

/// @brief Field BaseType value: I32(7)
static ::GlobalNamespace::DrawingData_MeshType const BaseType;

/// @brief Field Custom value: I32(8)
static ::GlobalNamespace::DrawingData_MeshType const Custom;

/// @brief Field Lines value: I32(2)
static ::GlobalNamespace::DrawingData_MeshType const Lines;

/// @brief Field Pool value: I32(16)
static ::GlobalNamespace::DrawingData_MeshType const Pool;

/// @brief Field Solid value: I32(1)
static ::GlobalNamespace::DrawingData_MeshType const Solid;

/// @brief Field Text value: I32(4)
static ::GlobalNamespace::DrawingData_MeshType const Text;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27745};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DrawingData_MeshType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DrawingData_MeshType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
