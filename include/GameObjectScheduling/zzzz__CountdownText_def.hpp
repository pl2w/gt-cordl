#pragma once
// IWYU pragma private; include "GameObjectScheduling/CountdownText.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CountdownText)
namespace GameObjectScheduling {
class CountdownTextDate;
}
namespace GameObjectScheduling {
class CountdownText__MonitorExternalTime_d__25;
}
namespace GameObjectScheduling {
class CountdownText__MonitorTime_d__24;
}
namespace GameObjectScheduling {
class CountdownText__WaitForDisplayRefresh_d__31;
}
namespace GlobalNamespace {
struct CountdownText_TimeChunk;
}
namespace GlobalNamespace {
class LocalizedText;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
struct DateTime;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
struct ValueTuple_4;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class BoolVariable;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class IntVariable;
}
namespace UnityEngine::Localization {
class LocalizedString;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace GameObjectScheduling {
class CountdownText;
}
namespace GameObjectScheduling {
class CountdownText__MonitorExternalTime_d__25;
}
namespace GameObjectScheduling {
class CountdownText__MonitorTime_d__24;
}
namespace GameObjectScheduling {
class CountdownText__WaitForDisplayRefresh_d__31;
}
// Write type traits
MARK_REF_T(::GameObjectScheduling::CountdownText*);
MARK_REF_T(::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25*);
MARK_REF_T(::GameObjectScheduling::CountdownText__MonitorTime_d__24*);
MARK_REF_T(::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31*);
DEFINE_IL2CPP_CLASS(::GameObjectScheduling::CountdownText*, "GameObjectScheduling", "CountdownText");
DEFINE_IL2CPP_CLASS(::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25*, "GameObjectScheduling", "CountdownText/<MonitorExternalTime>d__25");
DEFINE_IL2CPP_CLASS(::GameObjectScheduling::CountdownText__MonitorTime_d__24*, "GameObjectScheduling", "CountdownText/<MonitorTime>d__24");
DEFINE_IL2CPP_CLASS(::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31*, "GameObjectScheduling", "CountdownText/<WaitForDisplayRefresh>d__31");
// Dependencies System.DateTime, System.TimeSpan, UnityEngine.MonoBehaviour
namespace GameObjectScheduling {
// Is value type: false
// CS Name: GameObjectScheduling.CountdownText
class CORDL_TYPE CountdownText : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _MonitorExternalTime_d__25 = ::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25;

using _MonitorTime_d__24 = ::GameObjectScheduling::CountdownText__MonitorTime_d__24;

using _WaitForDisplayRefresh_d__31 = ::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31;

using TimeChunk = ::GlobalNamespace::CountdownText_TimeChunk;

 __declspec(property(get=get_Countdown, put=set_Countdown)) ::UnityW<::GameObjectScheduling::CountdownTextDate>  Countdown;

/// @brief Field CountdownTo, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CountdownTo, put=__cordl_internal_set_CountdownTo)) ::UnityW<::GameObjectScheduling::CountdownTextDate>  CountdownTo;

 __declspec(property(get=get_ShouldLocalize)) bool  ShouldLocalize;

/// @brief Field _countdownLocStr, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__countdownLocStr, put=__cordl_internal_set__countdownLocStr)) ::UnityEngine::Localization::LocalizedString*  _countdownLocStr;

/// @brief Field _isValidVar, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__isValidVar, put=__cordl_internal_set__isValidVar)) ::UnityEngine::Localization::SmartFormat::PersistentVariables::BoolVariable*  _isValidVar;

/// @brief Field _locTextComp, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__locTextComp, put=__cordl_internal_set__locTextComp)) ::UnityW<::GlobalNamespace::LocalizedText>  _locTextComp;

/// @brief Field _timeCountdownVar, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeCountdownVar, put=__cordl_internal_set__timeCountdownVar)) ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  _timeCountdownVar;

/// @brief Field _timescaleCountdownVar, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__timescaleCountdownVar, put=__cordl_internal_set__timescaleCountdownVar)) ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  _timescaleCountdownVar;

/// @brief Field countdownTime, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_countdownTime, put=__cordl_internal_set_countdownTime)) ::System::TimeSpan  countdownTime;

/// @brief Field displayRefresh, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayRefresh, put=__cordl_internal_set_displayRefresh)) ::UnityEngine::Coroutine*  displayRefresh;

/// @brief Field displayText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayText, put=__cordl_internal_set_displayText)) ::UnityW<::TMPro::TMP_Text>  displayText;

/// @brief Field displayTextFormat, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayTextFormat, put=__cordl_internal_set_displayTextFormat)) ::StringW  displayTextFormat;

/// @brief Field monitor, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_monitor, put=__cordl_internal_set_monitor)) ::UnityEngine::Coroutine*  monitor;

/// @brief Field shouldLocalize, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get_shouldLocalize, put=__cordl_internal_set_shouldLocalize)) bool  shouldLocalize;

/// @brief Field targetTime, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetTime, put=__cordl_internal_set_targetTime)) ::System::DateTime  targetTime;

/// @brief Field updateDisplay, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_updateDisplay, put=__cordl_internal_set_updateDisplay)) bool  updateDisplay;

/// @brief Field useExternalTime, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_useExternalTime, put=__cordl_internal_set_useExternalTime)) bool  useExternalTime;

/// @brief Method Awake, addr 0x5dddfe0, size 0x4d0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetTimeDisplay, addr 0x5dded58, size 0x3c, virtual false, abstract: false, final false
static inline ::StringW GetTimeDisplay(::System::TimeSpan  ts, ::StringW  format) ;

/// @brief Method GetTimeDisplay, addr 0x5dde988, size 0x3d0, virtual false, abstract: false, final false
static inline ::System::ValueTuple_4<::StringW,int32_t,int32_t,bool> GetTimeDisplay(::System::TimeSpan  ts, ::StringW  format, int32_t  maxDaysToDisplay, ::StringW  elapsedString, ::StringW  overMaxString) ;

/// [IteratorStateMachine(typeof(GameObjectScheduling.CountdownText::<MonitorExternalTime>d__25))]
/// @brief Method MonitorExternalTime, addr 0x5dde5f4, size 0x7c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* MonitorExternalTime(::System::DateTime  countdown) ;

/// [IteratorStateMachine(typeof(GameObjectScheduling.CountdownText::<MonitorTime>d__24))]
/// @brief Method MonitorTime, addr 0x5dddf74, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* MonitorTime() ;

static inline ::GameObjectScheduling::CountdownText* New_ctor() ;

/// @brief Method OnDisable, addr 0x5dde55c, size 0x18, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5dde4b0, size 0xac, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RefreshDisplay, addr 0x5dde7f8, size 0x190, virtual false, abstract: false, final false
inline void RefreshDisplay() ;

/// @brief Method SetCountdownTime, addr 0x5dde698, size 0x50, virtual false, abstract: false, final false
inline void SetCountdownTime(::System::DateTime  countdown) ;

/// @brief Method SetFixedText, addr 0x5dde6e8, size 0x44, virtual false, abstract: false, final false
inline void SetFixedText(::StringW  text) ;

/// @brief Method StartDisplayRefresh, addr 0x5dde72c, size 0x38, virtual false, abstract: false, final false
inline void StartDisplayRefresh() ;

/// @brief Method StopDisplayRefresh, addr 0x5dde5a0, size 0x2c, virtual false, abstract: false, final false
inline void StopDisplayRefresh() ;

/// @brief Method StopMonitorTime, addr 0x5dde574, size 0x2c, virtual false, abstract: false, final false
inline void StopMonitorTime() ;

/// @brief Method TryParseDateTime, addr 0x5ddeeb4, size 0x148, virtual false, abstract: false, final false
inline ::System::DateTime TryParseDateTime() ;

/// [IteratorStateMachine(typeof(GameObjectScheduling.CountdownText::<WaitForDisplayRefresh>d__31))]
/// @brief Method WaitForDisplayRefresh, addr 0x5dde764, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* WaitForDisplayRefresh() ;

constexpr ::UnityW<::GameObjectScheduling::CountdownTextDate> const& __cordl_internal_get_CountdownTo() const;

constexpr ::UnityW<::GameObjectScheduling::CountdownTextDate>& __cordl_internal_get_CountdownTo() ;

constexpr ::UnityEngine::Localization::LocalizedString* const& __cordl_internal_get__countdownLocStr() const;

constexpr ::UnityEngine::Localization::LocalizedString*& __cordl_internal_get__countdownLocStr() ;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::BoolVariable* const& __cordl_internal_get__isValidVar() const;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::BoolVariable*& __cordl_internal_get__isValidVar() ;

constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& __cordl_internal_get__locTextComp() const;

constexpr ::UnityW<::GlobalNamespace::LocalizedText>& __cordl_internal_get__locTextComp() ;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable* const& __cordl_internal_get__timeCountdownVar() const;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*& __cordl_internal_get__timeCountdownVar() ;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable* const& __cordl_internal_get__timescaleCountdownVar() const;

constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*& __cordl_internal_get__timescaleCountdownVar() ;

constexpr ::System::TimeSpan const& __cordl_internal_get_countdownTime() const;

constexpr ::System::TimeSpan& __cordl_internal_get_countdownTime() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_displayRefresh() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_displayRefresh() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_displayText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_displayText() ;

constexpr ::StringW const& __cordl_internal_get_displayTextFormat() const;

constexpr ::StringW& __cordl_internal_get_displayTextFormat() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_monitor() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_monitor() ;

constexpr bool const& __cordl_internal_get_shouldLocalize() const;

constexpr bool& __cordl_internal_get_shouldLocalize() ;

constexpr ::System::DateTime const& __cordl_internal_get_targetTime() const;

constexpr ::System::DateTime& __cordl_internal_get_targetTime() ;

constexpr bool const& __cordl_internal_get_updateDisplay() const;

constexpr bool& __cordl_internal_get_updateDisplay() ;

constexpr bool const& __cordl_internal_get_useExternalTime() const;

constexpr bool& __cordl_internal_get_useExternalTime() ;

constexpr void __cordl_internal_set_CountdownTo(::UnityW<::GameObjectScheduling::CountdownTextDate>  value) ;

constexpr void __cordl_internal_set__countdownLocStr(::UnityEngine::Localization::LocalizedString*  value) ;

constexpr void __cordl_internal_set__isValidVar(::UnityEngine::Localization::SmartFormat::PersistentVariables::BoolVariable*  value) ;

constexpr void __cordl_internal_set__locTextComp(::UnityW<::GlobalNamespace::LocalizedText>  value) ;

constexpr void __cordl_internal_set__timeCountdownVar(::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  value) ;

constexpr void __cordl_internal_set__timescaleCountdownVar(::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  value) ;

constexpr void __cordl_internal_set_countdownTime(::System::TimeSpan  value) ;

constexpr void __cordl_internal_set_displayRefresh(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_displayText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_displayTextFormat(::StringW  value) ;

constexpr void __cordl_internal_set_monitor(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_shouldLocalize(bool  value) ;

constexpr void __cordl_internal_set_targetTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set_updateDisplay(bool  value) ;

constexpr void __cordl_internal_set_useExternalTime(bool  value) ;

/// @brief Method .ctor, addr 0x5ddeffc, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method getTimeChunkString, addr 0x5dded94, size 0x120, virtual false, abstract: false, final false
static inline ::StringW getTimeChunkString(::GlobalNamespace::CountdownText_TimeChunk  chunk, int32_t  n) ;

/// @brief Method get_Countdown, addr 0x5ddde38, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GameObjectScheduling::CountdownTextDate> get_Countdown() ;

/// @brief Method get_ShouldLocalize, addr 0x5dddd9c, size 0x9c, virtual false, abstract: false, final false
inline bool get_ShouldLocalize() ;

/// @brief Method set_Countdown, addr 0x5ddde40, size 0x134, virtual false, abstract: false, final false
inline void set_Countdown(::GameObjectScheduling::CountdownTextDate*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CountdownText() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CountdownText", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CountdownText(CountdownText && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CountdownText", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CountdownText(CountdownText const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5122};

/// [SerializeField]
/// @brief Field CountdownTo, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GameObjectScheduling::CountdownTextDate>  ___CountdownTo;

/// [SerializeField]
/// @brief Field updateDisplay, offset: 0x28, size: 0x1, def value: None
 bool  ___updateDisplay;

/// [SerializeField]
/// @brief Field useExternalTime, offset: 0x29, size: 0x1, def value: None
 bool  ___useExternalTime;

/// [SerializeField]
/// @brief Field shouldLocalize, offset: 0x2a, size: 0x1, def value: None
 bool  ___shouldLocalize;

/// @brief Field displayText, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___displayText;

/// @brief Field displayTextFormat, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___displayTextFormat;

/// @brief Field targetTime, offset: 0x40, size: 0x8, def value: None
 ::System::DateTime  ___targetTime;

/// @brief Field countdownTime, offset: 0x48, size: 0x8, def value: None
 ::System::TimeSpan  ___countdownTime;

/// @brief Field monitor, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___monitor;

/// @brief Field displayRefresh, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___displayRefresh;

/// @brief Field _locTextComp, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalizedText>  ____locTextComp;

/// @brief Field _countdownLocStr, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedString*  ____countdownLocStr;

/// @brief Field _timeCountdownVar, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  ____timeCountdownVar;

/// @brief Field _timescaleCountdownVar, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  ____timescaleCountdownVar;

/// @brief Field _isValidVar, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::PersistentVariables::BoolVariable*  ____isValidVar;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GameObjectScheduling::CountdownText, ___CountdownTo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::CountdownText, ___updateDisplay) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::CountdownText, ___useExternalTime) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::CountdownText, ___shouldLocalize) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::CountdownText, ___displayText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::CountdownText, ___displayTextFormat) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::CountdownText, ___targetTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::CountdownText, ___countdownTime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::CountdownText, ___monitor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::CountdownText, ___displayRefresh) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::CountdownText, ____locTextComp) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::CountdownText, ____countdownLocStr) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::CountdownText, ____timeCountdownVar) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::CountdownText, ____timescaleCountdownVar) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::CountdownText, ____isValidVar) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GameObjectScheduling::CountdownText) == 0x88, "Size mismatch!");

} // namespace end def GameObjectScheduling
// [CompilerGenerated]
// Dependencies System.Object
namespace GameObjectScheduling {
// Is value type: false
// CS Name: GameObjectScheduling.CountdownText/<WaitForDisplayRefresh>d__31
class CORDL_TYPE CountdownText__WaitForDisplayRefresh_d__31 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GameObjectScheduling::CountdownText>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5ddf328, size 0x250, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5ddf578, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5ddf580, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5ddf5b8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5ddf324, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GameObjectScheduling::CountdownText> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GameObjectScheduling::CountdownText>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GameObjectScheduling::CountdownText>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5dde7d0, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CountdownText__WaitForDisplayRefresh_d__31() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CountdownText__WaitForDisplayRefresh_d__31", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CountdownText__WaitForDisplayRefresh_d__31(CountdownText__WaitForDisplayRefresh_d__31 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CountdownText__WaitForDisplayRefresh_d__31", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CountdownText__WaitForDisplayRefresh_d__31(CountdownText__WaitForDisplayRefresh_d__31 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5121};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GameObjectScheduling::CountdownText>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31) == 0x28, "Size mismatch!");

} // namespace end def GameObjectScheduling
// [CompilerGenerated]
// Dependencies System.Object
namespace GameObjectScheduling {
// Is value type: false
// CS Name: GameObjectScheduling.CountdownText/<MonitorTime>d__24
class CORDL_TYPE CountdownText__MonitorTime_d__24 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GameObjectScheduling::CountdownText>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5ddf19c, size 0x140, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GameObjectScheduling::CountdownText__MonitorTime_d__24* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5ddf2dc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5ddf2e4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5ddf31c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5ddf198, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GameObjectScheduling::CountdownText> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GameObjectScheduling::CountdownText>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GameObjectScheduling::CountdownText>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5dde5cc, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CountdownText__MonitorTime_d__24() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CountdownText__MonitorTime_d__24", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CountdownText__MonitorTime_d__24(CountdownText__MonitorTime_d__24 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CountdownText__MonitorTime_d__24", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CountdownText__MonitorTime_d__24(CountdownText__MonitorTime_d__24 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5120};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GameObjectScheduling::CountdownText>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GameObjectScheduling::CountdownText__MonitorTime_d__24, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::CountdownText__MonitorTime_d__24, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::CountdownText__MonitorTime_d__24, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GameObjectScheduling::CountdownText__MonitorTime_d__24) == 0x28, "Size mismatch!");

} // namespace end def GameObjectScheduling
// [CompilerGenerated]
// Dependencies System.DateTime, System.Object
namespace GameObjectScheduling {
// Is value type: false
// CS Name: GameObjectScheduling.CountdownText/<MonitorExternalTime>d__25
class CORDL_TYPE CountdownText__MonitorExternalTime_d__25 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GameObjectScheduling::CountdownText>  __4__this;

/// @brief Field countdown, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_countdown, put=__cordl_internal_set_countdown)) ::System::DateTime  countdown;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5ddf010, size 0x140, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5ddf150, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5ddf158, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5ddf190, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5ddf00c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GameObjectScheduling::CountdownText> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GameObjectScheduling::CountdownText>& __cordl_internal_get___4__this() ;

constexpr ::System::DateTime const& __cordl_internal_get_countdown() const;

constexpr ::System::DateTime& __cordl_internal_get_countdown() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GameObjectScheduling::CountdownText>  value) ;

constexpr void __cordl_internal_set_countdown(::System::DateTime  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5dde670, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CountdownText__MonitorExternalTime_d__25() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CountdownText__MonitorExternalTime_d__25", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CountdownText__MonitorExternalTime_d__25(CountdownText__MonitorExternalTime_d__25 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CountdownText__MonitorExternalTime_d__25", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CountdownText__MonitorExternalTime_d__25(CountdownText__MonitorExternalTime_d__25 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5119};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GameObjectScheduling::CountdownText>  _____4__this;

/// @brief Field countdown, offset: 0x28, size: 0x8, def value: None
 ::System::DateTime  ___countdown;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25, ___countdown) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25) == 0x30, "Size mismatch!");

} // namespace end def GameObjectScheduling
