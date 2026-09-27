#pragma once
// IWYU pragma private; include "System/Net/HttpWebRequest___GetRewriteHandler_b__271_0_d.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpWebRequest___GetRewriteHandler_b__271_0_d)
namespace System::IO {
class MemoryStream;
}
namespace System::Net {
class BufferOffsetSize;
}
namespace System::Net {
class HttpWebRequest;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct HttpWebRequest___GetRewriteHandler_b__271_0_d;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HttpWebRequest___GetRewriteHandler_b__271_0_d);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HttpWebRequest___GetRewriteHandler_b__271_0_d, "System.Net", "HttpWebRequest/<<GetRewriteHandler>b__271_0>d");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.HttpWebRequest/<<GetRewriteHandler>b__271_0>d
struct CORDL_TYPE HttpWebRequest___GetRewriteHandler_b__271_0_d {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xaca8900, size 0x468, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xaca8d68, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr HttpWebRequest___GetRewriteHandler_b__271_0_d() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::BufferOffsetSize*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::System::Net::HttpWebRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ms_5__2", ty: "::System::IO::MemoryStream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr HttpWebRequest___GetRewriteHandler_b__271_0_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::BufferOffsetSize*>  __t__builder, ::System::Net::HttpWebRequest*  __4__this, ::System::IO::MemoryStream*  _ms_5__2, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10697};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Net::BufferOffsetSize*>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::System::Net::HttpWebRequest*  __4__this;

/// @brief Field <ms>5__2, offset: 0x28, size: 0x8, def value: None
 ::System::IO::MemoryStream*  _ms_5__2;

/// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HttpWebRequest___GetRewriteHandler_b__271_0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpWebRequest___GetRewriteHandler_b__271_0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpWebRequest___GetRewriteHandler_b__271_0_d, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpWebRequest___GetRewriteHandler_b__271_0_d, _ms_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HttpWebRequest___GetRewriteHandler_b__271_0_d, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HttpWebRequest___GetRewriteHandler_b__271_0_d) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
