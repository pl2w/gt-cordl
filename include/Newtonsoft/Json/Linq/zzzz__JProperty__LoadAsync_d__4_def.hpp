#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JProperty__LoadAsync_d__4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JProperty__LoadAsync_d__4)
namespace Newtonsoft::Json::Linq {
class JProperty;
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
struct JProperty__LoadAsync_d__4;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::JProperty__LoadAsync_d__4);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JProperty__LoadAsync_d__4, "Newtonsoft.Json.Linq", "JProperty/<LoadAsync>d__4");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: Newtonsoft.Json.Linq.JProperty/<LoadAsync>d__4
struct CORDL_TYPE JProperty__LoadAsync_d__4 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa3da010, size 0x6b0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa3da6c0, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr JProperty__LoadAsync_d__4() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Newtonsoft::Json::Linq::JProperty*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "reader", ty: "::Newtonsoft::Json::JsonReader*", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "settings", ty: "::Newtonsoft::Json::Linq::JsonLoadSettings*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_p_5__2", ty: "::Newtonsoft::Json::Linq::JProperty*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr JProperty__LoadAsync_d__4(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Newtonsoft::Json::Linq::JProperty*>  __t__builder, ::Newtonsoft::Json::JsonReader*  reader, ::System::Threading::CancellationToken  cancellationToken, ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings, ::Newtonsoft::Json::Linq::JProperty*  _p_5__2, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>  __u__1, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23332};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// [Nullable(0)]
/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Newtonsoft::Json::Linq::JProperty*>  __t__builder;

/// [Nullable(0)]
/// @brief Field reader, offset: 0x20, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonReader*  reader;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// [Nullable(0)]
/// @brief Field settings, offset: 0x30, size: 0x8, def value: None
 ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings;

/// [Nullable(0)]
/// @brief Field <p>5__2, offset: 0x38, size: 0x8, def value: None
 ::Newtonsoft::Json::Linq::JProperty*  _p_5__2;

/// [Nullable(0)]
/// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>  __u__1;

/// @brief Field <>u__2, offset: 0x50, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JProperty__LoadAsync_d__4, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JProperty__LoadAsync_d__4, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JProperty__LoadAsync_d__4, reader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JProperty__LoadAsync_d__4, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JProperty__LoadAsync_d__4, settings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JProperty__LoadAsync_d__4, _p_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JProperty__LoadAsync_d__4, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JProperty__LoadAsync_d__4, __u__2) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JProperty__LoadAsync_d__4) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
