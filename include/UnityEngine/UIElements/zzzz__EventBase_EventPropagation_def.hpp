#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventBase_EventPropagation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventBase_EventPropagation)
// Forward declare root types
namespace GlobalNamespace {
struct EventBase_EventPropagation;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EventBase_EventPropagation);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EventBase_EventPropagation, "UnityEngine.UIElements", "EventBase/EventPropagation");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.EventBase/EventPropagation
struct CORDL_TYPE EventBase_EventPropagation {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EventBase_EventPropagation_Unwrapped
enum struct __EventBase_EventPropagation_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Bubbles = static_cast<int32_t>(0x1),
__E_TricklesDown = static_cast<int32_t>(0x2),
__E_SkipDisabledElements = static_cast<int32_t>(0x4),
__E_BubblesOrTricklesDown = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EventBase_EventPropagation_Unwrapped () const noexcept {
return static_cast<__EventBase_EventPropagation_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EventBase_EventPropagation() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EventBase_EventPropagation(int32_t  value__) noexcept;

/// @brief Field Bubbles value: I32(1)
static ::GlobalNamespace::EventBase_EventPropagation const Bubbles;

/// @brief Field BubblesOrTricklesDown value: I32(3)
static ::GlobalNamespace::EventBase_EventPropagation const BubblesOrTricklesDown;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::EventBase_EventPropagation const None;

/// @brief Field SkipDisabledElements value: I32(4)
static ::GlobalNamespace::EventBase_EventPropagation const SkipDisabledElements;

/// @brief Field TricklesDown value: I32(2)
static ::GlobalNamespace::EventBase_EventPropagation const TricklesDown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7594};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EventBase_EventPropagation, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EventBase_EventPropagation) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
