#pragma once
// IWYU pragma private; include "GorillaTagScripts/PlayerTimerBoardLine.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerTimerBoardLine)
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class RigContainer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTagScripts {
class PlayerTimerBoardLine___c;
}
namespace GorillaTagScripts {
class PlayerTimerBoard;
}
namespace System {
template<typename T>
class Predicate_1;
}
// Forward declare root types
namespace GorillaTagScripts {
class PlayerTimerBoardLine;
}
namespace GorillaTagScripts {
class PlayerTimerBoardLine___c;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::PlayerTimerBoardLine*);
MARK_REF_T(::GorillaTagScripts::PlayerTimerBoardLine___c*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::PlayerTimerBoardLine*, "GorillaTagScripts", "PlayerTimerBoardLine");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::PlayerTimerBoardLine___c*, "GorillaTagScripts", "PlayerTimerBoardLine/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.PlayerTimerBoardLine
class CORDL_TYPE PlayerTimerBoardLine : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GorillaTagScripts::PlayerTimerBoardLine___c;

/// @brief Field currentNickname, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentNickname, put=__cordl_internal_set_currentNickname)) ::StringW  currentNickname;

/// @brief Field linePlayer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_linePlayer, put=__cordl_internal_set_linePlayer)) ::GlobalNamespace::NetPlayer*  linePlayer;

/// @brief Field parentBoard, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentBoard, put=__cordl_internal_set_parentBoard)) ::UnityW<::GorillaTagScripts::PlayerTimerBoard>  parentBoard;

/// @brief Field playerNameVisible, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerNameVisible, put=__cordl_internal_set_playerNameVisible)) ::StringW  playerNameVisible;

/// @brief Field playerTimeSeconds, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerTimeSeconds, put=__cordl_internal_set_playerTimeSeconds)) float_t  playerTimeSeconds;

/// @brief Field playerTimeStr, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerTimeStr, put=__cordl_internal_set_playerTimeStr)) ::StringW  playerTimeStr;

/// @brief Field playerVRRig, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerVRRig, put=__cordl_internal_set_playerVRRig)) ::UnityW<::GlobalNamespace::VRRig>  playerVRRig;

/// @brief Field rigContainer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigContainer, put=__cordl_internal_set_rigContainer)) ::UnityW<::GlobalNamespace::RigContainer>  rigContainer;

/// @brief Method CompareByTotalTime, addr 0x5bd1290, size 0x68, virtual false, abstract: false, final false
static inline int32_t CompareByTotalTime(::GorillaTagScripts::PlayerTimerBoardLine*  lineA, ::GorillaTagScripts::PlayerTimerBoardLine*  lineB) ;

/// @brief Method InitializeLine, addr 0x5bd092c, size 0x38, virtual false, abstract: false, final false
inline void InitializeLine() ;

static inline ::GorillaTagScripts::PlayerTimerBoardLine* New_ctor() ;

/// @brief Method NormalizeName, addr 0x5bd0f8c, size 0x26c, virtual false, abstract: false, final false
inline ::StringW NormalizeName(bool  doIt, ::StringW  text) ;

/// @brief Method ResetData, addr 0x5bd07ac, size 0x60, virtual false, abstract: false, final false
inline void ResetData() ;

/// @brief Method SetLineData, addr 0x5bd080c, size 0x120, virtual false, abstract: false, final false
inline void SetLineData(::GlobalNamespace::NetPlayer*  netPlayer) ;

/// @brief Method UpdateLine, addr 0x5bd0f00, size 0x8c, virtual false, abstract: false, final false
inline void UpdateLine() ;

/// @brief Method UpdatePlayerText, addr 0x5bd0964, size 0x3e8, virtual false, abstract: false, final false
inline void UpdatePlayerText() ;

/// @brief Method UpdateTimeText, addr 0x5bd0d4c, size 0x1b4, virtual false, abstract: false, final false
inline void UpdateTimeText() ;

constexpr ::StringW const& __cordl_internal_get_currentNickname() const;

constexpr ::StringW& __cordl_internal_get_currentNickname() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_linePlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_linePlayer() ;

constexpr ::UnityW<::GorillaTagScripts::PlayerTimerBoard> const& __cordl_internal_get_parentBoard() const;

constexpr ::UnityW<::GorillaTagScripts::PlayerTimerBoard>& __cordl_internal_get_parentBoard() ;

constexpr ::StringW const& __cordl_internal_get_playerNameVisible() const;

constexpr ::StringW& __cordl_internal_get_playerNameVisible() ;

constexpr float_t const& __cordl_internal_get_playerTimeSeconds() const;

constexpr float_t& __cordl_internal_get_playerTimeSeconds() ;

constexpr ::StringW const& __cordl_internal_get_playerTimeStr() const;

constexpr ::StringW& __cordl_internal_get_playerTimeStr() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_playerVRRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_playerVRRig() ;

constexpr ::UnityW<::GlobalNamespace::RigContainer> const& __cordl_internal_get_rigContainer() const;

constexpr ::UnityW<::GlobalNamespace::RigContainer>& __cordl_internal_get_rigContainer() ;

constexpr void __cordl_internal_set_currentNickname(::StringW  value) ;

constexpr void __cordl_internal_set_linePlayer(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_parentBoard(::UnityW<::GorillaTagScripts::PlayerTimerBoard>  value) ;

constexpr void __cordl_internal_set_playerNameVisible(::StringW  value) ;

constexpr void __cordl_internal_set_playerTimeSeconds(float_t  value) ;

constexpr void __cordl_internal_set_playerTimeStr(::StringW  value) ;

constexpr void __cordl_internal_set_playerVRRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_rigContainer(::UnityW<::GlobalNamespace::RigContainer>  value) ;

/// @brief Method .ctor, addr 0x5bd12f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerTimerBoardLine() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerTimerBoardLine", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerTimerBoardLine(PlayerTimerBoardLine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerTimerBoardLine", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerTimerBoardLine(PlayerTimerBoardLine const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4004};

/// @brief Field playerNameVisible, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___playerNameVisible;

/// @brief Field playerTimeStr, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___playerTimeStr;

/// @brief Field playerTimeSeconds, offset: 0x30, size: 0x4, def value: None
 float_t  ___playerTimeSeconds;

/// @brief Field linePlayer, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___linePlayer;

/// @brief Field playerVRRig, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___playerVRRig;

/// @brief Field parentBoard, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::PlayerTimerBoard>  ___parentBoard;

/// @brief Field rigContainer, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RigContainer>  ___rigContainer;

/// @brief Field currentNickname, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___currentNickname;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::PlayerTimerBoardLine, ___playerNameVisible) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::PlayerTimerBoardLine, ___playerTimeStr) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::PlayerTimerBoardLine, ___playerTimeSeconds) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::PlayerTimerBoardLine, ___linePlayer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::PlayerTimerBoardLine, ___playerVRRig) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::PlayerTimerBoardLine, ___parentBoard) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::PlayerTimerBoardLine, ___rigContainer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::PlayerTimerBoardLine, ___currentNickname) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::PlayerTimerBoardLine) == 0x60, "Size mismatch!");

} // namespace end def GorillaTagScripts
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.PlayerTimerBoardLine/<>c
class CORDL_TYPE PlayerTimerBoardLine___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GorillaTagScripts::PlayerTimerBoardLine___c*  __9;

/// @brief Field <>9__14_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_0, put=setStaticF___9__14_0)) ::System::Predicate_1<char16_t>*  __9__14_0;

static inline ::GorillaTagScripts::PlayerTimerBoardLine___c* New_ctor() ;

/// @brief Method <NormalizeName>b__14_0, addr 0x5bd1370, size 0x58, virtual false, abstract: false, final false
inline bool _NormalizeName_b__14_0(char16_t  c) ;

/// @brief Method .ctor, addr 0x5bd1368, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GorillaTagScripts::PlayerTimerBoardLine___c* getStaticF___9() ;

static inline ::System::Predicate_1<char16_t>* getStaticF___9__14_0() ;

static inline void setStaticF___9(::GorillaTagScripts::PlayerTimerBoardLine___c*  value) ;

static inline void setStaticF___9__14_0(::System::Predicate_1<char16_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerTimerBoardLine___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerTimerBoardLine___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerTimerBoardLine___c(PlayerTimerBoardLine___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerTimerBoardLine___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerTimerBoardLine___c(PlayerTimerBoardLine___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4003};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTagScripts::PlayerTimerBoardLine___c) == 0x10, "Size mismatch!");

} // namespace end def GorillaTagScripts
