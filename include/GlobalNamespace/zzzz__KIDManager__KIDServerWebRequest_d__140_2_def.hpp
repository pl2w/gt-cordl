#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDManager__KIDServerWebRequest_d__140_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KIDManager__KIDServerWebRequest_d__140_2)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T,typename Q>
struct KIDManager__KIDServerWebRequest_d__140_2;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::KIDManager__KIDServerWebRequest_d__140_2);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::KIDManager__KIDServerWebRequest_d__140_2, "", "KIDManager/<KIDServerWebRequest>d__140`2");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`3<T1, T2, T3>
namespace GlobalNamespace {
// cpp template
template<typename T,typename Q>
// Is value type: true
// CS Name: KIDManager/<KIDServerWebRequest>d__140`2<T,Q>
struct CORDL_TYPE KIDManager__KIDServerWebRequest_d__140_2 {
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
constexpr KIDManager__KIDServerWebRequest_d__140_2() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<int64_t,T,::StringW>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "endpoint", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "queryParams", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "operationType", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "requestData", ty: "Q", modifiers: "", def_value: None, comment: None }, CppParam { name: "responseCodeIsRetryable", ty: "::System::Func_2<int64_t,bool>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxRetries", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_retryCount_5__2", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_URL_5__3", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_request_5__4", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_json_5__5", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr KIDManager__KIDServerWebRequest_d__140_2(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<int64_t,T,::StringW>>  __t__builder, ::StringW  endpoint, ::StringW  queryParams, ::StringW  operationType, Q  requestData, ::System::Func_2<int64_t,bool>*  responseCodeIsRetryable, int32_t  maxRetries, int32_t  _retryCount_5__2, ::StringW  _URL_5__3, ::UnityEngine::Networking::UnityWebRequest*  _request_5__4, ::StringW  _json_5__5, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest*>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2926};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// [TupleElementNames(new[] { "code", "responseModel", "errorMessage" })]
/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<int64_t,T,::StringW>>  __t__builder;

/// @brief Field endpoint, offset: 0x20, size: 0x8, def value: None
 ::StringW  endpoint;

/// @brief Field queryParams, offset: 0x28, size: 0x8, def value: None
 ::StringW  queryParams;

/// @brief Field operationType, offset: 0x30, size: 0x8, def value: None
 ::StringW  operationType;

/// @brief Field requestData, offset: 0x38, size: 0x8, def value: None
 Q  requestData;

/// @brief Field responseCodeIsRetryable, offset: 0x40, size: 0x8, def value: None
 ::System::Func_2<int64_t,bool>*  responseCodeIsRetryable;

/// @brief Field maxRetries, offset: 0x48, size: 0x4, def value: None
 int32_t  maxRetries;

/// @brief Field <retryCount>5__2, offset: 0x4c, size: 0x4, def value: None
 int32_t  _retryCount_5__2;

/// @brief Field <URL>5__3, offset: 0x50, size: 0x8, def value: None
 ::StringW  _URL_5__3;

/// @brief Field <request>5__4, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  _request_5__4;

/// @brief Field <json>5__5, offset: 0x60, size: 0x8, def value: None
 ::StringW  _json_5__5;

/// @brief Field <>u__1, offset: 0x68, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest*>  __u__1;

/// @brief Field <>u__2, offset: 0x70, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
