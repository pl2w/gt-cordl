#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/ContainerFlavor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContainerFlavor)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
struct ContainerFlavor;
}
// Write type traits
MARK_VAL_T(::PlayFab::MultiplayerModels::ContainerFlavor);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::ContainerFlavor, "PlayFab.MultiplayerModels", "ContainerFlavor");
// Dependencies 
namespace PlayFab::MultiplayerModels {
// Is value type: true
// CS Name: PlayFab.MultiplayerModels.ContainerFlavor
struct CORDL_TYPE ContainerFlavor {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ContainerFlavor_Unwrapped
enum struct __ContainerFlavor_Unwrapped : int32_t {
__E_ManagedWindowsServerCore = static_cast<int32_t>(0x0),
__E_CustomLinux = static_cast<int32_t>(0x1),
__E_ManagedWindowsServerCorePreview = static_cast<int32_t>(0x2),
__E_Invalid = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ContainerFlavor_Unwrapped () const noexcept {
return static_cast<__ContainerFlavor_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ContainerFlavor() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ContainerFlavor(int32_t  value__) noexcept;

/// @brief Field CustomLinux value: I32(1)
static ::PlayFab::MultiplayerModels::ContainerFlavor const CustomLinux;

/// @brief Field Invalid value: I32(3)
static ::PlayFab::MultiplayerModels::ContainerFlavor const Invalid;

/// @brief Field ManagedWindowsServerCore value: I32(0)
static ::PlayFab::MultiplayerModels::ContainerFlavor const ManagedWindowsServerCore;

/// @brief Field ManagedWindowsServerCorePreview value: I32(2)
static ::PlayFab::MultiplayerModels::ContainerFlavor const ManagedWindowsServerCorePreview;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19608};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::ContainerFlavor, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::ContainerFlavor) == 0x4, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
