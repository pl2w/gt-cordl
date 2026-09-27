#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/ScoreExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScoreExtensions)
namespace Photon::Realtime {
class Player;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class ScoreExtensions;
}
// Write type traits
MARK_REF_T(::Photon::Pun::UtilityScripts::ScoreExtensions*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::UtilityScripts::ScoreExtensions*, "Photon.Pun.UtilityScripts", "ScoreExtensions");
// [Extension]
// Dependencies System.Object
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: Photon.Pun.UtilityScripts.ScoreExtensions
class CORDL_TYPE ScoreExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method AddScore, addr 0xa7383fc, size 0xd4, virtual false, abstract: false, final false
static inline void AddScore(::Photon::Realtime::Player*  player, int32_t  scoreToAddToCurrent) ;

/// [Extension]
/// @brief Method GetScore, addr 0xa7384d0, size 0xb8, virtual false, abstract: false, final false
static inline int32_t GetScore(::Photon::Realtime::Player*  player) ;

/// [Extension]
/// @brief Method SetScore, addr 0xa738338, size 0xc4, virtual false, abstract: false, final false
static inline void SetScore(::Photon::Realtime::Player*  player, int32_t  newScore) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScoreExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScoreExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScoreExtensions(ScoreExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScoreExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScoreExtensions(ScoreExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31218};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Pun::UtilityScripts::ScoreExtensions) == 0x10, "Size mismatch!");

} // namespace end def Photon::Pun::UtilityScripts
