#pragma once
// IWYU pragma private; include "GorillaTagScripts/WhackAMole_GameResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WhackAMole_GameResult)
// Forward declare root types
namespace GlobalNamespace {
struct WhackAMole_GameResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WhackAMole_GameResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WhackAMole_GameResult, "GorillaTagScripts", "WhackAMole/GameResult");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.WhackAMole/GameResult
struct CORDL_TYPE WhackAMole_GameResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WhackAMole_GameResult_Unwrapped
enum struct __WhackAMole_GameResult_Unwrapped : int32_t {
__E_GameOver = static_cast<int32_t>(0x0),
__E_Win = static_cast<int32_t>(0x1),
__E_LevelComplete = static_cast<int32_t>(0x2),
__E_Unknown = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WhackAMole_GameResult_Unwrapped () const noexcept {
return static_cast<__WhackAMole_GameResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WhackAMole_GameResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr WhackAMole_GameResult(int32_t  value__) noexcept;

/// @brief Field GameOver value: I32(0)
static ::GlobalNamespace::WhackAMole_GameResult const GameOver;

/// @brief Field LevelComplete value: I32(2)
static ::GlobalNamespace::WhackAMole_GameResult const LevelComplete;

/// @brief Field Unknown value: I32(3)
static ::GlobalNamespace::WhackAMole_GameResult const Unknown;

/// @brief Field Win value: I32(1)
static ::GlobalNamespace::WhackAMole_GameResult const Win;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3910};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WhackAMole_GameResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WhackAMole_GameResult) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
