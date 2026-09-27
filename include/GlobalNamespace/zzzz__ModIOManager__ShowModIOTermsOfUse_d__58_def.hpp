#pragma once
// IWYU pragma private; include "GlobalNamespace/ModIOManager__ShowModIOTermsOfUse_d__58.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModIOManager__ShowModIOTermsOfUse_d__58)
namespace GlobalNamespace {
class ModIOManager;
}
namespace Modio {
class Error;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct ModIOManager__ShowModIOTermsOfUse_d__58;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModIOManager__ShowModIOTermsOfUse_d__58);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModIOManager__ShowModIOTermsOfUse_d__58, "", "ModIOManager/<ShowModIOTermsOfUse>d__58");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: ModIOManager/<ShowModIOTermsOfUse>d__58
struct CORDL_TYPE ModIOManager__ShowModIOTermsOfUse_d__58 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x59ef18c, size 0x708, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x59ef894, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModIOManager__ShowModIOTermsOfUse_d__58() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::ModIOManager>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_termsOfUseObject_5__2", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }]
constexpr ModIOManager__ShowModIOTermsOfUse_d__58(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder, ::UnityW<::GlobalNamespace::ModIOManager>  __4__this, ::UnityW<::UnityEngine::GameObject>  _termsOfUseObject_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2717};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ModIOManager>  __4__this;

/// @brief Field <termsOfUseObject>5__2, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  _termsOfUseObject_5__2;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModIOManager__ShowModIOTermsOfUse_d__58, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__ShowModIOTermsOfUse_d__58, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__ShowModIOTermsOfUse_d__58, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__ShowModIOTermsOfUse_d__58, _termsOfUseObject_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModIOManager__ShowModIOTermsOfUse_d__58, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModIOManager__ShowModIOTermsOfUse_d__58) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
