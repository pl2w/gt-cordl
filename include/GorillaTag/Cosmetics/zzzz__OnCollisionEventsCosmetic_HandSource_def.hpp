#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/OnCollisionEventsCosmetic_HandSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OnCollisionEventsCosmetic_HandSource)
// Forward declare root types
namespace GlobalNamespace {
struct OnCollisionEventsCosmetic_HandSource;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OnCollisionEventsCosmetic_HandSource);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnCollisionEventsCosmetic_HandSource, "GorillaTag.Cosmetics", "OnCollisionEventsCosmetic/HandSource");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.OnCollisionEventsCosmetic/HandSource
struct CORDL_TYPE OnCollisionEventsCosmetic_HandSource {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OnCollisionEventsCosmetic_HandSource_Unwrapped
enum struct __OnCollisionEventsCosmetic_HandSource_Unwrapped : int32_t {
__E_TouchingHand = static_cast<int32_t>(0x0),
__E_HoldingHand = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OnCollisionEventsCosmetic_HandSource_Unwrapped () const noexcept {
return static_cast<__OnCollisionEventsCosmetic_HandSource_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OnCollisionEventsCosmetic_HandSource() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OnCollisionEventsCosmetic_HandSource(int32_t  value__) noexcept;

/// @brief Field HoldingHand value: I32(1)
static ::GlobalNamespace::OnCollisionEventsCosmetic_HandSource const HoldingHand;

/// @brief Field TouchingHand value: I32(0)
static ::GlobalNamespace::OnCollisionEventsCosmetic_HandSource const TouchingHand;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4954};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OnCollisionEventsCosmetic_HandSource, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OnCollisionEventsCosmetic_HandSource) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
