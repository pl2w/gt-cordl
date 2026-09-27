#pragma once
// IWYU pragma private; include "System/Net/NetEventSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Diagnostics/Tracing/zzzz__EventKeywords_def.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventSource_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetEventSource)
namespace System::Net {
class NetEventSource_Keywords;
}
namespace System {
class FormattableString;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class NetEventSource;
}
namespace System::Net {
class NetEventSource_Keywords;
}
// Write type traits
MARK_REF_T(::System::Net::NetEventSource*);
MARK_REF_T(::System::Net::NetEventSource_Keywords*);
DEFINE_IL2CPP_CLASS(::System::Net::NetEventSource*, "System.Net", "NetEventSource");
DEFINE_IL2CPP_CLASS(::System::Net::NetEventSource_Keywords*, "System.Net", "NetEventSource/Keywords");
// Dependencies System.Diagnostics.Tracing.EventSource
namespace System::Net {
// Is value type: false
// CS Name: System.Net.NetEventSource
class CORDL_TYPE NetEventSource : public ::System::Diagnostics::Tracing::EventSource {
public:
// Declarations
using Keywords = ::System::Net::NetEventSource_Keywords;

/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::System::Net::NetEventSource*  Log;

/// [NonEvent]
/// @brief Method Associate, addr 0xadaaaf0, size 0xd0, virtual false, abstract: false, final false
static inline void Associate(::System::Object*  first, ::System::Object*  second, /* [CallerMemberName] */ ::StringW  memberName) ;

/// [Event(3, Level = (System.Diagnostics.Tracing.EventLevel)4, Keywords = (System.Diagnostics.Tracing.EventKeywords)1, Message = "[{2}]<-->[{3}]")]
/// @brief Method Associate, addr 0xadaabc0, size 0x88, virtual false, abstract: false, final false
inline void Associate(::StringW  thisOrContextObject, ::StringW  memberName, ::StringW  first, ::StringW  second) ;

/// [NonEvent]
/// @brief Method Associate, addr 0xadaac48, size 0xe0, virtual false, abstract: false, final false
static inline void Associate(::System::Object*  thisOrContextObject, ::System::Object*  first, ::System::Object*  second, /* [CallerMemberName] */ ::StringW  memberName) ;

/// [Event(6, Level = (System.Diagnostics.Tracing.EventLevel)1, Keywords = (System.Diagnostics.Tracing.EventKeywords)2)]
/// @brief Method CriticalFailure, addr 0xadaa29c, size 0x7c, virtual false, abstract: false, final false
inline void CriticalFailure(::StringW  thisOrContextObject, ::StringW  memberName, ::StringW  message) ;

/// [Conditional("DEBUG_NETEVENTSOURCE_MISUSE")]
/// @brief Method DebugValidateArg, addr 0xadaaf90, size 0x4, virtual false, abstract: false, final false
static inline void DebugValidateArg(::System::FormattableString*  arg) ;

/// [Conditional("DEBUG_NETEVENTSOURCE_MISUSE")]
/// @brief Method DebugValidateArg, addr 0xadaaf44, size 0x4c, virtual false, abstract: false, final false
static inline void DebugValidateArg(::System::Object*  arg) ;

/// [Event(7, Level = (System.Diagnostics.Tracing.EventLevel)5, Keywords = (System.Diagnostics.Tracing.EventKeywords)2)]
/// @brief Method DumpBuffer, addr 0xadaa6c8, size 0x78, virtual false, abstract: false, final false
inline void DumpBuffer(::StringW  thisOrContextObject, ::StringW  memberName, ::ArrayW<uint8_t>  buffer) ;

/// [NonEvent]
/// @brief Method DumpBuffer, addr 0xadaa318, size 0x7c, virtual false, abstract: false, final false
static inline void DumpBuffer(::System::Object*  thisOrContextObject, ::ArrayW<uint8_t>  buffer, /* [CallerMemberName] */ ::StringW  memberName) ;

/// [NonEvent]
/// @brief Method DumpBuffer, addr 0xadaa394, size 0x334, virtual false, abstract: false, final false
static inline void DumpBuffer(::System::Object*  thisOrContextObject, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, /* [CallerMemberName] */ ::StringW  memberName) ;

/// [NonEvent]
/// @brief Method DumpBuffer, addr 0xadaa740, size 0x160, virtual false, abstract: false, final false
static inline void DumpBuffer(::System::Object*  thisOrContextObject, ::System::IntPtr  bufferPtr, int32_t  count, /* [CallerMemberName] */ ::StringW  memberName) ;

/// [Event(1, Level = (System.Diagnostics.Tracing.EventLevel)4, Keywords = (System.Diagnostics.Tracing.EventKeywords)4)]
/// @brief Method Enter, addr 0xada94e0, size 0x7c, virtual false, abstract: false, final false
inline void Enter(::StringW  thisOrContextObject, ::StringW  memberName, ::StringW  parameters) ;

/// [NonEvent]
/// @brief Method Enter, addr 0xada9af4, size 0x11c, virtual false, abstract: false, final false
static inline void Enter(::System::Object*  thisOrContextObject, ::System::Object*  arg0, ::System::Object*  arg1, ::System::Object*  arg2, /* [CallerMemberName] */ ::StringW  memberName) ;

/// [NonEvent]
/// @brief Method Enter, addr 0xada99ec, size 0x108, virtual false, abstract: false, final false
static inline void Enter(::System::Object*  thisOrContextObject, ::System::Object*  arg0, ::System::Object*  arg1, /* [CallerMemberName] */ ::StringW  memberName) ;

/// [NonEvent]
/// @brief Method Enter, addr 0xada955c, size 0xe8, virtual false, abstract: false, final false
static inline void Enter(::System::Object*  thisOrContextObject, ::System::Object*  arg0, /* [CallerMemberName] */ ::StringW  memberName) ;

/// [NonEvent]
/// @brief Method Enter, addr 0xada8fc8, size 0xf0, virtual false, abstract: false, final false
static inline void Enter(::System::Object*  thisOrContextObject, ::System::FormattableString*  formattableString, /* [CallerMemberName] */ ::StringW  memberName) ;

/// [NonEvent]
/// @brief Method Error, addr 0xada9fd0, size 0xc0, virtual false, abstract: false, final false
static inline void Error(::System::Object*  thisOrContextObject, ::System::FormattableString*  formattableString, /* [CallerMemberName] */ ::StringW  memberName) ;

/// [NonEvent]
/// @brief Method Error, addr 0xadaa10c, size 0xd0, virtual false, abstract: false, final false
static inline void Error(::System::Object*  thisOrContextObject, ::System::Object*  message, /* [CallerMemberName] */ ::StringW  memberName) ;

/// [Event(5, Level = (System.Diagnostics.Tracing.EventLevel)3, Keywords = (System.Diagnostics.Tracing.EventKeywords)1)]
/// @brief Method ErrorMessage, addr 0xadaa090, size 0x7c, virtual false, abstract: false, final false
inline void ErrorMessage(::StringW  thisOrContextObject, ::StringW  memberName, ::StringW  message) ;

/// [Event(2, Level = (System.Diagnostics.Tracing.EventLevel)4, Keywords = (System.Diagnostics.Tracing.EventKeywords)4)]
/// @brief Method Exit, addr 0xada9d00, size 0x7c, virtual false, abstract: false, final false
inline void Exit(::StringW  thisOrContextObject, ::StringW  memberName, ::StringW  result) ;

/// [NonEvent]
/// @brief Method Exit, addr 0xada9e4c, size 0x108, virtual false, abstract: false, final false
static inline void Exit(::System::Object*  thisOrContextObject, ::System::Object*  arg0, ::System::Object*  arg1, /* [CallerMemberName] */ ::StringW  memberName) ;

/// [NonEvent]
/// @brief Method Exit, addr 0xada9d7c, size 0xd0, virtual false, abstract: false, final false
static inline void Exit(::System::Object*  thisOrContextObject, ::System::Object*  arg0, /* [CallerMemberName] */ ::StringW  memberName) ;

/// [NonEvent]
/// @brief Method Exit, addr 0xada9c10, size 0xf0, virtual false, abstract: false, final false
static inline void Exit(::System::Object*  thisOrContextObject, ::System::FormattableString*  formattableString, /* [CallerMemberName] */ ::StringW  memberName) ;

/// [NonEvent]
/// @brief Method Fail, addr 0xadaa1dc, size 0xc0, virtual false, abstract: false, final false
static inline void Fail(::System::Object*  thisOrContextObject, ::System::FormattableString*  formattableString, /* [CallerMemberName] */ ::StringW  memberName) ;

/// [NonEvent]
/// @brief Method Fail, addr 0xada7110, size 0xd0, virtual false, abstract: false, final false
static inline void Fail(::System::Object*  thisOrContextObject, ::System::Object*  message, /* [CallerMemberName] */ ::StringW  memberName) ;

/// [NonEvent]
/// @brief Method Format, addr 0xada91a4, size 0x33c, virtual false, abstract: false, final false
static inline ::StringW Format(::System::FormattableString*  s) ;

/// [NonEvent]
/// @brief Method Format, addr 0xada9644, size 0x3a8, virtual false, abstract: false, final false
static inline ::System::Object* Format(::System::Object*  value) ;

/// [NonEvent]
/// @brief Method GetHashCode, addr 0xadaaf94, size 0x14, virtual false, abstract: false, final false
static inline int32_t GetHashCode(::System::Object*  value) ;

/// [NonEvent]
/// @brief Method IdOf, addr 0xada90b8, size 0xec, virtual false, abstract: false, final false
static inline ::StringW IdOf(::System::Object*  value) ;

/// [Event(4, Level = (System.Diagnostics.Tracing.EventLevel)4, Keywords = (System.Diagnostics.Tracing.EventKeywords)1)]
/// @brief Method Info, addr 0xada9f54, size 0x7c, virtual false, abstract: false, final false
inline void Info(::StringW  thisOrContextObject, ::StringW  memberName, ::StringW  message) ;

/// [NonEvent]
/// @brief Method Info, addr 0xada79b4, size 0xf0, virtual false, abstract: false, final false
static inline void Info(::System::Object*  thisOrContextObject, ::System::FormattableString*  formattableString, /* [CallerMemberName] */ ::StringW  memberName) ;

/// [NonEvent]
/// @brief Method Info, addr 0xada7aa4, size 0xd0, virtual false, abstract: false, final false
static inline void Info(::System::Object*  thisOrContextObject, ::System::Object*  message, /* [CallerMemberName] */ ::StringW  memberName) ;

static inline ::System::Net::NetEventSource* New_ctor() ;

/// [NonEvent]
/// @brief Method WriteEvent, addr 0xadaa8a0, size 0x250, virtual false, abstract: false, final false
inline void WriteEvent(int32_t  eventId, ::StringW  arg1, ::StringW  arg2, ::ArrayW<uint8_t>  arg3) ;

/// [NonEvent]
/// @brief Method WriteEvent, addr 0xadaad28, size 0x21c, virtual false, abstract: false, final false
inline void WriteEvent(int32_t  eventId, ::StringW  arg1, ::StringW  arg2, ::StringW  arg3, ::StringW  arg4) ;

/// [NonEvent]
/// @brief Method WriteEvent, addr 0xadab454, size 0x1ec, virtual false, abstract: false, final false
inline void WriteEvent(int32_t  eventId, ::StringW  arg1, ::StringW  arg2, ::StringW  arg3, int32_t  arg4) ;

/// [NonEvent]
/// @brief Method WriteEvent, addr 0xadab2b8, size 0x19c, virtual false, abstract: false, final false
inline void WriteEvent(int32_t  eventId, ::StringW  arg1, ::StringW  arg2, int32_t  arg3) ;

/// [NonEvent]
/// @brief Method WriteEvent, addr 0xadab11c, size 0x19c, virtual false, abstract: false, final false
inline void WriteEvent(int32_t  eventId, ::StringW  arg1, int32_t  arg2, ::StringW  arg3) ;

/// [NonEvent]
/// @brief Method WriteEvent, addr 0xadaafa8, size 0x174, virtual false, abstract: false, final false
inline void WriteEvent(int32_t  eventId, ::StringW  arg1, int32_t  arg2, int32_t  arg3, int32_t  arg4) ;

/// @brief Method .ctor, addr 0xadab640, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Net::NetEventSource* getStaticF_Log() ;

/// @brief Method get_IsEnabled, addr 0xada7950, size 0x64, virtual false, abstract: false, final false
static inline bool get_IsEnabled() ;

static inline void setStaticF_Log(::System::Net::NetEventSource*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetEventSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetEventSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetEventSource(NetEventSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetEventSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetEventSource(NetEventSource const& ) = delete;

/// @brief Field AcceptSecuritContextId offset 0xffffffff size 0x4
static constexpr int32_t  AcceptSecuritContextId{static_cast<int32_t>(0xf)};

/// @brief Field AcquireCredentialsHandleId offset 0xffffffff size 0x4
static constexpr int32_t  AcquireCredentialsHandleId{static_cast<int32_t>(0xb)};

/// @brief Field AcquireDefaultCredentialId offset 0xffffffff size 0x4
static constexpr int32_t  AcquireDefaultCredentialId{static_cast<int32_t>(0xa)};

/// @brief Field AssociateEventId offset 0xffffffff size 0x4
static constexpr int32_t  AssociateEventId{static_cast<int32_t>(0x3)};

/// @brief Field CriticalFailureEventId offset 0xffffffff size 0x4
static constexpr int32_t  CriticalFailureEventId{static_cast<int32_t>(0x6)};

/// @brief Field DumpArrayEventId offset 0xffffffff size 0x4
static constexpr int32_t  DumpArrayEventId{static_cast<int32_t>(0x7)};

/// @brief Field EnterEventId offset 0xffffffff size 0x4
static constexpr int32_t  EnterEventId{static_cast<int32_t>(0x1)};

/// @brief Field EnumerateSecurityPackagesId offset 0xffffffff size 0x4
static constexpr int32_t  EnumerateSecurityPackagesId{static_cast<int32_t>(0x8)};

/// @brief Field ErrorEventId offset 0xffffffff size 0x4
static constexpr int32_t  ErrorEventId{static_cast<int32_t>(0x5)};

/// @brief Field ExitEventId offset 0xffffffff size 0x4
static constexpr int32_t  ExitEventId{static_cast<int32_t>(0x2)};

/// @brief Field InfoEventId offset 0xffffffff size 0x4
static constexpr int32_t  InfoEventId{static_cast<int32_t>(0x4)};

/// @brief Field InitializeSecurityContextId offset 0xffffffff size 0x4
static constexpr int32_t  InitializeSecurityContextId{static_cast<int32_t>(0xc)};

/// @brief Field MaxDumpSize offset 0xffffffff size 0x4
static constexpr int32_t  MaxDumpSize{static_cast<int32_t>(0x400)};

/// @brief Field MissingMember offset 0xffffffff size 0x8
static constexpr ::ConstString  MissingMember{u"(?)"};

/// @brief Field NextAvailableEventId offset 0xffffffff size 0x4
static constexpr int32_t  NextAvailableEventId{static_cast<int32_t>(0x11)};

/// @brief Field NoParameters offset 0xffffffff size 0x8
static constexpr ::ConstString  NoParameters{u""};

/// @brief Field NullInstance offset 0xffffffff size 0x8
static constexpr ::ConstString  NullInstance{u"(null)"};

/// @brief Field OperationReturnedSomethingId offset 0xffffffff size 0x4
static constexpr int32_t  OperationReturnedSomethingId{static_cast<int32_t>(0x10)};

/// @brief Field SecurityContextInputBufferId offset 0xffffffff size 0x4
static constexpr int32_t  SecurityContextInputBufferId{static_cast<int32_t>(0xd)};

/// @brief Field SecurityContextInputBuffersId offset 0xffffffff size 0x4
static constexpr int32_t  SecurityContextInputBuffersId{static_cast<int32_t>(0xe)};

/// @brief Field SspiPackageNotFoundId offset 0xffffffff size 0x4
static constexpr int32_t  SspiPackageNotFoundId{static_cast<int32_t>(0x9)};

/// @brief Field StaticMethodObject offset 0xffffffff size 0x8
static constexpr ::ConstString  StaticMethodObject{u"(static)"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10392};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::NetEventSource) == 0x18, "Size mismatch!");

} // namespace end def System::Net
// Dependencies System.Diagnostics.Tracing.EventKeywords, System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.NetEventSource/Keywords
class CORDL_TYPE NetEventSource_Keywords : public ::System::Object {
public:
// Declarations
static inline ::System::Net::NetEventSource_Keywords* New_ctor() ;

/// @brief Method .ctor, addr 0xadab6b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetEventSource_Keywords() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetEventSource_Keywords", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetEventSource_Keywords(NetEventSource_Keywords && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetEventSource_Keywords", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetEventSource_Keywords(NetEventSource_Keywords const& ) = delete;

/// @brief Field Debug value: I64(2)
static ::System::Diagnostics::Tracing::EventKeywords const Debug;

/// @brief Field Default value: I64(1)
static ::System::Diagnostics::Tracing::EventKeywords const Default;

/// @brief Field EnterExit value: I64(4)
static ::System::Diagnostics::Tracing::EventKeywords const EnterExit;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10391};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::NetEventSource_Keywords) == 0x10, "Size mismatch!");

} // namespace end def System::Net
