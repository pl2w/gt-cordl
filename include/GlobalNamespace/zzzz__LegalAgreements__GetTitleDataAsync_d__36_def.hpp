#pragma once
// IWYU pragma private; include "GlobalNamespace/LegalAgreements__GetTitleDataAsync_d__36.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_YieldAwaiter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LegalAgreements__GetTitleDataAsync_d__36)
namespace GlobalNamespace {
class LegalAgreements___c__DisplayClass36_0;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct LegalAgreements__GetTitleDataAsync_d__36;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LegalAgreements__GetTitleDataAsync_d__36);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LegalAgreements__GetTitleDataAsync_d__36, "", "LegalAgreements/<GetTitleDataAsync>d__36");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.YieldAwaitable::YieldAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: LegalAgreements/<GetTitleDataAsync>d__36
struct CORDL_TYPE LegalAgreements__GetTitleDataAsync_d__36 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5a610e0, size 0x430, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5a61510, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr LegalAgreements__GetTitleDataAsync_d__36() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::LegalAgreements___c__DisplayClass36_0*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr LegalAgreements__GetTitleDataAsync_d__36(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder, ::StringW  key, ::GlobalNamespace::LegalAgreements___c__DisplayClass36_0*  __8__1, ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3064};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder;

/// @brief Field key, offset: 0x20, size: 0x8, def value: None
 ::StringW  key;

/// @brief Field <>8__1, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::LegalAgreements___c__DisplayClass36_0*  __8__1;

/// @brief Field <>u__1, offset: 0x30, size: 0x1, def value: None
 ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LegalAgreements__GetTitleDataAsync_d__36, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements__GetTitleDataAsync_d__36, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements__GetTitleDataAsync_d__36, key) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements__GetTitleDataAsync_d__36, __8__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements__GetTitleDataAsync_d__36, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LegalAgreements__GetTitleDataAsync_d__36) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
