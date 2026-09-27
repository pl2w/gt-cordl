#pragma once
// IWYU pragma private; include "System/Threading/Monitor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Monitor)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class Monitor;
}
// Write type traits
MARK_REF_T(::System::Threading::Monitor*);
DEFINE_IL2CPP_CLASS(::System::Threading::Monitor*, "System.Threading", "Monitor");
// Dependencies System.Object
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.Monitor
class CORDL_TYPE Monitor : public ::System::Object {
public:
// Declarations
/// @brief Method Enter, addr 0xa34d138, size 0x4, virtual false, abstract: false, final false
static inline void Enter(::System::Object*  obj) ;

/// @brief Method Enter, addr 0xa34d13c, size 0x1c, virtual false, abstract: false, final false
static inline void Enter(::System::Object*  obj, ::by_ref<bool>  lockTaken) ;

/// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
/// @brief Method Exit, addr 0xa34d1d0, size 0x4, virtual false, abstract: false, final false
static inline void Exit(::System::Object*  obj) ;

/// @brief Method IsEntered, addr 0xa34d2d4, size 0x54, virtual false, abstract: false, final false
static inline bool IsEntered(::System::Object*  obj) ;

/// @brief Method IsEnteredNative, addr 0xa34d328, size 0x4, virtual false, abstract: false, final false
static inline bool IsEnteredNative(::System::Object*  obj) ;

/// @brief Method Monitor_pulse, addr 0xa34d5b8, size 0x4, virtual false, abstract: false, final false
static inline void Monitor_pulse(::System::Object*  obj) ;

/// @brief Method Monitor_pulse_all, addr 0xa34d5bc, size 0x4, virtual false, abstract: false, final false
static inline void Monitor_pulse_all(::System::Object*  obj) ;

/// @brief Method Monitor_test_owner, addr 0xa34d5c8, size 0x4, virtual false, abstract: false, final false
static inline bool Monitor_test_owner(::System::Object*  obj) ;

/// @brief Method Monitor_test_synchronised, addr 0xa34d5b4, size 0x4, virtual false, abstract: false, final false
static inline bool Monitor_test_synchronised(::System::Object*  obj) ;

/// @brief Method Monitor_wait, addr 0xa34d5c0, size 0x4, virtual false, abstract: false, final false
static inline bool Monitor_wait(::System::Object*  obj, int32_t  ms) ;

/// @brief Method ObjPulse, addr 0xa34d498, size 0x64, virtual false, abstract: false, final false
static inline void ObjPulse(::System::Object*  obj) ;

/// @brief Method ObjPulseAll, addr 0xa34d550, size 0x64, virtual false, abstract: false, final false
static inline void ObjPulseAll(::System::Object*  obj) ;

/// @brief Method ObjWait, addr 0xa34d388, size 0xb4, virtual false, abstract: false, final false
static inline bool ObjWait(bool  exitContext, int32_t  millisecondsTimeout, ::System::Object*  obj) ;

/// @brief Method Pulse, addr 0xa34d444, size 0x54, virtual false, abstract: false, final false
static inline void Pulse(::System::Object*  obj) ;

/// @brief Method PulseAll, addr 0xa34d4fc, size 0x54, virtual false, abstract: false, final false
static inline void PulseAll(::System::Object*  obj) ;

/// @brief Method ReliableEnter, addr 0xa34d1c4, size 0xc, virtual false, abstract: false, final false
static inline void ReliableEnter(::System::Object*  obj, ::by_ref<bool>  lockTaken) ;

/// @brief Method ReliableEnterTimeout, addr 0xa34d224, size 0x94, virtual false, abstract: false, final false
static inline void ReliableEnterTimeout(::System::Object*  obj, int32_t  timeout, ::by_ref<bool>  lockTaken) ;

/// @brief Method ThrowLockTakenException, addr 0xa34d158, size 0x6c, virtual false, abstract: false, final false
static inline void ThrowLockTakenException() ;

/// @brief Method TryEnter, addr 0xa34d1d4, size 0x20, virtual false, abstract: false, final false
static inline bool TryEnter(::System::Object*  obj) ;

/// @brief Method TryEnter, addr 0xa34d2b8, size 0x1c, virtual false, abstract: false, final false
static inline bool TryEnter(::System::Object*  obj, int32_t  millisecondsTimeout) ;

/// @brief Method TryEnter, addr 0xa34d208, size 0x1c, virtual false, abstract: false, final false
static inline void TryEnter(::System::Object*  obj, ::by_ref<bool>  lockTaken) ;

/// @brief Method TryEnter, addr 0xa34d1f4, size 0x14, virtual false, abstract: false, final false
static inline void TryEnter(::System::Object*  obj, int32_t  millisecondsTimeout, ::by_ref<bool>  lockTaken) ;

/// @brief Method Wait, addr 0xa34d43c, size 0x8, virtual false, abstract: false, final false
static inline bool Wait(::System::Object*  obj, int32_t  millisecondsTimeout) ;

/// @brief Method Wait, addr 0xa34d32c, size 0x5c, virtual false, abstract: false, final false
static inline bool Wait(::System::Object*  obj, int32_t  millisecondsTimeout, bool  exitContext) ;

/// @brief Method try_enter_with_atomic_var, addr 0xa34d5c4, size 0x4, virtual false, abstract: false, final false
static inline void try_enter_with_atomic_var(::System::Object*  obj, int32_t  millisecondsTimeout, ::by_ref<bool>  lockTaken) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Monitor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Monitor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Monitor(Monitor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Monitor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Monitor(Monitor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5844};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Threading::Monitor) == 0x10, "Size mismatch!");

} // namespace end def System::Threading
