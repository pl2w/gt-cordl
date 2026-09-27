#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/Fusion/FusionMessenger_MessageEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FusionMessenger_MessageEvent)
// Forward declare root types
namespace GlobalNamespace {
struct FusionMessenger_MessageEvent;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FusionMessenger_MessageEvent);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FusionMessenger_MessageEvent, "Meta.XR.MultiplayerBlocks.Colocation.Fusion", "FusionMessenger/MessageEvent");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.Fusion.FusionMessenger/MessageEvent
struct CORDL_TYPE FusionMessenger_MessageEvent {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FusionMessenger_MessageEvent_Unwrapped
enum struct __FusionMessenger_MessageEvent_Unwrapped : int32_t {
__E_AnchorShareRequest = static_cast<int32_t>(0x0),
__E_AnchorShareComplete = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FusionMessenger_MessageEvent_Unwrapped () const noexcept {
return static_cast<__FusionMessenger_MessageEvent_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FusionMessenger_MessageEvent() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FusionMessenger_MessageEvent(int32_t  value__) noexcept;

/// @brief Field AnchorShareComplete value: I32(1)
static ::GlobalNamespace::FusionMessenger_MessageEvent const AnchorShareComplete;

/// @brief Field AnchorShareRequest value: I32(0)
static ::GlobalNamespace::FusionMessenger_MessageEvent const AnchorShareRequest;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31187};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FusionMessenger_MessageEvent, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FusionMessenger_MessageEvent) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
