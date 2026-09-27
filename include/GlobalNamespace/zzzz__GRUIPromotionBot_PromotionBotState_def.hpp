#pragma once
// IWYU pragma private; include "GlobalNamespace/GRUIPromotionBot_PromotionBotState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRUIPromotionBot_PromotionBotState)
// Forward declare root types
namespace GlobalNamespace {
struct GRUIPromotionBot_PromotionBotState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRUIPromotionBot_PromotionBotState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRUIPromotionBot_PromotionBotState, "", "GRUIPromotionBot/PromotionBotState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRUIPromotionBot/PromotionBotState
struct CORDL_TYPE GRUIPromotionBot_PromotionBotState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GRUIPromotionBot_PromotionBotState_Unwrapped
enum struct __GRUIPromotionBot_PromotionBotState_Unwrapped : int32_t {
__E_WaitingForLogin = static_cast<int32_t>(0x0),
__E_ChoosePromotion = static_cast<int32_t>(0x1),
__E_ChooseCreditIncrease = static_cast<int32_t>(0x2),
__E_ChoosePurchaseCredits = static_cast<int32_t>(0x3),
__E_ConfirmPurchaseCredits = static_cast<int32_t>(0x4),
__E_CelebratePromotion = static_cast<int32_t>(0x5),
__E_TryingLogIn = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GRUIPromotionBot_PromotionBotState_Unwrapped () const noexcept {
return static_cast<__GRUIPromotionBot_PromotionBotState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GRUIPromotionBot_PromotionBotState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GRUIPromotionBot_PromotionBotState(int32_t  value__) noexcept;

/// @brief Field CelebratePromotion value: I32(5)
static ::GlobalNamespace::GRUIPromotionBot_PromotionBotState const CelebratePromotion;

/// @brief Field ChooseCreditIncrease value: I32(2)
static ::GlobalNamespace::GRUIPromotionBot_PromotionBotState const ChooseCreditIncrease;

/// @brief Field ChoosePromotion value: I32(1)
static ::GlobalNamespace::GRUIPromotionBot_PromotionBotState const ChoosePromotion;

/// @brief Field ChoosePurchaseCredits value: I32(3)
static ::GlobalNamespace::GRUIPromotionBot_PromotionBotState const ChoosePurchaseCredits;

/// @brief Field ConfirmPurchaseCredits value: I32(4)
static ::GlobalNamespace::GRUIPromotionBot_PromotionBotState const ConfirmPurchaseCredits;

/// @brief Field TryingLogIn value: I32(6)
static ::GlobalNamespace::GRUIPromotionBot_PromotionBotState const TryingLogIn;

/// @brief Field WaitingForLogin value: I32(0)
static ::GlobalNamespace::GRUIPromotionBot_PromotionBotState const WaitingForLogin;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2101};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRUIPromotionBot_PromotionBotState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRUIPromotionBot_PromotionBotState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
