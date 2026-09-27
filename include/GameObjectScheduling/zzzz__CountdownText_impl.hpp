#pragma once
// IWYU pragma private; include "GameObjectScheduling/CountdownText.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GameObjectScheduling/zzzz__CountdownText_def.hpp"
#include "GameObjectScheduling/zzzz__CountdownTextDate_def.hpp"
#include "GameObjectScheduling/zzzz__CountdownText_TimeChunk_def.hpp"
#include "GameObjectScheduling/zzzz__CountdownText_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedText_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__ValueTuple_4_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__BoolVariable_def.hpp"
#include "UnityEngine/Localization/SmartFormat/PersistentVariables/zzzz__IntVariable_def.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedString_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
//  Writing Method size for method: ::GameObjectScheduling::CountdownText.get_ShouldLocalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GameObjectScheduling::CountdownText::*)()>(&::GameObjectScheduling::CountdownText::get_ShouldLocalize)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5dddd9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"get_ShouldLocalize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::CountdownText.get_Countdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GameObjectScheduling::CountdownTextDate> (::GameObjectScheduling::CountdownText::*)()>(&::GameObjectScheduling::CountdownText::get_Countdown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ddde38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"get_Countdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::CountdownText.set_Countdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::CountdownText::*)(::GameObjectScheduling::CountdownTextDate*)>(&::GameObjectScheduling::CountdownText::set_Countdown)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5ddde40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"set_Countdown", {}, {::i2c::type_of<::GameObjectScheduling::CountdownTextDate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::CountdownText.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::CountdownText::*)()>(&::GameObjectScheduling::CountdownText::Awake)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x5dddfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::CountdownText.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::CountdownText::*)()>(&::GameObjectScheduling::CountdownText::OnEnable)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5dde4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::CountdownText.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::CountdownText::*)()>(&::GameObjectScheduling::CountdownText::OnDisable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5dde55c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::CountdownText.MonitorTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GameObjectScheduling::CountdownText::*)()>(&::GameObjectScheduling::CountdownText::MonitorTime)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5dddf74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"MonitorTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::CountdownText.MonitorExternalTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GameObjectScheduling::CountdownText::*)(::System::DateTime)>(&::GameObjectScheduling::CountdownText::MonitorExternalTime)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5dde5f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"MonitorExternalTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::CountdownText.StopMonitorTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::CountdownText::*)()>(&::GameObjectScheduling::CountdownText::StopMonitorTime)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5dde574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"StopMonitorTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::CountdownText.SetCountdownTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::CountdownText::*)(::System::DateTime)>(&::GameObjectScheduling::CountdownText::SetCountdownTime)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5dde698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"SetCountdownTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::CountdownText.SetFixedText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::CountdownText::*)(::StringW)>(&::GameObjectScheduling::CountdownText::SetFixedText)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dde6e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"SetFixedText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::CountdownText.StartDisplayRefresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::CountdownText::*)()>(&::GameObjectScheduling::CountdownText::StartDisplayRefresh)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5dde72c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"StartDisplayRefresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::CountdownText.StopDisplayRefresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::CountdownText::*)()>(&::GameObjectScheduling::CountdownText::StopDisplayRefresh)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5dde5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"StopDisplayRefresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::CountdownText.WaitForDisplayRefresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GameObjectScheduling::CountdownText::*)()>(&::GameObjectScheduling::CountdownText::WaitForDisplayRefresh)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5dde764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"WaitForDisplayRefresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::CountdownText.RefreshDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::CountdownText::*)()>(&::GameObjectScheduling::CountdownText::RefreshDisplay)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5dde7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"RefreshDisplay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::CountdownText.GetTimeDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::TimeSpan, ::StringW)>(&::GameObjectScheduling::CountdownText::GetTimeDisplay)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5dded58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"GetTimeDisplay", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::CountdownText.GetTimeDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_4<::StringW,int32_t,int32_t,bool> (*)(::System::TimeSpan, ::StringW, int32_t, ::StringW, ::StringW)>(&::GameObjectScheduling::CountdownText::GetTimeDisplay)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x5dde988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"GetTimeDisplay", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::CountdownText.getTimeChunkString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::CountdownText_TimeChunk, int32_t)>(&::GameObjectScheduling::CountdownText::getTimeChunkString)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5dded94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"getTimeChunkString", {}, {::i2c::type_of<::GlobalNamespace::CountdownText_TimeChunk>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::CountdownText.TryParseDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::GameObjectScheduling::CountdownText::*)()>(&::GameObjectScheduling::CountdownText::TryParseDateTime)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5ddeeb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"TryParseDateTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::CountdownText._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::CountdownText::*)()>(&::GameObjectScheduling::CountdownText::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ddeffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GameObjectScheduling::CountdownTextDate>& GameObjectScheduling::CountdownText::__cordl_internal_get_CountdownTo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CountdownTo;
}
constexpr ::UnityW<::GameObjectScheduling::CountdownTextDate> const& GameObjectScheduling::CountdownText::__cordl_internal_get_CountdownTo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CountdownTo;
}
constexpr void GameObjectScheduling::CountdownText::__cordl_internal_set_CountdownTo(::UnityW<::GameObjectScheduling::CountdownTextDate>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CountdownTo = value;
}
constexpr bool& GameObjectScheduling::CountdownText::__cordl_internal_get_updateDisplay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateDisplay;
}
constexpr bool const& GameObjectScheduling::CountdownText::__cordl_internal_get_updateDisplay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateDisplay;
}
constexpr void GameObjectScheduling::CountdownText::__cordl_internal_set_updateDisplay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateDisplay = value;
}
constexpr bool& GameObjectScheduling::CountdownText::__cordl_internal_get_useExternalTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useExternalTime;
}
constexpr bool const& GameObjectScheduling::CountdownText::__cordl_internal_get_useExternalTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useExternalTime;
}
constexpr void GameObjectScheduling::CountdownText::__cordl_internal_set_useExternalTime(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useExternalTime = value;
}
constexpr bool& GameObjectScheduling::CountdownText::__cordl_internal_get_shouldLocalize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shouldLocalize;
}
constexpr bool const& GameObjectScheduling::CountdownText::__cordl_internal_get_shouldLocalize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shouldLocalize;
}
constexpr void GameObjectScheduling::CountdownText::__cordl_internal_set_shouldLocalize(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shouldLocalize = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GameObjectScheduling::CountdownText::__cordl_internal_get_displayText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GameObjectScheduling::CountdownText::__cordl_internal_get_displayText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayText;
}
constexpr void GameObjectScheduling::CountdownText::__cordl_internal_set_displayText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayText = value;
}
constexpr ::StringW& GameObjectScheduling::CountdownText::__cordl_internal_get_displayTextFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayTextFormat;
}
constexpr ::StringW const& GameObjectScheduling::CountdownText::__cordl_internal_get_displayTextFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayTextFormat;
}
constexpr void GameObjectScheduling::CountdownText::__cordl_internal_set_displayTextFormat(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayTextFormat = value;
}
constexpr ::System::DateTime& GameObjectScheduling::CountdownText::__cordl_internal_get_targetTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetTime;
}
constexpr ::System::DateTime const& GameObjectScheduling::CountdownText::__cordl_internal_get_targetTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetTime;
}
constexpr void GameObjectScheduling::CountdownText::__cordl_internal_set_targetTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetTime = value;
}
constexpr ::System::TimeSpan& GameObjectScheduling::CountdownText::__cordl_internal_get_countdownTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countdownTime;
}
constexpr ::System::TimeSpan const& GameObjectScheduling::CountdownText::__cordl_internal_get_countdownTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countdownTime;
}
constexpr void GameObjectScheduling::CountdownText::__cordl_internal_set_countdownTime(::System::TimeSpan  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___countdownTime = value;
}
constexpr ::UnityEngine::Coroutine*& GameObjectScheduling::CountdownText::__cordl_internal_get_monitor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monitor;
}
constexpr ::UnityEngine::Coroutine* const& GameObjectScheduling::CountdownText::__cordl_internal_get_monitor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monitor;
}
constexpr void GameObjectScheduling::CountdownText::__cordl_internal_set_monitor(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___monitor = value;
}
constexpr ::UnityEngine::Coroutine*& GameObjectScheduling::CountdownText::__cordl_internal_get_displayRefresh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayRefresh;
}
constexpr ::UnityEngine::Coroutine* const& GameObjectScheduling::CountdownText::__cordl_internal_get_displayRefresh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayRefresh;
}
constexpr void GameObjectScheduling::CountdownText::__cordl_internal_set_displayRefresh(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayRefresh = value;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText>& GameObjectScheduling::CountdownText::__cordl_internal_get__locTextComp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____locTextComp;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& GameObjectScheduling::CountdownText::__cordl_internal_get__locTextComp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____locTextComp;
}
constexpr void GameObjectScheduling::CountdownText::__cordl_internal_set__locTextComp(::UnityW<::GlobalNamespace::LocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____locTextComp = value;
}
constexpr ::UnityEngine::Localization::LocalizedString*& GameObjectScheduling::CountdownText::__cordl_internal_get__countdownLocStr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____countdownLocStr;
}
constexpr ::UnityEngine::Localization::LocalizedString* const& GameObjectScheduling::CountdownText::__cordl_internal_get__countdownLocStr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____countdownLocStr;
}
constexpr void GameObjectScheduling::CountdownText::__cordl_internal_set__countdownLocStr(::UnityEngine::Localization::LocalizedString*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____countdownLocStr = value;
}
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*& GameObjectScheduling::CountdownText::__cordl_internal_get__timeCountdownVar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeCountdownVar;
}
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable* const& GameObjectScheduling::CountdownText::__cordl_internal_get__timeCountdownVar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeCountdownVar;
}
constexpr void GameObjectScheduling::CountdownText::__cordl_internal_set__timeCountdownVar(::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeCountdownVar = value;
}
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*& GameObjectScheduling::CountdownText::__cordl_internal_get__timescaleCountdownVar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timescaleCountdownVar;
}
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable* const& GameObjectScheduling::CountdownText::__cordl_internal_get__timescaleCountdownVar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timescaleCountdownVar;
}
constexpr void GameObjectScheduling::CountdownText::__cordl_internal_set__timescaleCountdownVar(::UnityEngine::Localization::SmartFormat::PersistentVariables::IntVariable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timescaleCountdownVar = value;
}
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::BoolVariable*& GameObjectScheduling::CountdownText::__cordl_internal_get__isValidVar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isValidVar;
}
constexpr ::UnityEngine::Localization::SmartFormat::PersistentVariables::BoolVariable* const& GameObjectScheduling::CountdownText::__cordl_internal_get__isValidVar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isValidVar;
}
constexpr void GameObjectScheduling::CountdownText::__cordl_internal_set__isValidVar(::UnityEngine::Localization::SmartFormat::PersistentVariables::BoolVariable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isValidVar = value;
}
inline bool GameObjectScheduling::CountdownText::get_ShouldLocalize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"get_ShouldLocalize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::GameObjectScheduling::CountdownTextDate> GameObjectScheduling::CountdownText::get_Countdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"get_Countdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GameObjectScheduling::CountdownTextDate>>(this, ___internal_method);
}
inline void GameObjectScheduling::CountdownText::set_Countdown(::GameObjectScheduling::CountdownTextDate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"set_Countdown", {}, {::i2c::type_of<::GameObjectScheduling::CountdownTextDate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GameObjectScheduling::CountdownText::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GameObjectScheduling::CountdownText::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GameObjectScheduling::CountdownText::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GameObjectScheduling::CountdownText::MonitorTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"MonitorTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GameObjectScheduling::CountdownText::MonitorExternalTime(::System::DateTime  countdown)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"MonitorExternalTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, countdown);
}
inline void GameObjectScheduling::CountdownText::StopMonitorTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"StopMonitorTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GameObjectScheduling::CountdownText::SetCountdownTime(::System::DateTime  countdown)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"SetCountdownTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, countdown);
}
inline void GameObjectScheduling::CountdownText::SetFixedText(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"SetFixedText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void GameObjectScheduling::CountdownText::StartDisplayRefresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"StartDisplayRefresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GameObjectScheduling::CountdownText::StopDisplayRefresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"StopDisplayRefresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GameObjectScheduling::CountdownText::WaitForDisplayRefresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"WaitForDisplayRefresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GameObjectScheduling::CountdownText::RefreshDisplay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"RefreshDisplay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GameObjectScheduling::CountdownText::GetTimeDisplay(::System::TimeSpan  ts, ::StringW  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"GetTimeDisplay", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, ts, format);
}
inline ::System::ValueTuple_4<::StringW,int32_t,int32_t,bool> GameObjectScheduling::CountdownText::GetTimeDisplay(::System::TimeSpan  ts, ::StringW  format, int32_t  maxDaysToDisplay, ::StringW  elapsedString, ::StringW  overMaxString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"GetTimeDisplay", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_4<::StringW,int32_t,int32_t,bool>>(nullptr, ___internal_method, ts, format, maxDaysToDisplay, elapsedString, overMaxString);
}
inline ::StringW GameObjectScheduling::CountdownText::getTimeChunkString(::GlobalNamespace::CountdownText_TimeChunk  chunk, int32_t  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"getTimeChunkString", {}, {::i2c::type_of<::GlobalNamespace::CountdownText_TimeChunk>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, chunk, n);
}
inline ::System::DateTime GameObjectScheduling::CountdownText::TryParseDateTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {"TryParseDateTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void GameObjectScheduling::CountdownText::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GameObjectScheduling::CountdownText* GameObjectScheduling::CountdownText::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GameObjectScheduling::CountdownText*>());
}
// Ctor Parameters []
constexpr ::GameObjectScheduling::CountdownText::CountdownText()   {
}
//  Writing Method size for method: ::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31::*)(int32_t)>(&::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5dde7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31::*)()>(&::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ddf324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31::*)()>(&::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31::MoveNext)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5ddf328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31::*)()>(&::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ddf578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31::*)()>(&::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ddf580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31::*)()>(&::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ddf5b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GameObjectScheduling::CountdownText>& GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GameObjectScheduling::CountdownText> const& GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31::__cordl_internal_set___4__this(::UnityW<::GameObjectScheduling::CountdownText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31* GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GameObjectScheduling::CountdownText__WaitForDisplayRefresh_d__31::CountdownText__WaitForDisplayRefresh_d__31()   {
}
//  Writing Method size for method: ::GameObjectScheduling::CountdownText__MonitorTime_d__24._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::CountdownText__MonitorTime_d__24::*)(int32_t)>(&::GameObjectScheduling::CountdownText__MonitorTime_d__24::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5dde5cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText__MonitorTime_d__24*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::CountdownText__MonitorTime_d__24.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::CountdownText__MonitorTime_d__24::*)()>(&::GameObjectScheduling::CountdownText__MonitorTime_d__24::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ddf198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText__MonitorTime_d__24*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::CountdownText__MonitorTime_d__24.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GameObjectScheduling::CountdownText__MonitorTime_d__24::*)()>(&::GameObjectScheduling::CountdownText__MonitorTime_d__24::MoveNext)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5ddf19c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText__MonitorTime_d__24*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::CountdownText__MonitorTime_d__24.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GameObjectScheduling::CountdownText__MonitorTime_d__24::*)()>(&::GameObjectScheduling::CountdownText__MonitorTime_d__24::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ddf2dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText__MonitorTime_d__24*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::CountdownText__MonitorTime_d__24.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::CountdownText__MonitorTime_d__24::*)()>(&::GameObjectScheduling::CountdownText__MonitorTime_d__24::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ddf2e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText__MonitorTime_d__24*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::CountdownText__MonitorTime_d__24.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GameObjectScheduling::CountdownText__MonitorTime_d__24::*)()>(&::GameObjectScheduling::CountdownText__MonitorTime_d__24::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ddf31c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText__MonitorTime_d__24*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GameObjectScheduling::CountdownText__MonitorTime_d__24::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GameObjectScheduling::CountdownText__MonitorTime_d__24::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GameObjectScheduling::CountdownText__MonitorTime_d__24::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GameObjectScheduling::CountdownText__MonitorTime_d__24::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GameObjectScheduling::CountdownText__MonitorTime_d__24::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GameObjectScheduling::CountdownText__MonitorTime_d__24::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GameObjectScheduling::CountdownText>& GameObjectScheduling::CountdownText__MonitorTime_d__24::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GameObjectScheduling::CountdownText> const& GameObjectScheduling::CountdownText__MonitorTime_d__24::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GameObjectScheduling::CountdownText__MonitorTime_d__24::__cordl_internal_set___4__this(::UnityW<::GameObjectScheduling::CountdownText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GameObjectScheduling::CountdownText__MonitorTime_d__24::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText__MonitorTime_d__24*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GameObjectScheduling::CountdownText__MonitorTime_d__24::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText__MonitorTime_d__24*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GameObjectScheduling::CountdownText__MonitorTime_d__24::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText__MonitorTime_d__24*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GameObjectScheduling::CountdownText__MonitorTime_d__24::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText__MonitorTime_d__24*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GameObjectScheduling::CountdownText__MonitorTime_d__24::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText__MonitorTime_d__24*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GameObjectScheduling::CountdownText__MonitorTime_d__24::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText__MonitorTime_d__24*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GameObjectScheduling::CountdownText__MonitorTime_d__24* GameObjectScheduling::CountdownText__MonitorTime_d__24::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GameObjectScheduling::CountdownText__MonitorTime_d__24*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GameObjectScheduling::CountdownText__MonitorTime_d__24::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GameObjectScheduling::CountdownText__MonitorTime_d__24::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GameObjectScheduling::CountdownText__MonitorTime_d__24::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GameObjectScheduling::CountdownText__MonitorTime_d__24::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GameObjectScheduling::CountdownText__MonitorTime_d__24::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GameObjectScheduling::CountdownText__MonitorTime_d__24::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GameObjectScheduling::CountdownText__MonitorTime_d__24::CountdownText__MonitorTime_d__24()   {
}
//  Writing Method size for method: ::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::*)(int32_t)>(&::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5dde670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::*)()>(&::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ddf00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::*)()>(&::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::MoveNext)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5ddf010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::*)()>(&::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ddf150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::*)()>(&::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ddf158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::*)()>(&::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ddf190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GameObjectScheduling::CountdownText>& GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GameObjectScheduling::CountdownText> const& GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::__cordl_internal_set___4__this(::UnityW<::GameObjectScheduling::CountdownText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::DateTime& GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::__cordl_internal_get_countdown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countdown;
}
constexpr ::System::DateTime const& GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::__cordl_internal_get_countdown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countdown;
}
constexpr void GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::__cordl_internal_set_countdown(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___countdown = value;
}
inline void GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25* GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GameObjectScheduling::CountdownText__MonitorExternalTime_d__25::CountdownText__MonitorExternalTime_d__25()   {
}
