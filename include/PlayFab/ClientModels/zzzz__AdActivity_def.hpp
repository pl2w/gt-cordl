#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/AdActivity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AdActivity)
// Forward declare root types
namespace PlayFab::ClientModels {
struct AdActivity;
}
// Write type traits
MARK_VAL_T(::PlayFab::ClientModels::AdActivity);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::AdActivity, "PlayFab.ClientModels", "AdActivity");
// Dependencies 
namespace PlayFab::ClientModels {
// Is value type: true
// CS Name: PlayFab.ClientModels.AdActivity
struct CORDL_TYPE AdActivity {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AdActivity_Unwrapped
enum struct __AdActivity_Unwrapped : int32_t {
__E_Opened = static_cast<int32_t>(0x0),
__E_Closed = static_cast<int32_t>(0x1),
__E_Start = static_cast<int32_t>(0x2),
__E_End = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AdActivity_Unwrapped () const noexcept {
return static_cast<__AdActivity_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AdActivity() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AdActivity(int32_t  value__) noexcept;

/// @brief Field Closed value: I32(1)
static ::PlayFab::ClientModels::AdActivity const Closed;

/// @brief Field End value: I32(3)
static ::PlayFab::ClientModels::AdActivity const End;

/// @brief Field Opened value: I32(0)
static ::PlayFab::ClientModels::AdActivity const Opened;

/// @brief Field Start value: I32(2)
static ::PlayFab::ClientModels::AdActivity const Start;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19939};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::AdActivity, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::AdActivity) == 0x4, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
