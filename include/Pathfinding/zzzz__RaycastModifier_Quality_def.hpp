#pragma once
// IWYU pragma private; include "Pathfinding/RaycastModifier_Quality.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RaycastModifier_Quality)
// Forward declare root types
namespace GlobalNamespace {
struct RaycastModifier_Quality;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RaycastModifier_Quality);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RaycastModifier_Quality, "Pathfinding", "RaycastModifier/Quality");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.RaycastModifier/Quality
struct CORDL_TYPE RaycastModifier_Quality {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RaycastModifier_Quality_Unwrapped
enum struct __RaycastModifier_Quality_Unwrapped : int32_t {
__E_Low = static_cast<int32_t>(0x0),
__E_Medium = static_cast<int32_t>(0x1),
__E_High = static_cast<int32_t>(0x2),
__E_Highest = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RaycastModifier_Quality_Unwrapped () const noexcept {
return static_cast<__RaycastModifier_Quality_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RaycastModifier_Quality() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RaycastModifier_Quality(int32_t  value__) noexcept;

/// @brief Field High value: I32(2)
static ::GlobalNamespace::RaycastModifier_Quality const High;

/// @brief Field Highest value: I32(3)
static ::GlobalNamespace::RaycastModifier_Quality const Highest;

/// @brief Field Low value: I32(0)
static ::GlobalNamespace::RaycastModifier_Quality const Low;

/// @brief Field Medium value: I32(1)
static ::GlobalNamespace::RaycastModifier_Quality const Medium;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21369};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RaycastModifier_Quality, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RaycastModifier_Quality) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
