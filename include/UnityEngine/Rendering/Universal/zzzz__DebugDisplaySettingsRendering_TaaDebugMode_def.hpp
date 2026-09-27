#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DebugDisplaySettingsRendering_TaaDebugMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugDisplaySettingsRendering_TaaDebugMode)
// Forward declare root types
namespace GlobalNamespace {
struct DebugDisplaySettingsRendering_TaaDebugMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DebugDisplaySettingsRendering_TaaDebugMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DebugDisplaySettingsRendering_TaaDebugMode, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsRendering/TaaDebugMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering/TaaDebugMode
struct CORDL_TYPE DebugDisplaySettingsRendering_TaaDebugMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DebugDisplaySettingsRendering_TaaDebugMode_Unwrapped
enum struct __DebugDisplaySettingsRendering_TaaDebugMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_ShowRawFrame = static_cast<int32_t>(0x1),
__E_ShowRawFrameNoJitter = static_cast<int32_t>(0x2),
__E_ShowClampedHistory = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DebugDisplaySettingsRendering_TaaDebugMode_Unwrapped () const noexcept {
return static_cast<__DebugDisplaySettingsRendering_TaaDebugMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DebugDisplaySettingsRendering_TaaDebugMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DebugDisplaySettingsRendering_TaaDebugMode(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::DebugDisplaySettingsRendering_TaaDebugMode const None;

/// @brief Field ShowClampedHistory value: I32(3)
static ::GlobalNamespace::DebugDisplaySettingsRendering_TaaDebugMode const ShowClampedHistory;

/// @brief Field ShowRawFrame value: I32(1)
static ::GlobalNamespace::DebugDisplaySettingsRendering_TaaDebugMode const ShowRawFrame;

/// @brief Field ShowRawFrameNoJitter value: I32(2)
static ::GlobalNamespace::DebugDisplaySettingsRendering_TaaDebugMode const ShowRawFrameNoJitter;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18277};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DebugDisplaySettingsRendering_TaaDebugMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DebugDisplaySettingsRendering_TaaDebugMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
