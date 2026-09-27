#pragma once
// IWYU pragma private; include "Modio/API/ModioAPI_Portal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModioAPI_Portal)
// Forward declare root types
namespace GlobalNamespace {
struct ModioAPI_Portal;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModioAPI_Portal);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModioAPI_Portal, "Modio.API", "ModioAPI/Portal");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.API.ModioAPI/Portal
struct CORDL_TYPE ModioAPI_Portal {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ModioAPI_Portal_Unwrapped
enum struct __ModioAPI_Portal_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0xffffffff),
__E_Apple = static_cast<int32_t>(0x0),
__E_Discord = static_cast<int32_t>(0x1),
__E_EpicGamesStore = static_cast<int32_t>(0x2),
__E_Facebook = static_cast<int32_t>(0x3),
__E_GOG = static_cast<int32_t>(0x4),
__E_Google = static_cast<int32_t>(0x5),
__E_Itchio = static_cast<int32_t>(0x6),
__E_Nintendo = static_cast<int32_t>(0x7),
__E_PlayStationNetwork = static_cast<int32_t>(0x8),
__E_SSO = static_cast<int32_t>(0x9),
__E_Steam = static_cast<int32_t>(0xa),
__E_XboxLive = static_cast<int32_t>(0xb),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ModioAPI_Portal_Unwrapped () const noexcept {
return static_cast<__ModioAPI_Portal_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ModioAPI_Portal() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ModioAPI_Portal(int32_t  value__) noexcept;

/// @brief Field Apple value: I32(0)
static ::GlobalNamespace::ModioAPI_Portal const Apple;

/// @brief Field Discord value: I32(1)
static ::GlobalNamespace::ModioAPI_Portal const Discord;

/// @brief Field EpicGamesStore value: I32(2)
static ::GlobalNamespace::ModioAPI_Portal const EpicGamesStore;

/// @brief Field Facebook value: I32(3)
static ::GlobalNamespace::ModioAPI_Portal const Facebook;

/// @brief Field GOG value: I32(4)
static ::GlobalNamespace::ModioAPI_Portal const GOG;

/// @brief Field Google value: I32(5)
static ::GlobalNamespace::ModioAPI_Portal const Google;

/// @brief Field Itchio value: I32(6)
static ::GlobalNamespace::ModioAPI_Portal const Itchio;

/// @brief Field Nintendo value: I32(7)
static ::GlobalNamespace::ModioAPI_Portal const Nintendo;

/// @brief Field None value: I32(-1)
static ::GlobalNamespace::ModioAPI_Portal const None;

/// @brief Field PlayStationNetwork value: I32(8)
static ::GlobalNamespace::ModioAPI_Portal const PlayStationNetwork;

/// @brief Field SSO value: I32(9)
static ::GlobalNamespace::ModioAPI_Portal const SSO;

/// @brief Field Steam value: I32(10)
static ::GlobalNamespace::ModioAPI_Portal const Steam;

/// @brief Field XboxLive value: I32(11)
static ::GlobalNamespace::ModioAPI_Portal const XboxLive;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18018};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModioAPI_Portal, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModioAPI_Portal) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
