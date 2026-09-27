#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDManager__Server_AttemptAgeUpdate_d__134.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KIDManager__Server_AttemptAgeUpdate_d__134)
namespace GlobalNamespace {
class AttemptAgeUpdateData;
}
namespace GlobalNamespace {
class AttemptAgeUpdateRequest;
}
namespace GlobalNamespace {
class AttemptAgeUpdateResponse;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct KIDManager__Server_AttemptAgeUpdate_d__134;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::KIDManager__Server_AttemptAgeUpdate_d__134);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDManager__Server_AttemptAgeUpdate_d__134, "", "KIDManager/<Server_AttemptAgeUpdate>d__134");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`3<T1, T2, T3>
namespace GlobalNamespace {
// Is value type: true
// CS Name: KIDManager/<Server_AttemptAgeUpdate>d__134
struct CORDL_TYPE KIDManager__Server_AttemptAgeUpdate_d__134 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5a36a5c, size 0x39c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5a36df8, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr KIDManager__Server_AttemptAgeUpdate_d__134() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AttemptAgeUpdateData*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "request", ty: "::GlobalNamespace::AttemptAgeUpdateRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_3<int64_t,::GlobalNamespace::AttemptAgeUpdateResponse*,::StringW>>", modifiers: "", def_value: None, comment: None }]
constexpr KIDManager__Server_AttemptAgeUpdate_d__134(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AttemptAgeUpdateData*>  __t__builder, ::GlobalNamespace::AttemptAgeUpdateRequest*  request, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_3<int64_t,::GlobalNamespace::AttemptAgeUpdateResponse*,::StringW>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2931};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AttemptAgeUpdateData*>  __t__builder;

/// @brief Field request, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::AttemptAgeUpdateRequest*  request;

/// [TupleElementNames(new[] { "code", "responseModel", "errorMessage" })]
/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_3<int64_t,::GlobalNamespace::AttemptAgeUpdateResponse*,::StringW>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDManager__Server_AttemptAgeUpdate_d__134, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDManager__Server_AttemptAgeUpdate_d__134, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDManager__Server_AttemptAgeUpdate_d__134, request) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDManager__Server_AttemptAgeUpdate_d__134, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDManager__Server_AttemptAgeUpdate_d__134) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
