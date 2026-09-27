#pragma once
// IWYU pragma private; include "PlayFab/PlayFabLogLevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayFabLogLevel)
// Forward declare root types
namespace PlayFab {
struct PlayFabLogLevel;
}
// Write type traits
MARK_VAL_T(::PlayFab::PlayFabLogLevel);
DEFINE_IL2CPP_CLASS(::PlayFab::PlayFabLogLevel, "PlayFab", "PlayFabLogLevel");
// [Flags]
// Dependencies 
namespace PlayFab {
// Is value type: true
// CS Name: PlayFab.PlayFabLogLevel
struct CORDL_TYPE PlayFabLogLevel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PlayFabLogLevel_Unwrapped
enum struct __PlayFabLogLevel_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Debug = static_cast<int32_t>(0x1),
__E_Info = static_cast<int32_t>(0x2),
__E_Warning = static_cast<int32_t>(0x4),
__E_Error = static_cast<int32_t>(0x8),
__E_All = static_cast<int32_t>(0xf),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlayFabLogLevel_Unwrapped () const noexcept {
return static_cast<__PlayFabLogLevel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PlayFabLogLevel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PlayFabLogLevel(int32_t  value__) noexcept;

/// @brief Field All value: I32(15)
static ::PlayFab::PlayFabLogLevel const All;

/// @brief Field Debug value: I32(1)
static ::PlayFab::PlayFabLogLevel const Debug;

/// @brief Field Error value: I32(8)
static ::PlayFab::PlayFabLogLevel const Error;

/// @brief Field Info value: I32(2)
static ::PlayFab::PlayFabLogLevel const Info;

/// @brief Field None value: I32(0)
static ::PlayFab::PlayFabLogLevel const None;

/// @brief Field Warning value: I32(4)
static ::PlayFab::PlayFabLogLevel const Warning;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19522};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::PlayFabLogLevel, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::PlayFab::PlayFabLogLevel) == 0x4, "Size mismatch!");

} // namespace end def PlayFab
