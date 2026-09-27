#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrabGlow_GlowType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HandGrabGlow_GlowType)
// Forward declare root types
namespace GlobalNamespace {
struct HandGrabGlow_GlowType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HandGrabGlow_GlowType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandGrabGlow_GlowType, "Oculus.Interaction", "HandGrabGlow/GlowType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.HandGrabGlow/GlowType
struct CORDL_TYPE HandGrabGlow_GlowType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HandGrabGlow_GlowType_Unwrapped
enum struct __HandGrabGlow_GlowType_Unwrapped : int32_t {
__E_Fill = static_cast<int32_t>(0x1b),
__E_Outline = static_cast<int32_t>(0x1c),
__E_Both = static_cast<int32_t>(0x1d),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HandGrabGlow_GlowType_Unwrapped () const noexcept {
return static_cast<__HandGrabGlow_GlowType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HandGrabGlow_GlowType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HandGrabGlow_GlowType(int32_t  value__) noexcept;

/// @brief Field Both value: I32(29)
static ::GlobalNamespace::HandGrabGlow_GlowType const Both;

/// @brief Field Fill value: I32(27)
static ::GlobalNamespace::HandGrabGlow_GlowType const Fill;

/// @brief Field Outline value: I32(28)
static ::GlobalNamespace::HandGrabGlow_GlowType const Outline;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15712};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandGrabGlow_GlowType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandGrabGlow_GlowType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
