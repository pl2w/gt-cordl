#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/OsPlatform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OsPlatform)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
struct OsPlatform;
}
// Write type traits
MARK_VAL_T(::PlayFab::MultiplayerModels::OsPlatform);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::OsPlatform, "PlayFab.MultiplayerModels", "OsPlatform");
// Dependencies 
namespace PlayFab::MultiplayerModels {
// Is value type: true
// CS Name: PlayFab.MultiplayerModels.OsPlatform
struct CORDL_TYPE OsPlatform {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OsPlatform_Unwrapped
enum struct __OsPlatform_Unwrapped : int32_t {
__E_Windows = static_cast<int32_t>(0x0),
__E_Linux = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OsPlatform_Unwrapped () const noexcept {
return static_cast<__OsPlatform_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OsPlatform() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OsPlatform(int32_t  value__) noexcept;

/// @brief Field Linux value: I32(1)
static ::PlayFab::MultiplayerModels::OsPlatform const Linux;

/// @brief Field Windows value: I32(0)
static ::PlayFab::MultiplayerModels::OsPlatform const Windows;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19717};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::OsPlatform, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::OsPlatform) == 0x4, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
