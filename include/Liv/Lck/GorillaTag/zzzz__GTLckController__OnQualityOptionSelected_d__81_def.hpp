#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GTLckController__OnQualityOptionSelected_d__81.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/zzzz__QualityOption_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTLckController__OnQualityOptionSelected_d__81)
namespace Liv::Lck::GorillaTag {
class GTLckController;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct GTLckController__OnQualityOptionSelected_d__81;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTLckController__OnQualityOptionSelected_d__81);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTLckController__OnQualityOptionSelected_d__81, "Liv.Lck.GorillaTag", "GTLckController/<OnQualityOptionSelected>d__81");
// [CompilerGenerated]
// Dependencies Liv.Lck.QualityOption, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.GorillaTag.GTLckController/<OnQualityOptionSelected>d__81
struct CORDL_TYPE GTLckController__OnQualityOptionSelected_d__81 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9d28748, size 0x3c8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9d28b10, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr GTLckController__OnQualityOptionSelected_d__81() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Liv::Lck::GorillaTag::GTLckController>", modifiers: "", def_value: None, comment: None }, CppParam { name: "qualityOption", ty: "::Liv::Lck::QualityOption", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None, comment: None }]
constexpr GTLckController__OnQualityOptionSelected_d__81(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::Liv::Lck::GorillaTag::GTLckController>  __4__this, ::Liv::Lck::QualityOption  qualityOption, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29638};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GTLckController>  __4__this;

/// @brief Field qualityOption, offset: 0x30, size: 0x38, def value: None
 ::Liv::Lck::QualityOption  qualityOption;

/// @brief Field <>u__1, offset: 0x68, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTLckController__OnQualityOptionSelected_d__81, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTLckController__OnQualityOptionSelected_d__81, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTLckController__OnQualityOptionSelected_d__81, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTLckController__OnQualityOptionSelected_d__81, qualityOption) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTLckController__OnQualityOptionSelected_d__81, __u__1) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTLckController__OnQualityOptionSelected_d__81) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
