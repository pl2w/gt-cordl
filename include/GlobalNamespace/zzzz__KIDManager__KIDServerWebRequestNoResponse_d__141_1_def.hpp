#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDManager__KIDServerWebRequestNoResponse_d__141_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KIDManager__KIDServerWebRequestNoResponse_d__141_1)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename Q>
struct KIDManager__KIDServerWebRequestNoResponse_d__141_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::KIDManager__KIDServerWebRequestNoResponse_d__141_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::KIDManager__KIDServerWebRequestNoResponse_d__141_1, "", "KIDManager/<KIDServerWebRequestNoResponse>d__141`1");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`3<T1, T2, T3>
namespace GlobalNamespace {
// cpp template
template<typename Q>
// Is value type: true
// CS Name: KIDManager/<KIDServerWebRequestNoResponse>d__141`1<Q>
struct CORDL_TYPE KIDManager__KIDServerWebRequestNoResponse_d__141_1 {
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
constexpr KIDManager__KIDServerWebRequestNoResponse_d__141_1() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int64_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "endpoint", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "operationType", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "requestData", ty: "Q", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxRetries", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "responseCodeIsRetryable", ty: "::System::Func_2<int64_t,bool>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_3<int64_t,::System::Object*,::StringW>>", modifiers: "", def_value: None, comment: None }]
constexpr KIDManager__KIDServerWebRequestNoResponse_d__141_1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int64_t>  __t__builder, ::StringW  endpoint, ::StringW  operationType, Q  requestData, int32_t  maxRetries, ::System::Func_2<int64_t,bool>*  responseCodeIsRetryable, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_3<int64_t,::System::Object*,::StringW>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2927};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int64_t>  __t__builder;

/// @brief Field endpoint, offset: 0x20, size: 0x8, def value: None
 ::StringW  endpoint;

/// @brief Field operationType, offset: 0x28, size: 0x8, def value: None
 ::StringW  operationType;

/// @brief Field requestData, offset: 0x30, size: 0x8, def value: None
 Q  requestData;

/// @brief Field maxRetries, offset: 0x38, size: 0x4, def value: None
 int32_t  maxRetries;

/// @brief Field responseCodeIsRetryable, offset: 0x40, size: 0x8, def value: None
 ::System::Func_2<int64_t,bool>*  responseCodeIsRetryable;

/// [TupleElementNames(new[] { "code", "responseModel", "errorMessage" })]
/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_3<int64_t,::System::Object*,::StringW>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
