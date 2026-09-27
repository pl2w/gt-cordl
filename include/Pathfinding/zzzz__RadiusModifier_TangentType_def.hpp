#pragma once
// IWYU pragma private; include "Pathfinding/RadiusModifier_TangentType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RadiusModifier_TangentType)
// Forward declare root types
namespace GlobalNamespace {
struct RadiusModifier_TangentType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RadiusModifier_TangentType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RadiusModifier_TangentType, "Pathfinding", "RadiusModifier/TangentType");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.RadiusModifier/TangentType
struct CORDL_TYPE RadiusModifier_TangentType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RadiusModifier_TangentType_Unwrapped
enum struct __RadiusModifier_TangentType_Unwrapped : int32_t {
__E_OuterRight = static_cast<int32_t>(0x1),
__E_InnerRightLeft = static_cast<int32_t>(0x2),
__E_InnerLeftRight = static_cast<int32_t>(0x4),
__E_OuterLeft = static_cast<int32_t>(0x8),
__E_Outer = static_cast<int32_t>(0x9),
__E_Inner = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RadiusModifier_TangentType_Unwrapped () const noexcept {
return static_cast<__RadiusModifier_TangentType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RadiusModifier_TangentType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RadiusModifier_TangentType(int32_t  value__) noexcept;

/// @brief Field Inner value: I32(6)
static ::GlobalNamespace::RadiusModifier_TangentType const Inner;

/// @brief Field InnerLeftRight value: I32(4)
static ::GlobalNamespace::RadiusModifier_TangentType const InnerLeftRight;

/// @brief Field InnerRightLeft value: I32(2)
static ::GlobalNamespace::RadiusModifier_TangentType const InnerRightLeft;

/// @brief Field Outer value: I32(9)
static ::GlobalNamespace::RadiusModifier_TangentType const Outer;

/// @brief Field OuterLeft value: I32(8)
static ::GlobalNamespace::RadiusModifier_TangentType const OuterLeft;

/// @brief Field OuterRight value: I32(1)
static ::GlobalNamespace::RadiusModifier_TangentType const OuterRight;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21367};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RadiusModifier_TangentType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RadiusModifier_TangentType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
