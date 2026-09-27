#pragma once
// IWYU pragma private; include "GlobalNamespace/LegalAgreementBodyText__UpdateTextFromPlayFabTitleData_d__10.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_YieldAwaiter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LegalAgreementBodyText__UpdateTextFromPlayFabTitleData_d__10)
namespace GlobalNamespace {
class LegalAgreementBodyText;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct LegalAgreementBodyText__UpdateTextFromPlayFabTitleData_d__10;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LegalAgreementBodyText__UpdateTextFromPlayFabTitleData_d__10);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LegalAgreementBodyText__UpdateTextFromPlayFabTitleData_d__10, "", "LegalAgreementBodyText/<UpdateTextFromPlayFabTitleData>d__10");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.YieldAwaitable::YieldAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: LegalAgreementBodyText/<UpdateTextFromPlayFabTitleData>d__10
struct CORDL_TYPE LegalAgreementBodyText__UpdateTextFromPlayFabTitleData_d__10 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5a5f5ac, size 0x408, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5a5f9b4, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr LegalAgreementBodyText__UpdateTextFromPlayFabTitleData_d__10() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "version", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::LegalAgreementBodyText>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr LegalAgreementBodyText__UpdateTextFromPlayFabTitleData_d__10(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::StringW  key, ::StringW  version, ::UnityW<::GlobalNamespace::LegalAgreementBodyText>  __4__this, ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3056};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder;

/// @brief Field key, offset: 0x20, size: 0x8, def value: None
 ::StringW  key;

/// @brief Field version, offset: 0x28, size: 0x8, def value: None
 ::StringW  version;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LegalAgreementBodyText>  __4__this;

/// @brief Field <>u__1, offset: 0x38, size: 0x1, def value: None
 ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LegalAgreementBodyText__UpdateTextFromPlayFabTitleData_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreementBodyText__UpdateTextFromPlayFabTitleData_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreementBodyText__UpdateTextFromPlayFabTitleData_d__10, key) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreementBodyText__UpdateTextFromPlayFabTitleData_d__10, version) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreementBodyText__UpdateTextFromPlayFabTitleData_d__10, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LegalAgreementBodyText__UpdateTextFromPlayFabTitleData_d__10, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LegalAgreementBodyText__UpdateTextFromPlayFabTitleData_d__10) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
