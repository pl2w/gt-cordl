#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/RenderingLayerUtils_Event.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderingLayerUtils_Event)
// Forward declare root types
namespace GlobalNamespace {
struct RenderingLayerUtils_Event;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RenderingLayerUtils_Event);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RenderingLayerUtils_Event, "UnityEngine.Rendering.Universal", "RenderingLayerUtils/Event");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.RenderingLayerUtils/Event
struct CORDL_TYPE RenderingLayerUtils_Event {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RenderingLayerUtils_Event_Unwrapped
enum struct __RenderingLayerUtils_Event_Unwrapped : int32_t {
__E_DepthNormalPrePass = static_cast<int32_t>(0x0),
__E_Opaque = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RenderingLayerUtils_Event_Unwrapped () const noexcept {
return static_cast<__RenderingLayerUtils_Event_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RenderingLayerUtils_Event() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RenderingLayerUtils_Event(int32_t  value__) noexcept;

/// @brief Field DepthNormalPrePass value: I32(0)
static ::GlobalNamespace::RenderingLayerUtils_Event const DepthNormalPrePass;

/// @brief Field Opaque value: I32(1)
static ::GlobalNamespace::RenderingLayerUtils_Event const Opaque;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18589};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RenderingLayerUtils_Event, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RenderingLayerUtils_Event) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
