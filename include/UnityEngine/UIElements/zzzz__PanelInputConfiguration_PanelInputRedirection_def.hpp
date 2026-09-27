#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PanelInputConfiguration_PanelInputRedirection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PanelInputConfiguration_PanelInputRedirection)
// Forward declare root types
namespace GlobalNamespace {
struct PanelInputConfiguration_PanelInputRedirection;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PanelInputConfiguration_PanelInputRedirection);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PanelInputConfiguration_PanelInputRedirection, "UnityEngine.UIElements", "PanelInputConfiguration/PanelInputRedirection");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.PanelInputConfiguration/PanelInputRedirection
struct CORDL_TYPE PanelInputConfiguration_PanelInputRedirection {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PanelInputConfiguration_PanelInputRedirection_Unwrapped
enum struct __PanelInputConfiguration_PanelInputRedirection_Unwrapped : int32_t {
__E_AutoSwitch = static_cast<int32_t>(0x0),
__E_Never = static_cast<int32_t>(0x1),
__E_Always = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PanelInputConfiguration_PanelInputRedirection_Unwrapped () const noexcept {
return static_cast<__PanelInputConfiguration_PanelInputRedirection_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PanelInputConfiguration_PanelInputRedirection() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PanelInputConfiguration_PanelInputRedirection(int32_t  value__) noexcept;

/// @brief Field Always value: I32(2)
static ::GlobalNamespace::PanelInputConfiguration_PanelInputRedirection const Always;

/// @brief Field AutoSwitch value: I32(0)
static ::GlobalNamespace::PanelInputConfiguration_PanelInputRedirection const AutoSwitch;

/// @brief Field Never value: I32(1)
static ::GlobalNamespace::PanelInputConfiguration_PanelInputRedirection const Never;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7765};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PanelInputConfiguration_PanelInputRedirection, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PanelInputConfiguration_PanelInputRedirection) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
