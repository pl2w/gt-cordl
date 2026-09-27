#pragma once
// IWYU pragma private; include "System/IO/TextReader__ReadToEndAsync_d__14.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable`1_ConfiguredValueTaskAwaiter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextReader__ReadToEndAsync_d__14)
namespace System::IO {
class TextReader;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
struct TextReader__ReadToEndAsync_d__14;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TextReader__ReadToEndAsync_d__14);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TextReader__ReadToEndAsync_d__14, "System.IO", "TextReader/<ReadToEndAsync>d__14");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1::ConfiguredValueTaskAwaiter<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.IO.TextReader/<ReadToEndAsync>d__14
struct CORDL_TYPE TextReader__ReadToEndAsync_d__14 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa292540, size 0x614, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa292b54, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr TextReader__ReadToEndAsync_d__14() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::System::IO::TextReader*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_sb_5__2", ty: "::System::Text::StringBuilder*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_chars_5__3", ty: "::ArrayW<char16_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr TextReader__ReadToEndAsync_d__14(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder, ::System::IO::TextReader*  __4__this, ::System::Text::StringBuilder*  _sb_5__2, ::ArrayW<char16_t>  _chars_5__3, ::GlobalNamespace::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7016};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::System::IO::TextReader*  __4__this;

/// @brief Field <sb>5__2, offset: 0x28, size: 0x8, def value: None
 ::System::Text::StringBuilder*  _sb_5__2;

/// @brief Field <chars>5__3, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<char16_t>  _chars_5__3;

/// @brief Field <>u__1, offset: 0x38, size: 0x18, def value: None
 ::GlobalNamespace::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>  __u__1;

/// @brief Size padding 0x48 - 0x50 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextReader__ReadToEndAsync_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextReader__ReadToEndAsync_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextReader__ReadToEndAsync_d__14, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextReader__ReadToEndAsync_d__14, _sb_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextReader__ReadToEndAsync_d__14, _chars_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextReader__ReadToEndAsync_d__14, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TextReader__ReadToEndAsync_d__14) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
