#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/AzureRegion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AzureRegion)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
struct AzureRegion;
}
// Write type traits
MARK_VAL_T(::PlayFab::MultiplayerModels::AzureRegion);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::AzureRegion, "PlayFab.MultiplayerModels", "AzureRegion");
// Dependencies 
namespace PlayFab::MultiplayerModels {
// Is value type: true
// CS Name: PlayFab.MultiplayerModels.AzureRegion
struct CORDL_TYPE AzureRegion {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AzureRegion_Unwrapped
enum struct __AzureRegion_Unwrapped : int32_t {
__E_AustraliaEast = static_cast<int32_t>(0x0),
__E_AustraliaSoutheast = static_cast<int32_t>(0x1),
__E_BrazilSouth = static_cast<int32_t>(0x2),
__E_CentralUs = static_cast<int32_t>(0x3),
__E_EastAsia = static_cast<int32_t>(0x4),
__E_EastUs = static_cast<int32_t>(0x5),
__E_EastUs2 = static_cast<int32_t>(0x6),
__E_JapanEast = static_cast<int32_t>(0x7),
__E_JapanWest = static_cast<int32_t>(0x8),
__E_NorthCentralUs = static_cast<int32_t>(0x9),
__E_NorthEurope = static_cast<int32_t>(0xa),
__E_SouthCentralUs = static_cast<int32_t>(0xb),
__E_SoutheastAsia = static_cast<int32_t>(0xc),
__E_WestEurope = static_cast<int32_t>(0xd),
__E_WestUs = static_cast<int32_t>(0xe),
__E_ChinaEast2 = static_cast<int32_t>(0xf),
__E_ChinaNorth2 = static_cast<int32_t>(0x10),
__E_SouthAfricaNorth = static_cast<int32_t>(0x11),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AzureRegion_Unwrapped () const noexcept {
return static_cast<__AzureRegion_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AzureRegion() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AzureRegion(int32_t  value__) noexcept;

/// @brief Field AustraliaEast value: I32(0)
static ::PlayFab::MultiplayerModels::AzureRegion const AustraliaEast;

/// @brief Field AustraliaSoutheast value: I32(1)
static ::PlayFab::MultiplayerModels::AzureRegion const AustraliaSoutheast;

/// @brief Field BrazilSouth value: I32(2)
static ::PlayFab::MultiplayerModels::AzureRegion const BrazilSouth;

/// @brief Field CentralUs value: I32(3)
static ::PlayFab::MultiplayerModels::AzureRegion const CentralUs;

/// @brief Field ChinaEast2 value: I32(15)
static ::PlayFab::MultiplayerModels::AzureRegion const ChinaEast2;

/// @brief Field ChinaNorth2 value: I32(16)
static ::PlayFab::MultiplayerModels::AzureRegion const ChinaNorth2;

/// @brief Field EastAsia value: I32(4)
static ::PlayFab::MultiplayerModels::AzureRegion const EastAsia;

/// @brief Field EastUs value: I32(5)
static ::PlayFab::MultiplayerModels::AzureRegion const EastUs;

/// @brief Field EastUs2 value: I32(6)
static ::PlayFab::MultiplayerModels::AzureRegion const EastUs2;

/// @brief Field JapanEast value: I32(7)
static ::PlayFab::MultiplayerModels::AzureRegion const JapanEast;

/// @brief Field JapanWest value: I32(8)
static ::PlayFab::MultiplayerModels::AzureRegion const JapanWest;

/// @brief Field NorthCentralUs value: I32(9)
static ::PlayFab::MultiplayerModels::AzureRegion const NorthCentralUs;

/// @brief Field NorthEurope value: I32(10)
static ::PlayFab::MultiplayerModels::AzureRegion const NorthEurope;

/// @brief Field SouthAfricaNorth value: I32(17)
static ::PlayFab::MultiplayerModels::AzureRegion const SouthAfricaNorth;

/// @brief Field SouthCentralUs value: I32(11)
static ::PlayFab::MultiplayerModels::AzureRegion const SouthCentralUs;

/// @brief Field SoutheastAsia value: I32(12)
static ::PlayFab::MultiplayerModels::AzureRegion const SoutheastAsia;

/// @brief Field WestEurope value: I32(13)
static ::PlayFab::MultiplayerModels::AzureRegion const WestEurope;

/// @brief Field WestUs value: I32(14)
static ::PlayFab::MultiplayerModels::AzureRegion const WestUs;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19587};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::AzureRegion, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::AzureRegion) == 0x4, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
