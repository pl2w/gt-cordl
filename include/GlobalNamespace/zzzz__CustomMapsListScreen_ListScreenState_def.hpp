#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsListScreen_ListScreenState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMapsListScreen_ListScreenState)
// Forward declare root types
namespace GlobalNamespace {
struct CustomMapsListScreen_ListScreenState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CustomMapsListScreen_ListScreenState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapsListScreen_ListScreenState, "", "CustomMapsListScreen/ListScreenState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: CustomMapsListScreen/ListScreenState
struct CORDL_TYPE CustomMapsListScreen_ListScreenState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CustomMapsListScreen_ListScreenState_Unwrapped
enum struct __CustomMapsListScreen_ListScreenState_Unwrapped : int32_t {
__E_AvailableMods = static_cast<int32_t>(0x0),
__E_InstalledMods = static_cast<int32_t>(0x1),
__E_FavoriteMods = static_cast<int32_t>(0x2),
__E_SubscribedMods = static_cast<int32_t>(0x3),
__E_CustomModList = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CustomMapsListScreen_ListScreenState_Unwrapped () const noexcept {
return static_cast<__CustomMapsListScreen_ListScreenState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsListScreen_ListScreenState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CustomMapsListScreen_ListScreenState(int32_t  value__) noexcept;

/// @brief Field AvailableMods value: I32(0)
static ::GlobalNamespace::CustomMapsListScreen_ListScreenState const AvailableMods;

/// @brief Field CustomModList value: I32(4)
static ::GlobalNamespace::CustomMapsListScreen_ListScreenState const CustomModList;

/// @brief Field FavoriteMods value: I32(2)
static ::GlobalNamespace::CustomMapsListScreen_ListScreenState const FavoriteMods;

/// @brief Field InstalledMods value: I32(1)
static ::GlobalNamespace::CustomMapsListScreen_ListScreenState const InstalledMods;

/// @brief Field SubscribedMods value: I32(3)
static ::GlobalNamespace::CustomMapsListScreen_ListScreenState const SubscribedMods;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2747};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen_ListScreenState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapsListScreen_ListScreenState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
