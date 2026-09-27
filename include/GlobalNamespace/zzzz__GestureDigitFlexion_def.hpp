#pragma once
// IWYU pragma private; include "GlobalNamespace/GestureDigitFlexion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GestureDigitFlexion)
// Forward declare root types
namespace GlobalNamespace {
struct GestureDigitFlexion;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GestureDigitFlexion);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GestureDigitFlexion, "", "GestureDigitFlexion");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GestureDigitFlexion
struct CORDL_TYPE GestureDigitFlexion {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __GestureDigitFlexion_Unwrapped
enum struct __GestureDigitFlexion_Unwrapped : uint32_t {
__E_None = static_cast<uint32_t>(0x0u),
__E_Open = static_cast<uint32_t>(0x10u),
__E_Closed = static_cast<uint32_t>(0x20u),
__E_Bent = static_cast<uint32_t>(0x40u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GestureDigitFlexion_Unwrapped () const noexcept {
return static_cast<__GestureDigitFlexion_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GestureDigitFlexion() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr GestureDigitFlexion(uint32_t  value__) noexcept;

/// @brief Field Bent value: U32(64)
static ::GlobalNamespace::GestureDigitFlexion const Bent;

/// @brief Field Closed value: U32(32)
static ::GlobalNamespace::GestureDigitFlexion const Closed;

/// @brief Field None value: U32(0)
static ::GlobalNamespace::GestureDigitFlexion const None;

/// @brief Field Open value: U32(16)
static ::GlobalNamespace::GestureDigitFlexion const Open;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{722};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GestureDigitFlexion, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GestureDigitFlexion) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
