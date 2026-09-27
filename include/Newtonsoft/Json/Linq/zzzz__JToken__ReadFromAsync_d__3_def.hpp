#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JToken__ReadFromAsync_d__3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JToken__ReadFromAsync_d__3)
namespace Newtonsoft::Json::Linq {
class JArray;
}
namespace Newtonsoft::Json::Linq {
class JConstructor;
}
namespace Newtonsoft::Json::Linq {
class JObject;
}
namespace Newtonsoft::Json::Linq {
class JProperty;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace Newtonsoft::Json::Linq {
class JsonLoadSettings;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct JToken__ReadFromAsync_d__3;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::JToken__ReadFromAsync_d__3);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JToken__ReadFromAsync_d__3, "Newtonsoft.Json.Linq", "JToken/<ReadFromAsync>d__3");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: Newtonsoft.Json.Linq.JToken/<ReadFromAsync>d__3
struct CORDL_TYPE JToken__ReadFromAsync_d__3 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa3e2fac, size 0xa70, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa3e3a1c, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr JToken__ReadFromAsync_d__3() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Newtonsoft::Json::Linq::JToken*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "reader", ty: "::Newtonsoft::Json::JsonReader*", modifiers: "", def_value: None, comment: None }, CppParam { name: "settings", ty: "::Newtonsoft::Json::Linq::JsonLoadSettings*", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Newtonsoft::Json::Linq::JObject*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__3", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Newtonsoft::Json::Linq::JArray*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__4", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Newtonsoft::Json::Linq::JConstructor*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__5", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Newtonsoft::Json::Linq::JProperty*>", modifiers: "", def_value: None, comment: None }]
constexpr JToken__ReadFromAsync_d__3(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Newtonsoft::Json::Linq::JToken*>  __t__builder, ::Newtonsoft::Json::JsonReader*  reader, ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings, ::System::Threading::CancellationToken  cancellationToken, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>  __u__1, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Newtonsoft::Json::Linq::JObject*>  __u__2, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Newtonsoft::Json::Linq::JArray*>  __u__3, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Newtonsoft::Json::Linq::JConstructor*>  __u__4, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Newtonsoft::Json::Linq::JProperty*>  __u__5) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23340};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x88};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// [Nullable(0)]
/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Newtonsoft::Json::Linq::JToken*>  __t__builder;

/// [Nullable(0)]
/// @brief Field reader, offset: 0x20, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonReader*  reader;

/// [Nullable(0)]
/// @brief Field settings, offset: 0x28, size: 0x8, def value: None
 ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings;

/// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// [Nullable(0)]
/// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>  __u__1;

/// [Nullable(new[] { 0, 1 })]
/// @brief Field <>u__2, offset: 0x48, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Newtonsoft::Json::Linq::JObject*>  __u__2;

/// [Nullable(new[] { 0, 1 })]
/// @brief Field <>u__3, offset: 0x58, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Newtonsoft::Json::Linq::JArray*>  __u__3;

/// [Nullable(new[] { 0, 1 })]
/// @brief Field <>u__4, offset: 0x68, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Newtonsoft::Json::Linq::JConstructor*>  __u__4;

/// [Nullable(new[] { 0, 1 })]
/// @brief Field <>u__5, offset: 0x78, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Newtonsoft::Json::Linq::JProperty*>  __u__5;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JToken__ReadFromAsync_d__3, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JToken__ReadFromAsync_d__3, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JToken__ReadFromAsync_d__3, reader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JToken__ReadFromAsync_d__3, settings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JToken__ReadFromAsync_d__3, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JToken__ReadFromAsync_d__3, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JToken__ReadFromAsync_d__3, __u__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JToken__ReadFromAsync_d__3, __u__3) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JToken__ReadFromAsync_d__3, __u__4) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JToken__ReadFromAsync_d__3, __u__5) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JToken__ReadFromAsync_d__3) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
