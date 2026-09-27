#pragma once
// IWYU pragma private; include "UnityEngine/UnitySynchronizationContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UnitySynchronizationContext)
namespace GlobalNamespace {
struct UnitySynchronizationContext_WorkRequest;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
namespace UnityEngine {
class UnitySynchronizationContext;
}
// Write type traits
MARK_REF_T(::UnityEngine::UnitySynchronizationContext*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UnitySynchronizationContext*, "UnityEngine", "UnitySynchronizationContext");
// Dependencies System.Threading.SynchronizationContext
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.UnitySynchronizationContext
class CORDL_TYPE UnitySynchronizationContext : public ::System::Threading::SynchronizationContext {
public:
// Declarations
using WorkRequest = ::GlobalNamespace::UnitySynchronizationContext_WorkRequest;

 __declspec(property(get=get_MainThreadId)) int32_t  MainThreadId;

/// @brief Field m_AsyncWorkQueue, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AsyncWorkQueue, put=__cordl_internal_set_m_AsyncWorkQueue)) ::System::Collections::Generic::List_1<::GlobalNamespace::UnitySynchronizationContext_WorkRequest>*  m_AsyncWorkQueue;

/// @brief Field m_CurrentFrameWork, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CurrentFrameWork, put=__cordl_internal_set_m_CurrentFrameWork)) ::System::Collections::Generic::List_1<::GlobalNamespace::UnitySynchronizationContext_WorkRequest>*  m_CurrentFrameWork;

/// @brief Field m_MainThreadID, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MainThreadID, put=__cordl_internal_set_m_MainThreadID)) int32_t  m_MainThreadID;

/// @brief Field m_TrackedCount, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TrackedCount, put=__cordl_internal_set_m_TrackedCount)) int32_t  m_TrackedCount;

/// @brief Method CreateCopy, addr 0xb5ea1f0, size 0x64, virtual true, abstract: false, final false
inline ::System::Threading::SynchronizationContext* CreateCopy() ;

/// @brief Method Exec, addr 0xb5ea254, size 0x1d4, virtual false, abstract: false, final false
inline void Exec() ;

/// [RequiredByNativeCode]
/// @brief Method ExecutePendingTasks, addr 0xb5ea654, size 0xec, virtual false, abstract: false, final false
static inline bool ExecutePendingTasks(int64_t  millisecondsTimeout) ;

/// [RequiredByNativeCode]
/// @brief Method ExecuteTasks, addr 0xb5ea5fc, size 0x58, virtual false, abstract: false, final false
static inline void ExecuteTasks() ;

/// @brief Method HasPendingTasks, addr 0xb5ea4f4, size 0x60, virtual false, abstract: false, final false
inline bool HasPendingTasks() ;

/// [RequiredByNativeCode]
/// @brief Method InitializeSynchronizationContext, addr 0xb5ea554, size 0xa8, virtual false, abstract: false, final false
static inline void InitializeSynchronizationContext() ;

static inline ::UnityEngine::UnitySynchronizationContext* New_ctor(int32_t  mainThreadID) ;

static inline ::UnityEngine::UnitySynchronizationContext* New_ctor(::System::Collections::Generic::List_1<::GlobalNamespace::UnitySynchronizationContext_WorkRequest>*  queue, int32_t  mainThreadID) ;

/// @brief Method OperationCompleted, addr 0xb5ea044, size 0xc, virtual true, abstract: false, final false
inline void OperationCompleted() ;

/// @brief Method OperationStarted, addr 0xb5ea038, size 0xc, virtual true, abstract: false, final false
inline void OperationStarted() ;

/// @brief Method Post, addr 0xb5ea050, size 0x1a0, virtual true, abstract: false, final false
inline void Post(::System::Threading::SendOrPostCallback*  callback, ::System::Object*  state) ;

/// @brief Method Send, addr 0xb5e9ce4, size 0x310, virtual true, abstract: false, final false
inline void Send(::System::Threading::SendOrPostCallback*  callback, ::System::Object*  state) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::UnitySynchronizationContext_WorkRequest>* const& __cordl_internal_get_m_AsyncWorkQueue() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::UnitySynchronizationContext_WorkRequest>*& __cordl_internal_get_m_AsyncWorkQueue() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::UnitySynchronizationContext_WorkRequest>* const& __cordl_internal_get_m_CurrentFrameWork() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::UnitySynchronizationContext_WorkRequest>*& __cordl_internal_get_m_CurrentFrameWork() ;

constexpr int32_t const& __cordl_internal_get_m_MainThreadID() const;

constexpr int32_t& __cordl_internal_get_m_MainThreadID() ;

constexpr int32_t const& __cordl_internal_get_m_TrackedCount() const;

constexpr int32_t& __cordl_internal_get_m_TrackedCount() ;

constexpr void __cordl_internal_set_m_AsyncWorkQueue(::System::Collections::Generic::List_1<::GlobalNamespace::UnitySynchronizationContext_WorkRequest>*  value) ;

constexpr void __cordl_internal_set_m_CurrentFrameWork(::System::Collections::Generic::List_1<::GlobalNamespace::UnitySynchronizationContext_WorkRequest>*  value) ;

constexpr void __cordl_internal_set_m_MainThreadID(int32_t  value) ;

constexpr void __cordl_internal_set_m_TrackedCount(int32_t  value) ;

/// @brief Method .ctor, addr 0xb5e9b68, size 0xc4, virtual false, abstract: false, final false
inline void _ctor(int32_t  mainThreadID) ;

/// @brief Method .ctor, addr 0xb5e9c2c, size 0xb8, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::List_1<::GlobalNamespace::UnitySynchronizationContext_WorkRequest>*  queue, int32_t  mainThreadID) ;

/// @brief Method get_MainThreadId, addr 0xb5e9b60, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MainThreadId() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnitySynchronizationContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnitySynchronizationContext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnitySynchronizationContext(UnitySynchronizationContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnitySynchronizationContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnitySynchronizationContext(UnitySynchronizationContext const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15116};

/// @brief Field m_AsyncWorkQueue, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::UnitySynchronizationContext_WorkRequest>*  ___m_AsyncWorkQueue;

/// @brief Field m_CurrentFrameWork, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::UnitySynchronizationContext_WorkRequest>*  ___m_CurrentFrameWork;

/// @brief Field m_MainThreadID, offset: 0x28, size: 0x4, def value: None
 int32_t  ___m_MainThreadID;

/// @brief Field m_TrackedCount, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___m_TrackedCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UnitySynchronizationContext, ___m_AsyncWorkQueue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UnitySynchronizationContext, ___m_CurrentFrameWork) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UnitySynchronizationContext, ___m_MainThreadID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UnitySynchronizationContext, ___m_TrackedCount) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UnitySynchronizationContext) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine
