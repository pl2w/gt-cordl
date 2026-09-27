#pragma once
// IWYU pragma private; include "GlobalNamespace/VirtualStumpOptionsTerminal__StartAccountLinkingProcess_d__40.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VirtualStumpOptionsTerminal__StartAccountLinkingProcess_d__40)
namespace GlobalNamespace {
class VirtualStumpOptionsTerminal;
}
namespace Modio {
class Error;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct VirtualStumpOptionsTerminal__StartAccountLinkingProcess_d__40;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VirtualStumpOptionsTerminal__StartAccountLinkingProcess_d__40);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VirtualStumpOptionsTerminal__StartAccountLinkingProcess_d__40, "", "VirtualStumpOptionsTerminal/<StartAccountLinkingProcess>d__40");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: VirtualStumpOptionsTerminal/<StartAccountLinkingProcess>d__40
struct CORDL_TYPE VirtualStumpOptionsTerminal__StartAccountLinkingProcess_d__40 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5a0b648, size 0x75c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5a0bda4, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr VirtualStumpOptionsTerminal__StartAccountLinkingProcess_d__40() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::VirtualStumpOptionsTerminal>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }]
constexpr VirtualStumpOptionsTerminal__StartAccountLinkingProcess_d__40(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::VirtualStumpOptionsTerminal>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2768};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VirtualStumpOptionsTerminal>  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VirtualStumpOptionsTerminal__StartAccountLinkingProcess_d__40, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpOptionsTerminal__StartAccountLinkingProcess_d__40, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpOptionsTerminal__StartAccountLinkingProcess_d__40, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualStumpOptionsTerminal__StartAccountLinkingProcess_d__40, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VirtualStumpOptionsTerminal__StartAccountLinkingProcess_d__40) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
