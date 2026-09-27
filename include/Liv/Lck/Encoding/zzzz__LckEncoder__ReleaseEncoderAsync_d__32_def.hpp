#pragma once
// IWYU pragma private; include "Liv/Lck/Encoding/LckEncoder__ReleaseEncoderAsync_d__32.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Encoding/zzzz__EncoderConsumer_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckEncoder__ReleaseEncoderAsync_d__32)
namespace Liv::Lck::Encoding {
struct LckEncodedPacketHandler;
}
namespace Liv::Lck::Encoding {
class LckEncoder;
}
namespace Liv::Lck {
class LckResult;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct LckEncoder__ReleaseEncoderAsync_d__32;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckEncoder__ReleaseEncoderAsync_d__32);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckEncoder__ReleaseEncoderAsync_d__32, "Liv.Lck.Encoding", "LckEncoder/<ReleaseEncoderAsync>d__32");
// [CompilerGenerated]
// Dependencies Liv.Lck.Encoding.EncoderConsumer, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.Encoding.LckEncoder/<ReleaseEncoderAsync>d__32
struct CORDL_TYPE LckEncoder__ReleaseEncoderAsync_d__32 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9d46a94, size 0x734, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9d471c8, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr LckEncoder__ReleaseEncoderAsync_d__32() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Liv::Lck::LckResult*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Liv::Lck::Encoding::LckEncoder*", modifiers: "", def_value: None, comment: None }, CppParam { name: "consumer", ty: "::Liv::Lck::Encoding::EncoderConsumer", modifiers: "", def_value: None, comment: None }, CppParam { name: "handlers", ty: "::System::Collections::Generic::IEnumerable_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Liv::Lck::LckResult*>", modifiers: "", def_value: None, comment: None }]
constexpr LckEncoder__ReleaseEncoderAsync_d__32(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Liv::Lck::LckResult*>  __t__builder, ::Liv::Lck::Encoding::LckEncoder*  __4__this, ::Liv::Lck::Encoding::EncoderConsumer  consumer, ::System::Collections::Generic::IEnumerable_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*  handlers, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Liv::Lck::LckResult*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24884};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Liv::Lck::LckResult*>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::Encoding::LckEncoder*  __4__this;

/// @brief Field consumer, offset: 0x28, size: 0x4, def value: None
 ::Liv::Lck::Encoding::EncoderConsumer  consumer;

/// @brief Field handlers, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*  handlers;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Liv::Lck::LckResult*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckEncoder__ReleaseEncoderAsync_d__32, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEncoder__ReleaseEncoderAsync_d__32, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEncoder__ReleaseEncoderAsync_d__32, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEncoder__ReleaseEncoderAsync_d__32, consumer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEncoder__ReleaseEncoderAsync_d__32, handlers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEncoder__ReleaseEncoderAsync_d__32, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckEncoder__ReleaseEncoderAsync_d__32) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
