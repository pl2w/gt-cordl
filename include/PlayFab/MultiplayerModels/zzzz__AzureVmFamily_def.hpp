#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/AzureVmFamily.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AzureVmFamily)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
struct AzureVmFamily;
}
// Write type traits
MARK_VAL_T(::PlayFab::MultiplayerModels::AzureVmFamily);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::AzureVmFamily, "PlayFab.MultiplayerModels", "AzureVmFamily");
// Dependencies 
namespace PlayFab::MultiplayerModels {
// Is value type: true
// CS Name: PlayFab.MultiplayerModels.AzureVmFamily
struct CORDL_TYPE AzureVmFamily {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AzureVmFamily_Unwrapped
enum struct __AzureVmFamily_Unwrapped : int32_t {
__E_A = static_cast<int32_t>(0x0),
__E_Av2 = static_cast<int32_t>(0x1),
__E_Dv2 = static_cast<int32_t>(0x2),
__E_Dv3 = static_cast<int32_t>(0x3),
__E_F = static_cast<int32_t>(0x4),
__E_Fsv2 = static_cast<int32_t>(0x5),
__E_Dasv4 = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AzureVmFamily_Unwrapped () const noexcept {
return static_cast<__AzureVmFamily_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AzureVmFamily() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AzureVmFamily(int32_t  value__) noexcept;

/// @brief Field A value: I32(0)
static ::PlayFab::MultiplayerModels::AzureVmFamily const A;

/// @brief Field Av2 value: I32(1)
static ::PlayFab::MultiplayerModels::AzureVmFamily const Av2;

/// @brief Field Dasv4 value: I32(6)
static ::PlayFab::MultiplayerModels::AzureVmFamily const Dasv4;

/// @brief Field Dv2 value: I32(2)
static ::PlayFab::MultiplayerModels::AzureVmFamily const Dv2;

/// @brief Field Dv3 value: I32(3)
static ::PlayFab::MultiplayerModels::AzureVmFamily const Dv3;

/// @brief Field F value: I32(4)
static ::PlayFab::MultiplayerModels::AzureVmFamily const F;

/// @brief Field Fsv2 value: I32(5)
static ::PlayFab::MultiplayerModels::AzureVmFamily const Fsv2;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19588};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::AzureVmFamily, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::AzureVmFamily) == 0x4, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
