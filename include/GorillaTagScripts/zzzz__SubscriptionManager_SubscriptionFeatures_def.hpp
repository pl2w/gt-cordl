#pragma once
// IWYU pragma private; include "GorillaTagScripts/SubscriptionManager_SubscriptionFeatures.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SubscriptionManager_SubscriptionFeatures)
// Forward declare root types
namespace GlobalNamespace {
struct SubscriptionManager_SubscriptionFeatures;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SubscriptionManager_SubscriptionFeatures);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SubscriptionManager_SubscriptionFeatures, "GorillaTagScripts", "SubscriptionManager/SubscriptionFeatures");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.SubscriptionManager/SubscriptionFeatures
struct CORDL_TYPE SubscriptionManager_SubscriptionFeatures {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SubscriptionManager_SubscriptionFeatures_Unwrapped
enum struct __SubscriptionManager_SubscriptionFeatures_Unwrapped : int32_t {
__E_GoldenName = static_cast<int32_t>(0x0),
__E_IOBT = static_cast<int32_t>(0x1),
__E_HandTracking = static_cast<int32_t>(0x2),
__E_SubscriptionFeatureCount = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SubscriptionManager_SubscriptionFeatures_Unwrapped () const noexcept {
return static_cast<__SubscriptionManager_SubscriptionFeatures_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SubscriptionManager_SubscriptionFeatures() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SubscriptionManager_SubscriptionFeatures(int32_t  value__) noexcept;

/// @brief Field GoldenName value: I32(0)
static ::GlobalNamespace::SubscriptionManager_SubscriptionFeatures const GoldenName;

/// @brief Field HandTracking value: I32(2)
static ::GlobalNamespace::SubscriptionManager_SubscriptionFeatures const HandTracking;

/// @brief Field IOBT value: I32(1)
static ::GlobalNamespace::SubscriptionManager_SubscriptionFeatures const IOBT;

/// @brief Field SubscriptionFeatureCount value: I32(3)
static ::GlobalNamespace::SubscriptionManager_SubscriptionFeatures const SubscriptionFeatureCount;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4016};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SubscriptionManager_SubscriptionFeatures, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SubscriptionManager_SubscriptionFeatures) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
