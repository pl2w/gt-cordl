#pragma once
// IWYU pragma private; include "Modio/ModInstallationManagement_DownloadJob__Run_d__1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__ModfileObject_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModInstallationManagement_DownloadJob__Run_d__1)
namespace Modio {
class Error;
}
namespace Modio {
class ModInstallationManagement_DownloadJob;
}
namespace System::IO {
class Stream;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct DownloadJob_ModInstallationManagement__Run_d__1;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DownloadJob_ModInstallationManagement__Run_d__1);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DownloadJob_ModInstallationManagement__Run_d__1, "Modio", "ModInstallationManagement/DownloadJob/<Run>d__1");
// [CompilerGenerated]
// Dependencies Modio.API.SchemaDefinitions.ModfileObject, System.Nullable`1<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Runtime.CompilerServices.ValueTaskAwaiter, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.ModInstallationManagement/DownloadJob/<Run>d__1
struct CORDL_TYPE DownloadJob_ModInstallationManagement__Run_d__1 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa00c0e4, size 0x17d0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa00d918, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr DownloadJob_ModInstallationManagement__Run_d__1() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Modio::ModInstallationManagement_DownloadJob*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_error_5__2", ty: "::Modio::Error*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_modfileId_5__3", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_filehashMd5_5__4", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::ModfileObject>>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_attempt_5__5", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::IO::Stream*>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__4", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__5", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }]
constexpr DownloadJob_ModInstallationManagement__Run_d__1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder, ::Modio::ModInstallationManagement_DownloadJob*  __4__this, ::Modio::Error*  _error_5__2, int64_t  _modfileId_5__3, ::StringW  _filehashMd5_5__4, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::ModfileObject>>>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__2, int32_t  _attempt_5__5, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::IO::Stream*>>  __u__3, ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__4, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__5) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17459};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Modio::ModInstallationManagement_DownloadJob*  __4__this;

/// @brief Field <error>5__2, offset: 0x28, size: 0x8, def value: None
 ::Modio::Error*  _error_5__2;

/// @brief Field <modfileId>5__3, offset: 0x30, size: 0x8, def value: None
 int64_t  _modfileId_5__3;

/// @brief Field <filehashMd5>5__4, offset: 0x38, size: 0x8, def value: None
 ::StringW  _filehashMd5_5__4;

/// [TupleElementNames(new[] { "error", "modfileObject" })]
/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::ModfileObject>>>  __u__1;

/// @brief Field <>u__2, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__2;

/// @brief Field <attempt>5__5, offset: 0x50, size: 0x4, def value: None
 int32_t  _attempt_5__5;

/// @brief Field <>u__3, offset: 0x58, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::IO::Stream*>>  __u__3;

/// @brief Field <>u__4, offset: 0x60, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__4;

/// @brief Field <>u__5, offset: 0x70, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__5;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DownloadJob_ModInstallationManagement__Run_d__1, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DownloadJob_ModInstallationManagement__Run_d__1, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DownloadJob_ModInstallationManagement__Run_d__1, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DownloadJob_ModInstallationManagement__Run_d__1, _error_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DownloadJob_ModInstallationManagement__Run_d__1, _modfileId_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DownloadJob_ModInstallationManagement__Run_d__1, _filehashMd5_5__4) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DownloadJob_ModInstallationManagement__Run_d__1, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DownloadJob_ModInstallationManagement__Run_d__1, __u__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DownloadJob_ModInstallationManagement__Run_d__1, _attempt_5__5) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DownloadJob_ModInstallationManagement__Run_d__1, __u__3) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DownloadJob_ModInstallationManagement__Run_d__1, __u__4) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DownloadJob_ModInstallationManagement__Run_d__1, __u__5) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DownloadJob_ModInstallationManagement__Run_d__1) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
