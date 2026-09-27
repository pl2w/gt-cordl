#pragma once
// IWYU pragma private; include "GlobalNamespace/LegalAgreements__StartLegalAgreements_d__24.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LegalAgreementTextAsset_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_YieldAwaiter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LegalAgreements__StartLegalAgreements_d__24)
namespace GlobalNamespace {
class LegalAgreementTextAsset;
}
namespace GlobalNamespace {
class LegalAgreements;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct LegalAgreements__StartLegalAgreements_d__24;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LegalAgreements__StartLegalAgreements_d__24);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LegalAgreements__StartLegalAgreements_d__24, "", "LegalAgreements/<StartLegalAgreements>d__24");
// [CompilerGenerated]
// Dependencies LegalAgreementTextAsset, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Runtime.CompilerServices.YieldAwaitable::YieldAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: LegalAgreements/<StartLegalAgreements>d__24
struct CORDL_TYPE LegalAgreements__StartLegalAgreements_d__24 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5a6158c, size 0xcac, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5a62238, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr LegalAgreements__StartLegalAgreements_d__24() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::LegalAgreements>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_agreementResults_5__2", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap2", ty: "::ArrayW<::UnityW<::GlobalNamespace::LegalAgreementTextAsset>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap3", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_screen_5__5", ty: "::UnityW<::GlobalNamespace::LegalAgreementTextAsset>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_latestVersion_5__6", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__4", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__5", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr LegalAgreements__StartLegalAgreements_d__24(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::LegalAgreements>  __4__this, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _agreementResults_5__2, ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>  __u__2, ::ArrayW<::UnityW<::GlobalNamespace::LegalAgreementTextAsset>>  __7__wrap2, int32_t  __7__wrap3, ::UnityW<::GlobalNamespace::LegalAgreementTextAsset>  _screen_5__5, ::StringW  _latestVersion_5__6, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__4, ::System::Runtime::CompilerServices::TaskAwaiter  __u__5) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3065};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LegalAgreements>  __4__this;

/// @brief Field <agreementResults>5__2, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _agreementResults_5__2;

/// @brief Field <>u__1, offset: 0x30, size: 0x1, def value: None
 ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__1;

/// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>  __u__2;

/// @brief Field <>7__wrap2, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::LegalAgreementTextAsset>>  __7__wrap2;

/// @brief Field <>7__wrap3, offset: 0x48, size: 0x4, def value: None
 int32_t  __7__wrap3;

/// @brief Field <screen>5__5, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LegalAgreementTextAsset>  _screen_5__5;

/// @brief Field <latestVersion>5__6, offset: 0x58, size: 0x8, def value: None
 ::StringW  _latestVersion_5__6;

/// @brief Field <>u__3, offset: 0x60, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__3;

/// @brief Field <>u__4, offset: 0x68, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__4;

/// @brief Field <>u__5, offset: 0x70, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__5;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LegalAgreements__StartLegalAgreements_d__24, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements__StartLegalAgreements_d__24, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements__StartLegalAgreements_d__24, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements__StartLegalAgreements_d__24, _agreementResults_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements__StartLegalAgreements_d__24, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements__StartLegalAgreements_d__24, __u__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements__StartLegalAgreements_d__24, __7__wrap2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements__StartLegalAgreements_d__24, __7__wrap3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements__StartLegalAgreements_d__24, _screen_5__5) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements__StartLegalAgreements_d__24, _latestVersion_5__6) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements__StartLegalAgreements_d__24, __u__3) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements__StartLegalAgreements_d__24, __u__4) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreements__StartLegalAgreements_d__24, __u__5) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LegalAgreements__StartLegalAgreements_d__24) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
