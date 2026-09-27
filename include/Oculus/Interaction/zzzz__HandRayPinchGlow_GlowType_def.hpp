#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandRayPinchGlow_GlowType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HandRayPinchGlow_GlowType)
// Forward declare root types
namespace GlobalNamespace {
struct HandRayPinchGlow_GlowType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HandRayPinchGlow_GlowType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandRayPinchGlow_GlowType, "Oculus.Interaction", "HandRayPinchGlow/GlowType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.HandRayPinchGlow/GlowType
struct CORDL_TYPE HandRayPinchGlow_GlowType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HandRayPinchGlow_GlowType_Unwrapped
enum struct __HandRayPinchGlow_GlowType_Unwrapped : int32_t {
__E_Fill = static_cast<int32_t>(0x11),
__E_Outline = static_cast<int32_t>(0x12),
__E_Both = static_cast<int32_t>(0x10),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HandRayPinchGlow_GlowType_Unwrapped () const noexcept {
return static_cast<__HandRayPinchGlow_GlowType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HandRayPinchGlow_GlowType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HandRayPinchGlow_GlowType(int32_t  value__) noexcept;

/// @brief Field Both value: I32(16)
static ::GlobalNamespace::HandRayPinchGlow_GlowType const Both;

/// @brief Field Fill value: I32(17)
static ::GlobalNamespace::HandRayPinchGlow_GlowType const Fill;

/// @brief Field Outline value: I32(18)
static ::GlobalNamespace::HandRayPinchGlow_GlowType const Outline;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15718};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandRayPinchGlow_GlowType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandRayPinchGlow_GlowType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
