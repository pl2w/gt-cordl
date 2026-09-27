#pragma once
// IWYU pragma private; include "System/IO/StreamReader__ReadToEndAsyncInternal_d__63.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StreamReader__ReadToEndAsyncInternal_d__63)
namespace System::IO {
class StreamReader;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
struct StreamReader__ReadToEndAsyncInternal_d__63;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StreamReader__ReadToEndAsyncInternal_d__63);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StreamReader__ReadToEndAsyncInternal_d__63, "System.IO", "StreamReader/<ReadToEndAsyncInternal>d__63");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.IO.StreamReader/<ReadToEndAsyncInternal>d__63
struct CORDL_TYPE StreamReader__ReadToEndAsyncInternal_d__63 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa28a218, size 0x36c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa28a584, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr StreamReader__ReadToEndAsyncInternal_d__63() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::System::IO::StreamReader*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_sb_5__2", ty: "::System::Text::StringBuilder*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr StreamReader__ReadToEndAsyncInternal_d__63(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder, ::System::IO::StreamReader*  __4__this, ::System::Text::StringBuilder*  _sb_5__2, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7003};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::System::IO::StreamReader*  __4__this;

/// @brief Field <sb>5__2, offset: 0x28, size: 0x8, def value: None
 ::System::Text::StringBuilder*  _sb_5__2;

/// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StreamReader__ReadToEndAsyncInternal_d__63, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamReader__ReadToEndAsyncInternal_d__63, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamReader__ReadToEndAsyncInternal_d__63, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamReader__ReadToEndAsyncInternal_d__63, _sb_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamReader__ReadToEndAsyncInternal_d__63, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StreamReader__ReadToEndAsyncInternal_d__63) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
