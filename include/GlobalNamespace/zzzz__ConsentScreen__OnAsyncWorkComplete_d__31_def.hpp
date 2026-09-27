#pragma once
// IWYU pragma private; include "GlobalNamespace/ConsentScreen__OnAsyncWorkComplete_d__31.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "UnityEngine/zzzz__MainThreadAwaitable_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConsentScreen__OnAsyncWorkComplete_d__31)
namespace GlobalNamespace {
class ConsentScreen;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct ConsentScreen__OnAsyncWorkComplete_d__31;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ConsentScreen__OnAsyncWorkComplete_d__31);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConsentScreen__OnAsyncWorkComplete_d__31, "", "ConsentScreen/<OnAsyncWorkComplete>d__31");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, UnityEngine.MainThreadAwaitable
namespace GlobalNamespace {
// Is value type: true
// CS Name: ConsentScreen/<OnAsyncWorkComplete>d__31
struct CORDL_TYPE ConsentScreen__OnAsyncWorkComplete_d__31 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5a6cc94, size 0x2d0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5a6cf64, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ConsentScreen__OnAsyncWorkComplete_d__31() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::ConsentScreen>", modifiers: "", def_value: None, comment: None }, CppParam { name: "result", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::UnityEngine::MainThreadAwaitable", modifiers: "", def_value: None, comment: None }]
constexpr ConsentScreen__OnAsyncWorkComplete_d__31(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::ConsentScreen>  __4__this, ::StringW  result, ::UnityEngine::MainThreadAwaitable  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3100};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ConsentScreen>  __4__this;

/// @brief Field result, offset: 0x30, size: 0x8, def value: None
 ::StringW  result;

/// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::MainThreadAwaitable  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConsentScreen__OnAsyncWorkComplete_d__31, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentScreen__OnAsyncWorkComplete_d__31, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentScreen__OnAsyncWorkComplete_d__31, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentScreen__OnAsyncWorkComplete_d__31, result) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentScreen__OnAsyncWorkComplete_d__31, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ConsentScreen__OnAsyncWorkComplete_d__31) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
