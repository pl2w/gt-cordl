#pragma once
// IWYU pragma private; include "Oculus/Interaction/ActiveStateGroup_ActiveStateGroupLogicOperator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ActiveStateGroup_ActiveStateGroupLogicOperator)
// Forward declare root types
namespace GlobalNamespace {
struct ActiveStateGroup_ActiveStateGroupLogicOperator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ActiveStateGroup_ActiveStateGroupLogicOperator);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ActiveStateGroup_ActiveStateGroupLogicOperator, "Oculus.Interaction", "ActiveStateGroup/ActiveStateGroupLogicOperator");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.ActiveStateGroup/ActiveStateGroupLogicOperator
struct CORDL_TYPE ActiveStateGroup_ActiveStateGroupLogicOperator {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ActiveStateGroup_ActiveStateGroupLogicOperator_Unwrapped
enum struct __ActiveStateGroup_ActiveStateGroupLogicOperator_Unwrapped : int32_t {
__E_AND = static_cast<int32_t>(0x0),
__E_OR = static_cast<int32_t>(0x1),
__E_XOR = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ActiveStateGroup_ActiveStateGroupLogicOperator_Unwrapped () const noexcept {
return static_cast<__ActiveStateGroup_ActiveStateGroupLogicOperator_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ActiveStateGroup_ActiveStateGroupLogicOperator() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ActiveStateGroup_ActiveStateGroupLogicOperator(int32_t  value__) noexcept;

/// @brief Field AND value: I32(0)
static ::GlobalNamespace::ActiveStateGroup_ActiveStateGroupLogicOperator const AND;

/// @brief Field OR value: I32(1)
static ::GlobalNamespace::ActiveStateGroup_ActiveStateGroupLogicOperator const OR;

/// @brief Field XOR value: I32(2)
static ::GlobalNamespace::ActiveStateGroup_ActiveStateGroupLogicOperator const XOR;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15725};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ActiveStateGroup_ActiveStateGroupLogicOperator, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ActiveStateGroup_ActiveStateGroupLogicOperator) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
