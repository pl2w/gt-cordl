#pragma once
// IWYU pragma private; include "Fusion/FusionBootstrap_StartModes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FusionBootstrap_StartModes)
// Forward declare root types
namespace GlobalNamespace {
struct FusionBootstrap_StartModes;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FusionBootstrap_StartModes);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FusionBootstrap_StartModes, "Fusion", "FusionBootstrap/StartModes");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.FusionBootstrap/StartModes
struct CORDL_TYPE FusionBootstrap_StartModes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FusionBootstrap_StartModes_Unwrapped
enum struct __FusionBootstrap_StartModes_Unwrapped : int32_t {
__E_UserInterface = static_cast<int32_t>(0x0),
__E_Automatic = static_cast<int32_t>(0x1),
__E_Manual = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FusionBootstrap_StartModes_Unwrapped () const noexcept {
return static_cast<__FusionBootstrap_StartModes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FusionBootstrap_StartModes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FusionBootstrap_StartModes(int32_t  value__) noexcept;

/// @brief Field Automatic value: I32(1)
static ::GlobalNamespace::FusionBootstrap_StartModes const Automatic;

/// @brief Field Manual value: I32(2)
static ::GlobalNamespace::FusionBootstrap_StartModes const Manual;

/// @brief Field UserInterface value: I32(0)
static ::GlobalNamespace::FusionBootstrap_StartModes const UserInterface;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23458};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FusionBootstrap_StartModes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FusionBootstrap_StartModes) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
