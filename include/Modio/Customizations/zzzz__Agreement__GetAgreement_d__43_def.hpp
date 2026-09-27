#pragma once
// IWYU pragma private; include "Modio/Customizations/Agreement__GetAgreement_d__43.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__AgreementVersionObject_def.hpp"
#include "Modio/Customizations/zzzz__AgreementType_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Agreement__GetAgreement_d__43)
namespace Modio::Customizations {
class Agreement;
}
namespace Modio {
class Error;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct Agreement__GetAgreement_d__43;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Agreement__GetAgreement_d__43);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Agreement__GetAgreement_d__43, "Modio.Customizations", "Agreement/<GetAgreement>d__43");
// [CompilerGenerated]
// Dependencies Modio.API.SchemaDefinitions.AgreementVersionObject, Modio.Customizations.AgreementType, System.Nullable`1<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.Customizations.Agreement/<GetAgreement>d__43
struct CORDL_TYPE Agreement__GetAgreement_d__43 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa0573c4, size 0x630, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa0579f4, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr Agreement__GetAgreement_d__43() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Customizations::Agreement*>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "forceUpdate", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "type", ty: "::Modio::Customizations::AgreementType", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::AgreementVersionObject>>>", modifiers: "", def_value: None, comment: None }]
constexpr Agreement__GetAgreement_d__43(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Customizations::Agreement*>>  __t__builder, bool  forceUpdate, ::Modio::Customizations::AgreementType  type, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::AgreementVersionObject>>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17719};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// [TupleElementNames(new[] { "error", "result" })]
/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Customizations::Agreement*>>  __t__builder;

/// @brief Field forceUpdate, offset: 0x20, size: 0x1, def value: None
 bool  forceUpdate;

/// @brief Field type, offset: 0x24, size: 0x4, def value: None
 ::Modio::Customizations::AgreementType  type;

/// [TupleElementNames(new[] { "error", "agreementVersionObject" })]
/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::AgreementVersionObject>>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Agreement__GetAgreement_d__43, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Agreement__GetAgreement_d__43, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Agreement__GetAgreement_d__43, forceUpdate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Agreement__GetAgreement_d__43, type) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Agreement__GetAgreement_d__43, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Agreement__GetAgreement_d__43) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
