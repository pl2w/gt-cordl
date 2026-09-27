#pragma once
// IWYU pragma private; include "Liv/Lck/Streaming/LckStreamer__StartNativeStreamerAsync_d__26.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckStreamer__StartNativeStreamerAsync_d__26)
namespace Liv::Lck::Streaming {
class LckStreamer;
}
namespace Liv::Lck {
class LckResult;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct LckStreamer__StartNativeStreamerAsync_d__26;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckStreamer__StartNativeStreamerAsync_d__26);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckStreamer__StartNativeStreamerAsync_d__26, "Liv.Lck.Streaming", "LckStreamer/<StartNativeStreamerAsync>d__26");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.Streaming.LckStreamer/<StartNativeStreamerAsync>d__26
struct CORDL_TYPE LckStreamer__StartNativeStreamerAsync_d__26 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9cfba1c, size 0x32c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9cfbd48, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr LckStreamer__StartNativeStreamerAsync_d__26() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Liv::Lck::LckResult*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Liv::Lck::Streaming::LckStreamer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Liv::Lck::LckResult*>", modifiers: "", def_value: None, comment: None }]
constexpr LckStreamer__StartNativeStreamerAsync_d__26(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Liv::Lck::LckResult*>  __t__builder, ::Liv::Lck::Streaming::LckStreamer*  __4__this, int32_t  width, int32_t  height, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Liv::Lck::LckResult*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32674};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Liv::Lck::LckResult*>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::Streaming::LckStreamer*  __4__this;

/// @brief Field width, offset: 0x28, size: 0x4, def value: None
 int32_t  width;

/// @brief Field height, offset: 0x2c, size: 0x4, def value: None
 int32_t  height;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Liv::Lck::LckResult*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckStreamer__StartNativeStreamerAsync_d__26, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckStreamer__StartNativeStreamerAsync_d__26, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckStreamer__StartNativeStreamerAsync_d__26, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckStreamer__StartNativeStreamerAsync_d__26, width) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckStreamer__StartNativeStreamerAsync_d__26, height) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckStreamer__StartNativeStreamerAsync_d__26, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckStreamer__StartNativeStreamerAsync_d__26) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
