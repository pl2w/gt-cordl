#pragma once
// IWYU pragma private; include "Oculus/Interaction/GrabAPI/FingerUnselectMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FingerUnselectMode)
// Forward declare root types
namespace Oculus::Interaction::GrabAPI {
struct FingerUnselectMode;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::GrabAPI::FingerUnselectMode);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::GrabAPI::FingerUnselectMode, "Oculus.Interaction.GrabAPI", "FingerUnselectMode");
// Dependencies 
namespace Oculus::Interaction::GrabAPI {
// Is value type: true
// CS Name: Oculus.Interaction.GrabAPI.FingerUnselectMode
struct CORDL_TYPE FingerUnselectMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FingerUnselectMode_Unwrapped
enum struct __FingerUnselectMode_Unwrapped : int32_t {
__E_AllReleased = static_cast<int32_t>(0x0),
__E_AnyReleased = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FingerUnselectMode_Unwrapped () const noexcept {
return static_cast<__FingerUnselectMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FingerUnselectMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FingerUnselectMode(int32_t  value__) noexcept;

/// @brief Field AllReleased value: I32(0)
static ::Oculus::Interaction::GrabAPI::FingerUnselectMode const AllReleased;

/// @brief Field AnyReleased value: I32(1)
static ::Oculus::Interaction::GrabAPI::FingerUnselectMode const AnyReleased;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16429};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::GrabAPI::FingerUnselectMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::GrabAPI::FingerUnselectMode) == 0x4, "Size mismatch!");

} // namespace end def Oculus::Interaction::GrabAPI
