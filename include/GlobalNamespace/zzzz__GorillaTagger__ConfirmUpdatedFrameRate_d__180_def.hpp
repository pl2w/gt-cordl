#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTagger__ConfirmUpdatedFrameRate_d__180.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "UnityEngine/zzzz__Awaitable_Awaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaTagger__ConfirmUpdatedFrameRate_d__180)
namespace GlobalNamespace {
class GorillaTagger;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct GorillaTagger__ConfirmUpdatedFrameRate_d__180;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaTagger__ConfirmUpdatedFrameRate_d__180);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagger__ConfirmUpdatedFrameRate_d__180, "", "GorillaTagger/<ConfirmUpdatedFrameRate>d__180");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, UnityEngine.Awaitable::Awaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagger/<ConfirmUpdatedFrameRate>d__180
struct CORDL_TYPE GorillaTagger__ConfirmUpdatedFrameRate_d__180 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5937b7c, size 0x930, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x59384ac, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr GorillaTagger__ConfirmUpdatedFrameRate_d__180() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::GorillaTagger>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::Awaitable_Awaiter", modifiers: "", def_value: None, comment: None }]
constexpr GorillaTagger__ConfirmUpdatedFrameRate_d__180(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::GorillaTagger>  __4__this, ::GlobalNamespace::Awaitable_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2257};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaTagger>  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::Awaitable_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagger__ConfirmUpdatedFrameRate_d__180, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger__ConfirmUpdatedFrameRate_d__180, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger__ConfirmUpdatedFrameRate_d__180, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger__ConfirmUpdatedFrameRate_d__180, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagger__ConfirmUpdatedFrameRate_d__180) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
