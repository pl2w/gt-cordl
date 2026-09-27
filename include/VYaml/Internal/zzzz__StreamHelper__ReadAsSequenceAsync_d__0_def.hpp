#pragma once
// IWYU pragma private; include "VYaml/Internal/StreamHelper__ReadAsSequenceAsync_d__0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncValueTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable`1_ConfiguredValueTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StreamHelper__ReadAsSequenceAsync_d__0)
namespace System::IO {
class Stream;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace VYaml::Internal {
class ReusableByteSequenceBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
struct StreamHelper__ReadAsSequenceAsync_d__0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StreamHelper__ReadAsSequenceAsync_d__0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StreamHelper__ReadAsSequenceAsync_d__0, "VYaml.Internal", "StreamHelper/<ReadAsSequenceAsync>d__0");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1::ConfiguredValueTaskAwaiter<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: VYaml.Internal.StreamHelper/<ReadAsSequenceAsync>d__0
struct CORDL_TYPE StreamHelper__ReadAsSequenceAsync_d__0 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xb96ab68, size 0x9ac, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xb96b514, size 0x58, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr StreamHelper__ReadAsSequenceAsync_d__0() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<::VYaml::Internal::ReusableByteSequenceBuilder*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "stream", ty: "::System::IO::Stream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellation", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "_builder_5__2", ty: "::VYaml::Internal::ReusableByteSequenceBuilder*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_buffer_5__3", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_offset_5__4", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr StreamHelper__ReadAsSequenceAsync_d__0(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<::VYaml::Internal::ReusableByteSequenceBuilder*>  __t__builder, ::System::IO::Stream*  stream, ::System::Threading::CancellationToken  cancellation, ::VYaml::Internal::ReusableByteSequenceBuilder*  _builder_5__2, ::ArrayW<uint8_t>  _buffer_5__3, int32_t  _offset_5__4, ::GlobalNamespace::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29035};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x28, def value: None
 ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<::VYaml::Internal::ReusableByteSequenceBuilder*>  __t__builder;

/// @brief Field stream, offset: 0x30, size: 0x8, def value: None
 ::System::IO::Stream*  stream;

/// @brief Field cancellation, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellation;

/// @brief Field <builder>5__2, offset: 0x40, size: 0x8, def value: None
 ::VYaml::Internal::ReusableByteSequenceBuilder*  _builder_5__2;

/// @brief Field <buffer>5__3, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<uint8_t>  _buffer_5__3;

/// @brief Field <offset>5__4, offset: 0x50, size: 0x4, def value: None
 int32_t  _offset_5__4;

/// @brief Field <>u__1, offset: 0x58, size: 0x18, def value: None
 ::GlobalNamespace::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>  __u__1;

/// @brief Size padding 0x68 - 0x70 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StreamHelper__ReadAsSequenceAsync_d__0, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamHelper__ReadAsSequenceAsync_d__0, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamHelper__ReadAsSequenceAsync_d__0, stream) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamHelper__ReadAsSequenceAsync_d__0, cancellation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamHelper__ReadAsSequenceAsync_d__0, _builder_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamHelper__ReadAsSequenceAsync_d__0, _buffer_5__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamHelper__ReadAsSequenceAsync_d__0, _offset_5__4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamHelper__ReadAsSequenceAsync_d__0, __u__1) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StreamHelper__ReadAsSequenceAsync_d__0) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
