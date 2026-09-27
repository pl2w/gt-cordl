#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsTerminal_ScreenType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMapsTerminal_ScreenType)
// Forward declare root types
namespace GlobalNamespace {
struct CustomMapsTerminal_ScreenType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CustomMapsTerminal_ScreenType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapsTerminal_ScreenType, "", "CustomMapsTerminal/ScreenType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: CustomMapsTerminal/ScreenType
struct CORDL_TYPE CustomMapsTerminal_ScreenType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CustomMapsTerminal_ScreenType_Unwrapped
enum struct __CustomMapsTerminal_ScreenType_Unwrapped : int32_t {
__E_Invalid = static_cast<int32_t>(0xffffffff),
__E_TerminalControlPrompt = static_cast<int32_t>(0x0),
__E_AvailableMods = static_cast<int32_t>(0x1),
__E_InstalledMods = static_cast<int32_t>(0x2),
__E_FavoriteMods = static_cast<int32_t>(0x3),
__E_SubscribedMods = static_cast<int32_t>(0x4),
__E_SearchMods = static_cast<int32_t>(0x5),
__E_ModDetails = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CustomMapsTerminal_ScreenType_Unwrapped () const noexcept {
return static_cast<__CustomMapsTerminal_ScreenType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsTerminal_ScreenType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CustomMapsTerminal_ScreenType(int32_t  value__) noexcept;

/// @brief Field AvailableMods value: I32(1)
static ::GlobalNamespace::CustomMapsTerminal_ScreenType const AvailableMods;

/// @brief Field FavoriteMods value: I32(3)
static ::GlobalNamespace::CustomMapsTerminal_ScreenType const FavoriteMods;

/// @brief Field InstalledMods value: I32(2)
static ::GlobalNamespace::CustomMapsTerminal_ScreenType const InstalledMods;

/// @brief Field Invalid value: I32(-1)
static ::GlobalNamespace::CustomMapsTerminal_ScreenType const Invalid;

/// @brief Field ModDetails value: I32(6)
static ::GlobalNamespace::CustomMapsTerminal_ScreenType const ModDetails;

/// @brief Field SearchMods value: I32(5)
static ::GlobalNamespace::CustomMapsTerminal_ScreenType const SearchMods;

/// @brief Field SubscribedMods value: I32(4)
static ::GlobalNamespace::CustomMapsTerminal_ScreenType const SubscribedMods;

/// @brief Field TerminalControlPrompt value: I32(0)
static ::GlobalNamespace::CustomMapsTerminal_ScreenType const TerminalControlPrompt;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2762};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapsTerminal_ScreenType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapsTerminal_ScreenType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
