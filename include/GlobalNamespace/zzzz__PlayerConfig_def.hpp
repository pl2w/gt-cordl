#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayerConfig)
// Forward declare root types
namespace GlobalNamespace {
class PlayerConfig;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerConfig*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerConfig*, "", "PlayerConfig");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerConfig
class CORDL_TYPE PlayerConfig : public ::System::Object {
public:
// Declarations
static inline ::GlobalNamespace::PlayerConfig* New_ctor() ;

/// @brief Method .ctor, addr 0x56ec418, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerConfig(PlayerConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerConfig(PlayerConfig const& ) = delete;

/// @brief Field Done offset 0xffffffff size 0x8
static constexpr ::ConstString  Done{u"done"};

/// @brief Field FlagTrue offset 0xffffffff size 0x8
static constexpr ::ConstString  FlagTrue{u"flagged"};

/// @brief Field Mothership_Id offset 0xffffffff size 0x8
static constexpr ::ConstString  Mothership_Id{u"mothershipId"};

/// @brief Field Nope offset 0xffffffff size 0x8
static constexpr ::ConstString  Nope{u"nope"};

/// @brief Field Player_HasDoneTutorial offset 0xffffffff size 0x8
static constexpr ::ConstString  Player_HasDoneTutorial{u"didTutorial"};

/// @brief Field Player_HasFlaggedWrongStump offset 0xffffffff size 0x8
static constexpr ::ConstString  Player_HasFlaggedWrongStump{u"spawnInWrongStump"};

/// @brief Field Player_HasSeenGhostReactor offset 0xffffffff size 0x8
static constexpr ::ConstString  Player_HasSeenGhostReactor{u"seenGhostReactor"};

/// @brief Field Player_LastSawScheduledEventTime offset 0xffffffff size 0x8
static constexpr ::ConstString  Player_LastSawScheduledEventTime{u"lastSawScheduledEventTime"};

/// @brief Field Player_Nickname offset 0xffffffff size 0x8
static constexpr ::ConstString  Player_Nickname{u"playerName"};

/// @brief Field Player_Platform offset 0xffffffff size 0x8
static constexpr ::ConstString  Player_Platform{u"platform"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1136};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PlayerConfig) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
