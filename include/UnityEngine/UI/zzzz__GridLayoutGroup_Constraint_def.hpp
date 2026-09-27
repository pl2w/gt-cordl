#pragma once
// IWYU pragma private; include "UnityEngine/UI/GridLayoutGroup_Constraint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GridLayoutGroup_Constraint)
// Forward declare root types
namespace GlobalNamespace {
struct GridLayoutGroup_Constraint;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GridLayoutGroup_Constraint);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GridLayoutGroup_Constraint, "UnityEngine.UI", "GridLayoutGroup/Constraint");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UI.GridLayoutGroup/Constraint
struct CORDL_TYPE GridLayoutGroup_Constraint {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GridLayoutGroup_Constraint_Unwrapped
enum struct __GridLayoutGroup_Constraint_Unwrapped : int32_t {
__E_Flexible = static_cast<int32_t>(0x0),
__E_FixedColumnCount = static_cast<int32_t>(0x1),
__E_FixedRowCount = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GridLayoutGroup_Constraint_Unwrapped () const noexcept {
return static_cast<__GridLayoutGroup_Constraint_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GridLayoutGroup_Constraint() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GridLayoutGroup_Constraint(int32_t  value__) noexcept;

/// @brief Field FixedColumnCount value: I32(1)
static ::GlobalNamespace::GridLayoutGroup_Constraint const FixedColumnCount;

/// @brief Field FixedRowCount value: I32(2)
static ::GlobalNamespace::GridLayoutGroup_Constraint const FixedRowCount;

/// @brief Field Flexible value: I32(0)
static ::GlobalNamespace::GridLayoutGroup_Constraint const Flexible;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26058};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GridLayoutGroup_Constraint, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GridLayoutGroup_Constraint) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
