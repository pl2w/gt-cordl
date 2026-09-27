#pragma once
// IWYU pragma private; include "CjLib/DebugUtil_Style.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugUtil_Style)
// Forward declare root types
namespace GlobalNamespace {
struct DebugUtil_Style;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DebugUtil_Style);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DebugUtil_Style, "CjLib", "DebugUtil/Style");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: CjLib.DebugUtil/Style
struct CORDL_TYPE DebugUtil_Style {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DebugUtil_Style_Unwrapped
enum struct __DebugUtil_Style_Unwrapped : int32_t {
__E_Wireframe = static_cast<int32_t>(0x0),
__E_SolidColor = static_cast<int32_t>(0x1),
__E_FlatShaded = static_cast<int32_t>(0x2),
__E_SmoothShaded = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DebugUtil_Style_Unwrapped () const noexcept {
return static_cast<__DebugUtil_Style_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DebugUtil_Style() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DebugUtil_Style(int32_t  value__) noexcept;

/// @brief Field FlatShaded value: I32(2)
static ::GlobalNamespace::DebugUtil_Style const FlatShaded;

/// @brief Field SmoothShaded value: I32(3)
static ::GlobalNamespace::DebugUtil_Style const SmoothShaded;

/// @brief Field SolidColor value: I32(1)
static ::GlobalNamespace::DebugUtil_Style const SolidColor;

/// @brief Field Wireframe value: I32(0)
static ::GlobalNamespace::DebugUtil_Style const Wireframe;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5141};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DebugUtil_Style, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DebugUtil_Style) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
