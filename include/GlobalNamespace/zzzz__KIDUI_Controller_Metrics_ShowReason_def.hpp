#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_Controller_Metrics_ShowReason.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KIDUI_Controller_Metrics_ShowReason)
// Forward declare root types
namespace GlobalNamespace {
struct KIDUI_Controller_Metrics_ShowReason;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason, "", "KIDUI_Controller/Metrics_ShowReason");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: KIDUI_Controller/Metrics_ShowReason
struct CORDL_TYPE KIDUI_Controller_Metrics_ShowReason {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __KIDUI_Controller_Metrics_ShowReason_Unwrapped
enum struct __KIDUI_Controller_Metrics_ShowReason_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Inaccessible = static_cast<int32_t>(0x1),
__E_Guardian_Disabled = static_cast<int32_t>(0x2),
__E_Permissions_Changed = static_cast<int32_t>(0x3),
__E_Default_Session = static_cast<int32_t>(0x4),
__E_No_Session = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __KIDUI_Controller_Metrics_ShowReason_Unwrapped () const noexcept {
return static_cast<__KIDUI_Controller_Metrics_ShowReason_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr KIDUI_Controller_Metrics_ShowReason() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr KIDUI_Controller_Metrics_ShowReason(int32_t  value__) noexcept;

/// @brief Field Default_Session value: I32(4)
static ::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason const Default_Session;

/// @brief Field Guardian_Disabled value: I32(2)
static ::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason const Guardian_Disabled;

/// @brief Field Inaccessible value: I32(1)
static ::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason const Inaccessible;

/// @brief Field No_Session value: I32(5)
static ::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason const No_Session;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason const None;

/// @brief Field Permissions_Changed value: I32(3)
static ::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason const Permissions_Changed;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3021};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
