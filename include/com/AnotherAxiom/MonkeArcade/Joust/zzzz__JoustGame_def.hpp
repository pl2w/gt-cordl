#pragma once
// IWYU pragma private; include "com/AnotherAxiom/MonkeArcade/Joust/JoustGame.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ArcadeGame_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "com/AnotherAxiom/MonkeArcade/Joust/zzzz__JoustPlayer_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JoustGame)
namespace GlobalNamespace {
struct ArcadeButtons;
}
// Forward declare root types
namespace com::AnotherAxiom::MonkeArcade::Joust {
class JoustGame;
}
// Write type traits
MARK_REF_T(::com::AnotherAxiom::MonkeArcade::Joust::JoustGame*);
DEFINE_IL2CPP_CLASS(::com::AnotherAxiom::MonkeArcade::Joust::JoustGame*, "com.AnotherAxiom.MonkeArcade.Joust", "JoustGame");
// Dependencies ArcadeGame, com.AnotherAxiom.MonkeArcade.Joust.JoustPlayer
namespace com::AnotherAxiom::MonkeArcade::Joust {
// Is value type: false
// CS Name: com.AnotherAxiom.MonkeArcade.Joust.JoustGame
class CORDL_TYPE JoustGame : public ::GlobalNamespace::ArcadeGame {
public:
// Declarations
/// @brief Field joustPlayers, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_joustPlayers, put=__cordl_internal_set_joustPlayers)) ::ArrayW<::UnityW<::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer>>  joustPlayers;

/// @brief Method ButtonDown, addr 0x5cd54b8, size 0x88, virtual true, abstract: false, final false
inline void ButtonDown(int32_t  player, ::GlobalNamespace::ArcadeButtons  button) ;

/// @brief Method ButtonUp, addr 0x5cd554c, size 0x58, virtual true, abstract: false, final false
inline void ButtonUp(int32_t  player, ::GlobalNamespace::ArcadeButtons  button) ;

/// @brief Method GetNetworkState, addr 0x5cd5470, size 0x44, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> GetNetworkState() ;

static inline ::com::AnotherAxiom::MonkeArcade::Joust::JoustGame* New_ctor() ;

/// @brief Method OnTimeout, addr 0x5cd572c, size 0x4, virtual true, abstract: false, final false
inline void OnTimeout() ;

/// @brief Method SetNetworkState, addr 0x5cd54b4, size 0x4, virtual true, abstract: false, final false
inline void SetNetworkState(::ArrayW<uint8_t>  obj) ;

/// @brief Method Start, addr 0x5cd55a4, size 0x70, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5cd5614, size 0x118, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::ArrayW<::UnityW<::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer>> const& __cordl_internal_get_joustPlayers() const;

constexpr ::ArrayW<::UnityW<::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer>>& __cordl_internal_get_joustPlayers() ;

constexpr void __cordl_internal_set_joustPlayers(::ArrayW<::UnityW<::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer>>  value) ;

/// @brief Method .ctor, addr 0x5cd5730, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JoustGame() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JoustGame", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JoustGame(JoustGame && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JoustGame", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JoustGame(JoustGame const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4480};

/// [SerializeField]
/// @brief Field joustPlayers, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::UnityW<::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer>>  ___joustPlayers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::com::AnotherAxiom::MonkeArcade::Joust::JoustGame, ___joustPlayers) == 0x68, "Offset mismatch!");

static_assert(sizeof(::com::AnotherAxiom::MonkeArcade::Joust::JoustGame) == 0x70, "Size mismatch!");

} // namespace end def com::AnotherAxiom::MonkeArcade::Joust
