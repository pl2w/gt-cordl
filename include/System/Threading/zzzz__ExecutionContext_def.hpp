#pragma once
// IWYU pragma private; include "System/Threading/ExecutionContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__ExecutionContext_Flags_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ExecutionContext)
namespace GlobalNamespace {
struct ExecutionContext_CaptureOptions;
}
namespace GlobalNamespace {
struct ExecutionContext_Flags;
}
namespace GlobalNamespace {
struct ExecutionContext_Reader;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::Remoting::Messaging {
class IllogicalCallContext;
}
namespace System::Runtime::Remoting::Messaging {
class LogicalCallContext;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Threading {
struct AsyncFlowControl;
}
namespace System::Threading {
template<typename TState>
class ContextCallback_1;
}
namespace System::Threading {
class ContextCallback;
}
namespace System::Threading {
struct ExecutionContextSwitcher;
}
namespace System::Threading {
class IAsyncLocal;
}
namespace System::Threading {
struct StackCrawlMark;
}
namespace System::Threading {
class SynchronizationContext;
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
// Forward declare root types
namespace System::Threading {
class ExecutionContext;
}
// Write type traits
MARK_REF_T(::System::Threading::ExecutionContext*);
DEFINE_IL2CPP_CLASS(::System::Threading::ExecutionContext*, "System.Threading", "ExecutionContext");
// Dependencies System.Object, System.Threading.ExecutionContext::Flags
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.ExecutionContext
class CORDL_TYPE ExecutionContext : public ::System::Object {
public:
// Declarations
using CaptureOptions = ::GlobalNamespace::ExecutionContext_CaptureOptions;

using Flags = ::GlobalNamespace::ExecutionContext_Flags;

using Reader = ::GlobalNamespace::ExecutionContext_Reader;

/// @brief Field Default, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Default, put=setStaticF_Default)) ::System::Threading::ExecutionContext*  Default;

 __declspec(property(get=get_IllogicalCallContext, put=set_IllogicalCallContext)) ::System::Runtime::Remoting::Messaging::IllogicalCallContext*  IllogicalCallContext;

 __declspec(property(get=get_IsPreAllocatedDefault)) bool  IsPreAllocatedDefault;

 __declspec(property(get=get_LogicalCallContext, put=set_LogicalCallContext)) ::System::Runtime::Remoting::Messaging::LogicalCallContext*  LogicalCallContext;

 __declspec(property(get=get_SynchronizationContext, put=set_SynchronizationContext)) ::System::Threading::SynchronizationContext*  SynchronizationContext;

 __declspec(property(get=get_SynchronizationContextNoFlow, put=set_SynchronizationContextNoFlow)) ::System::Threading::SynchronizationContext*  SynchronizationContextNoFlow;

/// @brief Field _flags, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__flags, put=__cordl_internal_set__flags)) ::GlobalNamespace::ExecutionContext_Flags  _flags;

/// @brief Field _illogicalCallContext, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__illogicalCallContext, put=__cordl_internal_set__illogicalCallContext)) ::System::Runtime::Remoting::Messaging::IllogicalCallContext*  _illogicalCallContext;

/// @brief Field _localChangeNotifications, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__localChangeNotifications, put=__cordl_internal_set__localChangeNotifications)) ::System::Collections::Generic::List_1<::System::Threading::IAsyncLocal*>*  _localChangeNotifications;

/// @brief Field _localValues, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__localValues, put=__cordl_internal_set__localValues)) ::System::Collections::Generic::Dictionary_2<::System::Threading::IAsyncLocal*,::System::Object*>*  _localValues;

/// @brief Field _logicalCallContext, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__logicalCallContext, put=__cordl_internal_set__logicalCallContext)) ::System::Runtime::Remoting::Messaging::LogicalCallContext*  _logicalCallContext;

/// @brief Field _syncContext, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__syncContext, put=__cordl_internal_set__syncContext)) ::System::Threading::SynchronizationContext*  _syncContext;

/// @brief Field _syncContextNoFlow, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__syncContextNoFlow, put=__cordl_internal_set__syncContextNoFlow)) ::System::Threading::SynchronizationContext*  _syncContextNoFlow;

 __declspec(property(get=get_isFlowSuppressed, put=set_isFlowSuppressed)) bool  isFlowSuppressed;

 __declspec(property(get=get_isNewCapture, put=set_isNewCapture)) bool  isNewCapture;

/// @brief Field s_dummyDefaultEC, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_dummyDefaultEC, put=setStaticF_s_dummyDefaultEC)) ::System::Threading::ExecutionContext*  s_dummyDefaultEC;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Method Capture, addr 0xa343de4, size 0x50, virtual false, abstract: false, final false
static inline ::System::Threading::ExecutionContext* Capture() ;

/// @brief Method Capture, addr 0xa34c8b4, size 0x21c, virtual false, abstract: false, final false
static inline ::System::Threading::ExecutionContext* Capture(::by_ref<::System::Threading::StackCrawlMark>  stackMark, ::GlobalNamespace::ExecutionContext_CaptureOptions  options) ;

/// @brief Method CreateCopy, addr 0xa34c4d4, size 0x178, virtual false, abstract: false, final false
inline ::System::Threading::ExecutionContext* CreateCopy() ;

/// @brief Method CreateMutableCopy, addr 0xa34c64c, size 0x140, virtual false, abstract: false, final false
inline ::System::Threading::ExecutionContext* CreateMutableCopy() ;

/// @brief Method Dispose, addr 0xa34bec0, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method EstablishCopyOnWriteScope, addr 0xa34c210, size 0x6c, virtual false, abstract: false, final false
static inline void EstablishCopyOnWriteScope(::System::Threading::Thread*  currentThread, bool  knownNullWindowsIdentity, ::by_ref<::System::Threading::ExecutionContextSwitcher>  ecsw) ;

/// @brief Method EstablishCopyOnWriteScope, addr 0xa34c468, size 0x6c, virtual false, abstract: false, final false
static inline void EstablishCopyOnWriteScope(::by_ref<::System::Threading::ExecutionContextSwitcher>  ecsw) ;

/// [FriendAccessAllowed]
/// @brief Method FastCapture, addr 0xa34cad0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Threading::ExecutionContext* FastCapture() ;

/// @brief Method GetObjectData, addr 0xa34cb20, size 0x100, virtual true, abstract: false, final true
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method IsDefaultFTContext, addr 0xa34c1c0, size 0x50, virtual false, abstract: false, final false
inline bool IsDefaultFTContext(bool  ignoreSyncCtx) ;

/// @brief Method IsFlowSuppressed, addr 0xa34c864, size 0x50, virtual false, abstract: false, final false
static inline bool IsFlowSuppressed() ;

/// @brief [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
static inline ::System::Threading::ExecutionContext* New_ctor() ;

static inline ::System::Threading::ExecutionContext* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
static inline ::System::Threading::ExecutionContext* New_ctor(bool  isPreAllocatedDefault) ;

/// [HandleProcessCorruptedStateExceptions]
/// @brief Method OnAsyncLocalContextChanged, addr 0xa34b1f0, size 0x4b0, virtual false, abstract: false, final false
static inline void OnAsyncLocalContextChanged(::System::Threading::ExecutionContext*  previous, ::System::Threading::ExecutionContext*  current) ;

/// @brief Method RestoreFlow, addr 0xa34b844, size 0x90, virtual false, abstract: false, final false
static inline void RestoreFlow() ;

/// @brief Method Run, addr 0xa3480f4, size 0xe0, virtual false, abstract: false, final false
static inline void Run(::System::Threading::ExecutionContext*  executionContext, ::System::Threading::ContextCallback*  callback, ::System::Object*  state) ;

/// [FriendAccessAllowed]
/// @brief Method Run, addr 0xa34bec4, size 0x7c, virtual false, abstract: false, final false
static inline void Run(::System::Threading::ExecutionContext*  executionContext, ::System::Threading::ContextCallback*  callback, ::System::Object*  state, bool  preserveSyncCtx) ;

/// @brief Method RunInternal, addr 0xa34c150, size 0x70, virtual false, abstract: false, final false
static inline void RunInternal(::System::Threading::ExecutionContext*  executionContext, ::System::Threading::ContextCallback*  callback, ::System::Object*  state) ;

/// [HandleProcessCorruptedStateExceptions]
/// @brief Method RunInternal, addr 0xa34bf40, size 0x210, virtual false, abstract: false, final false
static inline void RunInternal(::System::Threading::ExecutionContext*  executionContext, ::System::Threading::ContextCallback*  callback, ::System::Object*  state, bool  preserveSyncCtx) ;

/// @brief Method RunInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TState>
static inline void RunInternal(::System::Threading::ExecutionContext*  executionContext, ::System::Threading::ContextCallback_1<TState>*  callback, ::by_ref<TState>  state) ;

/// [HandleProcessCorruptedStateExceptions]
/// @brief Method RunInternal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TState>
static inline void RunInternal(::System::Threading::ExecutionContext*  executionContext, ::System::Threading::ContextCallback_1<TState>*  callback, ::by_ref<TState>  state, bool  preserveSyncCtx) ;

/// [HandleProcessCorruptedStateExceptions]
/// @brief Method SetExecutionContext, addr 0xa34c27c, size 0x1ec, virtual false, abstract: false, final false
static inline ::System::Threading::ExecutionContextSwitcher SetExecutionContext(::System::Threading::ExecutionContext*  executionContext, bool  preserveSyncCtx) ;

/// @brief Method SetLocalValue, addr 0xa34bac4, size 0x2ec, virtual false, abstract: false, final false
static inline void SetLocalValue(::System::Threading::IAsyncLocal*  local, ::System::Object*  newValue, bool  needChangeNotifications) ;

/// @brief Method SuppressFlow, addr 0xa34c78c, size 0xd8, virtual false, abstract: false, final false
static inline ::System::Threading::AsyncFlowControl SuppressFlow() ;

constexpr ::GlobalNamespace::ExecutionContext_Flags const& __cordl_internal_get__flags() const;

constexpr ::GlobalNamespace::ExecutionContext_Flags& __cordl_internal_get__flags() ;

constexpr ::System::Runtime::Remoting::Messaging::IllogicalCallContext* const& __cordl_internal_get__illogicalCallContext() const;

constexpr ::System::Runtime::Remoting::Messaging::IllogicalCallContext*& __cordl_internal_get__illogicalCallContext() ;

constexpr ::System::Collections::Generic::List_1<::System::Threading::IAsyncLocal*>* const& __cordl_internal_get__localChangeNotifications() const;

constexpr ::System::Collections::Generic::List_1<::System::Threading::IAsyncLocal*>*& __cordl_internal_get__localChangeNotifications() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Threading::IAsyncLocal*,::System::Object*>* const& __cordl_internal_get__localValues() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Threading::IAsyncLocal*,::System::Object*>*& __cordl_internal_get__localValues() ;

constexpr ::System::Runtime::Remoting::Messaging::LogicalCallContext* const& __cordl_internal_get__logicalCallContext() const;

constexpr ::System::Runtime::Remoting::Messaging::LogicalCallContext*& __cordl_internal_get__logicalCallContext() ;

constexpr ::System::Threading::SynchronizationContext* const& __cordl_internal_get__syncContext() const;

constexpr ::System::Threading::SynchronizationContext*& __cordl_internal_get__syncContext() ;

constexpr ::System::Threading::SynchronizationContext* const& __cordl_internal_get__syncContextNoFlow() const;

constexpr ::System::Threading::SynchronizationContext*& __cordl_internal_get__syncContextNoFlow() ;

constexpr void __cordl_internal_set__flags(::GlobalNamespace::ExecutionContext_Flags  value) ;

constexpr void __cordl_internal_set__illogicalCallContext(::System::Runtime::Remoting::Messaging::IllogicalCallContext*  value) ;

constexpr void __cordl_internal_set__localChangeNotifications(::System::Collections::Generic::List_1<::System::Threading::IAsyncLocal*>*  value) ;

constexpr void __cordl_internal_set__localValues(::System::Collections::Generic::Dictionary_2<::System::Threading::IAsyncLocal*,::System::Object*>*  value) ;

constexpr void __cordl_internal_set__logicalCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext*  value) ;

constexpr void __cordl_internal_set__syncContext(::System::Threading::SynchronizationContext*  value) ;

constexpr void __cordl_internal_set__syncContextNoFlow(::System::Threading::SynchronizationContext*  value) ;

/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
/// @brief Method .ctor, addr 0xa34ba8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa34cc20, size 0x114, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
/// @brief Method .ctor, addr 0xa34ba94, size 0x30, virtual false, abstract: false, final false
inline void _ctor(bool  isPreAllocatedDefault) ;

static inline ::System::Threading::ExecutionContext* getStaticF_Default() ;

static inline ::System::Threading::ExecutionContext* getStaticF_s_dummyDefaultEC() ;

/// @brief Method get_IllogicalCallContext, addr 0xa34be28, size 0x70, virtual false, abstract: false, final false
inline ::System::Runtime::Remoting::Messaging::IllogicalCallContext* get_IllogicalCallContext() ;

/// @brief Method get_IsPreAllocatedDefault, addr 0xa34ba80, size 0xc, virtual false, abstract: false, final false
inline bool get_IsPreAllocatedDefault() ;

/// @brief Method get_LogicalCallContext, addr 0xa34bdb0, size 0x70, virtual false, abstract: false, final false
inline ::System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext() ;

/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
/// @brief Method get_SynchronizationContext, addr 0xa34bea0, size 0x8, virtual false, abstract: false, final false
inline ::System::Threading::SynchronizationContext* get_SynchronizationContext() ;

/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
/// @brief Method get_SynchronizationContextNoFlow, addr 0xa34beb0, size 0x8, virtual false, abstract: false, final false
inline ::System::Threading::SynchronizationContext* get_SynchronizationContextNoFlow() ;

/// @brief Method get_isFlowSuppressed, addr 0xa34ba74, size 0xc, virtual false, abstract: false, final false
inline bool get_isFlowSuppressed() ;

/// @brief Method get_isNewCapture, addr 0xa34ba50, size 0x14, virtual false, abstract: false, final false
inline bool get_isNewCapture() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

static inline void setStaticF_Default(::System::Threading::ExecutionContext*  value) ;

static inline void setStaticF_s_dummyDefaultEC(::System::Threading::ExecutionContext*  value) ;

/// @brief Method set_IllogicalCallContext, addr 0xa34be98, size 0x8, virtual false, abstract: false, final false
inline void set_IllogicalCallContext(::System::Runtime::Remoting::Messaging::IllogicalCallContext*  value) ;

/// @brief Method set_LogicalCallContext, addr 0xa34be20, size 0x8, virtual false, abstract: false, final false
inline void set_LogicalCallContext(::System::Runtime::Remoting::Messaging::LogicalCallContext*  value) ;

/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
/// @brief Method set_SynchronizationContext, addr 0xa34bea8, size 0x8, virtual false, abstract: false, final false
inline void set_SynchronizationContext(::System::Threading::SynchronizationContext*  value) ;

/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
/// @brief Method set_SynchronizationContextNoFlow, addr 0xa34beb8, size 0x8, virtual false, abstract: false, final false
inline void set_SynchronizationContextNoFlow(::System::Threading::SynchronizationContext*  value) ;

/// @brief Method set_isFlowSuppressed, addr 0xa34b710, size 0x20, virtual false, abstract: false, final false
inline void set_isFlowSuppressed(bool  value) ;

/// @brief Method set_isNewCapture, addr 0xa34ba64, size 0x10, virtual false, abstract: false, final false
inline void set_isNewCapture(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExecutionContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExecutionContext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ExecutionContext(ExecutionContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExecutionContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExecutionContext(ExecutionContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5843};

/// @brief Field _syncContext, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::SynchronizationContext*  ____syncContext;

/// @brief Field _syncContextNoFlow, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::SynchronizationContext*  ____syncContextNoFlow;

/// @brief Field _logicalCallContext, offset: 0x20, size: 0x8, def value: None
 ::System::Runtime::Remoting::Messaging::LogicalCallContext*  ____logicalCallContext;

/// @brief Field _illogicalCallContext, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::Remoting::Messaging::IllogicalCallContext*  ____illogicalCallContext;

/// @brief Field _flags, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::ExecutionContext_Flags  ____flags;

/// @brief Field _localValues, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Threading::IAsyncLocal*,::System::Object*>*  ____localValues;

/// @brief Field _localChangeNotifications, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Threading::IAsyncLocal*>*  ____localChangeNotifications;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::ExecutionContext, ____syncContext) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ExecutionContext, ____syncContextNoFlow) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ExecutionContext, ____logicalCallContext) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ExecutionContext, ____illogicalCallContext) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ExecutionContext, ____flags) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ExecutionContext, ____localValues) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Threading::ExecutionContext, ____localChangeNotifications) == 0x40, "Offset mismatch!");

static_assert(sizeof(::System::Threading::ExecutionContext) == 0x48, "Size mismatch!");

} // namespace end def System::Threading
