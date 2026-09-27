#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDManager__Server_VerifyAge_d__133.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KIDManager__Server_VerifyAge_d__133)
namespace GlobalNamespace {
class VerifyAgeData;
}
namespace GlobalNamespace {
class VerifyAgeRequest;
}
namespace GlobalNamespace {
class VerifyAgeResponse;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
struct KIDManager__Server_VerifyAge_d__133;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::KIDManager__Server_VerifyAge_d__133);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDManager__Server_VerifyAge_d__133, "", "KIDManager/<Server_VerifyAge>d__133");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`3<T1, T2, T3>
namespace GlobalNamespace {
// Is value type: true
// CS Name: KIDManager/<Server_VerifyAge>d__133
struct CORDL_TYPE KIDManager__Server_VerifyAge_d__133 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5a39558, size 0x334, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5a3988c, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr KIDManager__Server_VerifyAge_d__133() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::VerifyAgeData*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "request", ty: "::GlobalNamespace::VerifyAgeRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "failureCallback", ty: "::System::Action*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_3<int64_t,::GlobalNamespace::VerifyAgeResponse*,::StringW>>", modifiers: "", def_value: None, comment: None }]
constexpr KIDManager__Server_VerifyAge_d__133(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::VerifyAgeData*>  __t__builder, ::GlobalNamespace::VerifyAgeRequest*  request, ::System::Action*  failureCallback, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_3<int64_t,::GlobalNamespace::VerifyAgeResponse*,::StringW>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2939};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::VerifyAgeData*>  __t__builder;

/// @brief Field request, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::VerifyAgeRequest*  request;

/// @brief Field failureCallback, offset: 0x28, size: 0x8, def value: None
 ::System::Action*  failureCallback;

/// [TupleElementNames(new[] { "code", "responseModel", "errorMessage" })]
/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_3<int64_t,::GlobalNamespace::VerifyAgeResponse*,::StringW>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDManager__Server_VerifyAge_d__133, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDManager__Server_VerifyAge_d__133, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDManager__Server_VerifyAge_d__133, request) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDManager__Server_VerifyAge_d__133, failureCallback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDManager__Server_VerifyAge_d__133, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDManager__Server_VerifyAge_d__133) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
