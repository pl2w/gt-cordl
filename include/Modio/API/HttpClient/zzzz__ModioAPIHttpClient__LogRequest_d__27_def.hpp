#pragma once
// IWYU pragma private; include "Modio/API/HttpClient/ModioAPIHttpClient__LogRequest_d__27.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModioAPIHttpClient__LogRequest_d__27)
namespace Modio::API::HttpClient {
class ModioAPIHttpClient;
}
namespace System::Net::Http {
class HttpRequestMessage;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
struct ModioAPIHttpClient__LogRequest_d__27;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModioAPIHttpClient__LogRequest_d__27);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModioAPIHttpClient__LogRequest_d__27, "Modio.API.HttpClient", "ModioAPIHttpClient/<LogRequest>d__27");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.API.HttpClient.ModioAPIHttpClient/<LogRequest>d__27
struct CORDL_TYPE ModioAPIHttpClient__LogRequest_d__27 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9fe28d0, size 0xcc0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9fe3590, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModioAPIHttpClient__LogRequest_d__27() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "request", ty: "::System::Net::Http::HttpRequestMessage*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Modio::API::HttpClient::ModioAPIHttpClient*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_builder_5__2", ty: "::System::Text::StringBuilder*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap2", ty: "::System::Text::StringBuilder*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None, comment: None }]
constexpr ModioAPIHttpClient__LogRequest_d__27(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Net::Http::HttpRequestMessage*  request, ::Modio::API::HttpClient::ModioAPIHttpClient*  __4__this, ::System::Text::StringBuilder*  _builder_5__2, ::System::Text::StringBuilder*  __7__wrap2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18041};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field request, offset: 0x20, size: 0x8, def value: None
 ::System::Net::Http::HttpRequestMessage*  request;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Modio::API::HttpClient::ModioAPIHttpClient*  __4__this;

/// @brief Field <builder>5__2, offset: 0x30, size: 0x8, def value: None
 ::System::Text::StringBuilder*  _builder_5__2;

/// @brief Field <>7__wrap2, offset: 0x38, size: 0x8, def value: None
 ::System::Text::StringBuilder*  __7__wrap2;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModioAPIHttpClient__LogRequest_d__27, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAPIHttpClient__LogRequest_d__27, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAPIHttpClient__LogRequest_d__27, request) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAPIHttpClient__LogRequest_d__27, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAPIHttpClient__LogRequest_d__27, _builder_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAPIHttpClient__LogRequest_d__27, __7__wrap2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAPIHttpClient__LogRequest_d__27, __u__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModioAPIHttpClient__LogRequest_d__27) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
