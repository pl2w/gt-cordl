#pragma once
// IWYU pragma private; include "GlobalNamespace/ApplyMaterialProperty_SuportedTypes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ApplyMaterialProperty_SuportedTypes)
// Forward declare root types
namespace GlobalNamespace {
struct ApplyMaterialProperty_SuportedTypes;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ApplyMaterialProperty_SuportedTypes);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ApplyMaterialProperty_SuportedTypes, "", "ApplyMaterialProperty/SuportedTypes");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ApplyMaterialProperty/SuportedTypes
struct CORDL_TYPE ApplyMaterialProperty_SuportedTypes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ApplyMaterialProperty_SuportedTypes_Unwrapped
enum struct __ApplyMaterialProperty_SuportedTypes_Unwrapped : int32_t {
__E_Color = static_cast<int32_t>(0x0),
__E_Float = static_cast<int32_t>(0x1),
__E_Vector2 = static_cast<int32_t>(0x2),
__E_Vector3 = static_cast<int32_t>(0x3),
__E_Vector4 = static_cast<int32_t>(0x4),
__E_Texture2D = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ApplyMaterialProperty_SuportedTypes_Unwrapped () const noexcept {
return static_cast<__ApplyMaterialProperty_SuportedTypes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ApplyMaterialProperty_SuportedTypes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ApplyMaterialProperty_SuportedTypes(int32_t  value__) noexcept;

/// @brief Field Color value: I32(0)
static ::GlobalNamespace::ApplyMaterialProperty_SuportedTypes const Color;

/// @brief Field Float value: I32(1)
static ::GlobalNamespace::ApplyMaterialProperty_SuportedTypes const Float;

/// @brief Field Texture2D value: I32(5)
static ::GlobalNamespace::ApplyMaterialProperty_SuportedTypes const Texture2D;

/// @brief Field Vector2 value: I32(2)
static ::GlobalNamespace::ApplyMaterialProperty_SuportedTypes const Vector2;

/// @brief Field Vector3 value: I32(3)
static ::GlobalNamespace::ApplyMaterialProperty_SuportedTypes const Vector3;

/// @brief Field Vector4 value: I32(4)
static ::GlobalNamespace::ApplyMaterialProperty_SuportedTypes const Vector4;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{678};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ApplyMaterialProperty_SuportedTypes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ApplyMaterialProperty_SuportedTypes) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
