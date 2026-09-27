#pragma once
// IWYU pragma private; include "GlobalNamespace/DebugTooling_DebugScreen.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugTooling_DebugScreen)
// Forward declare root types
namespace GlobalNamespace {
struct DebugTooling_DebugScreen;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DebugTooling_DebugScreen);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DebugTooling_DebugScreen, "", "DebugTooling/DebugScreen");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: DebugTooling/DebugScreen
struct CORDL_TYPE DebugTooling_DebugScreen {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DebugTooling_DebugScreen_Unwrapped
enum struct __DebugTooling_DebugScreen_Unwrapped : int32_t {
__E_KID = static_cast<int32_t>(0x0),
__E_Localization = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DebugTooling_DebugScreen_Unwrapped () const noexcept {
return static_cast<__DebugTooling_DebugScreen_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DebugTooling_DebugScreen() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DebugTooling_DebugScreen(int32_t  value__) noexcept;

/// @brief Field KID value: I32(0)
static ::GlobalNamespace::DebugTooling_DebugScreen const KID;

/// @brief Field Localization value: I32(1)
static ::GlobalNamespace::DebugTooling_DebugScreen const Localization;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1471};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DebugTooling_DebugScreen, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DebugTooling_DebugScreen) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
