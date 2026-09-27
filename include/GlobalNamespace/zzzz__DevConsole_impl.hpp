#pragma once
// IWYU pragma private; include "GlobalNamespace/DevConsole.hpp"
#include "GlobalNamespace/zzzz__GorillaDevButton_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LogType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DevConsole_def.hpp"
#include "GlobalNamespace/zzzz__DevConsoleInstance_def.hpp"
#include "GlobalNamespace/zzzz__DevConsole_def.hpp"
#include "GlobalNamespace/zzzz__DevInspector_def.hpp"
#include "GlobalNamespace/zzzz__GorillaDevButton_def.hpp"
#include "GlobalNamespace/zzzz__IDebugObject_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DevConsole.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::DevConsole> (*)()>(&::GlobalNamespace::DevConsole::get_instance)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x566e120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevConsole*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DevConsole.get_logEntries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole_LogEntry*>* (*)()>(&::GlobalNamespace::DevConsole::get_logEntries)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x566e230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevConsole*>(),
                        {"get_logEntries", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DevConsole.OnDestroyDebugObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DevConsole::*)()>(&::GlobalNamespace::DevConsole::OnDestroyDebugObject)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x566e28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevConsole*>(),
                        {"OnDestroyDebugObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DevConsole.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DevConsole::*)()>(&::GlobalNamespace::DevConsole::OnEnable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x566e440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevConsole*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DevConsole._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DevConsole::*)()>(&::GlobalNamespace::DevConsole::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x566e464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevConsole*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::DevConsole::__cordl_internal_get_errorSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::DevConsole::__cordl_internal_get_errorSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorSound;
}
constexpr void GlobalNamespace::DevConsole::__cordl_internal_set_errorSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::DevConsole::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::DevConsole::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::DevConsole::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr float_t& GlobalNamespace::DevConsole::__cordl_internal_get_maxHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHeight;
}
constexpr float_t const& GlobalNamespace::DevConsole::__cordl_internal_get_maxHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHeight;
}
constexpr void GlobalNamespace::DevConsole::__cordl_internal_set_maxHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxHeight = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole_LogEntry*>*& GlobalNamespace::DevConsole::__cordl_internal_get__logEntries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logEntries;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole_LogEntry*>* const& GlobalNamespace::DevConsole::__cordl_internal_get__logEntries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logEntries;
}
constexpr void GlobalNamespace::DevConsole::__cordl_internal_set__logEntries(::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole_LogEntry*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____logEntries = value;
}
constexpr int32_t& GlobalNamespace::DevConsole::__cordl_internal_get_targetLogIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetLogIndex;
}
constexpr int32_t const& GlobalNamespace::DevConsole::__cordl_internal_get_targetLogIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetLogIndex;
}
constexpr void GlobalNamespace::DevConsole::__cordl_internal_set_targetLogIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetLogIndex = value;
}
constexpr int32_t& GlobalNamespace::DevConsole::__cordl_internal_get_currentLogIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentLogIndex;
}
constexpr int32_t const& GlobalNamespace::DevConsole::__cordl_internal_get_currentLogIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentLogIndex;
}
constexpr void GlobalNamespace::DevConsole::__cordl_internal_set_currentLogIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentLogIndex = value;
}
constexpr bool& GlobalNamespace::DevConsole::__cordl_internal_get_isMuted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isMuted;
}
constexpr bool const& GlobalNamespace::DevConsole::__cordl_internal_get_isMuted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isMuted;
}
constexpr void GlobalNamespace::DevConsole::__cordl_internal_set_isMuted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isMuted = value;
}
constexpr float_t& GlobalNamespace::DevConsole::__cordl_internal_get_currentZoomLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentZoomLevel;
}
constexpr float_t const& GlobalNamespace::DevConsole::__cordl_internal_get_currentZoomLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentZoomLevel;
}
constexpr void GlobalNamespace::DevConsole::__cordl_internal_set_currentZoomLevel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentZoomLevel = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::DevConsole::__cordl_internal_get_disableWhileActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableWhileActive;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::DevConsole::__cordl_internal_get_disableWhileActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableWhileActive;
}
constexpr void GlobalNamespace::DevConsole::__cordl_internal_set_disableWhileActive(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableWhileActive = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::DevConsole::__cordl_internal_get_enableWhileActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableWhileActive;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::DevConsole::__cordl_internal_get_enableWhileActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableWhileActive;
}
constexpr void GlobalNamespace::DevConsole::__cordl_internal_set_enableWhileActive(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableWhileActive = value;
}
constexpr int32_t& GlobalNamespace::DevConsole::__cordl_internal_get_expandAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___expandAmount;
}
constexpr int32_t const& GlobalNamespace::DevConsole::__cordl_internal_get_expandAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___expandAmount;
}
constexpr void GlobalNamespace::DevConsole::__cordl_internal_set_expandAmount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___expandAmount = value;
}
constexpr int32_t& GlobalNamespace::DevConsole::__cordl_internal_get_expandedMessageIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___expandedMessageIndex;
}
constexpr int32_t const& GlobalNamespace::DevConsole::__cordl_internal_get_expandedMessageIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___expandedMessageIndex;
}
constexpr void GlobalNamespace::DevConsole::__cordl_internal_set_expandedMessageIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___expandedMessageIndex = value;
}
constexpr bool& GlobalNamespace::DevConsole::__cordl_internal_get_canExpand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canExpand;
}
constexpr bool const& GlobalNamespace::DevConsole::__cordl_internal_get_canExpand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canExpand;
}
constexpr void GlobalNamespace::DevConsole::__cordl_internal_set_canExpand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canExpand = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole_DisplayedLogLine*>*& GlobalNamespace::DevConsole::__cordl_internal_get_logLines()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logLines;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole_DisplayedLogLine*>* const& GlobalNamespace::DevConsole::__cordl_internal_get_logLines() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logLines;
}
constexpr void GlobalNamespace::DevConsole::__cordl_internal_set_logLines(::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole_DisplayedLogLine*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logLines = value;
}
constexpr float_t& GlobalNamespace::DevConsole::__cordl_internal_get_lineStartHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineStartHeight;
}
constexpr float_t const& GlobalNamespace::DevConsole::__cordl_internal_get_lineStartHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineStartHeight;
}
constexpr void GlobalNamespace::DevConsole::__cordl_internal_set_lineStartHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineStartHeight = value;
}
constexpr float_t& GlobalNamespace::DevConsole::__cordl_internal_get_textStartHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textStartHeight;
}
constexpr float_t const& GlobalNamespace::DevConsole::__cordl_internal_get_textStartHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textStartHeight;
}
constexpr void GlobalNamespace::DevConsole::__cordl_internal_set_textStartHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textStartHeight = value;
}
constexpr float_t& GlobalNamespace::DevConsole::__cordl_internal_get_lineStartTextWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineStartTextWidth;
}
constexpr float_t const& GlobalNamespace::DevConsole::__cordl_internal_get_lineStartTextWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineStartTextWidth;
}
constexpr void GlobalNamespace::DevConsole::__cordl_internal_set_lineStartTextWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineStartTextWidth = value;
}
constexpr double_t& GlobalNamespace::DevConsole::__cordl_internal_get_textScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textScale;
}
constexpr double_t const& GlobalNamespace::DevConsole::__cordl_internal_get_textScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textScale;
}
constexpr void GlobalNamespace::DevConsole::__cordl_internal_set_textScale(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textScale = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::DevConsoleInstance>>*& GlobalNamespace::DevConsole::__cordl_internal_get_instances()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instances;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::DevConsoleInstance>>* const& GlobalNamespace::DevConsole::__cordl_internal_get_instances() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instances;
}
constexpr void GlobalNamespace::DevConsole::__cordl_internal_set_instances(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::DevConsoleInstance>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instances = value;
}
inline void GlobalNamespace::DevConsole::setStaticF__instance(::UnityW<::GlobalNamespace::DevConsole>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::DevConsole>, "_instance", ::GlobalNamespace::DevConsole*>(std::forward<::UnityW<::GlobalNamespace::DevConsole>>(value));
}
inline ::UnityW<::GlobalNamespace::DevConsole> GlobalNamespace::DevConsole::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::DevConsole>, "_instance", ::GlobalNamespace::DevConsole*>();
}
inline void GlobalNamespace::DevConsole::setStaticF_tracebackScrubbing(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "tracebackScrubbing", ::GlobalNamespace::DevConsole*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> GlobalNamespace::DevConsole::getStaticF_tracebackScrubbing()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "tracebackScrubbing", ::GlobalNamespace::DevConsole*>();
}
inline ::UnityW<::GlobalNamespace::DevConsole> GlobalNamespace::DevConsole::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevConsole*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::DevConsole>>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole_LogEntry*>* GlobalNamespace::DevConsole::get_logEntries()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevConsole*>(),
                        {"get_logEntries", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole_LogEntry*>*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::DevConsole::OnDestroyDebugObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevConsole*>(),
                        {"OnDestroyDebugObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DevConsole::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevConsole*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DevConsole::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevConsole*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DevConsole* GlobalNamespace::DevConsole::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DevConsole*>());
}
/// @brief Convert operator to "::GlobalNamespace::IDebugObject"
constexpr  GlobalNamespace::DevConsole::operator ::GlobalNamespace::IDebugObject*() noexcept {
return static_cast<::GlobalNamespace::IDebugObject*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IDebugObject"
constexpr ::GlobalNamespace::IDebugObject* GlobalNamespace::DevConsole::i___GlobalNamespace__IDebugObject() noexcept {
return static_cast<::GlobalNamespace::IDebugObject*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DevConsole::DevConsole()   {
}
//  Writing Method size for method: ::GlobalNamespace::DevConsole_MessagePayload.GeneratePayloads
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole_MessagePayload*>* (*)(::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole_LogEntry*>*)>(&::GlobalNamespace::DevConsole_MessagePayload::GeneratePayloads)> {
  constexpr static std::size_t size = 0x8e8;
  constexpr static std::size_t addrs = 0x566eb44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevConsole_MessagePayload*>(),
                        {"GeneratePayloads", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole_LogEntry*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DevConsole_MessagePayload._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DevConsole_MessagePayload::*)()>(&::GlobalNamespace::DevConsole_MessagePayload::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x566f504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevConsole_MessagePayload*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::MessagePayload_DevConsole_Block*>& GlobalNamespace::DevConsole_MessagePayload::__cordl_internal_get_blocks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blocks;
}
constexpr ::ArrayW<::GlobalNamespace::MessagePayload_DevConsole_Block*> const& GlobalNamespace::DevConsole_MessagePayload::__cordl_internal_get_blocks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blocks;
}
constexpr void GlobalNamespace::DevConsole_MessagePayload::__cordl_internal_set_blocks(::ArrayW<::GlobalNamespace::MessagePayload_DevConsole_Block*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blocks = value;
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole_MessagePayload*>* GlobalNamespace::DevConsole_MessagePayload::GeneratePayloads(::StringW  username, ::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole_LogEntry*>*  entries)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevConsole_MessagePayload*>(),
                        {"GeneratePayloads", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole_LogEntry*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::DevConsole_MessagePayload*>*>(nullptr, ___internal_method, username, entries);
}
inline void GlobalNamespace::DevConsole_MessagePayload::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevConsole_MessagePayload*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DevConsole_MessagePayload* GlobalNamespace::DevConsole_MessagePayload::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DevConsole_MessagePayload*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DevConsole_MessagePayload::DevConsole_MessagePayload()   {
}
//  Writing Method size for method: ::GlobalNamespace::MessagePayload_DevConsole___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MessagePayload_DevConsole___c::*)()>(&::GlobalNamespace::MessagePayload_DevConsole___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x566f57c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MessagePayload_DevConsole___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MessagePayload_DevConsole___c._GeneratePayloads_b__3_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MessagePayload_DevConsole___c::*)(::GlobalNamespace::DevConsole_LogEntry*, ::GlobalNamespace::DevConsole_LogEntry*)>(&::GlobalNamespace::MessagePayload_DevConsole___c::_GeneratePayloads_b__3_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x566f584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MessagePayload_DevConsole___c*>(),
                        {"<GeneratePayloads>b__3_0", {}, {::i2c::type_of<::GlobalNamespace::DevConsole_LogEntry*>(), ::i2c::type_of<::GlobalNamespace::DevConsole_LogEntry*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MessagePayload_DevConsole___c::setStaticF___9(::GlobalNamespace::MessagePayload_DevConsole___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MessagePayload_DevConsole___c*, "<>9", ::GlobalNamespace::MessagePayload_DevConsole___c*>(std::forward<::GlobalNamespace::MessagePayload_DevConsole___c*>(value));
}
inline ::GlobalNamespace::MessagePayload_DevConsole___c* GlobalNamespace::MessagePayload_DevConsole___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MessagePayload_DevConsole___c*, "<>9", ::GlobalNamespace::MessagePayload_DevConsole___c*>();
}
inline void GlobalNamespace::MessagePayload_DevConsole___c::setStaticF___9__3_0(::System::Comparison_1<::GlobalNamespace::DevConsole_LogEntry*>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::GlobalNamespace::DevConsole_LogEntry*>*, "<>9__3_0", ::GlobalNamespace::MessagePayload_DevConsole___c*>(std::forward<::System::Comparison_1<::GlobalNamespace::DevConsole_LogEntry*>*>(value));
}
inline ::System::Comparison_1<::GlobalNamespace::DevConsole_LogEntry*>* GlobalNamespace::MessagePayload_DevConsole___c::getStaticF___9__3_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::GlobalNamespace::DevConsole_LogEntry*>*, "<>9__3_0", ::GlobalNamespace::MessagePayload_DevConsole___c*>();
}
inline void GlobalNamespace::MessagePayload_DevConsole___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MessagePayload_DevConsole___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::MessagePayload_DevConsole___c::_GeneratePayloads_b__3_0(::GlobalNamespace::DevConsole_LogEntry*  e1, ::GlobalNamespace::DevConsole_LogEntry*  e2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MessagePayload_DevConsole___c*>(),
                        {"<GeneratePayloads>b__3_0", {}, {::i2c::type_of<::GlobalNamespace::DevConsole_LogEntry*>(), ::i2c::type_of<::GlobalNamespace::DevConsole_LogEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, e1, e2);
}
inline ::GlobalNamespace::MessagePayload_DevConsole___c* GlobalNamespace::MessagePayload_DevConsole___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MessagePayload_DevConsole___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MessagePayload_DevConsole___c::MessagePayload_DevConsole___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::MessagePayload_DevConsole_TextBlock._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MessagePayload_DevConsole_TextBlock::*)()>(&::GlobalNamespace::MessagePayload_DevConsole_TextBlock::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x566f50c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MessagePayload_DevConsole_TextBlock*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::MessagePayload_DevConsole_TextBlock::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::StringW const& GlobalNamespace::MessagePayload_DevConsole_TextBlock::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void GlobalNamespace::MessagePayload_DevConsole_TextBlock::__cordl_internal_set_type(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
constexpr ::StringW& GlobalNamespace::MessagePayload_DevConsole_TextBlock::__cordl_internal_get_text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr ::StringW const& GlobalNamespace::MessagePayload_DevConsole_TextBlock::__cordl_internal_get_text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr void GlobalNamespace::MessagePayload_DevConsole_TextBlock::__cordl_internal_set_text(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___text = value;
}
inline void GlobalNamespace::MessagePayload_DevConsole_TextBlock::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MessagePayload_DevConsole_TextBlock*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MessagePayload_DevConsole_TextBlock* GlobalNamespace::MessagePayload_DevConsole_TextBlock::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MessagePayload_DevConsole_TextBlock*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MessagePayload_DevConsole_TextBlock::MessagePayload_DevConsole_TextBlock()   {
}
//  Writing Method size for method: ::GlobalNamespace::MessagePayload_DevConsole_Block._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MessagePayload_DevConsole_Block::*)(::StringW)>(&::GlobalNamespace::MessagePayload_DevConsole_Block::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x566f42c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MessagePayload_DevConsole_Block*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::MessagePayload_DevConsole_Block::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::StringW const& GlobalNamespace::MessagePayload_DevConsole_Block::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void GlobalNamespace::MessagePayload_DevConsole_Block::__cordl_internal_set_type(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
constexpr ::GlobalNamespace::MessagePayload_DevConsole_TextBlock*& GlobalNamespace::MessagePayload_DevConsole_Block::__cordl_internal_get_text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr ::GlobalNamespace::MessagePayload_DevConsole_TextBlock* const& GlobalNamespace::MessagePayload_DevConsole_Block::__cordl_internal_get_text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr void GlobalNamespace::MessagePayload_DevConsole_Block::__cordl_internal_set_text(::GlobalNamespace::MessagePayload_DevConsole_TextBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___text = value;
}
inline void GlobalNamespace::MessagePayload_DevConsole_Block::_ctor(::StringW  markdownText)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MessagePayload_DevConsole_Block*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markdownText);
}
inline ::GlobalNamespace::MessagePayload_DevConsole_Block* GlobalNamespace::MessagePayload_DevConsole_Block::New_ctor(::StringW  markdownText)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MessagePayload_DevConsole_Block*>(markdownText));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MessagePayload_DevConsole_Block::MessagePayload_DevConsole_Block()   {
}
//  Writing Method size for method: ::GlobalNamespace::DevConsole_DisplayedLogLine.get_data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::GlobalNamespace::DevConsole_DisplayedLogLine::*)()>(&::GlobalNamespace::DevConsole_DisplayedLogLine::get_data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x566e9ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevConsole_DisplayedLogLine*>(),
                        {"get_data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DevConsole_DisplayedLogLine.set_data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DevConsole_DisplayedLogLine::*)(::System::Type*)>(&::GlobalNamespace::DevConsole_DisplayedLogLine::set_data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x566e9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevConsole_DisplayedLogLine*>(),
                        {"set_data", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DevConsole_DisplayedLogLine._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DevConsole_DisplayedLogLine::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::DevConsole_DisplayedLogLine::_ctor)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x566e9bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevConsole_DisplayedLogLine*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaDevButton>>& GlobalNamespace::DevConsole_DisplayedLogLine::__cordl_internal_get_buttons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttons;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaDevButton>> const& GlobalNamespace::DevConsole_DisplayedLogLine::__cordl_internal_get_buttons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttons;
}
constexpr void GlobalNamespace::DevConsole_DisplayedLogLine::__cordl_internal_set_buttons(::ArrayW<::UnityW<::GlobalNamespace::GorillaDevButton>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttons = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::DevConsole_DisplayedLogLine::__cordl_internal_get_lineText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::DevConsole_DisplayedLogLine::__cordl_internal_get_lineText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineText;
}
constexpr void GlobalNamespace::DevConsole_DisplayedLogLine::__cordl_internal_set_lineText(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineText = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::DevConsole_DisplayedLogLine::__cordl_internal_get_transform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::DevConsole_DisplayedLogLine::__cordl_internal_get_transform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transform;
}
constexpr void GlobalNamespace::DevConsole_DisplayedLogLine::__cordl_internal_set_transform(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transform = value;
}
constexpr int32_t& GlobalNamespace::DevConsole_DisplayedLogLine::__cordl_internal_get_targetMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetMessage;
}
constexpr int32_t const& GlobalNamespace::DevConsole_DisplayedLogLine::__cordl_internal_get_targetMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetMessage;
}
constexpr void GlobalNamespace::DevConsole_DisplayedLogLine::__cordl_internal_set_targetMessage(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetMessage = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaDevButton>& GlobalNamespace::DevConsole_DisplayedLogLine::__cordl_internal_get_maximizeButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maximizeButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaDevButton> const& GlobalNamespace::DevConsole_DisplayedLogLine::__cordl_internal_get_maximizeButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maximizeButton;
}
constexpr void GlobalNamespace::DevConsole_DisplayedLogLine::__cordl_internal_set_maximizeButton(::UnityW<::GlobalNamespace::GorillaDevButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maximizeButton = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaDevButton>& GlobalNamespace::DevConsole_DisplayedLogLine::__cordl_internal_get_forwardButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forwardButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaDevButton> const& GlobalNamespace::DevConsole_DisplayedLogLine::__cordl_internal_get_forwardButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forwardButton;
}
constexpr void GlobalNamespace::DevConsole_DisplayedLogLine::__cordl_internal_set_forwardButton(::UnityW<::GlobalNamespace::GorillaDevButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forwardButton = value;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& GlobalNamespace::DevConsole_DisplayedLogLine::__cordl_internal_get_backdrop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backdrop;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& GlobalNamespace::DevConsole_DisplayedLogLine::__cordl_internal_get_backdrop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backdrop;
}
constexpr void GlobalNamespace::DevConsole_DisplayedLogLine::__cordl_internal_set_backdrop(::UnityW<::UnityEngine::SpriteRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backdrop = value;
}
constexpr bool& GlobalNamespace::DevConsole_DisplayedLogLine::__cordl_internal_get_expanded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___expanded;
}
constexpr bool const& GlobalNamespace::DevConsole_DisplayedLogLine::__cordl_internal_get_expanded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___expanded;
}
constexpr void GlobalNamespace::DevConsole_DisplayedLogLine::__cordl_internal_set_expanded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___expanded = value;
}
constexpr ::UnityW<::GlobalNamespace::DevInspector>& GlobalNamespace::DevConsole_DisplayedLogLine::__cordl_internal_get_inspector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inspector;
}
constexpr ::UnityW<::GlobalNamespace::DevInspector> const& GlobalNamespace::DevConsole_DisplayedLogLine::__cordl_internal_get_inspector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inspector;
}
constexpr void GlobalNamespace::DevConsole_DisplayedLogLine::__cordl_internal_set_inspector(::UnityW<::GlobalNamespace::DevInspector>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inspector = value;
}
constexpr ::System::Type*& GlobalNamespace::DevConsole_DisplayedLogLine::__cordl_internal_get__data_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data_k__BackingField;
}
constexpr ::System::Type* const& GlobalNamespace::DevConsole_DisplayedLogLine::__cordl_internal_get__data_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data_k__BackingField;
}
constexpr void GlobalNamespace::DevConsole_DisplayedLogLine::__cordl_internal_set__data_k__BackingField(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____data_k__BackingField = value;
}
inline ::System::Type* GlobalNamespace::DevConsole_DisplayedLogLine::get_data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevConsole_DisplayedLogLine*>(),
                        {"get_data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void GlobalNamespace::DevConsole_DisplayedLogLine::set_data(::System::Type*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevConsole_DisplayedLogLine*>(),
                        {"set_data", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::DevConsole_DisplayedLogLine::_ctor(::UnityEngine::GameObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevConsole_DisplayedLogLine*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline ::GlobalNamespace::DevConsole_DisplayedLogLine* GlobalNamespace::DevConsole_DisplayedLogLine::New_ctor(::UnityEngine::GameObject*  obj)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DevConsole_DisplayedLogLine*>(obj));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DevConsole_DisplayedLogLine::DevConsole_DisplayedLogLine()   {
}
//  Writing Method size for method: ::GlobalNamespace::DevConsole_LogEntry.get_Message
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::DevConsole_LogEntry::*)()>(&::GlobalNamespace::DevConsole_LogEntry::get_Message)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x566e680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevConsole_LogEntry*>(),
                        {"get_Message", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DevConsole_LogEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DevConsole_LogEntry::*)(::StringW, ::UnityEngine::LogType, ::StringW)>(&::GlobalNamespace::DevConsole_LogEntry::_ctor)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x566e704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevConsole_LogEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::DevConsole_LogEntry::__cordl_internal_get__Message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Message;
}
constexpr ::StringW const& GlobalNamespace::DevConsole_LogEntry::__cordl_internal_get__Message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Message;
}
constexpr void GlobalNamespace::DevConsole_LogEntry::__cordl_internal_set__Message(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Message = value;
}
constexpr ::UnityEngine::LogType& GlobalNamespace::DevConsole_LogEntry::__cordl_internal_get_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr ::UnityEngine::LogType const& GlobalNamespace::DevConsole_LogEntry::__cordl_internal_get_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr void GlobalNamespace::DevConsole_LogEntry::__cordl_internal_set_Type(::UnityEngine::LogType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Type = value;
}
constexpr ::StringW& GlobalNamespace::DevConsole_LogEntry::__cordl_internal_get_Trace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Trace;
}
constexpr ::StringW const& GlobalNamespace::DevConsole_LogEntry::__cordl_internal_get_Trace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Trace;
}
constexpr void GlobalNamespace::DevConsole_LogEntry::__cordl_internal_set_Trace(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Trace = value;
}
constexpr bool& GlobalNamespace::DevConsole_LogEntry::__cordl_internal_get_forwarded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forwarded;
}
constexpr bool const& GlobalNamespace::DevConsole_LogEntry::__cordl_internal_get_forwarded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forwarded;
}
constexpr void GlobalNamespace::DevConsole_LogEntry::__cordl_internal_set_forwarded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forwarded = value;
}
constexpr int32_t& GlobalNamespace::DevConsole_LogEntry::__cordl_internal_get_repeatCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repeatCount;
}
constexpr int32_t const& GlobalNamespace::DevConsole_LogEntry::__cordl_internal_get_repeatCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repeatCount;
}
constexpr void GlobalNamespace::DevConsole_LogEntry::__cordl_internal_set_repeatCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___repeatCount = value;
}
constexpr bool& GlobalNamespace::DevConsole_LogEntry::__cordl_internal_get_filtered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filtered;
}
constexpr bool const& GlobalNamespace::DevConsole_LogEntry::__cordl_internal_get_filtered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filtered;
}
constexpr void GlobalNamespace::DevConsole_LogEntry::__cordl_internal_set_filtered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filtered = value;
}
constexpr int32_t& GlobalNamespace::DevConsole_LogEntry::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr int32_t const& GlobalNamespace::DevConsole_LogEntry::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr void GlobalNamespace::DevConsole_LogEntry::__cordl_internal_set_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
inline void GlobalNamespace::DevConsole_LogEntry::setStaticF_TotalIndex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "TotalIndex", ::GlobalNamespace::DevConsole_LogEntry*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::DevConsole_LogEntry::getStaticF_TotalIndex()  {
return ::cordl_internals::getStaticField<int32_t, "TotalIndex", ::GlobalNamespace::DevConsole_LogEntry*>();
}
inline ::StringW GlobalNamespace::DevConsole_LogEntry::get_Message()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevConsole_LogEntry*>(),
                        {"get_Message", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::DevConsole_LogEntry::_ctor(::StringW  message, ::UnityEngine::LogType  type, ::StringW  trace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevConsole_LogEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, type, trace);
}
inline ::GlobalNamespace::DevConsole_LogEntry* GlobalNamespace::DevConsole_LogEntry::New_ctor(::StringW  message, ::UnityEngine::LogType  type, ::StringW  trace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DevConsole_LogEntry*>(message, type, trace));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DevConsole_LogEntry::DevConsole_LogEntry()   {
}
//  Writing Method size for method: ::GlobalNamespace::LogEntry_DevConsole___c__DisplayClass10_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LogEntry_DevConsole___c__DisplayClass10_0::*)()>(&::GlobalNamespace::LogEntry_DevConsole___c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x566e98c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LogEntry_DevConsole___c__DisplayClass10_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LogEntry_DevConsole___c__DisplayClass10_0.__ctor_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LogEntry_DevConsole___c__DisplayClass10_0::*)(::StringW)>(&::GlobalNamespace::LogEntry_DevConsole___c__DisplayClass10_0::__ctor_b__0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x566e994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LogEntry_DevConsole___c__DisplayClass10_0*>(),
                        {"<.ctor>b__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::LogEntry_DevConsole___c__DisplayClass10_0::__cordl_internal_get_line()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___line;
}
constexpr ::StringW const& GlobalNamespace::LogEntry_DevConsole___c__DisplayClass10_0::__cordl_internal_get_line() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___line;
}
constexpr void GlobalNamespace::LogEntry_DevConsole___c__DisplayClass10_0::__cordl_internal_set_line(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___line = value;
}
inline void GlobalNamespace::LogEntry_DevConsole___c__DisplayClass10_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LogEntry_DevConsole___c__DisplayClass10_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::LogEntry_DevConsole___c__DisplayClass10_0::__ctor_b__0(::StringW  scrubString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LogEntry_DevConsole___c__DisplayClass10_0*>(),
                        {"<.ctor>b__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, scrubString);
}
inline ::GlobalNamespace::LogEntry_DevConsole___c__DisplayClass10_0* GlobalNamespace::LogEntry_DevConsole___c__DisplayClass10_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LogEntry_DevConsole___c__DisplayClass10_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LogEntry_DevConsole___c__DisplayClass10_0::LogEntry_DevConsole___c__DisplayClass10_0()   {
}
