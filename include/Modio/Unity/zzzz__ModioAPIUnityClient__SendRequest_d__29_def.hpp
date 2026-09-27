#pragma once
// IWYU pragma private; include "Modio/Unity/ModioAPIUnityClient__SendRequest_d__29.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_YieldAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModioAPIUnityClient__SendRequest_d__29)
namespace Modio {
class Error;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace GlobalNamespace {
struct ModioAPIUnityClient__SendRequest_d__29;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModioAPIUnityClient__SendRequest_d__29);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModioAPIUnityClient__SendRequest_d__29, "Modio.Unity", "ModioAPIUnityClient/<SendRequest>d__29");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.YieldAwaitable::YieldAwaiter, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.Unity.ModioAPIUnityClient/<SendRequest>d__29
struct CORDL_TYPE ModioAPIUnityClient__SendRequest_d__29 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9f944b4, size 0x43c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9f948f0, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModioAPIUnityClient__SendRequest_d__29() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "webRequest", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "shutdownToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "_operation_5__2", ty: "::UnityEngine::Networking::UnityWebRequestAsyncOperation*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr ModioAPIUnityClient__SendRequest_d__29(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder, ::UnityEngine::Networking::UnityWebRequest*  webRequest, ::System::Threading::CancellationToken  token, ::System::Threading::CancellationToken  shutdownToken, ::UnityEngine::Networking::UnityWebRequestAsyncOperation*  _operation_5__2, ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32060};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder;

/// @brief Field webRequest, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  webRequest;

/// @brief Field token, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  token;

/// @brief Field shutdownToken, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::CancellationToken  shutdownToken;

/// @brief Field <operation>5__2, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequestAsyncOperation*  _operation_5__2;

/// @brief Field <>u__1, offset: 0x40, size: 0x1, def value: None
 ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModioAPIUnityClient__SendRequest_d__29, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAPIUnityClient__SendRequest_d__29, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAPIUnityClient__SendRequest_d__29, webRequest) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAPIUnityClient__SendRequest_d__29, token) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAPIUnityClient__SendRequest_d__29, shutdownToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAPIUnityClient__SendRequest_d__29, _operation_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAPIUnityClient__SendRequest_d__29, __u__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModioAPIUnityClient__SendRequest_d__29) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
