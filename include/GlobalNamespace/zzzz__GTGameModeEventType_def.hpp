#pragma once
// IWYU pragma private; include "GlobalNamespace/GTGameModeEventType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTGameModeEventType)
// Forward declare root types
namespace GlobalNamespace {
struct GTGameModeEventType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTGameModeEventType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTGameModeEventType, "", "GTGameModeEventType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GTGameModeEventType
struct CORDL_TYPE GTGameModeEventType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GTGameModeEventType_Unwrapped
enum struct __GTGameModeEventType_Unwrapped : int32_t {
__E_game_mode_start = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GTGameModeEventType_Unwrapped () const noexcept {
return static_cast<__GTGameModeEventType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GTGameModeEventType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GTGameModeEventType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2266};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field game_mode_start value: I32(0)
static ::GlobalNamespace::GTGameModeEventType const game_mode_start;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTGameModeEventType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTGameModeEventType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
