#pragma once
// IWYU pragma private; include "PlayFab/Public/PlayFabLoggerBase.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "PlayFab/Public/zzzz__PlayFabLoggerBase_def.hpp"
#include "PlayFab/Public/zzzz__IPlayFabLogger_def.hpp"
#include "PlayFab/Public/zzzz__PlayFabLoggerBase_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
//  Writing Method size for method: ::PlayFab::Public::PlayFabLoggerBase.get_ip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPAddress* (::PlayFab::Public::PlayFabLoggerBase::*)()>(&::PlayFab::Public::PlayFabLoggerBase::get_ip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa841b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(),
                        {"get_ip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::PlayFabLoggerBase.set_ip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::PlayFabLoggerBase::*)(::System::Net::IPAddress*)>(&::PlayFab::Public::PlayFabLoggerBase::set_ip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa841b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(),
                        {"set_ip", {}, {::i2c::type_of<::System::Net::IPAddress*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::PlayFabLoggerBase.get_port
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::PlayFab::Public::PlayFabLoggerBase::*)()>(&::PlayFab::Public::PlayFabLoggerBase::get_port)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa841ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(),
                        {"get_port", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::PlayFabLoggerBase.set_port
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::PlayFabLoggerBase::*)(int32_t)>(&::PlayFab::Public::PlayFabLoggerBase::set_port)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa841ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(),
                        {"set_port", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::PlayFabLoggerBase.get_url
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::PlayFab::Public::PlayFabLoggerBase::*)()>(&::PlayFab::Public::PlayFabLoggerBase::get_url)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa841bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(),
                        {"get_url", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::PlayFabLoggerBase.set_url
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::PlayFabLoggerBase::*)(::StringW)>(&::PlayFab::Public::PlayFabLoggerBase::set_url)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa841bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(),
                        {"set_url", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::PlayFabLoggerBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::PlayFabLoggerBase::*)()>(&::PlayFab::Public::PlayFabLoggerBase::_ctor)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0xa841bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::PlayFabLoggerBase.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::PlayFabLoggerBase::*)()>(&::PlayFab::Public::PlayFabLoggerBase::OnEnable)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa841e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(),
                    {::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::PlayFabLoggerBase.RegisterLogger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::PlayFab::Public::PlayFabLoggerBase::*)()>(&::PlayFab::Public::PlayFabLoggerBase::RegisterLogger)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa841e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(),
                        {"RegisterLogger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::PlayFabLoggerBase.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::PlayFabLoggerBase::*)()>(&::PlayFab::Public::PlayFabLoggerBase::OnDisable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa841f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(),
                    {::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::PlayFabLoggerBase.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::PlayFabLoggerBase::*)()>(&::PlayFab::Public::PlayFabLoggerBase::OnDestroy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa841ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(),
                    {::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::PlayFabLoggerBase.BeginUploadLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::PlayFabLoggerBase::*)()>(&::PlayFab::Public::PlayFabLoggerBase::BeginUploadLog)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(),
                    {::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::PlayFabLoggerBase.UploadLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::PlayFabLoggerBase::*)(::StringW)>(&::PlayFab::Public::PlayFabLoggerBase::UploadLog)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(),
                    {::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::PlayFabLoggerBase.EndUploadLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::PlayFabLoggerBase::*)()>(&::PlayFab::Public::PlayFabLoggerBase::EndUploadLog)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(),
                    {::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::PlayFabLoggerBase.HandleUnityLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::PlayFabLoggerBase::*)(::StringW, ::StringW, ::UnityEngine::LogType)>(&::PlayFab::Public::PlayFabLoggerBase::HandleUnityLog)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0xa842004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(),
                        {"HandleUnityLog", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::PlayFabLoggerBase.ActivateThreadWorker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::PlayFabLoggerBase::*)()>(&::PlayFab::Public::PlayFabLoggerBase::ActivateThreadWorker)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xa842440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(),
                        {"ActivateThreadWorker", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::PlayFabLoggerBase.WriteLogThreadWorker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::PlayFabLoggerBase::*)()>(&::PlayFab::Public::PlayFabLoggerBase::WriteLogThreadWorker)> {
  constexpr static std::size_t size = 0x5f8;
  constexpr static std::size_t addrs = 0xa8425b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(),
                        {"WriteLogThreadWorker", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Queue_1<::StringW>*& PlayFab::Public::PlayFabLoggerBase::__cordl_internal_get_LogMessageQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogMessageQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::StringW>* const& PlayFab::Public::PlayFabLoggerBase::__cordl_internal_get_LogMessageQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogMessageQueue;
}
constexpr void PlayFab::Public::PlayFabLoggerBase::__cordl_internal_set_LogMessageQueue(::System::Collections::Generic::Queue_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LogMessageQueue = value;
}
constexpr ::System::Threading::Thread*& PlayFab::Public::PlayFabLoggerBase::__cordl_internal_get__writeLogThread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writeLogThread;
}
constexpr ::System::Threading::Thread* const& PlayFab::Public::PlayFabLoggerBase::__cordl_internal_get__writeLogThread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writeLogThread;
}
constexpr void PlayFab::Public::PlayFabLoggerBase::__cordl_internal_set__writeLogThread(::System::Threading::Thread*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____writeLogThread = value;
}
constexpr ::System::Object*& PlayFab::Public::PlayFabLoggerBase::__cordl_internal_get__threadLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____threadLock;
}
constexpr ::System::Object* const& PlayFab::Public::PlayFabLoggerBase::__cordl_internal_get__threadLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____threadLock;
}
constexpr void PlayFab::Public::PlayFabLoggerBase::__cordl_internal_set__threadLock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____threadLock = value;
}
constexpr ::System::DateTime& PlayFab::Public::PlayFabLoggerBase::__cordl_internal_get__threadKillTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____threadKillTime;
}
constexpr ::System::DateTime const& PlayFab::Public::PlayFabLoggerBase::__cordl_internal_get__threadKillTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____threadKillTime;
}
constexpr void PlayFab::Public::PlayFabLoggerBase::__cordl_internal_set__threadKillTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____threadKillTime = value;
}
constexpr bool& PlayFab::Public::PlayFabLoggerBase::__cordl_internal_get__isApplicationPlaying()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isApplicationPlaying;
}
constexpr bool const& PlayFab::Public::PlayFabLoggerBase::__cordl_internal_get__isApplicationPlaying() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isApplicationPlaying;
}
constexpr void PlayFab::Public::PlayFabLoggerBase::__cordl_internal_set__isApplicationPlaying(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isApplicationPlaying = value;
}
constexpr int32_t& PlayFab::Public::PlayFabLoggerBase::__cordl_internal_get__pendingLogsCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingLogsCount;
}
constexpr int32_t const& PlayFab::Public::PlayFabLoggerBase::__cordl_internal_get__pendingLogsCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingLogsCount;
}
constexpr void PlayFab::Public::PlayFabLoggerBase::__cordl_internal_set__pendingLogsCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pendingLogsCount = value;
}
constexpr ::System::Net::IPAddress*& PlayFab::Public::PlayFabLoggerBase::__cordl_internal_get__ip_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ip_k__BackingField;
}
constexpr ::System::Net::IPAddress* const& PlayFab::Public::PlayFabLoggerBase::__cordl_internal_get__ip_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ip_k__BackingField;
}
constexpr void PlayFab::Public::PlayFabLoggerBase::__cordl_internal_set__ip_k__BackingField(::System::Net::IPAddress*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ip_k__BackingField = value;
}
constexpr int32_t& PlayFab::Public::PlayFabLoggerBase::__cordl_internal_get__port_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____port_k__BackingField;
}
constexpr int32_t const& PlayFab::Public::PlayFabLoggerBase::__cordl_internal_get__port_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____port_k__BackingField;
}
constexpr void PlayFab::Public::PlayFabLoggerBase::__cordl_internal_set__port_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____port_k__BackingField = value;
}
constexpr ::StringW& PlayFab::Public::PlayFabLoggerBase::__cordl_internal_get__url_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____url_k__BackingField;
}
constexpr ::StringW const& PlayFab::Public::PlayFabLoggerBase::__cordl_internal_get__url_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____url_k__BackingField;
}
constexpr void PlayFab::Public::PlayFabLoggerBase::__cordl_internal_set__url_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____url_k__BackingField = value;
}
inline void PlayFab::Public::PlayFabLoggerBase::setStaticF_Sb(::System::Text::StringBuilder*  value)  {
::cordl_internals::setStaticField<::System::Text::StringBuilder*, "Sb", ::PlayFab::Public::PlayFabLoggerBase*>(std::forward<::System::Text::StringBuilder*>(value));
}
inline ::System::Text::StringBuilder* PlayFab::Public::PlayFabLoggerBase::getStaticF_Sb()  {
return ::cordl_internals::getStaticField<::System::Text::StringBuilder*, "Sb", ::PlayFab::Public::PlayFabLoggerBase*>();
}
inline void PlayFab::Public::PlayFabLoggerBase::setStaticF__threadKillTimeout(::System::TimeSpan  value)  {
::cordl_internals::setStaticField<::System::TimeSpan, "_threadKillTimeout", ::PlayFab::Public::PlayFabLoggerBase*>(std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan PlayFab::Public::PlayFabLoggerBase::getStaticF__threadKillTimeout()  {
return ::cordl_internals::getStaticField<::System::TimeSpan, "_threadKillTimeout", ::PlayFab::Public::PlayFabLoggerBase*>();
}
inline ::System::Net::IPAddress* PlayFab::Public::PlayFabLoggerBase::get_ip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(),
                        {"get_ip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPAddress*>(this, ___internal_method);
}
inline void PlayFab::Public::PlayFabLoggerBase::set_ip(::System::Net::IPAddress*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(),
                        {"set_ip", {}, {::i2c::type_of<::System::Net::IPAddress*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t PlayFab::Public::PlayFabLoggerBase::get_port()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(),
                        {"get_port", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void PlayFab::Public::PlayFabLoggerBase::set_port(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(),
                        {"set_port", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW PlayFab::Public::PlayFabLoggerBase::get_url()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(),
                        {"get_url", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void PlayFab::Public::PlayFabLoggerBase::set_url(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(),
                        {"set_url", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void PlayFab::Public::PlayFabLoggerBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::Public::PlayFabLoggerBase::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* PlayFab::Public::PlayFabLoggerBase::RegisterLogger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(),
                        {"RegisterLogger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void PlayFab::Public::PlayFabLoggerBase::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::Public::PlayFabLoggerBase::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::Public::PlayFabLoggerBase::BeginUploadLog()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::Public::PlayFabLoggerBase::UploadLog(::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void PlayFab::Public::PlayFabLoggerBase::EndUploadLog()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::Public::PlayFabLoggerBase::HandleUnityLog(::StringW  message, ::StringW  stacktrace, ::UnityEngine::LogType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(),
                        {"HandleUnityLog", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, stacktrace, type);
}
inline void PlayFab::Public::PlayFabLoggerBase::ActivateThreadWorker()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(),
                        {"ActivateThreadWorker", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::Public::PlayFabLoggerBase::WriteLogThreadWorker()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase*>(),
                        {"WriteLogThreadWorker", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::Public::PlayFabLoggerBase* PlayFab::Public::PlayFabLoggerBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::Public::PlayFabLoggerBase*>());
}
/// @brief Convert operator to "::PlayFab::Public::IPlayFabLogger"
constexpr  PlayFab::Public::PlayFabLoggerBase::operator ::PlayFab::Public::IPlayFabLogger*() noexcept {
return static_cast<::PlayFab::Public::IPlayFabLogger*>(static_cast<void*>(this));
}
/// @brief Convert to "::PlayFab::Public::IPlayFabLogger"
constexpr ::PlayFab::Public::IPlayFabLogger* PlayFab::Public::PlayFabLoggerBase::i___PlayFab__Public__IPlayFabLogger() noexcept {
return static_cast<::PlayFab::Public::IPlayFabLogger*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::PlayFab::Public::PlayFabLoggerBase::PlayFabLoggerBase()   {
}
//  Writing Method size for method: ::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23::*)(int32_t)>(&::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa841ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23::*)()>(&::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa842c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23::*)()>(&::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23::MoveNext)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa842c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23::*)()>(&::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa842dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23::*)()>(&::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa842dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23::*)()>(&::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa842e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::PlayFab::Public::PlayFabLoggerBase*& PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::PlayFab::Public::PlayFabLoggerBase* const& PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23::__cordl_internal_set___4__this(::PlayFab::Public::PlayFabLoggerBase*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23* PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23::PlayFabLoggerBase__RegisterLogger_d__23()   {
}
