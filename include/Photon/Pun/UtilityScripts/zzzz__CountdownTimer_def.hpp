#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/CountdownTimer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CountdownTimer)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace Photon::Pun::UtilityScripts {
class CountdownTimer_CountdownTimerHasExpired;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class CountdownTimer;
}
namespace Photon::Pun::UtilityScripts {
class CountdownTimer_CountdownTimerHasExpired;
}
// Write type traits
MARK_REF_T(::Photon::Pun::UtilityScripts::CountdownTimer*);
MARK_REF_T(::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::UtilityScripts::CountdownTimer*, "Photon.Pun.UtilityScripts", "CountdownTimer");
DEFINE_IL2CPP_CLASS(::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired*, "Photon.Pun.UtilityScripts", "CountdownTimer/CountdownTimerHasExpired");
// Dependencies Photon.Pun.MonoBehaviourPunCallbacks
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: Photon.Pun.UtilityScripts.CountdownTimer
class CORDL_TYPE CountdownTimer : public ::Photon::Pun::MonoBehaviourPunCallbacks {
public:
// Declarations
using CountdownTimerHasExpired = ::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired;

/// @brief Field Countdown, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Countdown, put=__cordl_internal_set_Countdown)) float_t  Countdown;

/// @brief Field OnCountdownTimerHasExpired, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnCountdownTimerHasExpired, put=setStaticF_OnCountdownTimerHasExpired)) ::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired*  OnCountdownTimerHasExpired;

/// @brief Field Text, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Text, put=__cordl_internal_set_Text)) ::UnityW<::UnityEngine::UI::Text>  Text;

/// @brief Field isTimerRunning, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isTimerRunning, put=__cordl_internal_set_isTimerRunning)) bool  isTimerRunning;

/// @brief Field startTime, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_startTime, put=__cordl_internal_set_startTime)) int32_t  startTime;

/// @brief Method Initialize, addr 0xa73ba18, size 0x25c, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::Photon::Pun::UtilityScripts::CountdownTimer* New_ctor() ;

/// @brief Method OnDisable, addr 0xa73bc74, size 0x78, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa73b998, size 0x80, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnRoomPropertiesUpdate, addr 0xa73bf40, size 0xcc, virtual true, abstract: false, final false
inline void OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable*  propertiesThatChanged) ;

/// @brief Method OnTimerEnds, addr 0xa73be34, size 0xf8, virtual false, abstract: false, final false
inline void OnTimerEnds() ;

/// @brief Method OnTimerRuns, addr 0xa73bf2c, size 0x14, virtual false, abstract: false, final false
inline void OnTimerRuns() ;

/// @brief Method SetStartTime, addr 0xa73c108, size 0x1fc, virtual false, abstract: false, final false
static inline void SetStartTime() ;

/// @brief Method Start, addr 0xa73b8e0, size 0xb8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TimeRemaining, addr 0xa73bdbc, size 0x78, virtual false, abstract: false, final false
inline float_t TimeRemaining() ;

/// @brief Method TryGetStartTime, addr 0xa73c00c, size 0xfc, virtual false, abstract: false, final false
static inline bool TryGetStartTime(::by_ref<int32_t>  startTimestamp) ;

/// @brief Method Update, addr 0xa73bcec, size 0xd0, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_Countdown() const;

constexpr float_t& __cordl_internal_get_Countdown() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_Text() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_Text() ;

constexpr bool const& __cordl_internal_get_isTimerRunning() const;

constexpr bool& __cordl_internal_get_isTimerRunning() ;

constexpr int32_t const& __cordl_internal_get_startTime() const;

constexpr int32_t& __cordl_internal_get_startTime() ;

constexpr void __cordl_internal_set_Countdown(float_t  value) ;

constexpr void __cordl_internal_set_Text(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_isTimerRunning(bool  value) ;

constexpr void __cordl_internal_set_startTime(int32_t  value) ;

/// @brief Method .ctor, addr 0xa73c304, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnCountdownTimerHasExpired, addr 0xa73b770, size 0xb8, virtual false, abstract: false, final false
static inline void add_OnCountdownTimerHasExpired(::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired*  value) ;

static inline ::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired* getStaticF_OnCountdownTimerHasExpired() ;

/// [CompilerGenerated]
/// @brief Method remove_OnCountdownTimerHasExpired, addr 0xa73b828, size 0xb8, virtual false, abstract: false, final false
static inline void remove_OnCountdownTimerHasExpired(::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired*  value) ;

static inline void setStaticF_OnCountdownTimerHasExpired(::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CountdownTimer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CountdownTimer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CountdownTimer(CountdownTimer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CountdownTimer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CountdownTimer(CountdownTimer const& ) = delete;

/// @brief Field CountdownStartTime offset 0xffffffff size 0x8
static constexpr ::ConstString  CountdownStartTime{u"StartTime"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31236};

/// [Header("Countdown time in seconds")]
/// @brief Field Countdown, offset: 0x28, size: 0x4, def value: None
 float_t  ___Countdown;

/// @brief Field isTimerRunning, offset: 0x2c, size: 0x1, def value: None
 bool  ___isTimerRunning;

/// @brief Field startTime, offset: 0x30, size: 0x4, def value: None
 int32_t  ___startTime;

/// [Header("Reference to a Text component for visualizing the countdown")]
/// @brief Field Text, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___Text;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::UtilityScripts::CountdownTimer, ___Countdown) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CountdownTimer, ___isTimerRunning) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CountdownTimer, ___startTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CountdownTimer, ___Text) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::UtilityScripts::CountdownTimer) == 0x40, "Size mismatch!");

} // namespace end def Photon::Pun::UtilityScripts
// Dependencies System.MulticastDelegate
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: Photon.Pun.UtilityScripts.CountdownTimer/CountdownTimerHasExpired
class CORDL_TYPE CountdownTimer_CountdownTimerHasExpired : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xa73c3c4, size 0x1c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xa73c3e0, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xa73c3b0, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa73c314, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CountdownTimer_CountdownTimerHasExpired() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CountdownTimer_CountdownTimerHasExpired", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CountdownTimer_CountdownTimerHasExpired(CountdownTimer_CountdownTimerHasExpired && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CountdownTimer_CountdownTimerHasExpired", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CountdownTimer_CountdownTimerHasExpired(CountdownTimer_CountdownTimerHasExpired const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31235};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Pun::UtilityScripts::CountdownTimer_CountdownTimerHasExpired) == 0x80, "Size mismatch!");

} // namespace end def Photon::Pun::UtilityScripts
