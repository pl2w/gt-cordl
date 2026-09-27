#pragma once
// IWYU pragma private; include "com/AnotherAxiom/Paddleball/Paddleball.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ArcadeGame_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include "com/AnotherAxiom/Paddleball/zzzz__PaddleballPaddle_def.hpp"
#include "com/AnotherAxiom/Paddleball/zzzz__Paddleball_PaddleballNetState_def.hpp"
#include "com/AnotherAxiom/Paddleball/zzzz__Paddleball_ScreenMode_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Paddleball)
namespace GlobalNamespace {
struct ArcadeButtons;
}
namespace GlobalNamespace {
struct Paddleball_PaddleballNetState;
}
namespace GlobalNamespace {
struct Paddleball_ScreenMode;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace com::AnotherAxiom::Paddleball {
class Paddleball;
}
// Write type traits
MARK_REF_T(::com::AnotherAxiom::Paddleball::Paddleball*);
DEFINE_IL2CPP_CLASS(::com::AnotherAxiom::Paddleball::Paddleball*, "com.AnotherAxiom.Paddleball", "Paddleball");
// Dependencies ArcadeGame, UnityEngine.Vector2, com.AnotherAxiom.Paddleball.Paddleball::PaddleballNetState, com.AnotherAxiom.Paddleball.Paddleball::ScreenMode, com.AnotherAxiom.Paddleball.PaddleballPaddle
namespace com::AnotherAxiom::Paddleball {
// Is value type: false
// CS Name: com.AnotherAxiom.Paddleball.Paddleball
class CORDL_TYPE Paddleball : public ::GlobalNamespace::ArcadeGame {
public:
// Declarations
using PaddleballNetState = ::GlobalNamespace::Paddleball_PaddleballNetState;

using ScreenMode = ::GlobalNamespace::Paddleball_ScreenMode;

/// @brief Field ball, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_ball, put=__cordl_internal_set_ball)) ::UnityW<::UnityEngine::Transform>  ball;

/// @brief Field ballSpeedBoost, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_ballSpeedBoost, put=__cordl_internal_set_ballSpeedBoost)) float_t  ballSpeedBoost;

/// @brief Field ballTrajectory, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_ballTrajectory, put=__cordl_internal_set_ballTrajectory)) ::UnityEngine::Vector2  ballTrajectory;

/// @brief Field blackWinScreen, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_blackWinScreen, put=__cordl_internal_set_blackWinScreen)) ::UnityW<::UnityEngine::GameObject>  blackWinScreen;

/// @brief Field byteToYPosFactor, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_byteToYPosFactor, put=__cordl_internal_set_byteToYPosFactor)) float_t  byteToYPosFactor;

/// @brief Field currentScreenMode, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentScreenMode, put=__cordl_internal_set_currentScreenMode)) ::GlobalNamespace::Paddleball_ScreenMode  currentScreenMode;

/// @brief Field gameBallSpeed, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_gameBallSpeed, put=__cordl_internal_set_gameBallSpeed)) float_t  gameBallSpeed;

/// @brief Field initialBallSpeed, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_initialBallSpeed, put=__cordl_internal_set_initialBallSpeed)) float_t  initialBallSpeed;

/// @brief Field netStateCur, offset 0x118, size 0x1c 
 __declspec(property(get=__cordl_internal_get_netStateCur, put=__cordl_internal_set_netStateCur)) ::GlobalNamespace::Paddleball_PaddleballNetState  netStateCur;

/// @brief Field netStateLast, offset 0xfc, size 0x1c 
 __declspec(property(get=__cordl_internal_get_netStateLast, put=__cordl_internal_set_netStateLast)) ::GlobalNamespace::Paddleball_PaddleballNetState  netStateLast;

/// @brief Field officialPos, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_officialPos, put=__cordl_internal_set_officialPos)) ::ArrayW<float_t>  officialPos;

/// @brief Field p, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_p, put=__cordl_internal_set_p)) ::ArrayW<::UnityW<::com::AnotherAxiom::Paddleball::PaddleballPaddle>>  p;

/// @brief Field paddleIdle, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_paddleIdle, put=__cordl_internal_set_paddleIdle)) ::ArrayW<float_t>  paddleIdle;

/// @brief Field paddleSpeed, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_paddleSpeed, put=__cordl_internal_set_paddleSpeed)) float_t  paddleSpeed;

/// @brief Field requestedPos, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_requestedPos, put=__cordl_internal_set_requestedPos)) ::ArrayW<float_t>  requestedPos;

/// @brief Field returnToTitleAfterTimestamp, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_returnToTitleAfterTimestamp, put=__cordl_internal_set_returnToTitleAfterTimestamp)) float_t  returnToTitleAfterTimestamp;

/// @brief Field scoreDisplay, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_scoreDisplay, put=__cordl_internal_set_scoreDisplay)) ::UnityW<::TMPro::TMP_Text>  scoreDisplay;

/// @brief Field scoreFormat, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_scoreFormat, put=__cordl_internal_set_scoreFormat)) ::StringW  scoreFormat;

/// @brief Field scoreL, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_scoreL, put=__cordl_internal_set_scoreL)) int32_t  scoreL;

/// @brief Field scoreR, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_scoreR, put=__cordl_internal_set_scoreR)) int32_t  scoreR;

/// @brief Field tableSizeBall, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_tableSizeBall, put=__cordl_internal_set_tableSizeBall)) ::UnityEngine::Vector2  tableSizeBall;

/// @brief Field tableSizePaddle, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_tableSizePaddle, put=__cordl_internal_set_tableSizePaddle)) ::UnityEngine::Vector2  tableSizePaddle;

/// @brief Field titleScreen, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_titleScreen, put=__cordl_internal_set_titleScreen)) ::UnityW<::UnityEngine::GameObject>  titleScreen;

/// @brief Field whiteWinScreen, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_whiteWinScreen, put=__cordl_internal_set_whiteWinScreen)) ::UnityW<::UnityEngine::GameObject>  whiteWinScreen;

/// @brief Field winScreenDuration, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_winScreenDuration, put=__cordl_internal_set_winScreenDuration)) float_t  winScreenDuration;

/// @brief Field yPosToByteFactor, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_yPosToByteFactor, put=__cordl_internal_set_yPosToByteFactor)) float_t  yPosToByteFactor;

/// @brief Method Awake, addr 0x5cd3b10, size 0x38, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ButtonDown, addr 0x5cd5294, size 0x4, virtual true, abstract: false, final false
inline void ButtonDown(int32_t  player, ::GlobalNamespace::ArcadeButtons  button) ;

/// @brief Method ButtonUp, addr 0x5cd5290, size 0x4, virtual true, abstract: false, final false
inline void ButtonUp(int32_t  player, ::GlobalNamespace::ArcadeButtons  button) ;

/// @brief Method ByteToYPos, addr 0x5cd4a40, size 0x1c, virtual false, abstract: false, final false
inline float_t ByteToYPos(uint8_t  Y) ;

/// @brief Method ChangeScreen, addr 0x5cd48c8, size 0x178, virtual false, abstract: false, final false
inline void ChangeScreen(::GlobalNamespace::Paddleball_ScreenMode  mode) ;

/// @brief Method GetNetworkState, addr 0x5cd4b40, size 0x274, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> GetNetworkState() ;

static inline ::com::AnotherAxiom::Paddleball::Paddleball* New_ctor() ;

/// @brief Method OnTimeout, addr 0x5cd5298, size 0x8, virtual true, abstract: false, final false
inline void OnTimeout() ;

/// @brief Method ReadPlayerDataPUN, addr 0x5cd52a0, size 0x94, virtual true, abstract: false, final false
inline void ReadPlayerDataPUN(int32_t  player, ::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method SetNetworkState, addr 0x5cd4ef0, size 0x3a0, virtual true, abstract: false, final false
inline void SetNetworkState(::ArrayW<uint8_t>  b) ;

/// @brief Method Start, addr 0x5cd3b48, size 0x180, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5cd3d78, size 0xb50, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateScore, addr 0x5cd3cc8, size 0xb0, virtual false, abstract: false, final false
inline void UpdateScore() ;

/// @brief Method WritePlayerDataPUN, addr 0x5cd5334, size 0x70, virtual true, abstract: false, final false
inline void WritePlayerDataPUN(int32_t  player, ::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method YPosToByte, addr 0x5cd4a5c, size 0xe4, virtual false, abstract: false, final false
inline uint8_t YPosToByte(float_t  Y) ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_ball() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_ball() ;

constexpr float_t const& __cordl_internal_get_ballSpeedBoost() const;

constexpr float_t& __cordl_internal_get_ballSpeedBoost() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_ballTrajectory() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_ballTrajectory() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_blackWinScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_blackWinScreen() ;

constexpr float_t const& __cordl_internal_get_byteToYPosFactor() const;

constexpr float_t& __cordl_internal_get_byteToYPosFactor() ;

constexpr ::GlobalNamespace::Paddleball_ScreenMode const& __cordl_internal_get_currentScreenMode() const;

constexpr ::GlobalNamespace::Paddleball_ScreenMode& __cordl_internal_get_currentScreenMode() ;

constexpr float_t const& __cordl_internal_get_gameBallSpeed() const;

constexpr float_t& __cordl_internal_get_gameBallSpeed() ;

constexpr float_t const& __cordl_internal_get_initialBallSpeed() const;

constexpr float_t& __cordl_internal_get_initialBallSpeed() ;

constexpr ::GlobalNamespace::Paddleball_PaddleballNetState const& __cordl_internal_get_netStateCur() const;

constexpr ::GlobalNamespace::Paddleball_PaddleballNetState& __cordl_internal_get_netStateCur() ;

constexpr ::GlobalNamespace::Paddleball_PaddleballNetState const& __cordl_internal_get_netStateLast() const;

constexpr ::GlobalNamespace::Paddleball_PaddleballNetState& __cordl_internal_get_netStateLast() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_officialPos() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_officialPos() ;

constexpr ::ArrayW<::UnityW<::com::AnotherAxiom::Paddleball::PaddleballPaddle>> const& __cordl_internal_get_p() const;

constexpr ::ArrayW<::UnityW<::com::AnotherAxiom::Paddleball::PaddleballPaddle>>& __cordl_internal_get_p() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_paddleIdle() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_paddleIdle() ;

constexpr float_t const& __cordl_internal_get_paddleSpeed() const;

constexpr float_t& __cordl_internal_get_paddleSpeed() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_requestedPos() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_requestedPos() ;

constexpr float_t const& __cordl_internal_get_returnToTitleAfterTimestamp() const;

constexpr float_t& __cordl_internal_get_returnToTitleAfterTimestamp() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_scoreDisplay() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_scoreDisplay() ;

constexpr ::StringW const& __cordl_internal_get_scoreFormat() const;

constexpr ::StringW& __cordl_internal_get_scoreFormat() ;

constexpr int32_t const& __cordl_internal_get_scoreL() const;

constexpr int32_t& __cordl_internal_get_scoreL() ;

constexpr int32_t const& __cordl_internal_get_scoreR() const;

constexpr int32_t& __cordl_internal_get_scoreR() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_tableSizeBall() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_tableSizeBall() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_tableSizePaddle() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_tableSizePaddle() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_titleScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_titleScreen() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_whiteWinScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_whiteWinScreen() ;

constexpr float_t const& __cordl_internal_get_winScreenDuration() const;

constexpr float_t& __cordl_internal_get_winScreenDuration() ;

constexpr float_t const& __cordl_internal_get_yPosToByteFactor() const;

constexpr float_t& __cordl_internal_get_yPosToByteFactor() ;

constexpr void __cordl_internal_set_ball(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_ballSpeedBoost(float_t  value) ;

constexpr void __cordl_internal_set_ballTrajectory(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_blackWinScreen(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_byteToYPosFactor(float_t  value) ;

constexpr void __cordl_internal_set_currentScreenMode(::GlobalNamespace::Paddleball_ScreenMode  value) ;

constexpr void __cordl_internal_set_gameBallSpeed(float_t  value) ;

constexpr void __cordl_internal_set_initialBallSpeed(float_t  value) ;

constexpr void __cordl_internal_set_netStateCur(::GlobalNamespace::Paddleball_PaddleballNetState  value) ;

constexpr void __cordl_internal_set_netStateLast(::GlobalNamespace::Paddleball_PaddleballNetState  value) ;

constexpr void __cordl_internal_set_officialPos(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_p(::ArrayW<::UnityW<::com::AnotherAxiom::Paddleball::PaddleballPaddle>>  value) ;

constexpr void __cordl_internal_set_paddleIdle(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_paddleSpeed(float_t  value) ;

constexpr void __cordl_internal_set_requestedPos(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_returnToTitleAfterTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_scoreDisplay(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_scoreFormat(::StringW  value) ;

constexpr void __cordl_internal_set_scoreL(int32_t  value) ;

constexpr void __cordl_internal_set_scoreR(int32_t  value) ;

constexpr void __cordl_internal_set_tableSizeBall(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_tableSizePaddle(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_titleScreen(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_whiteWinScreen(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_winScreenDuration(float_t  value) ;

constexpr void __cordl_internal_set_yPosToByteFactor(float_t  value) ;

/// @brief Method .ctor, addr 0x5cd53a4, size 0xbc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Paddleball() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Paddleball", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Paddleball(Paddleball && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Paddleball", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Paddleball(Paddleball const& ) = delete;

/// @brief Field AUDIO_PADDLEBOUNCE offset 0xffffffff size 0x4
static constexpr int32_t  AUDIO_PADDLEBOUNCE{static_cast<int32_t>(0x1)};

/// @brief Field AUDIO_PLAYERJOIN offset 0xffffffff size 0x4
static constexpr int32_t  AUDIO_PLAYERJOIN{static_cast<int32_t>(0x4)};

/// @brief Field AUDIO_SCORE offset 0xffffffff size 0x4
static constexpr int32_t  AUDIO_SCORE{static_cast<int32_t>(0x2)};

/// @brief Field AUDIO_WALLBOUNCE offset 0xffffffff size 0x4
static constexpr int32_t  AUDIO_WALLBOUNCE{static_cast<int32_t>(0x0)};

/// @brief Field AUDIO_WIN offset 0xffffffff size 0x4
static constexpr int32_t  AUDIO_WIN{static_cast<int32_t>(0x3)};

/// @brief Field MAXSCORE offset 0xffffffff size 0x4
static constexpr int32_t  MAXSCORE{static_cast<int32_t>(0xa)};

/// @brief Field VAR_REQUESTEDPOS offset 0xffffffff size 0x4
static constexpr int32_t  VAR_REQUESTEDPOS{static_cast<int32_t>(0x0)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4478};

/// @brief Field byteToDirectionFactor offset 0xffffffff size 0x4
static constexpr float_t  byteToDirectionFactor{static_cast<float_t>(0.007843138f)};

/// @brief Field directionToByteFactor offset 0xffffffff size 0x4
static constexpr float_t  directionToByteFactor{static_cast<float_t>(127.5f)};

/// [SerializeField]
/// @brief Field p, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::UnityW<::com::AnotherAxiom::Paddleball::PaddleballPaddle>>  ___p;

/// @brief Field requestedPos, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<float_t>  ___requestedPos;

/// @brief Field officialPos, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<float_t>  ___officialPos;

/// [SerializeField]
/// @brief Field ball, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___ball;

/// [SerializeField]
/// @brief Field ballTrajectory, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___ballTrajectory;

/// [SerializeField]
/// @brief Field paddleSpeed, offset: 0x90, size: 0x4, def value: None
 float_t  ___paddleSpeed;

/// [SerializeField]
/// @brief Field initialBallSpeed, offset: 0x94, size: 0x4, def value: None
 float_t  ___initialBallSpeed;

/// [SerializeField]
/// @brief Field ballSpeedBoost, offset: 0x98, size: 0x4, def value: None
 float_t  ___ballSpeedBoost;

/// @brief Field gameBallSpeed, offset: 0x9c, size: 0x4, def value: None
 float_t  ___gameBallSpeed;

/// [SerializeField]
/// @brief Field tableSizeBall, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___tableSizeBall;

/// [SerializeField]
/// @brief Field tableSizePaddle, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___tableSizePaddle;

/// [SerializeField]
/// @brief Field blackWinScreen, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___blackWinScreen;

/// [SerializeField]
/// @brief Field whiteWinScreen, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___whiteWinScreen;

/// [SerializeField]
/// @brief Field titleScreen, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___titleScreen;

/// [SerializeField]
/// @brief Field winScreenDuration, offset: 0xc8, size: 0x4, def value: None
 float_t  ___winScreenDuration;

/// @brief Field returnToTitleAfterTimestamp, offset: 0xcc, size: 0x4, def value: None
 float_t  ___returnToTitleAfterTimestamp;

/// @brief Field scoreL, offset: 0xd0, size: 0x4, def value: None
 int32_t  ___scoreL;

/// @brief Field scoreR, offset: 0xd4, size: 0x4, def value: None
 int32_t  ___scoreR;

/// @brief Field scoreFormat, offset: 0xd8, size: 0x8, def value: None
 ::StringW  ___scoreFormat;

/// [SerializeField]
/// @brief Field scoreDisplay, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___scoreDisplay;

/// @brief Field paddleIdle, offset: 0xe8, size: 0x8, def value: None
 ::ArrayW<float_t>  ___paddleIdle;

/// @brief Field currentScreenMode, offset: 0xf0, size: 0x4, def value: None
 ::GlobalNamespace::Paddleball_ScreenMode  ___currentScreenMode;

/// @brief Field yPosToByteFactor, offset: 0xf4, size: 0x4, def value: None
 float_t  ___yPosToByteFactor;

/// @brief Field byteToYPosFactor, offset: 0xf8, size: 0x4, def value: None
 float_t  ___byteToYPosFactor;

/// @brief Field netStateLast, offset: 0xfc, size: 0x1c, def value: None
 ::GlobalNamespace::Paddleball_PaddleballNetState  ___netStateLast;

/// @brief Field netStateCur, offset: 0x118, size: 0x1c, def value: None
 ::GlobalNamespace::Paddleball_PaddleballNetState  ___netStateCur;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::com::AnotherAxiom::Paddleball::Paddleball, ___p) == 0x68, "Offset mismatch!");

static_assert(offsetof(::com::AnotherAxiom::Paddleball::Paddleball, ___requestedPos) == 0x70, "Offset mismatch!");

static_assert(offsetof(::com::AnotherAxiom::Paddleball::Paddleball, ___officialPos) == 0x78, "Offset mismatch!");

static_assert(offsetof(::com::AnotherAxiom::Paddleball::Paddleball, ___ball) == 0x80, "Offset mismatch!");

static_assert(offsetof(::com::AnotherAxiom::Paddleball::Paddleball, ___ballTrajectory) == 0x88, "Offset mismatch!");

static_assert(offsetof(::com::AnotherAxiom::Paddleball::Paddleball, ___paddleSpeed) == 0x90, "Offset mismatch!");

static_assert(offsetof(::com::AnotherAxiom::Paddleball::Paddleball, ___initialBallSpeed) == 0x94, "Offset mismatch!");

static_assert(offsetof(::com::AnotherAxiom::Paddleball::Paddleball, ___ballSpeedBoost) == 0x98, "Offset mismatch!");

static_assert(offsetof(::com::AnotherAxiom::Paddleball::Paddleball, ___gameBallSpeed) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::com::AnotherAxiom::Paddleball::Paddleball, ___tableSizeBall) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::com::AnotherAxiom::Paddleball::Paddleball, ___tableSizePaddle) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::com::AnotherAxiom::Paddleball::Paddleball, ___blackWinScreen) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::com::AnotherAxiom::Paddleball::Paddleball, ___whiteWinScreen) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::com::AnotherAxiom::Paddleball::Paddleball, ___titleScreen) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::com::AnotherAxiom::Paddleball::Paddleball, ___winScreenDuration) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::com::AnotherAxiom::Paddleball::Paddleball, ___returnToTitleAfterTimestamp) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::com::AnotherAxiom::Paddleball::Paddleball, ___scoreL) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::com::AnotherAxiom::Paddleball::Paddleball, ___scoreR) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::com::AnotherAxiom::Paddleball::Paddleball, ___scoreFormat) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::com::AnotherAxiom::Paddleball::Paddleball, ___scoreDisplay) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::com::AnotherAxiom::Paddleball::Paddleball, ___paddleIdle) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::com::AnotherAxiom::Paddleball::Paddleball, ___currentScreenMode) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::com::AnotherAxiom::Paddleball::Paddleball, ___yPosToByteFactor) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::com::AnotherAxiom::Paddleball::Paddleball, ___byteToYPosFactor) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::com::AnotherAxiom::Paddleball::Paddleball, ___netStateLast) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::com::AnotherAxiom::Paddleball::Paddleball, ___netStateCur) == 0x118, "Offset mismatch!");

static_assert(sizeof(::com::AnotherAxiom::Paddleball::Paddleball) == 0x138, "Size mismatch!");

} // namespace end def com::AnotherAxiom::Paddleball
