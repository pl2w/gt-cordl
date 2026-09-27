#pragma once
// IWYU pragma private; include "Modio/ModInstallationManagement_InstallJob__Run_d__2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Mods/zzzz__ModFileState_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModInstallationManagement_InstallJob__Run_d__2)
namespace Modio {
class Error;
}
namespace Modio {
class ModInstallationManagement_InstallJob;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct InstallJob_ModInstallationManagement__Run_d__2;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InstallJob_ModInstallationManagement__Run_d__2);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InstallJob_ModInstallationManagement__Run_d__2, "Modio", "ModInstallationManagement/InstallJob/<Run>d__2");
// [CompilerGenerated]
// Dependencies Modio.Mods.ModFileState, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.ModInstallationManagement/InstallJob/<Run>d__2
struct CORDL_TYPE InstallJob_ModInstallationManagement__Run_d__2 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa00dbc4, size 0x1428, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa00efec, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstallJob_ModInstallationManagement__Run_d__2() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Modio::ModInstallationManagement_InstallJob*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_progressFileState_5__2", ty: "::Modio::Mods::ModFileState", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None, comment: None }]
constexpr InstallJob_ModInstallationManagement__Run_d__2(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder, ::Modio::ModInstallationManagement_InstallJob*  __4__this, ::Modio::Mods::ModFileState  _progressFileState_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17461};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Modio::ModInstallationManagement_InstallJob*  __4__this;

/// @brief Field <progressFileState>5__2, offset: 0x28, size: 0x4, def value: None
 ::Modio::Mods::ModFileState  _progressFileState_5__2;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__1;

/// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InstallJob_ModInstallationManagement__Run_d__2, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstallJob_ModInstallationManagement__Run_d__2, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstallJob_ModInstallationManagement__Run_d__2, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstallJob_ModInstallationManagement__Run_d__2, _progressFileState_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstallJob_ModInstallationManagement__Run_d__2, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstallJob_ModInstallationManagement__Run_d__2, __u__2) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InstallJob_ModInstallationManagement__Run_d__2) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
