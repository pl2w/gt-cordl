#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/AutoHullPreset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AutoHullPreset)
// Forward declare root types
namespace Technie::PhysicsCreator {
struct AutoHullPreset;
}
// Write type traits
MARK_VAL_T(::Technie::PhysicsCreator::AutoHullPreset);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::AutoHullPreset, "Technie.PhysicsCreator", "AutoHullPreset");
// Dependencies 
namespace Technie::PhysicsCreator {
// Is value type: true
// CS Name: Technie.PhysicsCreator.AutoHullPreset
struct CORDL_TYPE AutoHullPreset {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AutoHullPreset_Unwrapped
enum struct __AutoHullPreset_Unwrapped : int32_t {
__E_Low = static_cast<int32_t>(0x0),
__E_Medium = static_cast<int32_t>(0x1),
__E_High = static_cast<int32_t>(0x2),
__E_Placebo = static_cast<int32_t>(0x3),
__E_Custom = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AutoHullPreset_Unwrapped () const noexcept {
return static_cast<__AutoHullPreset_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AutoHullPreset() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AutoHullPreset(int32_t  value__) noexcept;

/// @brief Field Custom value: I32(4)
static ::Technie::PhysicsCreator::AutoHullPreset const Custom;

/// @brief Field High value: I32(2)
static ::Technie::PhysicsCreator::AutoHullPreset const High;

/// @brief Field Low value: I32(0)
static ::Technie::PhysicsCreator::AutoHullPreset const Low;

/// @brief Field Medium value: I32(1)
static ::Technie::PhysicsCreator::AutoHullPreset const Medium;

/// @brief Field Placebo value: I32(3)
static ::Technie::PhysicsCreator::AutoHullPreset const Placebo;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30511};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Technie::PhysicsCreator::AutoHullPreset, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Technie::PhysicsCreator::AutoHullPreset) == 0x4, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator
