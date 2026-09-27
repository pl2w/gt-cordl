#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JContainer__ReadContentFromAsync_d__1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JContainer__ReadContentFromAsync_d__1)
namespace Newtonsoft::Json::Linq {
class JContainer;
}
namespace Newtonsoft::Json::Linq {
class JsonLoadSettings;
}
namespace Newtonsoft::Json {
class IJsonLineInfo;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct JContainer__ReadContentFromAsync_d__1;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::JContainer__ReadContentFromAsync_d__1);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JContainer__ReadContentFromAsync_d__1, "Newtonsoft.Json.Linq", "JContainer/<ReadContentFromAsync>d__1");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: Newtonsoft.Json.Linq.JContainer/<ReadContentFromAsync>d__1
struct CORDL_TYPE JContainer__ReadContentFromAsync_d__1 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa3d4f48, size 0x9fc, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa3d5944, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr JContainer__ReadContentFromAsync_d__1() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "reader", ty: "::Newtonsoft::Json::JsonReader*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Newtonsoft::Json::Linq::JContainer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "settings", ty: "::Newtonsoft::Json::Linq::JsonLoadSettings*", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "_lineInfo_5__2", ty: "::Newtonsoft::Json::IJsonLineInfo*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_parent_5__3", ty: "::Newtonsoft::Json::Linq::JContainer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None, comment: None }]
constexpr JContainer__ReadContentFromAsync_d__1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Newtonsoft::Json::JsonReader*  reader, ::Newtonsoft::Json::Linq::JContainer*  __4__this, ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings, ::System::Threading::CancellationToken  cancellationToken, ::Newtonsoft::Json::IJsonLineInfo*  _lineInfo_5__2, ::Newtonsoft::Json::Linq::JContainer*  _parent_5__3, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23321};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// [Nullable(0)]
/// @brief Field reader, offset: 0x20, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonReader*  reader;

/// [Nullable(0)]
/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Newtonsoft::Json::Linq::JContainer*  __4__this;

/// [Nullable(0)]
/// @brief Field settings, offset: 0x30, size: 0x8, def value: None
 ::Newtonsoft::Json::Linq::JsonLoadSettings*  settings;

/// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// [Nullable(0)]
/// @brief Field <lineInfo>5__2, offset: 0x40, size: 0x8, def value: None
 ::Newtonsoft::Json::IJsonLineInfo*  _lineInfo_5__2;

/// [Nullable(0)]
/// @brief Field <parent>5__3, offset: 0x48, size: 0x8, def value: None
 ::Newtonsoft::Json::Linq::JContainer*  _parent_5__3;

/// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1;

/// [Nullable(0)]
/// @brief Field <>u__2, offset: 0x60, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JContainer__ReadContentFromAsync_d__1, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JContainer__ReadContentFromAsync_d__1, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JContainer__ReadContentFromAsync_d__1, reader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JContainer__ReadContentFromAsync_d__1, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JContainer__ReadContentFromAsync_d__1, settings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JContainer__ReadContentFromAsync_d__1, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JContainer__ReadContentFromAsync_d__1, _lineInfo_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JContainer__ReadContentFromAsync_d__1, _parent_5__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JContainer__ReadContentFromAsync_d__1, __u__1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JContainer__ReadContentFromAsync_d__1, __u__2) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JContainer__ReadContentFromAsync_d__1) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
