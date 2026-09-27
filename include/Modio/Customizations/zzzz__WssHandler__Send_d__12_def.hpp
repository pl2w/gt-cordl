#pragma once
// IWYU pragma private; include "Modio/Customizations/WssHandler__Send_d__12.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Customizations/zzzz__WssMessage_def.hpp"
#include "Modio/Customizations/zzzz__WssMessages_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WssHandler__Send_d__12)
namespace Modio {
class Error;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct WssHandler__Send_d__12;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WssHandler__Send_d__12);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WssHandler__Send_d__12, "Modio.Customizations", "WssHandler/<Send>d__12");
// [CompilerGenerated]
// Dependencies Modio.Customizations.WssMessage, Modio.Customizations.WssMessages, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.Customizations.WssHandler/<Send>d__12
struct CORDL_TYPE WssHandler__Send_d__12 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa05d33c, size 0x4b8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa05d7f4, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr WssHandler__Send_d__12() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "message", ty: "::Modio::Customizations::WssMessage", modifiers: "", def_value: None, comment: None }, CppParam { name: "_messages_5__2", ty: "::Modio::Customizations::WssMessages", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }]
constexpr WssHandler__Send_d__12(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder, ::Modio::Customizations::WssMessage  message, ::Modio::Customizations::WssMessages  _messages_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17737};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder;

/// @brief Field message, offset: 0x20, size: 0x10, def value: None
 ::Modio::Customizations::WssMessage  message;

/// @brief Field <messages>5__2, offset: 0x30, size: 0x8, def value: None
 ::Modio::Customizations::WssMessages  _messages_5__2;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WssHandler__Send_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WssHandler__Send_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WssHandler__Send_d__12, message) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WssHandler__Send_d__12, _messages_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WssHandler__Send_d__12, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WssHandler__Send_d__12) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
