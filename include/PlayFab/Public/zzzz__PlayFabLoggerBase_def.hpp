#pragma once
// IWYU pragma private; include "PlayFab/Public/PlayFabLoggerBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayFabLoggerBase)
namespace PlayFab::Public {
class IPlayFabLogger;
}
namespace PlayFab::Public {
class PlayFabLoggerBase__RegisterLogger_d__23;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Net {
class IPAddress;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Threading {
class Thread;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct LogType;
}
// Forward declare root types
namespace PlayFab::Public {
class PlayFabLoggerBase;
}
namespace PlayFab::Public {
class PlayFabLoggerBase__RegisterLogger_d__23;
}
// Write type traits
MARK_REF_T(::PlayFab::Public::PlayFabLoggerBase*);
MARK_REF_T(::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23*);
DEFINE_IL2CPP_CLASS(::PlayFab::Public::PlayFabLoggerBase*, "PlayFab.Public", "PlayFabLoggerBase");
DEFINE_IL2CPP_CLASS(::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23*, "PlayFab.Public", "PlayFabLoggerBase/<RegisterLogger>d__23");
// Dependencies System.DateTime, System.Object, System.TimeSpan
namespace PlayFab::Public {
// Is value type: false
// CS Name: PlayFab.Public.PlayFabLoggerBase
class CORDL_TYPE PlayFabLoggerBase : public ::System::Object {
public:
// Declarations
using _RegisterLogger_d__23 = ::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23;

/// @brief Field LogMessageQueue, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_LogMessageQueue, put=__cordl_internal_set_LogMessageQueue)) ::System::Collections::Generic::Queue_1<::StringW>*  LogMessageQueue;

/// @brief Field Sb, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Sb, put=setStaticF_Sb)) ::System::Text::StringBuilder*  Sb;

/// @brief Field <ip>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__ip_k__BackingField, put=__cordl_internal_set__ip_k__BackingField)) ::System::Net::IPAddress*  _ip_k__BackingField;

/// @brief Field _isApplicationPlaying, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__isApplicationPlaying, put=__cordl_internal_set__isApplicationPlaying)) bool  _isApplicationPlaying;

/// @brief Field _pendingLogsCount, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__pendingLogsCount, put=__cordl_internal_set__pendingLogsCount)) int32_t  _pendingLogsCount;

/// @brief Field <port>k__BackingField, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__port_k__BackingField, put=__cordl_internal_set__port_k__BackingField)) int32_t  _port_k__BackingField;

/// @brief Field _threadKillTime, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__threadKillTime, put=__cordl_internal_set__threadKillTime)) ::System::DateTime  _threadKillTime;

/// @brief Field _threadKillTimeout, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__threadKillTimeout, put=setStaticF__threadKillTimeout)) ::System::TimeSpan  _threadKillTimeout;

/// @brief Field _threadLock, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__threadLock, put=__cordl_internal_set__threadLock)) ::System::Object*  _threadLock;

/// @brief Field <url>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__url_k__BackingField, put=__cordl_internal_set__url_k__BackingField)) ::StringW  _url_k__BackingField;

/// @brief Field _writeLogThread, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__writeLogThread, put=__cordl_internal_set__writeLogThread)) ::System::Threading::Thread*  _writeLogThread;

 __declspec(property(get=get_ip, put=set_ip)) ::System::Net::IPAddress*  ip;

 __declspec(property(get=get_port, put=set_port)) int32_t  port;

 __declspec(property(get=get_url, put=set_url)) ::StringW  url;

/// @brief Convert operator to "::PlayFab::Public::IPlayFabLogger"
constexpr operator  ::PlayFab::Public::IPlayFabLogger*() noexcept;

/// @brief Method ActivateThreadWorker, addr 0xa842440, size 0x178, virtual false, abstract: false, final false
inline void ActivateThreadWorker() ;

/// @brief Method BeginUploadLog, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void BeginUploadLog() ;

/// @brief Method EndUploadLog, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void EndUploadLog() ;

/// @brief Method HandleUnityLog, addr 0xa842004, size 0x43c, virtual false, abstract: false, final false
inline void HandleUnityLog(::StringW  message, ::StringW  stacktrace, ::UnityEngine::LogType  type) ;

static inline ::PlayFab::Public::PlayFabLoggerBase* New_ctor() ;

/// @brief Method OnDestroy, addr 0xa841ffc, size 0x8, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xa841f1c, size 0xe0, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa841e20, size 0x68, virtual true, abstract: false, final false
inline void OnEnable() ;

/// [IteratorStateMachine(typeof(PlayFab.Public.PlayFabLoggerBase::<RegisterLogger>d__23))]
/// @brief Method RegisterLogger, addr 0xa841e88, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* RegisterLogger() ;

/// @brief Method UploadLog, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UploadLog(::StringW  message) ;

/// @brief Method WriteLogThreadWorker, addr 0xa8425b8, size 0x5f8, virtual false, abstract: false, final false
inline void WriteLogThreadWorker() ;

constexpr ::System::Collections::Generic::Queue_1<::StringW>* const& __cordl_internal_get_LogMessageQueue() const;

constexpr ::System::Collections::Generic::Queue_1<::StringW>*& __cordl_internal_get_LogMessageQueue() ;

constexpr ::System::Net::IPAddress* const& __cordl_internal_get__ip_k__BackingField() const;

constexpr ::System::Net::IPAddress*& __cordl_internal_get__ip_k__BackingField() ;

constexpr bool const& __cordl_internal_get__isApplicationPlaying() const;

constexpr bool& __cordl_internal_get__isApplicationPlaying() ;

constexpr int32_t const& __cordl_internal_get__pendingLogsCount() const;

constexpr int32_t& __cordl_internal_get__pendingLogsCount() ;

constexpr int32_t const& __cordl_internal_get__port_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__port_k__BackingField() ;

constexpr ::System::DateTime const& __cordl_internal_get__threadKillTime() const;

constexpr ::System::DateTime& __cordl_internal_get__threadKillTime() ;

constexpr ::System::Object* const& __cordl_internal_get__threadLock() const;

constexpr ::System::Object*& __cordl_internal_get__threadLock() ;

constexpr ::StringW const& __cordl_internal_get__url_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__url_k__BackingField() ;

constexpr ::System::Threading::Thread* const& __cordl_internal_get__writeLogThread() const;

constexpr ::System::Threading::Thread*& __cordl_internal_get__writeLogThread() ;

constexpr void __cordl_internal_set_LogMessageQueue(::System::Collections::Generic::Queue_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__ip_k__BackingField(::System::Net::IPAddress*  value) ;

constexpr void __cordl_internal_set__isApplicationPlaying(bool  value) ;

constexpr void __cordl_internal_set__pendingLogsCount(int32_t  value) ;

constexpr void __cordl_internal_set__port_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__threadKillTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set__threadLock(::System::Object*  value) ;

constexpr void __cordl_internal_set__url_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__writeLogThread(::System::Threading::Thread*  value) ;

/// @brief Method .ctor, addr 0xa841bc0, size 0x260, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Text::StringBuilder* getStaticF_Sb() ;

static inline ::System::TimeSpan getStaticF__threadKillTimeout() ;

/// [CompilerGenerated]
/// @brief Method get_ip, addr 0xa841b90, size 0x8, virtual true, abstract: false, final true
inline ::System::Net::IPAddress* get_ip() ;

/// [CompilerGenerated]
/// @brief Method get_port, addr 0xa841ba0, size 0x8, virtual true, abstract: false, final true
inline int32_t get_port() ;

/// [CompilerGenerated]
/// @brief Method get_url, addr 0xa841bb0, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_url() ;

/// @brief Convert to "::PlayFab::Public::IPlayFabLogger"
constexpr ::PlayFab::Public::IPlayFabLogger* i___PlayFab__Public__IPlayFabLogger() noexcept;

static inline void setStaticF_Sb(::System::Text::StringBuilder*  value) ;

static inline void setStaticF__threadKillTimeout(::System::TimeSpan  value) ;

/// [CompilerGenerated]
/// @brief Method set_ip, addr 0xa841b98, size 0x8, virtual true, abstract: false, final true
inline void set_ip(::System::Net::IPAddress*  value) ;

/// [CompilerGenerated]
/// @brief Method set_port, addr 0xa841ba8, size 0x8, virtual true, abstract: false, final true
inline void set_port(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_url, addr 0xa841bb8, size 0x8, virtual true, abstract: false, final true
inline void set_url(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabLoggerBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabLoggerBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabLoggerBase(PlayFabLoggerBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabLoggerBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabLoggerBase(PlayFabLoggerBase const& ) = delete;

/// @brief Field LOG_CACHE_INTERVAL_MS offset 0xffffffff size 0x4
static constexpr int32_t  LOG_CACHE_INTERVAL_MS{static_cast<int32_t>(0x2710)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19846};

/// @brief Field LogMessageQueue, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::StringW>*  ___LogMessageQueue;

/// @brief Field _writeLogThread, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::Thread*  ____writeLogThread;

/// @brief Field _threadLock, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ____threadLock;

/// @brief Field _threadKillTime, offset: 0x28, size: 0x8, def value: None
 ::System::DateTime  ____threadKillTime;

/// @brief Field _isApplicationPlaying, offset: 0x30, size: 0x1, def value: None
 bool  ____isApplicationPlaying;

/// @brief Field _pendingLogsCount, offset: 0x34, size: 0x4, def value: None
 int32_t  ____pendingLogsCount;

/// [CompilerGenerated]
/// @brief Field <ip>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::System::Net::IPAddress*  ____ip_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <port>k__BackingField, offset: 0x40, size: 0x4, def value: None
 int32_t  ____port_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <url>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::StringW  ____url_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::Public::PlayFabLoggerBase, ___LogMessageQueue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Public::PlayFabLoggerBase, ____writeLogThread) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Public::PlayFabLoggerBase, ____threadLock) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Public::PlayFabLoggerBase, ____threadKillTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Public::PlayFabLoggerBase, ____isApplicationPlaying) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Public::PlayFabLoggerBase, ____pendingLogsCount) == 0x34, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Public::PlayFabLoggerBase, ____ip_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Public::PlayFabLoggerBase, ____port_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Public::PlayFabLoggerBase, ____url_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(sizeof(::PlayFab::Public::PlayFabLoggerBase) == 0x50, "Size mismatch!");

} // namespace end def PlayFab::Public
// [CompilerGenerated]
// Dependencies System.Object
namespace PlayFab::Public {
// Is value type: false
// CS Name: PlayFab.Public.PlayFabLoggerBase/<RegisterLogger>d__23
class CORDL_TYPE PlayFabLoggerBase__RegisterLogger_d__23 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::PlayFab::Public::PlayFabLoggerBase*  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xa842c7c, size 0x148, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xa842dc4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xa842dcc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xa842e04, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xa842c78, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::PlayFab::Public::PlayFabLoggerBase* const& __cordl_internal_get___4__this() const;

constexpr ::PlayFab::Public::PlayFabLoggerBase*& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::PlayFab::Public::PlayFabLoggerBase*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xa841ef4, size 0x28, virtual false, abstract: false, final false
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
constexpr PlayFabLoggerBase__RegisterLogger_d__23() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabLoggerBase__RegisterLogger_d__23", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabLoggerBase__RegisterLogger_d__23(PlayFabLoggerBase__RegisterLogger_d__23 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabLoggerBase__RegisterLogger_d__23", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabLoggerBase__RegisterLogger_d__23(PlayFabLoggerBase__RegisterLogger_d__23 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19845};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::PlayFab::Public::PlayFabLoggerBase*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::Public::PlayFabLoggerBase__RegisterLogger_d__23) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::Public
