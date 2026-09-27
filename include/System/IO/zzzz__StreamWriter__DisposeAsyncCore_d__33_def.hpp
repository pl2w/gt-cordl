#pragma once
// IWYU pragma private; include "System/IO/StreamWriter__DisposeAsyncCore_d__33.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncValueTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StreamWriter__DisposeAsyncCore_d__33)
namespace System::IO {
class StreamWriter;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct StreamWriter__DisposeAsyncCore_d__33;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StreamWriter__DisposeAsyncCore_d__33);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StreamWriter__DisposeAsyncCore_d__33, "System.IO", "StreamWriter/<DisposeAsyncCore>d__33");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.IO.StreamWriter/<DisposeAsyncCore>d__33
struct CORDL_TYPE StreamWriter__DisposeAsyncCore_d__33 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa28fca4, size 0x2b8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa28ff5c, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr StreamWriter__DisposeAsyncCore_d__33() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::System::IO::StreamWriter*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr StreamWriter__DisposeAsyncCore_d__33(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder  __t__builder, ::System::IO::StreamWriter*  __4__this, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7007};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::System::IO::StreamWriter*  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StreamWriter__DisposeAsyncCore_d__33, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__DisposeAsyncCore_d__33, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__DisposeAsyncCore_d__33, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__DisposeAsyncCore_d__33, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StreamWriter__DisposeAsyncCore_d__33) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
