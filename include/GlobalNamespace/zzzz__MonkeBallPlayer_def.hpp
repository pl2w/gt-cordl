#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeBallPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MonkeBallPlayer)
namespace GlobalNamespace {
class GameBallPlayer;
}
namespace GlobalNamespace {
class MonkeBallGoalZone;
}
// Forward declare root types
namespace GlobalNamespace {
class MonkeBallPlayer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MonkeBallPlayer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeBallPlayer*, "", "MonkeBallPlayer");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MonkeBallPlayer
class CORDL_TYPE MonkeBallPlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field currGoalZone, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_currGoalZone, put=__cordl_internal_set_currGoalZone)) ::UnityW<::GlobalNamespace::MonkeBallGoalZone>  currGoalZone;

/// @brief Field gamePlayer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gamePlayer, put=__cordl_internal_set_gamePlayer)) ::UnityW<::GlobalNamespace::GameBallPlayer>  gamePlayer;

/// @brief Method Awake, addr 0x57b0764, size 0xa4, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::MonkeBallPlayer* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::MonkeBallGoalZone> const& __cordl_internal_get_currGoalZone() const;

constexpr ::UnityW<::GlobalNamespace::MonkeBallGoalZone>& __cordl_internal_get_currGoalZone() ;

constexpr ::UnityW<::GlobalNamespace::GameBallPlayer> const& __cordl_internal_get_gamePlayer() const;

constexpr ::UnityW<::GlobalNamespace::GameBallPlayer>& __cordl_internal_get_gamePlayer() ;

constexpr void __cordl_internal_set_currGoalZone(::UnityW<::GlobalNamespace::MonkeBallGoalZone>  value) ;

constexpr void __cordl_internal_set_gamePlayer(::UnityW<::GlobalNamespace::GameBallPlayer>  value) ;

/// @brief Method .ctor, addr 0x57b0808, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeBallPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeBallPlayer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeBallPlayer(MonkeBallPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeBallPlayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeBallPlayer(MonkeBallPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1554};

/// @brief Field gamePlayer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameBallPlayer>  ___gamePlayer;

/// @brief Field currGoalZone, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MonkeBallGoalZone>  ___currGoalZone;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeBallPlayer, ___gamePlayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallPlayer, ___currGoalZone) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeBallPlayer) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
