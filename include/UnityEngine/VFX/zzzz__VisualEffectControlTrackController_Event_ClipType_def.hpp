#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VisualEffectControlTrackController_Event_ClipType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualEffectControlTrackController_Event_ClipType)
// Forward declare root types
namespace GlobalNamespace {
struct Event_VisualEffectControlTrackController_ClipType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Event_VisualEffectControlTrackController_ClipType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Event_VisualEffectControlTrackController_ClipType, "UnityEngine.VFX", "VisualEffectControlTrackController/Event/ClipType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.VFX.VisualEffectControlTrackController/Event/ClipType
struct CORDL_TYPE Event_VisualEffectControlTrackController_ClipType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Event_VisualEffectControlTrackController_ClipType_Unwrapped
enum struct __Event_VisualEffectControlTrackController_ClipType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Enter = static_cast<int32_t>(0x1),
__E_Exit = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Event_VisualEffectControlTrackController_ClipType_Unwrapped () const noexcept {
return static_cast<__Event_VisualEffectControlTrackController_ClipType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Event_VisualEffectControlTrackController_ClipType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Event_VisualEffectControlTrackController_ClipType(int32_t  value__) noexcept;

/// @brief Field Enter value: I32(1)
static ::GlobalNamespace::Event_VisualEffectControlTrackController_ClipType const Enter;

/// @brief Field Exit value: I32(2)
static ::GlobalNamespace::Event_VisualEffectControlTrackController_ClipType const Exit;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::Event_VisualEffectControlTrackController_ClipType const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30034};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Event_VisualEffectControlTrackController_ClipType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Event_VisualEffectControlTrackController_ClipType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
