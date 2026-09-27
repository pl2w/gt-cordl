#pragma once
// IWYU pragma private; include "GlobalNamespace/ModIOTermsOfUse_v1__UpdateTextWithFullTerms_d__21.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModIOTermsOfUse_v1__UpdateTextWithFullTerms_d__21)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct ModIOTermsOfUse_v1__UpdateTextWithFullTerms_d__21;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModIOTermsOfUse_v1__UpdateTextWithFullTerms_d__21);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModIOTermsOfUse_v1__UpdateTextWithFullTerms_d__21, "", "ModIOTermsOfUse_v1/<UpdateTextWithFullTerms>d__21");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: ModIOTermsOfUse_v1/<UpdateTextWithFullTerms>d__21
struct CORDL_TYPE ModIOTermsOfUse_v1__UpdateTextWithFullTerms_d__21 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x59f2c74, size 0x78, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x59f2cec, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModIOTermsOfUse_v1__UpdateTextWithFullTerms_d__21() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None, comment: None }]
constexpr ModIOTermsOfUse_v1__UpdateTextWithFullTerms_d__21(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2727};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModIOTermsOfUse_v1__UpdateTextWithFullTerms_d__21, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOTermsOfUse_v1__UpdateTextWithFullTerms_d__21, __t__builder) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModIOTermsOfUse_v1__UpdateTextWithFullTerms_d__21) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
