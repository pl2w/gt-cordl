#pragma once
// IWYU pragma private; include "System/Net/WebClient__GetWebResponseTaskAsync_d__112.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebClient__GetWebResponseTaskAsync_d__112)
namespace System::Net {
class WebClient;
}
namespace System::Net {
class WebRequest;
}
namespace System::Net {
class WebResponse;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct WebClient__GetWebResponseTaskAsync_d__112;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WebClient__GetWebResponseTaskAsync_d__112);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WebClient__GetWebResponseTaskAsync_d__112, "System.Net", "WebClient/<GetWebResponseTaskAsync>d__112");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.WebClient/<GetWebResponseTaskAsync>d__112
struct CORDL_TYPE WebClient__GetWebResponseTaskAsync_d__112 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xac50480, size 0x39c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xac5081c, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr WebClient__GetWebResponseTaskAsync_d__112() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::WebResponse*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "request", ty: "::System::Net::WebRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::System::Net::WebClient*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap1", ty: "::System::Net::WebRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }]
constexpr WebClient__GetWebResponseTaskAsync_d__112(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::WebResponse*>  __t__builder, ::System::Net::WebRequest*  request, ::System::Net::WebClient*  __4__this, ::System::Net::WebRequest*  __7__wrap1, ::System::Object*  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10442};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::WebResponse*>  __t__builder;

/// @brief Field request, offset: 0x20, size: 0x8, def value: None
 ::System::Net::WebRequest*  request;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::System::Net::WebClient*  __4__this;

/// @brief Field <>7__wrap1, offset: 0x30, size: 0x8, def value: None
 ::System::Net::WebRequest*  __7__wrap1;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Object*  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WebClient__GetWebResponseTaskAsync_d__112, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebClient__GetWebResponseTaskAsync_d__112, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebClient__GetWebResponseTaskAsync_d__112, request) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebClient__GetWebResponseTaskAsync_d__112, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebClient__GetWebResponseTaskAsync_d__112, __7__wrap1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WebClient__GetWebResponseTaskAsync_d__112, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WebClient__GetWebResponseTaskAsync_d__112) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
