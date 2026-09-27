#pragma once
// IWYU pragma private; include "System/Net/Http/HttpContent__ReadAsStreamAsync_d__18.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpContent__ReadAsStreamAsync_d__18)
namespace System::IO {
class Stream;
}
namespace System::Net::Http {
class HttpContent;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct HttpContent__ReadAsStreamAsync_d__18;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HttpContent__ReadAsStreamAsync_d__18);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HttpContent__ReadAsStreamAsync_d__18, "System.Net.Http", "HttpContent/<ReadAsStreamAsync>d__18");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.Http.HttpContent/<ReadAsStreamAsync>d__18
struct CORDL_TYPE HttpContent__ReadAsStreamAsync_d__18 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa9e127c, size 0x3a0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa9e161c, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr HttpContent__ReadAsStreamAsync_d__18() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::System::Net::Http::HttpContent*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::IO::Stream*>", modifiers: "", def_value: None, comment: None }]
constexpr HttpContent__ReadAsStreamAsync_d__18(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>  __t__builder, ::System::Net::Http::HttpContent*  __4__this, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::IO::Stream*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30720};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::System::Net::Http::HttpContent*  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::IO::Stream*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HttpContent__ReadAsStreamAsync_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpContent__ReadAsStreamAsync_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpContent__ReadAsStreamAsync_d__18, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpContent__ReadAsStreamAsync_d__18, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HttpContent__ReadAsStreamAsync_d__18) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
