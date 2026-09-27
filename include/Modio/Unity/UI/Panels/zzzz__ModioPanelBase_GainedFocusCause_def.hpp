#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/ModioPanelBase_GainedFocusCause.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModioPanelBase_GainedFocusCause)
// Forward declare root types
namespace GlobalNamespace {
struct ModioPanelBase_GainedFocusCause;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModioPanelBase_GainedFocusCause);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModioPanelBase_GainedFocusCause, "Modio.Unity.UI.Panels", "ModioPanelBase/GainedFocusCause");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.Unity.UI.Panels.ModioPanelBase/GainedFocusCause
struct CORDL_TYPE ModioPanelBase_GainedFocusCause {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ModioPanelBase_GainedFocusCause_Unwrapped
enum struct __ModioPanelBase_GainedFocusCause_Unwrapped : int32_t {
__E_OpeningFromClosed = static_cast<int32_t>(0x0),
__E_RegainingFocusFromStackedPanel = static_cast<int32_t>(0x1),
__E_InputSuppressionChangeOnly = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ModioPanelBase_GainedFocusCause_Unwrapped () const noexcept {
return static_cast<__ModioPanelBase_GainedFocusCause_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ModioPanelBase_GainedFocusCause() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ModioPanelBase_GainedFocusCause(int32_t  value__) noexcept;

/// @brief Field InputSuppressionChangeOnly value: I32(2)
static ::GlobalNamespace::ModioPanelBase_GainedFocusCause const InputSuppressionChangeOnly;

/// @brief Field OpeningFromClosed value: I32(0)
static ::GlobalNamespace::ModioPanelBase_GainedFocusCause const OpeningFromClosed;

/// @brief Field RegainingFocusFromStackedPanel value: I32(1)
static ::GlobalNamespace::ModioPanelBase_GainedFocusCause const RegainingFocusFromStackedPanel;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27076};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModioPanelBase_GainedFocusCause, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModioPanelBase_GainedFocusCause) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
