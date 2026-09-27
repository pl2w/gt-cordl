#pragma once
// IWYU pragma private; include "System/Net/ServicePointScheduler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ServicePointScheduler)
namespace GlobalNamespace {
struct ServicePointScheduler__RunScheduler_d__32;
}
namespace GlobalNamespace {
struct ServicePointScheduler__WaitAsync_d__46;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
namespace System::Net {
class AsyncManualResetEvent_ServicePointScheduler___c;
}
namespace System::Net {
class ServicePointScheduler_AsyncManualResetEvent;
}
namespace System::Net {
class ServicePointScheduler_ConnectionGroup;
}
namespace System::Net {
class ServicePoint;
}
namespace System::Net {
class WebConnection;
}
namespace System::Net {
class WebOperation;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
struct DateTime;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
// Forward declare root types
namespace System::Net {
class AsyncManualResetEvent_ServicePointScheduler___c;
}
namespace System::Net {
class ServicePointScheduler;
}
namespace System::Net {
class ServicePointScheduler_AsyncManualResetEvent;
}
namespace System::Net {
class ServicePointScheduler_ConnectionGroup;
}
// Write type traits
MARK_REF_T(::System::Net::AsyncManualResetEvent_ServicePointScheduler___c*);
MARK_REF_T(::System::Net::ServicePointScheduler*);
MARK_REF_T(::System::Net::ServicePointScheduler_AsyncManualResetEvent*);
MARK_REF_T(::System::Net::ServicePointScheduler_ConnectionGroup*);
DEFINE_IL2CPP_CLASS(::System::Net::AsyncManualResetEvent_ServicePointScheduler___c*, "System.Net", "ServicePointScheduler/AsyncManualResetEvent/<>c");
DEFINE_IL2CPP_CLASS(::System::Net::ServicePointScheduler*, "System.Net", "ServicePointScheduler");
DEFINE_IL2CPP_CLASS(::System::Net::ServicePointScheduler_AsyncManualResetEvent*, "System.Net", "ServicePointScheduler/AsyncManualResetEvent");
DEFINE_IL2CPP_CLASS(::System::Net::ServicePointScheduler_ConnectionGroup*, "System.Net", "ServicePointScheduler/ConnectionGroup");
// Dependencies System.DateTime, System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.ServicePointScheduler
class CORDL_TYPE ServicePointScheduler : public ::System::Object {
public:
// Declarations
using _RunScheduler_d__32 = ::GlobalNamespace::ServicePointScheduler__RunScheduler_d__32;

using _WaitAsync_d__46 = ::GlobalNamespace::ServicePointScheduler__WaitAsync_d__46;

using AsyncManualResetEvent = ::System::Net::ServicePointScheduler_AsyncManualResetEvent;

using ConnectionGroup = ::System::Net::ServicePointScheduler_ConnectionGroup;

 __declspec(property(get=get_ConnectionLimit, put=set_ConnectionLimit)) int32_t  ConnectionLimit;

 __declspec(property(get=get_CurrentConnections)) int32_t  CurrentConnections;

 __declspec(property(get=get_IdleSince)) ::System::DateTime  IdleSince;

 __declspec(property(get=get_ME)) ::StringW  ME;

 __declspec(property(get=get_MaxIdleTime, put=set_MaxIdleTime)) int32_t  MaxIdleTime;

 __declspec(property(get=get_ServicePoint, put=set_ServicePoint)) ::System::Net::ServicePoint*  ServicePoint;

/// @brief Field <ME>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__ME_k__BackingField, put=__cordl_internal_set__ME_k__BackingField)) ::StringW  _ME_k__BackingField;

/// @brief Field <ServicePoint>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__ServicePoint_k__BackingField, put=__cordl_internal_set__ServicePoint_k__BackingField)) ::System::Net::ServicePoint*  _ServicePoint_k__BackingField;

/// @brief Field ID, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__cordl_ID, put=__cordl_internal_set__cordl_ID)) int32_t  _cordl_ID;

/// @brief Field connectionLimit, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_connectionLimit, put=__cordl_internal_set_connectionLimit)) int32_t  connectionLimit;

/// @brief Field currentConnections, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentConnections, put=__cordl_internal_set_currentConnections)) int32_t  currentConnections;

/// @brief Field defaultGroup, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultGroup, put=__cordl_internal_set_defaultGroup)) ::System::Net::ServicePointScheduler_ConnectionGroup*  defaultGroup;

/// @brief Field groups, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_groups, put=__cordl_internal_set_groups)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Net::ServicePointScheduler_ConnectionGroup*>*  groups;

/// @brief Field idleConnections, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_idleConnections, put=__cordl_internal_set_idleConnections)) ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_3<::System::Net::ServicePointScheduler_ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>>*  idleConnections;

/// @brief Field idleSince, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_idleSince, put=__cordl_internal_set_idleSince)) ::System::DateTime  idleSince;

/// @brief Field maxIdleTime, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxIdleTime, put=__cordl_internal_set_maxIdleTime)) int32_t  maxIdleTime;

/// @brief Field nextId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_nextId, put=setStaticF_nextId)) int32_t  nextId;

/// @brief Field operations, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_operations, put=__cordl_internal_set_operations)) ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<::System::Net::ServicePointScheduler_ConnectionGroup*,::System::Net::WebOperation*>>*  operations;

/// @brief Field running, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_running, put=__cordl_internal_set_running)) int32_t  running;

/// @brief Field schedulerEvent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_schedulerEvent, put=__cordl_internal_set_schedulerEvent)) ::System::Net::ServicePointScheduler_AsyncManualResetEvent*  schedulerEvent;

/// @brief Method Cleanup, addr 0xacb2014, size 0x1e0, virtual false, abstract: false, final false
inline void Cleanup() ;

/// @brief Method CloseConnectionGroup, addr 0xacaf5e8, size 0x120, virtual false, abstract: false, final false
inline bool CloseConnectionGroup(::StringW  groupName) ;

/// @brief Method CloseIdleConnection, addr 0xacb2cf8, size 0x38, virtual false, abstract: false, final false
inline void CloseIdleConnection(::System::Net::ServicePointScheduler_ConnectionGroup*  group, ::System::Net::WebConnection*  connection) ;

/// [Conditional("MONO_WEB_DEBUG")]
/// @brief Method Debug, addr 0xacb1cdc, size 0x4, virtual false, abstract: false, final false
inline void Debug(::StringW  message) ;

/// @brief Method FinalCleanup, addr 0xacb2ee4, size 0xc8, virtual false, abstract: false, final false
inline void FinalCleanup() ;

/// @brief Method GetConnectionGroup, addr 0xacb2fac, size 0x200, virtual false, abstract: false, final false
inline ::System::Net::ServicePointScheduler_ConnectionGroup* GetConnectionGroup(::StringW  name) ;

static inline ::System::Net::ServicePointScheduler* New_ctor(::System::Net::ServicePoint*  servicePoint, int32_t  connectionLimit, int32_t  maxIdleTime) ;

/// @brief Method OnConnectionClosed, addr 0xacb34e0, size 0x1c, virtual false, abstract: false, final false
inline void OnConnectionClosed(::System::Net::WebConnection*  connection) ;

/// @brief Method OnConnectionCreated, addr 0xacb34d4, size 0xc, virtual false, abstract: false, final false
inline void OnConnectionCreated(::System::Net::WebConnection*  connection) ;

/// @brief Method OperationCompleted, addr 0xacb2580, size 0x220, virtual false, abstract: false, final false
inline bool OperationCompleted(::System::Net::ServicePointScheduler_ConnectionGroup*  group, ::System::Net::WebOperation*  operation) ;

/// @brief Method RemoveIdleConnection, addr 0xacb299c, size 0xcc, virtual false, abstract: false, final false
inline void RemoveIdleConnection(::System::Net::WebConnection*  connection) ;

/// @brief Method RemoveOperation, addr 0xacb2e18, size 0xcc, virtual false, abstract: false, final false
inline void RemoveOperation(::System::Net::WebOperation*  operation) ;

/// @brief Method Run, addr 0xacb1a2c, size 0xc4, virtual false, abstract: false, final false
inline void Run() ;

/// [AsyncStateMachine(typeof(System.Net.ServicePointScheduler::<RunScheduler>d__32))]
/// @brief Method RunScheduler, addr 0xacb1f2c, size 0xe8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* RunScheduler() ;

/// @brief Method RunSchedulerIteration, addr 0xacb2268, size 0x17c, virtual false, abstract: false, final false
inline void RunSchedulerIteration() ;

/// @brief Method SchedulerIteration, addr 0xacb24a0, size 0xe0, virtual false, abstract: false, final false
inline bool SchedulerIteration(::System::Net::ServicePointScheduler_ConnectionGroup*  group) ;

/// @brief Method SendRequest, addr 0xacaf40c, size 0xec, virtual false, abstract: false, final false
inline void SendRequest(::System::Net::WebOperation*  operation, ::StringW  groupName) ;

/// [AsyncStateMachine(typeof(System.Net.ServicePointScheduler::<WaitAsync>d__46))]
/// @brief Method WaitAsync, addr 0xacb34fc, size 0x124, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<bool>* WaitAsync(::System::Threading::Tasks::Task*  workerTask, int32_t  millisecondTimeout) ;

/// [CompilerGenerated]
/// @brief Method <Run>b__31_0, addr 0xacb3620, size 0x4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _Run_b__31_0() ;

constexpr ::StringW const& __cordl_internal_get__ME_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ME_k__BackingField() ;

constexpr ::System::Net::ServicePoint* const& __cordl_internal_get__ServicePoint_k__BackingField() const;

constexpr ::System::Net::ServicePoint*& __cordl_internal_get__ServicePoint_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__cordl_ID() const;

constexpr int32_t& __cordl_internal_get__cordl_ID() ;

constexpr int32_t const& __cordl_internal_get_connectionLimit() const;

constexpr int32_t& __cordl_internal_get_connectionLimit() ;

constexpr int32_t const& __cordl_internal_get_currentConnections() const;

constexpr int32_t& __cordl_internal_get_currentConnections() ;

constexpr ::System::Net::ServicePointScheduler_ConnectionGroup* const& __cordl_internal_get_defaultGroup() const;

constexpr ::System::Net::ServicePointScheduler_ConnectionGroup*& __cordl_internal_get_defaultGroup() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Net::ServicePointScheduler_ConnectionGroup*>* const& __cordl_internal_get_groups() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Net::ServicePointScheduler_ConnectionGroup*>*& __cordl_internal_get_groups() ;

constexpr ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_3<::System::Net::ServicePointScheduler_ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>>* const& __cordl_internal_get_idleConnections() const;

constexpr ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_3<::System::Net::ServicePointScheduler_ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>>*& __cordl_internal_get_idleConnections() ;

constexpr ::System::DateTime const& __cordl_internal_get_idleSince() const;

constexpr ::System::DateTime& __cordl_internal_get_idleSince() ;

constexpr int32_t const& __cordl_internal_get_maxIdleTime() const;

constexpr int32_t& __cordl_internal_get_maxIdleTime() ;

constexpr ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<::System::Net::ServicePointScheduler_ConnectionGroup*,::System::Net::WebOperation*>>* const& __cordl_internal_get_operations() const;

constexpr ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<::System::Net::ServicePointScheduler_ConnectionGroup*,::System::Net::WebOperation*>>*& __cordl_internal_get_operations() ;

constexpr int32_t const& __cordl_internal_get_running() const;

constexpr int32_t& __cordl_internal_get_running() ;

constexpr ::System::Net::ServicePointScheduler_AsyncManualResetEvent* const& __cordl_internal_get_schedulerEvent() const;

constexpr ::System::Net::ServicePointScheduler_AsyncManualResetEvent*& __cordl_internal_get_schedulerEvent() ;

constexpr void __cordl_internal_set__ME_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__ServicePoint_k__BackingField(::System::Net::ServicePoint*  value) ;

constexpr void __cordl_internal_set__cordl_ID(int32_t  value) ;

constexpr void __cordl_internal_set_connectionLimit(int32_t  value) ;

constexpr void __cordl_internal_set_currentConnections(int32_t  value) ;

constexpr void __cordl_internal_set_defaultGroup(::System::Net::ServicePointScheduler_ConnectionGroup*  value) ;

constexpr void __cordl_internal_set_groups(::System::Collections::Generic::Dictionary_2<::StringW,::System::Net::ServicePointScheduler_ConnectionGroup*>*  value) ;

constexpr void __cordl_internal_set_idleConnections(::System::Collections::Generic::LinkedList_1<::System::ValueTuple_3<::System::Net::ServicePointScheduler_ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>>*  value) ;

constexpr void __cordl_internal_set_idleSince(::System::DateTime  value) ;

constexpr void __cordl_internal_set_maxIdleTime(int32_t  value) ;

constexpr void __cordl_internal_set_operations(::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<::System::Net::ServicePointScheduler_ConnectionGroup*,::System::Net::WebOperation*>>*  value) ;

constexpr void __cordl_internal_set_running(int32_t  value) ;

constexpr void __cordl_internal_set_schedulerEvent(::System::Net::ServicePointScheduler_AsyncManualResetEvent*  value) ;

/// @brief Method .ctor, addr 0xacae550, size 0x204, virtual false, abstract: false, final false
inline void _ctor(::System::Net::ServicePoint*  servicePoint, int32_t  connectionLimit, int32_t  maxIdleTime) ;

static inline int32_t getStaticF_nextId() ;

/// @brief Method get_ConnectionLimit, addr 0xacb1af0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ConnectionLimit() ;

/// @brief Method get_CurrentConnections, addr 0xacb1ce0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CurrentConnections() ;

/// @brief Method get_IdleSince, addr 0xacb1ce8, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_IdleSince() ;

/// [CompilerGenerated]
/// @brief Method get_ME, addr 0xacb1cf0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ME() ;

/// @brief Method get_MaxIdleTime, addr 0xacb1a24, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MaxIdleTime() ;

/// [CompilerGenerated]
/// @brief Method get_ServicePoint, addr 0xacb1a14, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::ServicePoint* get_ServicePoint() ;

static inline void setStaticF_nextId(int32_t  value) ;

/// @brief Method set_ConnectionLimit, addr 0xacae814, size 0x58, virtual false, abstract: false, final false
inline void set_ConnectionLimit(int32_t  value) ;

/// @brief Method set_MaxIdleTime, addr 0xacae974, size 0x58, virtual false, abstract: false, final false
inline void set_MaxIdleTime(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_ServicePoint, addr 0xacb1a1c, size 0x8, virtual false, abstract: false, final false
inline void set_ServicePoint(::System::Net::ServicePoint*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ServicePointScheduler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ServicePointScheduler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ServicePointScheduler(ServicePointScheduler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServicePointScheduler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServicePointScheduler(ServicePointScheduler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10725};

/// [CompilerGenerated]
/// @brief Field <ServicePoint>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Net::ServicePoint*  ____ServicePoint_k__BackingField;

/// @brief Field running, offset: 0x18, size: 0x4, def value: None
 int32_t  ___running;

/// @brief Field maxIdleTime, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___maxIdleTime;

/// @brief Field schedulerEvent, offset: 0x20, size: 0x8, def value: None
 ::System::Net::ServicePointScheduler_AsyncManualResetEvent*  ___schedulerEvent;

/// @brief Field defaultGroup, offset: 0x28, size: 0x8, def value: None
 ::System::Net::ServicePointScheduler_ConnectionGroup*  ___defaultGroup;

/// @brief Field groups, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Net::ServicePointScheduler_ConnectionGroup*>*  ___groups;

/// @brief Field operations, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<::System::Net::ServicePointScheduler_ConnectionGroup*,::System::Net::WebOperation*>>*  ___operations;

/// @brief Field idleConnections, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::LinkedList_1<::System::ValueTuple_3<::System::Net::ServicePointScheduler_ConnectionGroup*,::System::Net::WebConnection*,::System::Threading::Tasks::Task*>>*  ___idleConnections;

/// @brief Field currentConnections, offset: 0x48, size: 0x4, def value: None
 int32_t  ___currentConnections;

/// @brief Field connectionLimit, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___connectionLimit;

/// @brief Field idleSince, offset: 0x50, size: 0x8, def value: None
 ::System::DateTime  ___idleSince;

/// @brief Field ID, offset: 0x58, size: 0x4, def value: None
 int32_t  ____cordl_ID;

/// [CompilerGenerated]
/// @brief Field <ME>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::StringW  ____ME_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::ServicePointScheduler, ____ServicePoint_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePointScheduler, ___running) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePointScheduler, ___maxIdleTime) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePointScheduler, ___schedulerEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePointScheduler, ___defaultGroup) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePointScheduler, ___groups) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePointScheduler, ___operations) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePointScheduler, ___idleConnections) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePointScheduler, ___currentConnections) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePointScheduler, ___connectionLimit) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePointScheduler, ___idleSince) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePointScheduler, ____cordl_ID) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePointScheduler, ____ME_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(sizeof(::System::Net::ServicePointScheduler) == 0x68, "Size mismatch!");

} // namespace end def System::Net
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.ServicePointScheduler/AsyncManualResetEvent
class CORDL_TYPE ServicePointScheduler_AsyncManualResetEvent : public ::System::Object {
public:
// Declarations
using __c = ::System::Net::AsyncManualResetEvent_ServicePointScheduler___c;

/// @brief Field m_tcs, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_tcs, put=__cordl_internal_set_m_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  m_tcs;

static inline ::System::Net::ServicePointScheduler_AsyncManualResetEvent* New_ctor(bool  state) ;

/// @brief Method Reset, addr 0xacb23e4, size 0xbc, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Set, addr 0xacb1cf8, size 0x234, virtual false, abstract: false, final false
inline void Set() ;

/// @brief Method WaitAsync, addr 0xacb4068, size 0x4c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WaitAsync() ;

/// @brief Method WaitAsync, addr 0xacb4110, size 0x54, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* WaitAsync(int32_t  millisecondTimeout) ;

/// @brief Method WaitOne, addr 0xacb40b4, size 0x5c, virtual false, abstract: false, final false
inline bool WaitOne(int32_t  millisecondTimeout) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get_m_tcs() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get_m_tcs() ;

constexpr void __cordl_internal_set_m_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

/// @brief Method .ctor, addr 0xacb1af8, size 0xac, virtual false, abstract: false, final false
inline void _ctor(bool  state) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ServicePointScheduler_AsyncManualResetEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ServicePointScheduler_AsyncManualResetEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ServicePointScheduler_AsyncManualResetEvent(ServicePointScheduler_AsyncManualResetEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServicePointScheduler_AsyncManualResetEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServicePointScheduler_AsyncManualResetEvent(ServicePointScheduler_AsyncManualResetEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10722};

/// @brief Field m_tcs, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  ___m_tcs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::ServicePointScheduler_AsyncManualResetEvent, ___m_tcs) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::Net::ServicePointScheduler_AsyncManualResetEvent) == 0x18, "Size mismatch!");

} // namespace end def System::Net
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.ServicePointScheduler/AsyncManualResetEvent/<>c
class CORDL_TYPE AsyncManualResetEvent_ServicePointScheduler___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::System::Net::AsyncManualResetEvent_ServicePointScheduler___c*  __9;

/// @brief Field <>9__4_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_0, put=setStaticF___9__4_0)) ::System::Func_2<::System::Object*,bool>*  __9__4_0;

static inline ::System::Net::AsyncManualResetEvent_ServicePointScheduler___c* New_ctor() ;

/// @brief Method <Set>b__4_0, addr 0xacb41d4, size 0x9c, virtual false, abstract: false, final false
inline bool _Set_b__4_0(::System::Object*  s) ;

/// @brief Method .ctor, addr 0xacb41cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Net::AsyncManualResetEvent_ServicePointScheduler___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Object*,bool>* getStaticF___9__4_0() ;

static inline void setStaticF___9(::System::Net::AsyncManualResetEvent_ServicePointScheduler___c*  value) ;

static inline void setStaticF___9__4_0(::System::Func_2<::System::Object*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncManualResetEvent_ServicePointScheduler___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncManualResetEvent_ServicePointScheduler___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncManualResetEvent_ServicePointScheduler___c(AsyncManualResetEvent_ServicePointScheduler___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncManualResetEvent_ServicePointScheduler___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncManualResetEvent_ServicePointScheduler___c(AsyncManualResetEvent_ServicePointScheduler___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10721};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::AsyncManualResetEvent_ServicePointScheduler___c) == 0x10, "Size mismatch!");

} // namespace end def System::Net
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.ServicePointScheduler/ConnectionGroup
class CORDL_TYPE ServicePointScheduler_ConnectionGroup : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsDefault)) bool  IsDefault;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_Scheduler)) ::System::Net::ServicePointScheduler*  Scheduler;

/// @brief Field <Name>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Name_k__BackingField, put=__cordl_internal_set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

/// @brief Field <Scheduler>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Scheduler_k__BackingField, put=__cordl_internal_set__Scheduler_k__BackingField)) ::System::Net::ServicePointScheduler*  _Scheduler_k__BackingField;

/// @brief Field ID, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__cordl_ID, put=__cordl_internal_set__cordl_ID)) int32_t  _cordl_ID;

/// @brief Field connections, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_connections, put=__cordl_internal_set_connections)) ::System::Collections::Generic::LinkedList_1<::System::Net::WebConnection*>*  connections;

/// @brief Field nextId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_nextId, put=setStaticF_nextId)) int32_t  nextId;

/// @brief Field queue, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_queue, put=__cordl_internal_set_queue)) ::System::Collections::Generic::LinkedList_1<::System::Net::WebOperation*>*  queue;

/// @brief Method Cleanup, addr 0xacb2a68, size 0xec, virtual false, abstract: false, final false
inline void Cleanup() ;

/// @brief Method Close, addr 0xacb3204, size 0x2d0, virtual false, abstract: false, final false
inline void Close() ;

/// @brief Method CreateOrReuseConnection, addr 0xacb2b54, size 0x1a4, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<::System::Net::WebConnection*,bool> CreateOrReuseConnection(::System::Net::WebOperation*  operation, bool  force) ;

/// @brief Method EnqueueOperation, addr 0xacb31ac, size 0x58, virtual false, abstract: false, final false
inline void EnqueueOperation(::System::Net::WebOperation*  operation) ;

/// @brief Method FindIdleConnection, addr 0xacb36e8, size 0x304, virtual false, abstract: false, final false
inline ::System::Net::WebConnection* FindIdleConnection(::System::Net::WebOperation*  operation) ;

/// @brief Method GetNextOperation, addr 0xacb2d30, size 0xe8, virtual false, abstract: false, final false
inline ::System::Net::WebOperation* GetNextOperation() ;

/// @brief Method IsEmpty, addr 0xacb21f4, size 0x74, virtual false, abstract: false, final false
inline bool IsEmpty() ;

static inline ::System::Net::ServicePointScheduler_ConnectionGroup* New_ctor(::System::Net::ServicePointScheduler*  scheduler, ::StringW  name) ;

/// @brief Method RemoveConnection, addr 0xacb2914, size 0x88, virtual false, abstract: false, final false
inline void RemoveConnection(::System::Net::WebConnection*  connection) ;

constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Name_k__BackingField() ;

constexpr ::System::Net::ServicePointScheduler* const& __cordl_internal_get__Scheduler_k__BackingField() const;

constexpr ::System::Net::ServicePointScheduler*& __cordl_internal_get__Scheduler_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__cordl_ID() const;

constexpr int32_t& __cordl_internal_get__cordl_ID() ;

constexpr ::System::Collections::Generic::LinkedList_1<::System::Net::WebConnection*>* const& __cordl_internal_get_connections() const;

constexpr ::System::Collections::Generic::LinkedList_1<::System::Net::WebConnection*>*& __cordl_internal_get_connections() ;

constexpr ::System::Collections::Generic::LinkedList_1<::System::Net::WebOperation*>* const& __cordl_internal_get_queue() const;

constexpr ::System::Collections::Generic::LinkedList_1<::System::Net::WebOperation*>*& __cordl_internal_get_queue() ;

constexpr void __cordl_internal_set__Name_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Scheduler_k__BackingField(::System::Net::ServicePointScheduler*  value) ;

constexpr void __cordl_internal_set__cordl_ID(int32_t  value) ;

constexpr void __cordl_internal_set_connections(::System::Collections::Generic::LinkedList_1<::System::Net::WebConnection*>*  value) ;

constexpr void __cordl_internal_set_queue(::System::Collections::Generic::LinkedList_1<::System::Net::WebOperation*>*  value) ;

/// @brief Method .ctor, addr 0xacb1ba4, size 0x138, virtual false, abstract: false, final false
inline void _ctor(::System::Net::ServicePointScheduler*  scheduler, ::StringW  name) ;

static inline int32_t getStaticF_nextId() ;

/// @brief Method get_IsDefault, addr 0xacb3634, size 0xc, virtual false, abstract: false, final false
inline bool get_IsDefault() ;

/// [CompilerGenerated]
/// @brief Method get_Name, addr 0xacb362c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// [CompilerGenerated]
/// @brief Method get_Scheduler, addr 0xacb3624, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::ServicePointScheduler* get_Scheduler() ;

static inline void setStaticF_nextId(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ServicePointScheduler_ConnectionGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ServicePointScheduler_ConnectionGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ServicePointScheduler_ConnectionGroup(ServicePointScheduler_ConnectionGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServicePointScheduler_ConnectionGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServicePointScheduler_ConnectionGroup(ServicePointScheduler_ConnectionGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10720};

/// [CompilerGenerated]
/// @brief Field <Scheduler>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Net::ServicePointScheduler*  ____Scheduler_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Name_k__BackingField;

/// @brief Field ID, offset: 0x20, size: 0x4, def value: None
 int32_t  ____cordl_ID;

/// @brief Field connections, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::LinkedList_1<::System::Net::WebConnection*>*  ___connections;

/// @brief Field queue, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::LinkedList_1<::System::Net::WebOperation*>*  ___queue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::ServicePointScheduler_ConnectionGroup, ____Scheduler_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePointScheduler_ConnectionGroup, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePointScheduler_ConnectionGroup, ____cordl_ID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePointScheduler_ConnectionGroup, ___connections) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::ServicePointScheduler_ConnectionGroup, ___queue) == 0x30, "Offset mismatch!");

static_assert(sizeof(::System::Net::ServicePointScheduler_ConnectionGroup) == 0x38, "Size mismatch!");

} // namespace end def System::Net
