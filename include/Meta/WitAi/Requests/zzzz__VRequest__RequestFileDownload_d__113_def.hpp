#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/VRequest__RequestFileDownload_d__113.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Requests/zzzz__VRequestResponse_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VRequest__RequestFileDownload_d__113)
namespace Meta::WitAi::Requests {
class VRequest;
}
namespace Meta::WitAi::Requests {
class VRequest___c__DisplayClass113_0;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct VRequest__RequestFileDownload_d__113;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VRequest__RequestFileDownload_d__113);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VRequest__RequestFileDownload_d__113, "Meta.WitAi.Requests", "VRequest/<RequestFileDownload>d__113");
// [CompilerGenerated]
// Dependencies Meta.WitAi.Requests.VRequestResponse`1<TValue>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.WitAi.Requests.VRequest/<RequestFileDownload>d__113
struct CORDL_TYPE VRequest__RequestFileDownload_d__113 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9e8bca0, size 0x840, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9e8c4e0, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr VRequest__RequestFileDownload_d__113() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Meta::WitAi::Requests::VRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "downloadPath", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__8__1", ty: "::Meta::WitAi::Requests::VRequest___c__DisplayClass113_0*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>", modifiers: "", def_value: None, comment: None }]
constexpr VRequest__RequestFileDownload_d__113(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>  __t__builder, ::Meta::WitAi::Requests::VRequest*  __4__this, ::StringW  url, ::StringW  downloadPath, ::Meta::WitAi::Requests::VRequest___c__DisplayClass113_0*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25614};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VRequest*  __4__this;

/// @brief Field url, offset: 0x28, size: 0x8, def value: None
 ::StringW  url;

/// @brief Field downloadPath, offset: 0x30, size: 0x8, def value: None
 ::StringW  downloadPath;

/// @brief Field <>8__1, offset: 0x38, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VRequest___c__DisplayClass113_0*  __8__1;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Field <>u__2, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VRequest__RequestFileDownload_d__113, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRequest__RequestFileDownload_d__113, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRequest__RequestFileDownload_d__113, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRequest__RequestFileDownload_d__113, url) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRequest__RequestFileDownload_d__113, downloadPath) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRequest__RequestFileDownload_d__113, __8__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRequest__RequestFileDownload_d__113, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRequest__RequestFileDownload_d__113, __u__2) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VRequest__RequestFileDownload_d__113) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
