#pragma once
// IWYU pragma private; include "GlobalNamespace/EvolvingCosmetic_SubscriptionAgeRule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EvolvingCosmetic_SubscriptionAgeRule)
// Forward declare root types
namespace GlobalNamespace {
struct EvolvingCosmetic_SubscriptionAgeRule;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EvolvingCosmetic_SubscriptionAgeRule);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EvolvingCosmetic_SubscriptionAgeRule, "", "EvolvingCosmetic/SubscriptionAgeRule");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: EvolvingCosmetic/SubscriptionAgeRule
struct CORDL_TYPE EvolvingCosmetic_SubscriptionAgeRule {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EvolvingCosmetic_SubscriptionAgeRule_Unwrapped
enum struct __EvolvingCosmetic_SubscriptionAgeRule_Unwrapped : int32_t {
__E_ItemAge = static_cast<int32_t>(0x0),
__E_MinItemSubscriptionAge = static_cast<int32_t>(0x1),
__E_SubscriptionAge = static_cast<int32_t>(0x2),
__E_MinItemSubscriptionAgeActive = static_cast<int32_t>(0x3),
__E_SubscriptionAgeActive = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EvolvingCosmetic_SubscriptionAgeRule_Unwrapped () const noexcept {
return static_cast<__EvolvingCosmetic_SubscriptionAgeRule_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EvolvingCosmetic_SubscriptionAgeRule() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EvolvingCosmetic_SubscriptionAgeRule(int32_t  value__) noexcept;

/// @brief Field ItemAge value: I32(0)
static ::GlobalNamespace::EvolvingCosmetic_SubscriptionAgeRule const ItemAge;

/// @brief Field MinItemSubscriptionAge value: I32(1)
static ::GlobalNamespace::EvolvingCosmetic_SubscriptionAgeRule const MinItemSubscriptionAge;

/// @brief Field MinItemSubscriptionAgeActive value: I32(3)
static ::GlobalNamespace::EvolvingCosmetic_SubscriptionAgeRule const MinItemSubscriptionAgeActive;

/// @brief Field SubscriptionAge value: I32(2)
static ::GlobalNamespace::EvolvingCosmetic_SubscriptionAgeRule const SubscriptionAge;

/// @brief Field SubscriptionAgeActive value: I32(4)
static ::GlobalNamespace::EvolvingCosmetic_SubscriptionAgeRule const SubscriptionAgeActive;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{158};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EvolvingCosmetic_SubscriptionAgeRule, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EvolvingCosmetic_SubscriptionAgeRule) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
