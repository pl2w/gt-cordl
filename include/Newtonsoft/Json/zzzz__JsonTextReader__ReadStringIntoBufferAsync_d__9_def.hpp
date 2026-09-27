#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonTextReader__ReadStringIntoBufferAsync_d__9.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonTextReader__ReadStringIntoBufferAsync_d__9)
namespace Newtonsoft::Json {
class JsonTextReader;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct JsonTextReader__ReadStringIntoBufferAsync_d__9;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::JsonTextReader__ReadStringIntoBufferAsync_d__9);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JsonTextReader__ReadStringIntoBufferAsync_d__9, "Newtonsoft.Json", "JsonTextReader/<ReadStringIntoBufferAsync>d__9");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonTextReader/<ReadStringIntoBufferAsync>d__9
struct CORDL_TYPE JsonTextReader__ReadStringIntoBufferAsync_d__9 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa388cf8, size 0xd34, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa389a2c, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr JsonTextReader__ReadStringIntoBufferAsync_d__9() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "quote", ty: "char16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_charPos_5__2", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_initialPosition_5__3", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_lastWritePosition_5__4", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_escapeStartPos_5__5", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_writeChar_5__6", ty: "char16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__3", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<char16_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_anotherHighSurrogate_5__7", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_highSurrogate_5__8", ty: "char16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__4", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr JsonTextReader__ReadStringIntoBufferAsync_d__9(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Newtonsoft::Json::JsonTextReader*  __4__this, ::System::Threading::CancellationToken  cancellationToken, char16_t  quote, int32_t  _charPos_5__2, int32_t  _initialPosition_5__3, int32_t  _lastWritePosition_5__4, int32_t  _escapeStartPos_5__5, char16_t  _writeChar_5__6, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>  __u__1, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>  __u__2, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<char16_t>  __u__3, bool  _anotherHighSurrogate_5__7, char16_t  _highSurrogate_5__8, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__4) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23134};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// [Nullable(0)]
/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonTextReader*  __4__this;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field quote, offset: 0x30, size: 0x2, def value: None
 char16_t  quote;

/// @brief Field <charPos>5__2, offset: 0x34, size: 0x4, def value: None
 int32_t  _charPos_5__2;

/// @brief Field <initialPosition>5__3, offset: 0x38, size: 0x4, def value: None
 int32_t  _initialPosition_5__3;

/// @brief Field <lastWritePosition>5__4, offset: 0x3c, size: 0x4, def value: None
 int32_t  _lastWritePosition_5__4;

/// @brief Field <escapeStartPos>5__5, offset: 0x40, size: 0x4, def value: None
 int32_t  _escapeStartPos_5__5;

/// @brief Field <writeChar>5__6, offset: 0x44, size: 0x2, def value: None
 char16_t  _writeChar_5__6;

/// [Nullable(0)]
/// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>  __u__1;

/// [Nullable(0)]
/// @brief Field <>u__2, offset: 0x58, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>  __u__2;

/// [Nullable(0)]
/// @brief Field <>u__3, offset: 0x68, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<char16_t>  __u__3;

/// @brief Field <anotherHighSurrogate>5__7, offset: 0x78, size: 0x1, def value: None
 bool  _anotherHighSurrogate_5__7;

/// @brief Field <highSurrogate>5__8, offset: 0x7a, size: 0x2, def value: None
 char16_t  _highSurrogate_5__8;

/// @brief Field <>u__4, offset: 0x80, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JsonTextReader__ReadStringIntoBufferAsync_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__ReadStringIntoBufferAsync_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__ReadStringIntoBufferAsync_d__9, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__ReadStringIntoBufferAsync_d__9, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__ReadStringIntoBufferAsync_d__9, quote) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__ReadStringIntoBufferAsync_d__9, _charPos_5__2) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__ReadStringIntoBufferAsync_d__9, _initialPosition_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__ReadStringIntoBufferAsync_d__9, _lastWritePosition_5__4) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__ReadStringIntoBufferAsync_d__9, _escapeStartPos_5__5) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__ReadStringIntoBufferAsync_d__9, _writeChar_5__6) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__ReadStringIntoBufferAsync_d__9, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__ReadStringIntoBufferAsync_d__9, __u__2) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__ReadStringIntoBufferAsync_d__9, __u__3) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__ReadStringIntoBufferAsync_d__9, _anotherHighSurrogate_5__7) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__ReadStringIntoBufferAsync_d__9, _highSurrogate_5__8) == 0x7a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JsonTextReader__ReadStringIntoBufferAsync_d__9, __u__4) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JsonTextReader__ReadStringIntoBufferAsync_d__9) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
