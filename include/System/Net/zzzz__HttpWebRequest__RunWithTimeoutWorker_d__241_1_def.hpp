#pragma once
// IWYU pragma private; include "System/Net/HttpWebRequest__RunWithTimeoutWorker_d__241_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpWebRequest__RunWithTimeoutWorker_d__241_1)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System {
class Action;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct HttpWebRequest__RunWithTimeoutWorker_d__241_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::HttpWebRequest__RunWithTimeoutWorker_d__241_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::HttpWebRequest__RunWithTimeoutWorker_d__241_1, "System.Net", "HttpWebRequest/<RunWithTimeoutWorker>d__241`1");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: System.Net.HttpWebRequest/<RunWithTimeoutWorker>d__241`1<T>
struct CORDL_TYPE HttpWebRequest__RunWithTimeoutWorker_d__241_1 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr HttpWebRequest__RunWithTimeoutWorker_d__241_1() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "workerTask", ty: "::System::Threading::Tasks::Task_1<T>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "timeout", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "cts", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: None, comment: None }, CppParam { name: "abort", ty: "::System::Action*", modifiers: "", def_value: None, comment: None }, CppParam { name: "aborted", ty: "::System::Func_1<bool>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None, comment: None }]
constexpr HttpWebRequest__RunWithTimeoutWorker_d__241_1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>  __t__builder, ::System::Threading::Tasks::Task_1<T>*  workerTask, int32_t  timeout, ::System::Threading::CancellationTokenSource*  cts, ::System::Action*  abort, ::System::Func_1<bool>*  aborted, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10694};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>  __t__builder;

/// @brief Field workerTask, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::Tasks::Task_1<T>*  workerTask;

/// @brief Field timeout, offset: 0x28, size: 0x4, def value: None
 int32_t  timeout;

/// @brief Field cts, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  cts;

/// @brief Field abort, offset: 0x38, size: 0x8, def value: None
 ::System::Action*  abort;

/// @brief Field aborted, offset: 0x40, size: 0x8, def value: None
 ::System::Func_1<bool>*  aborted;

/// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
