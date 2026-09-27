#pragma once
// IWYU pragma private; include "System/Net/Http/HttpClient__SendAsyncWorker_d__47.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Http/zzzz__HttpCompletionOption_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpClient__SendAsyncWorker_d__47)
namespace System::Net::Http {
class HttpClient;
}
namespace System::Net::Http {
class HttpRequestMessage;
}
namespace System::Net::Http {
class HttpResponseMessage;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading {
class CancellationTokenSource;
}
// Forward declare root types
namespace GlobalNamespace {
struct HttpClient__SendAsyncWorker_d__47;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HttpClient__SendAsyncWorker_d__47);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HttpClient__SendAsyncWorker_d__47, "System.Net.Http", "HttpClient/<SendAsyncWorker>d__47");
// [CompilerGenerated]
// Dependencies System.Net.Http.HttpCompletionOption, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.Http.HttpClient/<SendAsyncWorker>d__47
struct CORDL_TYPE HttpClient__SendAsyncWorker_d__47 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa9dfc04, size 0x6d8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa9e02dc, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr HttpClient__SendAsyncWorker_d__47() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::System::Net::Http::HttpClient*", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "request", ty: "::System::Net::Http::HttpRequestMessage*", modifiers: "", def_value: None, comment: None }, CppParam { name: "completionOption", ty: "::System::Net::Http::HttpCompletionOption", modifiers: "", def_value: None, comment: None }, CppParam { name: "_lcts_5__2", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_response_5__3", ty: "::System::Net::Http::HttpResponseMessage*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr HttpClient__SendAsyncWorker_d__47(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage*>  __t__builder, ::System::Net::Http::HttpClient*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::System::Net::Http::HttpRequestMessage*  request, ::System::Net::Http::HttpCompletionOption  completionOption, ::System::Threading::CancellationTokenSource*  _lcts_5__2, ::System::Net::Http::HttpResponseMessage*  _response_5__3, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*>  __u__1, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30714};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::Http::HttpResponseMessage*>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::System::Net::Http::HttpClient*  __4__this;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field request, offset: 0x30, size: 0x8, def value: None
 ::System::Net::Http::HttpRequestMessage*  request;

/// @brief Field completionOption, offset: 0x38, size: 0x4, def value: None
 ::System::Net::Http::HttpCompletionOption  completionOption;

/// @brief Field <lcts>5__2, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  _lcts_5__2;

/// @brief Field <response>5__3, offset: 0x48, size: 0x8, def value: None
 ::System::Net::Http::HttpResponseMessage*  _response_5__3;

/// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::Http::HttpResponseMessage*>  __u__1;

/// @brief Field <>u__2, offset: 0x60, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HttpClient__SendAsyncWorker_d__47, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpClient__SendAsyncWorker_d__47, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpClient__SendAsyncWorker_d__47, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpClient__SendAsyncWorker_d__47, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpClient__SendAsyncWorker_d__47, request) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpClient__SendAsyncWorker_d__47, completionOption) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpClient__SendAsyncWorker_d__47, _lcts_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpClient__SendAsyncWorker_d__47, _response_5__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpClient__SendAsyncWorker_d__47, __u__1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpClient__SendAsyncWorker_d__47, __u__2) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HttpClient__SendAsyncWorker_d__47) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
