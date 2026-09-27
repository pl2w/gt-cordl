#pragma once
// IWYU pragma private; include "GlobalNamespace/SITouchscreenButton_ButtonMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SITouchscreenButton_ButtonMode)
// Forward declare root types
namespace GlobalNamespace {
struct SITouchscreenButton_ButtonMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SITouchscreenButton_ButtonMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SITouchscreenButton_ButtonMode, "", "SITouchscreenButton/ButtonMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SITouchscreenButton/ButtonMode
struct CORDL_TYPE SITouchscreenButton_ButtonMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SITouchscreenButton_ButtonMode_Unwrapped
enum struct __SITouchscreenButton_ButtonMode_Unwrapped : int32_t {
__E_Normal = static_cast<int32_t>(0x0),
__E_Toggle = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SITouchscreenButton_ButtonMode_Unwrapped () const noexcept {
return static_cast<__SITouchscreenButton_ButtonMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SITouchscreenButton_ButtonMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SITouchscreenButton_ButtonMode(int32_t  value__) noexcept;

/// @brief Field Normal value: I32(0)
static ::GlobalNamespace::SITouchscreenButton_ButtonMode const Normal;

/// @brief Field Toggle value: I32(1)
static ::GlobalNamespace::SITouchscreenButton_ButtonMode const Toggle;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{373};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SITouchscreenButton_ButtonMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SITouchscreenButton_ButtonMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
