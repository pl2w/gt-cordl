#pragma once
// IWYU pragma private; include "Oculus/Interaction/GrabAPI/FingerRequirement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FingerRequirement)
// Forward declare root types
namespace Oculus::Interaction::GrabAPI {
struct FingerRequirement;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::GrabAPI::FingerRequirement);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::GrabAPI::FingerRequirement, "Oculus.Interaction.GrabAPI", "FingerRequirement");
// Dependencies 
namespace Oculus::Interaction::GrabAPI {
// Is value type: true
// CS Name: Oculus.Interaction.GrabAPI.FingerRequirement
struct CORDL_TYPE FingerRequirement {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FingerRequirement_Unwrapped
enum struct __FingerRequirement_Unwrapped : int32_t {
__E_Ignored = static_cast<int32_t>(0x0),
__E_Optional = static_cast<int32_t>(0x1),
__E_Required = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FingerRequirement_Unwrapped () const noexcept {
return static_cast<__FingerRequirement_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FingerRequirement() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FingerRequirement(int32_t  value__) noexcept;

/// @brief Field Ignored value: I32(0)
static ::Oculus::Interaction::GrabAPI::FingerRequirement const Ignored;

/// @brief Field Optional value: I32(1)
static ::Oculus::Interaction::GrabAPI::FingerRequirement const Optional;

/// @brief Field Required value: I32(2)
static ::Oculus::Interaction::GrabAPI::FingerRequirement const Required;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16428};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::GrabAPI::FingerRequirement, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::GrabAPI::FingerRequirement) == 0x4, "Size mismatch!");

} // namespace end def Oculus::Interaction::GrabAPI
