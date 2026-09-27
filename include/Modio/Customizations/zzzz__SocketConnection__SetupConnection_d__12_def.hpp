#pragma once
// IWYU pragma private; include "Modio/Customizations/SocketConnection__SetupConnection_d__12.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SocketConnection__SetupConnection_d__12)
namespace Modio::Customizations {
class SocketConnection;
}
namespace Modio::Customizations {
struct WssMessages;
}
namespace Modio {
class Error;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
struct SocketConnection__SetupConnection_d__12;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SocketConnection__SetupConnection_d__12);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SocketConnection__SetupConnection_d__12, "Modio.Customizations", "SocketConnection/<SetupConnection>d__12");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.Customizations.SocketConnection/<SetupConnection>d__12
struct CORDL_TYPE SocketConnection__SetupConnection_d__12 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa060150, size 0x694, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa0607e4, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr SocketConnection__SetupConnection_d__12() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Modio::Customizations::SocketConnection*", modifiers: "", def_value: None, comment: None }, CppParam { name: "onReceive", ty: "::System::Action_1<::Modio::Customizations::WssMessages>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "onDisconnect", ty: "::System::Action*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr SocketConnection__SetupConnection_d__12(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder, ::StringW  url, ::Modio::Customizations::SocketConnection*  __4__this, ::System::Action_1<::Modio::Customizations::WssMessages>*  onReceive, ::System::Action*  onDisconnect, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17755};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder;

/// @brief Field url, offset: 0x20, size: 0x8, def value: None
 ::StringW  url;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Modio::Customizations::SocketConnection*  __4__this;

/// @brief Field onReceive, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::Modio::Customizations::WssMessages>*  onReceive;

/// @brief Field onDisconnect, offset: 0x38, size: 0x8, def value: None
 ::System::Action*  onDisconnect;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SocketConnection__SetupConnection_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SocketConnection__SetupConnection_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SocketConnection__SetupConnection_d__12, url) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SocketConnection__SetupConnection_d__12, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SocketConnection__SetupConnection_d__12, onReceive) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SocketConnection__SetupConnection_d__12, onDisconnect) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SocketConnection__SetupConnection_d__12, __u__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SocketConnection__SetupConnection_d__12) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
