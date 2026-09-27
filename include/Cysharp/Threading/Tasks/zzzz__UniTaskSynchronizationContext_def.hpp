#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskSynchronizationContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__UniTaskSynchronizationContext_Callback_def.hpp"
#include "System/Threading/zzzz__SpinLock_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UniTaskSynchronizationContext)
namespace GlobalNamespace {
struct UniTaskSynchronizationContext_Callback;
}
namespace System::Threading {
class SendOrPostCallback;
}
namespace System::Threading {
class SynchronizationContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class UniTaskSynchronizationContext;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::UniTaskSynchronizationContext*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTaskSynchronizationContext*, "Cysharp.Threading.Tasks", "UniTaskSynchronizationContext");
// Dependencies Cysharp.Threading.Tasks.UniTaskSynchronizationContext::Callback, System.Threading.SpinLock, System.Threading.SynchronizationContext
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTaskSynchronizationContext
class CORDL_TYPE UniTaskSynchronizationContext : public ::System::Threading::SynchronizationContext {
public:
// Declarations
using Callback = ::GlobalNamespace::UniTaskSynchronizationContext_Callback;

/// @brief Field actionList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_actionList, put=setStaticF_actionList)) ::ArrayW<::GlobalNamespace::UniTaskSynchronizationContext_Callback>  actionList;

/// @brief Field actionListCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_actionListCount, put=setStaticF_actionListCount)) int32_t  actionListCount;

/// @brief Field dequing, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_dequing, put=setStaticF_dequing)) bool  dequing;

/// @brief Field gate, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_gate, put=setStaticF_gate)) ::System::Threading::SpinLock  gate;

/// @brief Field opCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_opCount, put=setStaticF_opCount)) int32_t  opCount;

/// @brief Field waitingList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_waitingList, put=setStaticF_waitingList)) ::ArrayW<::GlobalNamespace::UniTaskSynchronizationContext_Callback>  waitingList;

/// @brief Field waitingListCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_waitingListCount, put=setStaticF_waitingListCount)) int32_t  waitingListCount;

/// @brief Method CreateCopy, addr 0xae02f0c, size 0x4, virtual true, abstract: false, final false
inline ::System::Threading::SynchronizationContext* CreateCopy() ;

static inline ::Cysharp::Threading::Tasks::UniTaskSynchronizationContext* New_ctor() ;

/// @brief Method OperationCompleted, addr 0xae02eb0, size 0x5c, virtual true, abstract: false, final false
inline void OperationCompleted() ;

/// @brief Method OperationStarted, addr 0xae02e54, size 0x5c, virtual true, abstract: false, final false
inline void OperationStarted() ;

/// @brief Method Post, addr 0xae02a90, size 0x3c4, virtual true, abstract: false, final false
inline void Post(::System::Threading::SendOrPostCallback*  d, ::System::Object*  state) ;

/// @brief Method Run, addr 0xae02f10, size 0x308, virtual false, abstract: false, final false
static inline void Run() ;

/// @brief Method Send, addr 0xae02a6c, size 0x24, virtual true, abstract: false, final false
inline void Send(::System::Threading::SendOrPostCallback*  d, ::System::Object*  state) ;

/// @brief Method .ctor, addr 0xae03218, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::GlobalNamespace::UniTaskSynchronizationContext_Callback> getStaticF_actionList() ;

static inline int32_t getStaticF_actionListCount() ;

static inline bool getStaticF_dequing() ;

static inline ::System::Threading::SpinLock getStaticF_gate() ;

static inline int32_t getStaticF_opCount() ;

static inline ::ArrayW<::GlobalNamespace::UniTaskSynchronizationContext_Callback> getStaticF_waitingList() ;

static inline int32_t getStaticF_waitingListCount() ;

static inline void setStaticF_actionList(::ArrayW<::GlobalNamespace::UniTaskSynchronizationContext_Callback>  value) ;

static inline void setStaticF_actionListCount(int32_t  value) ;

static inline void setStaticF_dequing(bool  value) ;

static inline void setStaticF_gate(::System::Threading::SpinLock  value) ;

static inline void setStaticF_opCount(int32_t  value) ;

static inline void setStaticF_waitingList(::ArrayW<::GlobalNamespace::UniTaskSynchronizationContext_Callback>  value) ;

static inline void setStaticF_waitingListCount(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTaskSynchronizationContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTaskSynchronizationContext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTaskSynchronizationContext(UniTaskSynchronizationContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTaskSynchronizationContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTaskSynchronizationContext(UniTaskSynchronizationContext const& ) = delete;

/// @brief Field InitialSize offset 0xffffffff size 0x4
static constexpr int32_t  InitialSize{static_cast<int32_t>(0x10)};

/// @brief Field MaxArrayLength offset 0xffffffff size 0x4
static constexpr int32_t  MaxArrayLength{static_cast<int32_t>(0x7fefffff)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21875};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::UniTaskSynchronizationContext) == 0x18, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
