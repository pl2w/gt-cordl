#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/PunTeams_Team.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PunTeams_Team)
// Forward declare root types
namespace GlobalNamespace {
struct PunTeams_Team;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PunTeams_Team);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PunTeams_Team, "Photon.Pun.UtilityScripts", "PunTeams/Team");
// [Obsolete("use custom PhotonTeam instead")]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Photon.Pun.UtilityScripts.PunTeams/Team
struct CORDL_TYPE PunTeams_Team {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __PunTeams_Team_Unwrapped
enum struct __PunTeams_Team_Unwrapped : uint8_t {
__E_none = static_cast<uint8_t>(0x0u),
__E_red = static_cast<uint8_t>(0x1u),
__E_blue = static_cast<uint8_t>(0x2u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PunTeams_Team_Unwrapped () const noexcept {
return static_cast<__PunTeams_Team_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PunTeams_Team() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr PunTeams_Team(uint8_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31219};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field blue value: U8(2)
static ::GlobalNamespace::PunTeams_Team const blue;

/// @brief Field none value: U8(0)
static ::GlobalNamespace::PunTeams_Team const none;

/// @brief Field red value: U8(1)
static ::GlobalNamespace::PunTeams_Team const red;

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PunTeams_Team, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PunTeams_Team) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
