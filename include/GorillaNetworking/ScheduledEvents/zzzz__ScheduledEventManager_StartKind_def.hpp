#pragma once
// IWYU pragma private; include "GorillaNetworking/ScheduledEvents/ScheduledEventManager_StartKind.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScheduledEventManager_StartKind)
// Forward declare root types
namespace GlobalNamespace {
struct ScheduledEventManager_StartKind;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScheduledEventManager_StartKind);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScheduledEventManager_StartKind, "GorillaNetworking.ScheduledEvents", "ScheduledEventManager/StartKind");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaNetworking.ScheduledEvents.ScheduledEventManager/StartKind
struct CORDL_TYPE ScheduledEventManager_StartKind {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ScheduledEventManager_StartKind_Unwrapped
enum struct __ScheduledEventManager_StartKind_Unwrapped : int32_t {
__E_Unresolved = static_cast<int32_t>(0x0),
__E_NoEvent = static_cast<int32_t>(0x1),
__E_Scheduled = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ScheduledEventManager_StartKind_Unwrapped () const noexcept {
return static_cast<__ScheduledEventManager_StartKind_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ScheduledEventManager_StartKind() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ScheduledEventManager_StartKind(int32_t  value__) noexcept;

/// @brief Field NoEvent value: I32(1)
static ::GlobalNamespace::ScheduledEventManager_StartKind const NoEvent;

/// @brief Field Scheduled value: I32(2)
static ::GlobalNamespace::ScheduledEventManager_StartKind const Scheduled;

/// @brief Field Unresolved value: I32(0)
static ::GlobalNamespace::ScheduledEventManager_StartKind const Unresolved;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4405};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScheduledEventManager_StartKind, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScheduledEventManager_StartKind) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
