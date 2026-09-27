#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIToolkitInteroperabilityBridge_EventHandlerTypes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UIToolkitInteroperabilityBridge_EventHandlerTypes)
// Forward declare root types
namespace GlobalNamespace {
struct UIToolkitInteroperabilityBridge_EventHandlerTypes;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UIToolkitInteroperabilityBridge_EventHandlerTypes);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UIToolkitInteroperabilityBridge_EventHandlerTypes, "UnityEngine.UIElements", "UIToolkitInteroperabilityBridge/EventHandlerTypes");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIToolkitInteroperabilityBridge/EventHandlerTypes
struct CORDL_TYPE UIToolkitInteroperabilityBridge_EventHandlerTypes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UIToolkitInteroperabilityBridge_EventHandlerTypes_Unwrapped
enum struct __UIToolkitInteroperabilityBridge_EventHandlerTypes_Unwrapped : int32_t {
__E_ScreenOverlay = static_cast<int32_t>(0x1),
__E_WorldSpace = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UIToolkitInteroperabilityBridge_EventHandlerTypes_Unwrapped () const noexcept {
return static_cast<__UIToolkitInteroperabilityBridge_EventHandlerTypes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UIToolkitInteroperabilityBridge_EventHandlerTypes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr UIToolkitInteroperabilityBridge_EventHandlerTypes(int32_t  value__) noexcept;

/// @brief Field ScreenOverlay value: I32(1)
static ::GlobalNamespace::UIToolkitInteroperabilityBridge_EventHandlerTypes const ScreenOverlay;

/// @brief Field WorldSpace value: I32(2)
static ::GlobalNamespace::UIToolkitInteroperabilityBridge_EventHandlerTypes const WorldSpace;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26140};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UIToolkitInteroperabilityBridge_EventHandlerTypes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UIToolkitInteroperabilityBridge_EventHandlerTypes) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
