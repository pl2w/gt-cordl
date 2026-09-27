#pragma once
// IWYU pragma private; include "Modio/Customizations/WssHandler__WaitForMessage_d__6.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Customizations/zzzz__WssMessage_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WssHandler__WaitForMessage_d__6)
namespace Modio::Customizations {
struct WssMessage;
}
namespace Modio {
class Error;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace GlobalNamespace {
struct WssHandler__WaitForMessage_d__6;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WssHandler__WaitForMessage_d__6);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WssHandler__WaitForMessage_d__6, "Modio.Customizations", "WssHandler/<WaitForMessage>d__6");
// [CompilerGenerated]
// Dependencies Modio.Customizations.WssMessage, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.Customizations.WssHandler/<WaitForMessage>d__6
struct CORDL_TYPE WssHandler__WaitForMessage_d__6 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa05dce0, size 0x904, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa05e5e4, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr WssHandler__WaitForMessage_d__6() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Customizations::WssMessage>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "checkPreviousUnhandledMessages", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "messageOperation", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_tcs_5__2", ty: "::System::Threading::Tasks::TaskCompletionSource_1<::Modio::Customizations::WssMessage>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Customizations::WssMessage>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>", modifiers: "", def_value: None, comment: None }]
constexpr WssHandler__WaitForMessage_d__6(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Customizations::WssMessage>>  __t__builder, bool  checkPreviousUnhandledMessages, ::StringW  messageOperation, ::System::Threading::Tasks::TaskCompletionSource_1<::Modio::Customizations::WssMessage>*  _tcs_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Customizations::WssMessage>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17739};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Customizations::WssMessage>>  __t__builder;

/// @brief Field checkPreviousUnhandledMessages, offset: 0x20, size: 0x1, def value: None
 bool  checkPreviousUnhandledMessages;

/// @brief Field messageOperation, offset: 0x28, size: 0x8, def value: None
 ::StringW  messageOperation;

/// @brief Field <tcs>5__2, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::Modio::Customizations::WssMessage>*  _tcs_5__2;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Customizations::WssMessage>  __u__1;

/// @brief Field <>u__2, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Threading::Tasks::Task*>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WssHandler__WaitForMessage_d__6, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WssHandler__WaitForMessage_d__6, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WssHandler__WaitForMessage_d__6, checkPreviousUnhandledMessages) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WssHandler__WaitForMessage_d__6, messageOperation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WssHandler__WaitForMessage_d__6, _tcs_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WssHandler__WaitForMessage_d__6, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WssHandler__WaitForMessage_d__6, __u__2) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WssHandler__WaitForMessage_d__6) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
