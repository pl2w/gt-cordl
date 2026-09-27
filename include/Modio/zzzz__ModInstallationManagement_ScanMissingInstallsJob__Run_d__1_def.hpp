#pragma once
// IWYU pragma private; include "Modio/ModInstallationManagement_ScanMissingInstallsJob__Run_d__1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModInstallationManagement_ScanMissingInstallsJob__Run_d__1)
namespace Modio {
class Error;
}
namespace Modio {
class ModInstallationManagement_ScanMissingInstallsJob;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct ScanMissingInstallsJob_ModInstallationManagement__Run_d__1;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScanMissingInstallsJob_ModInstallationManagement__Run_d__1);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScanMissingInstallsJob_ModInstallationManagement__Run_d__1, "Modio", "ModInstallationManagement/ScanMissingInstallsJob/<Run>d__1");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.ModInstallationManagement/ScanMissingInstallsJob/<Run>d__1
struct CORDL_TYPE ScanMissingInstallsJob_ModInstallationManagement__Run_d__1 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa0117f4, size 0x42c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa011c20, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ScanMissingInstallsJob_ModInstallationManagement__Run_d__1() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Modio::ModInstallationManagement_ScanMissingInstallsJob*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }]
constexpr ScanMissingInstallsJob_ModInstallationManagement__Run_d__1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder, ::Modio::ModInstallationManagement_ScanMissingInstallsJob*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17469};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Modio::ModInstallationManagement_ScanMissingInstallsJob*  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

/// @brief Field <>u__2, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScanMissingInstallsJob_ModInstallationManagement__Run_d__1, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScanMissingInstallsJob_ModInstallationManagement__Run_d__1, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScanMissingInstallsJob_ModInstallationManagement__Run_d__1, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScanMissingInstallsJob_ModInstallationManagement__Run_d__1, __u__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScanMissingInstallsJob_ModInstallationManagement__Run_d__1, __u__2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScanMissingInstallsJob_ModInstallationManagement__Run_d__1) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
