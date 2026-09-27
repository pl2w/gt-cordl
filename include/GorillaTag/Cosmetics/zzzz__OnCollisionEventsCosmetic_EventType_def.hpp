#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/OnCollisionEventsCosmetic_EventType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OnCollisionEventsCosmetic_EventType)
// Forward declare root types
namespace GlobalNamespace {
struct OnCollisionEventsCosmetic_EventType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OnCollisionEventsCosmetic_EventType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnCollisionEventsCosmetic_EventType, "GorillaTag.Cosmetics", "OnCollisionEventsCosmetic/EventType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.OnCollisionEventsCosmetic/EventType
struct CORDL_TYPE OnCollisionEventsCosmetic_EventType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OnCollisionEventsCosmetic_EventType_Unwrapped
enum struct __OnCollisionEventsCosmetic_EventType_Unwrapped : int32_t {
__E_CollisionEnter = static_cast<int32_t>(0x0),
__E_CollisionStay = static_cast<int32_t>(0x1),
__E_CollisionExit = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OnCollisionEventsCosmetic_EventType_Unwrapped () const noexcept {
return static_cast<__OnCollisionEventsCosmetic_EventType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OnCollisionEventsCosmetic_EventType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OnCollisionEventsCosmetic_EventType(int32_t  value__) noexcept;

/// @brief Field CollisionEnter value: I32(0)
static ::GlobalNamespace::OnCollisionEventsCosmetic_EventType const CollisionEnter;

/// @brief Field CollisionExit value: I32(2)
static ::GlobalNamespace::OnCollisionEventsCosmetic_EventType const CollisionExit;

/// @brief Field CollisionStay value: I32(1)
static ::GlobalNamespace::OnCollisionEventsCosmetic_EventType const CollisionStay;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4953};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OnCollisionEventsCosmetic_EventType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OnCollisionEventsCosmetic_EventType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
