#pragma once
// IWYU pragma private; include "System/Net/FtpWebRequest__CreateConnectionAsync_d__86.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FtpWebRequest__CreateConnectionAsync_d__86)
namespace System::Net::Sockets {
class TcpClient;
}
namespace System::Net {
class FtpWebRequest;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct FtpWebRequest__CreateConnectionAsync_d__86;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FtpWebRequest__CreateConnectionAsync_d__86);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FtpWebRequest__CreateConnectionAsync_d__86, "System.Net", "FtpWebRequest/<CreateConnectionAsync>d__86");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.FtpWebRequest/<CreateConnectionAsync>d__86
struct CORDL_TYPE FtpWebRequest__CreateConnectionAsync_d__86 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xadc267c, size 0x378, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xadc29f4, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr FtpWebRequest__CreateConnectionAsync_d__86() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::System::Net::FtpWebRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_client_5__2", ty: "::System::Net::Sockets::TcpClient*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr FtpWebRequest__CreateConnectionAsync_d__86(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::System::Net::FtpWebRequest*  __4__this, ::System::Net::Sockets::TcpClient*  _client_5__2, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10432};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::System::Net::FtpWebRequest*  __4__this;

/// @brief Field <client>5__2, offset: 0x30, size: 0x8, def value: None
 ::System::Net::Sockets::TcpClient*  _client_5__2;

/// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FtpWebRequest__CreateConnectionAsync_d__86, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FtpWebRequest__CreateConnectionAsync_d__86, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FtpWebRequest__CreateConnectionAsync_d__86, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FtpWebRequest__CreateConnectionAsync_d__86, _client_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FtpWebRequest__CreateConnectionAsync_d__86, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FtpWebRequest__CreateConnectionAsync_d__86) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
