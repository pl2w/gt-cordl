#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GameInstanceState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameInstanceState)
// Forward declare root types
namespace PlayFab::ClientModels {
struct GameInstanceState;
}
// Write type traits
MARK_VAL_T(::PlayFab::ClientModels::GameInstanceState);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GameInstanceState, "PlayFab.ClientModels", "GameInstanceState");
// Dependencies 
namespace PlayFab::ClientModels {
// Is value type: true
// CS Name: PlayFab.ClientModels.GameInstanceState
struct CORDL_TYPE GameInstanceState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GameInstanceState_Unwrapped
enum struct __GameInstanceState_Unwrapped : int32_t {
__E_Open = static_cast<int32_t>(0x0),
__E_Closed = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GameInstanceState_Unwrapped () const noexcept {
return static_cast<__GameInstanceState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GameInstanceState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GameInstanceState(int32_t  value__) noexcept;

/// @brief Field Closed value: I32(1)
static ::PlayFab::ClientModels::GameInstanceState const Closed;

/// @brief Field Open value: I32(0)
static ::PlayFab::ClientModels::GameInstanceState const Open;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20001};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GameInstanceState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GameInstanceState) == 0x4, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
