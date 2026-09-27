#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JContainer__ReadTokenFromAsync_d__0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JContainer__ReadTokenFromAsync_d__0)
namespace Newtonsoft::Json::Linq {
class JContainer;
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
struct JContainer__ReadTokenFromAsync_d__0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::JContainer__ReadTokenFromAsync_d__0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JContainer__ReadTokenFromAsync_d__0, "Newtonsoft.Json.Linq", "JContainer/<ReadTokenFromAsync>d__0");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: Newtonsoft.Json.Linq.JContainer/<ReadTokenFromAsync>d__0
struct CORDL_TYPE JContainer__ReadTokenFromAsync_d__0 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa3d59ac, size 0x53c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa3d5ee8, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr JContainer__ReadTokenFromAsync_d__0() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "reader", ty: "::Newtonsoft::Json::JsonReader*", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::Linq::JContainer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "options", ty: "::Newtonsoft::Json::Linq::JsonLoadSettings*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_startDepth_5__2", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr JContainer__ReadTokenFromAsync_d__0(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Newtonsoft::Json::JsonReader*  reader, ::System::Threading::CancellationToken  cancellationToken, ::Newtonsoft::Json::Linq::JContainer*  __4__this, ::Newtonsoft::Json::Linq::JsonLoadSettings*  options, int32_t  _startDepth_5__2, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>  __u__1, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23322};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// [Nullable(0)]
/// @brief Field reader, offset: 0x20, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonReader*  reader;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// [Nullable(0)]
/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::Newtonsoft::Json::Linq::JContainer*  __4__this;

/// [Nullable(0)]
/// @brief Field options, offset: 0x38, size: 0x8, def value: None
 ::Newtonsoft::Json::Linq::JsonLoadSettings*  options;

/// @brief Field <startDepth>5__2, offset: 0x40, size: 0x4, def value: None
 int32_t  _startDepth_5__2;

/// [Nullable(0)]
/// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>  __u__1;

/// @brief Field <>u__2, offset: 0x58, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JContainer__ReadTokenFromAsync_d__0, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JContainer__ReadTokenFromAsync_d__0, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JContainer__ReadTokenFromAsync_d__0, reader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JContainer__ReadTokenFromAsync_d__0, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JContainer__ReadTokenFromAsync_d__0, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JContainer__ReadTokenFromAsync_d__0, options) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JContainer__ReadTokenFromAsync_d__0, _startDepth_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JContainer__ReadTokenFromAsync_d__0, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JContainer__ReadTokenFromAsync_d__0, __u__2) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JContainer__ReadTokenFromAsync_d__0) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
