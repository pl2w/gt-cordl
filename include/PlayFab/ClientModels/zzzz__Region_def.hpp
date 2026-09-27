#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/Region.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Region)
// Forward declare root types
namespace PlayFab::ClientModels {
struct Region;
}
// Write type traits
MARK_VAL_T(::PlayFab::ClientModels::Region);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::Region, "PlayFab.ClientModels", "Region");
// Dependencies 
namespace PlayFab::ClientModels {
// Is value type: true
// CS Name: PlayFab.ClientModels.Region
struct CORDL_TYPE Region {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Region_Unwrapped
enum struct __Region_Unwrapped : int32_t {
__E_USCentral = static_cast<int32_t>(0x0),
__E_USEast = static_cast<int32_t>(0x1),
__E_EUWest = static_cast<int32_t>(0x2),
__E_Singapore = static_cast<int32_t>(0x3),
__E_Japan = static_cast<int32_t>(0x4),
__E_Brazil = static_cast<int32_t>(0x5),
__E_Australia = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Region_Unwrapped () const noexcept {
return static_cast<__Region_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Region() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Region(int32_t  value__) noexcept;

/// @brief Field Australia value: I32(6)
static ::PlayFab::ClientModels::Region const Australia;

/// @brief Field Brazil value: I32(5)
static ::PlayFab::ClientModels::Region const Brazil;

/// @brief Field EUWest value: I32(2)
static ::PlayFab::ClientModels::Region const EUWest;

/// @brief Field Japan value: I32(4)
static ::PlayFab::ClientModels::Region const Japan;

/// @brief Field Singapore value: I32(3)
static ::PlayFab::ClientModels::Region const Singapore;

/// @brief Field USCentral value: I32(0)
static ::PlayFab::ClientModels::Region const USCentral;

/// @brief Field USEast value: I32(1)
static ::PlayFab::ClientModels::Region const USEast;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20190};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::Region, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::Region) == 0x4, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
