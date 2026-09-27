#pragma once
// IWYU pragma private; include "System/Threading/SpinLock.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpinLock)
namespace System::Threading {
class SpinLock_SystemThreading_SpinLockDebugView;
}
// Forward declare root types
namespace System::Threading {
class SpinLock_SystemThreading_SpinLockDebugView;
}
namespace System::Threading {
struct SpinLock;
}
// Write type traits
MARK_REF_T(::System::Threading::SpinLock_SystemThreading_SpinLockDebugView*);
MARK_VAL_T(::System::Threading::SpinLock);
DEFINE_IL2CPP_CLASS(::System::Threading::SpinLock_SystemThreading_SpinLockDebugView*, "System.Threading", "SpinLock/SystemThreading_SpinLockDebugView");
DEFINE_IL2CPP_CLASS(::System::Threading::SpinLock, "System.Threading", "SpinLock");
// [DebuggerTypeProxy(typeof(System.Threading.SpinLock::SystemThreading_SpinLockDebugView))]
// [ComVisible(false)]
// [DebuggerDisplay("IsHeld = {IsHeld}")]
// Dependencies 
namespace System::Threading {
// Is value type: true
// CS Name: System.Threading.SpinLock
struct CORDL_TYPE SpinLock {
public:
// Declarations
using SystemThreading_SpinLockDebugView = ::System::Threading::SpinLock_SystemThreading_SpinLockDebugView;

 __declspec(property(get=get_IsHeldByCurrentThread)) bool  IsHeldByCurrentThread;

 __declspec(property(get=get_IsThreadOwnerTrackingEnabled)) bool  IsThreadOwnerTrackingEnabled;

/// @brief Field MAXIMUM_WAITERS, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MAXIMUM_WAITERS, put=setStaticF_MAXIMUM_WAITERS)) int32_t  MAXIMUM_WAITERS;

/// @brief Method ContinueTryEnter, addr 0xa34a2f8, size 0x4b0, virtual false, abstract: false, final false
inline void ContinueTryEnter(int32_t  millisecondsTimeout, ::by_ref<bool>  lockTaken) ;

/// @brief Method ContinueTryEnterWithThreadTracking, addr 0xa34a898, size 0x17c, virtual false, abstract: false, final false
inline void ContinueTryEnterWithThreadTracking(int32_t  millisecondsTimeout, uint32_t  startTime, ::by_ref<bool>  lockTaken) ;

/// @brief Method DecrementWaiters, addr 0xa34aa14, size 0xa4, virtual false, abstract: false, final false
inline void DecrementWaiters() ;

/// @brief Method Enter, addr 0xa34a240, size 0xb8, virtual false, abstract: false, final false
inline void Enter(::by_ref<bool>  lockTaken) ;

/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
/// @brief Method Exit, addr 0xa34aab8, size 0x80, virtual false, abstract: false, final false
inline void Exit() ;

/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
/// @brief Method Exit, addr 0xa34ac48, size 0x8c, virtual false, abstract: false, final false
inline void Exit(bool  useMemoryBarrier) ;

/// @brief Method ExitSlowPath, addr 0xa34ab38, size 0x110, virtual false, abstract: false, final false
inline void ExitSlowPath(bool  useMemoryBarrier) ;

/// @brief Method TryEnter, addr 0xa34a7a8, size 0xd4, virtual false, abstract: false, final false
inline void TryEnter(int32_t  millisecondsTimeout, ::by_ref<bool>  lockTaken) ;

/// @brief Method .ctor, addr 0xa34a208, size 0x38, virtual false, abstract: false, final false
inline void _ctor(bool  enableThreadOwnerTracking) ;

static inline int32_t getStaticF_MAXIMUM_WAITERS() ;

/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
/// @brief Method get_IsHeldByCurrentThread, addr 0xa34acd4, size 0xd8, virtual false, abstract: false, final false
inline bool get_IsHeldByCurrentThread() ;

/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
/// @brief Method get_IsThreadOwnerTrackingEnabled, addr 0xa34a87c, size 0x1c, virtual false, abstract: false, final false
inline bool get_IsThreadOwnerTrackingEnabled() ;

static inline void setStaticF_MAXIMUM_WAITERS(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SpinLock() ;

// Ctor Parameters [CppParam { name: "m_owner", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SpinLock(int32_t  m_owner) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5828};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field m_owner, offset: 0x0, size: 0x4, def value: None
 int32_t  m_owner;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::SpinLock, m_owner) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Threading::SpinLock) == 0x4, "Size mismatch!");

} // namespace end def System::Threading
// Dependencies System.Object
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.SpinLock/SystemThreading_SpinLockDebugView
class CORDL_TYPE SpinLock_SystemThreading_SpinLockDebugView : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpinLock_SystemThreading_SpinLockDebugView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpinLock_SystemThreading_SpinLockDebugView", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpinLock_SystemThreading_SpinLockDebugView(SpinLock_SystemThreading_SpinLockDebugView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpinLock_SystemThreading_SpinLockDebugView", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpinLock_SystemThreading_SpinLockDebugView(SpinLock_SystemThreading_SpinLockDebugView const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5827};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Threading::SpinLock_SystemThreading_SpinLockDebugView) == 0x10, "Size mismatch!");

} // namespace end def System::Threading
