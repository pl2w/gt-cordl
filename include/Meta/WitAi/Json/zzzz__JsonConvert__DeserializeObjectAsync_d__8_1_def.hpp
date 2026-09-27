#pragma once
// IWYU pragma private; include "Meta/WitAi/Json/JsonConvert__DeserializeObjectAsync_d__8_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Json/zzzz__JsonConverter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonConvert__DeserializeObjectAsync_d__8_1)
namespace Meta::WitAi::Json {
template<typename IN_TYPE>
class JsonConvert___c__DisplayClass8_0_1;
}
namespace Meta::WitAi::Json {
class JsonConverter;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename IN_TYPE>
struct JsonConvert__DeserializeObjectAsync_d__8_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::JsonConvert__DeserializeObjectAsync_d__8_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::JsonConvert__DeserializeObjectAsync_d__8_1, "Meta.WitAi.Json", "JsonConvert/<DeserializeObjectAsync>d__8`1");
// [CompilerGenerated]
// Dependencies Meta.WitAi.Json.JsonConverter, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// cpp template
template<typename IN_TYPE>
// Is value type: true
// CS Name: Meta.WitAi.Json.JsonConvert/<DeserializeObjectAsync>d__8`1<IN_TYPE>
struct CORDL_TYPE JsonConvert__DeserializeObjectAsync_d__8_1 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr JsonConvert__DeserializeObjectAsync_d__8_1() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<IN_TYPE>", modifiers: "", def_value: None, comment: None }, CppParam { name: "jsonString", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "customConverters", ty: "::ArrayW<::Meta::WitAi::Json::JsonConverter*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "suppressWarnings", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "__8__1", ty: "::Meta::WitAi::Json::JsonConvert___c__DisplayClass8_0_1<IN_TYPE>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<IN_TYPE>", modifiers: "", def_value: None, comment: None }]
constexpr JsonConvert__DeserializeObjectAsync_d__8_1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<IN_TYPE>  __t__builder, ::StringW  jsonString, ::ArrayW<::Meta::WitAi::Json::JsonConverter*>  customConverters, bool  suppressWarnings, ::Meta::WitAi::Json::JsonConvert___c__DisplayClass8_0_1<IN_TYPE>*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<IN_TYPE>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31019};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<IN_TYPE>  __t__builder;

/// @brief Field jsonString, offset: 0x20, size: 0x8, def value: None
 ::StringW  jsonString;

/// @brief Field customConverters, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::Meta::WitAi::Json::JsonConverter*>  customConverters;

/// @brief Field suppressWarnings, offset: 0x30, size: 0x1, def value: None
 bool  suppressWarnings;

/// @brief Field <>8__1, offset: 0x38, size: 0x8, def value: None
 ::Meta::WitAi::Json::JsonConvert___c__DisplayClass8_0_1<IN_TYPE>*  __8__1;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<IN_TYPE>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
