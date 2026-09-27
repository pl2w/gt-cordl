#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugUI_MessageBox_Style.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugUI_MessageBox_Style)
// Forward declare root types
namespace GlobalNamespace {
struct MessageBox_DebugUI_Style;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MessageBox_DebugUI_Style);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MessageBox_DebugUI_Style, "UnityEngine.Rendering", "DebugUI/MessageBox/Style");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.DebugUI/MessageBox/Style
struct CORDL_TYPE MessageBox_DebugUI_Style {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MessageBox_DebugUI_Style_Unwrapped
enum struct __MessageBox_DebugUI_Style_Unwrapped : int32_t {
__E_Info = static_cast<int32_t>(0x0),
__E_Warning = static_cast<int32_t>(0x1),
__E_Error = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MessageBox_DebugUI_Style_Unwrapped () const noexcept {
return static_cast<__MessageBox_DebugUI_Style_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MessageBox_DebugUI_Style() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MessageBox_DebugUI_Style(int32_t  value__) noexcept;

/// @brief Field Error value: I32(2)
static ::GlobalNamespace::MessageBox_DebugUI_Style const Error;

/// @brief Field Info value: I32(0)
static ::GlobalNamespace::MessageBox_DebugUI_Style const Info;

/// @brief Field Warning value: I32(1)
static ::GlobalNamespace::MessageBox_DebugUI_Style const Warning;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16744};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MessageBox_DebugUI_Style, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MessageBox_DebugUI_Style) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
