#pragma once
// IWYU pragma private; include "GorillaTagScripts/GhostReactor/GRKiosk_ButtonSide.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRKiosk_ButtonSide)
// Forward declare root types
namespace GlobalNamespace {
struct GRKiosk_ButtonSide;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRKiosk_ButtonSide);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRKiosk_ButtonSide, "GorillaTagScripts.GhostReactor", "GRKiosk/ButtonSide");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.GhostReactor.GRKiosk/ButtonSide
struct CORDL_TYPE GRKiosk_ButtonSide {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GRKiosk_ButtonSide_Unwrapped
enum struct __GRKiosk_ButtonSide_Unwrapped : int32_t {
__E_Left = static_cast<int32_t>(0x0),
__E_Right = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GRKiosk_ButtonSide_Unwrapped () const noexcept {
return static_cast<__GRKiosk_ButtonSide_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GRKiosk_ButtonSide() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GRKiosk_ButtonSide(int32_t  value__) noexcept;

/// @brief Field Left value: I32(0)
static ::GlobalNamespace::GRKiosk_ButtonSide const Left;

/// @brief Field Right value: I32(1)
static ::GlobalNamespace::GRKiosk_ButtonSide const Right;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4128};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRKiosk_ButtonSide, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRKiosk_ButtonSide) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
