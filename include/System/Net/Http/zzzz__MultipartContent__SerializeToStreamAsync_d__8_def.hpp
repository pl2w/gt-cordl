#pragma once
// IWYU pragma private; include "System/Net/Http/MultipartContent__SerializeToStreamAsync_d__8.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultipartContent__SerializeToStreamAsync_d__8)
namespace System::IO {
class Stream;
}
namespace System::Net::Http {
class HttpContent;
}
namespace System::Net::Http {
class MultipartContent;
}
namespace System::Net {
class TransportContext;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
struct MultipartContent__SerializeToStreamAsync_d__8;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MultipartContent__SerializeToStreamAsync_d__8);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MultipartContent__SerializeToStreamAsync_d__8, "System.Net.Http", "MultipartContent/<SerializeToStreamAsync>d__8");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.Http.MultipartContent/<SerializeToStreamAsync>d__8
struct CORDL_TYPE MultipartContent__SerializeToStreamAsync_d__8 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa9e3c88, size 0xe68, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa9e4af0, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr MultipartContent__SerializeToStreamAsync_d__8() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::System::Net::Http::MultipartContent*", modifiers: "", def_value: None, comment: None }, CppParam { name: "stream", ty: "::System::IO::Stream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "context", ty: "::System::Net::TransportContext*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_sb_5__2", ty: "::System::Text::StringBuilder*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_i_5__3", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_c_5__4", ty: "::System::Net::Http::HttpContent*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr MultipartContent__SerializeToStreamAsync_d__8(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Net::Http::MultipartContent*  __4__this, ::System::IO::Stream*  stream, ::System::Net::TransportContext*  context, ::System::Text::StringBuilder*  _sb_5__2, int32_t  _i_5__3, ::System::Net::Http::HttpContent*  _c_5__4, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30729};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::System::Net::Http::MultipartContent*  __4__this;

/// @brief Field stream, offset: 0x28, size: 0x8, def value: None
 ::System::IO::Stream*  stream;

/// @brief Field context, offset: 0x30, size: 0x8, def value: None
 ::System::Net::TransportContext*  context;

/// @brief Field <sb>5__2, offset: 0x38, size: 0x8, def value: None
 ::System::Text::StringBuilder*  _sb_5__2;

/// @brief Field <i>5__3, offset: 0x40, size: 0x4, def value: None
 int32_t  _i_5__3;

/// @brief Field <c>5__4, offset: 0x48, size: 0x8, def value: None
 ::System::Net::Http::HttpContent*  _c_5__4;

/// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultipartContent__SerializeToStreamAsync_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultipartContent__SerializeToStreamAsync_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultipartContent__SerializeToStreamAsync_d__8, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultipartContent__SerializeToStreamAsync_d__8, stream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultipartContent__SerializeToStreamAsync_d__8, context) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultipartContent__SerializeToStreamAsync_d__8, _sb_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultipartContent__SerializeToStreamAsync_d__8, _i_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultipartContent__SerializeToStreamAsync_d__8, _c_5__4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultipartContent__SerializeToStreamAsync_d__8, __u__1) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MultipartContent__SerializeToStreamAsync_d__8) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
