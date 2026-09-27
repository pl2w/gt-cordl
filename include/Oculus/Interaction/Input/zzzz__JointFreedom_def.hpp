#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/JointFreedom.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JointFreedom)
// Forward declare root types
namespace Oculus::Interaction::Input {
struct JointFreedom;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::Input::JointFreedom);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::JointFreedom, "Oculus.Interaction.Input", "JointFreedom");
// Dependencies 
namespace Oculus::Interaction::Input {
// Is value type: true
// CS Name: Oculus.Interaction.Input.JointFreedom
struct CORDL_TYPE JointFreedom {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __JointFreedom_Unwrapped
enum struct __JointFreedom_Unwrapped : int32_t {
__E_Free = static_cast<int32_t>(0x0),
__E_Constrained = static_cast<int32_t>(0x1),
__E_Locked = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __JointFreedom_Unwrapped () const noexcept {
return static_cast<__JointFreedom_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr JointFreedom() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr JointFreedom(int32_t  value__) noexcept;

/// @brief Field Constrained value: I32(1)
static ::Oculus::Interaction::Input::JointFreedom const Constrained;

/// @brief Field Free value: I32(0)
static ::Oculus::Interaction::Input::JointFreedom const Free;

/// @brief Field Locked value: I32(2)
static ::Oculus::Interaction::Input::JointFreedom const Locked;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16482};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::JointFreedom, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::JointFreedom) == 0x4, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
