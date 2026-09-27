#pragma once
// IWYU pragma private; include "UnityEngine/ReflectionProbe_ReflectionProbeEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReflectionProbe_ReflectionProbeEvent)
// Forward declare root types
namespace GlobalNamespace {
struct ReflectionProbe_ReflectionProbeEvent;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ReflectionProbe_ReflectionProbeEvent);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ReflectionProbe_ReflectionProbeEvent, "UnityEngine", "ReflectionProbe/ReflectionProbeEvent");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ReflectionProbe/ReflectionProbeEvent
struct CORDL_TYPE ReflectionProbe_ReflectionProbeEvent {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ReflectionProbe_ReflectionProbeEvent_Unwrapped
enum struct __ReflectionProbe_ReflectionProbeEvent_Unwrapped : int32_t {
__E_ReflectionProbeAdded = static_cast<int32_t>(0x0),
__E_ReflectionProbeRemoved = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ReflectionProbe_ReflectionProbeEvent_Unwrapped () const noexcept {
return static_cast<__ReflectionProbe_ReflectionProbeEvent_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ReflectionProbe_ReflectionProbeEvent() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ReflectionProbe_ReflectionProbeEvent(int32_t  value__) noexcept;

/// @brief Field ReflectionProbeAdded value: I32(0)
static ::GlobalNamespace::ReflectionProbe_ReflectionProbeEvent const ReflectionProbeAdded;

/// @brief Field ReflectionProbeRemoved value: I32(1)
static ::GlobalNamespace::ReflectionProbe_ReflectionProbeEvent const ReflectionProbeRemoved;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14822};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ReflectionProbe_ReflectionProbeEvent, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ReflectionProbe_ReflectionProbeEvent) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
