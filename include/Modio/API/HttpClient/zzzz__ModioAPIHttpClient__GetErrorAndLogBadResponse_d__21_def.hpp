#pragma once
// IWYU pragma private; include "Modio/API/HttpClient/ModioAPIHttpClient__GetErrorAndLogBadResponse_d__21.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModioAPIHttpClient__GetErrorAndLogBadResponse_d__21)
namespace Modio {
class Error;
}
namespace System::IO {
class StreamReader;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct ModioAPIHttpClient__GetErrorAndLogBadResponse_d__21;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModioAPIHttpClient__GetErrorAndLogBadResponse_d__21);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModioAPIHttpClient__GetErrorAndLogBadResponse_d__21, "Modio.API.HttpClient", "ModioAPIHttpClient/<GetErrorAndLogBadResponse>d__21");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.API.HttpClient.ModioAPIHttpClient/<GetErrorAndLogBadResponse>d__21
struct CORDL_TYPE ModioAPIHttpClient__GetErrorAndLogBadResponse_d__21 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9fe1fa4, size 0x8b0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9fe2854, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModioAPIHttpClient__GetErrorAndLogBadResponse_d__21() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "streamReader", ty: "::System::IO::StreamReader*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None, comment: None }]
constexpr ModioAPIHttpClient__GetErrorAndLogBadResponse_d__21(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder, ::System::IO::StreamReader*  streamReader, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18039};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder;

/// @brief Field streamReader, offset: 0x20, size: 0x8, def value: None
 ::System::IO::StreamReader*  streamReader;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModioAPIHttpClient__GetErrorAndLogBadResponse_d__21, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAPIHttpClient__GetErrorAndLogBadResponse_d__21, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAPIHttpClient__GetErrorAndLogBadResponse_d__21, streamReader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAPIHttpClient__GetErrorAndLogBadResponse_d__21, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModioAPIHttpClient__GetErrorAndLogBadResponse_d__21) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
