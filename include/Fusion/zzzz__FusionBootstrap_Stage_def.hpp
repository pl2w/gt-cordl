#pragma once
// IWYU pragma private; include "Fusion/FusionBootstrap_Stage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FusionBootstrap_Stage)
// Forward declare root types
namespace GlobalNamespace {
struct FusionBootstrap_Stage;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FusionBootstrap_Stage);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FusionBootstrap_Stage, "Fusion", "FusionBootstrap/Stage");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.FusionBootstrap/Stage
struct CORDL_TYPE FusionBootstrap_Stage {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FusionBootstrap_Stage_Unwrapped
enum struct __FusionBootstrap_Stage_Unwrapped : int32_t {
__E_Disconnected = static_cast<int32_t>(0x0),
__E_StartingUp = static_cast<int32_t>(0x1),
__E_UnloadOriginalScene = static_cast<int32_t>(0x2),
__E_ConnectingServer = static_cast<int32_t>(0x3),
__E_ConnectingClients = static_cast<int32_t>(0x4),
__E_AllConnected = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FusionBootstrap_Stage_Unwrapped () const noexcept {
return static_cast<__FusionBootstrap_Stage_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FusionBootstrap_Stage() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FusionBootstrap_Stage(int32_t  value__) noexcept;

/// @brief Field AllConnected value: I32(5)
static ::GlobalNamespace::FusionBootstrap_Stage const AllConnected;

/// @brief Field ConnectingClients value: I32(4)
static ::GlobalNamespace::FusionBootstrap_Stage const ConnectingClients;

/// @brief Field ConnectingServer value: I32(3)
static ::GlobalNamespace::FusionBootstrap_Stage const ConnectingServer;

/// @brief Field Disconnected value: I32(0)
static ::GlobalNamespace::FusionBootstrap_Stage const Disconnected;

/// @brief Field StartingUp value: I32(1)
static ::GlobalNamespace::FusionBootstrap_Stage const StartingUp;

/// @brief Field UnloadOriginalScene value: I32(2)
static ::GlobalNamespace::FusionBootstrap_Stage const UnloadOriginalScene;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23459};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FusionBootstrap_Stage, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FusionBootstrap_Stage) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
