#pragma once
// IWYU pragma private; include "Meta/Conduit/ManifestLoader__LoadManifestFromJsonAsync_d__6.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ManifestLoader__LoadManifestFromJsonAsync_d__6)
namespace Meta::Conduit {
class ManifestLoader;
}
namespace Meta::Conduit {
class ManifestLoader___c__DisplayClass6_0;
}
namespace Meta::Conduit {
class Manifest;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct ManifestLoader__LoadManifestFromJsonAsync_d__6;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ManifestLoader__LoadManifestFromJsonAsync_d__6);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ManifestLoader__LoadManifestFromJsonAsync_d__6, "Meta.Conduit", "ManifestLoader/<LoadManifestFromJsonAsync>d__6");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.Conduit.ManifestLoader/<LoadManifestFromJsonAsync>d__6
struct CORDL_TYPE ManifestLoader__LoadManifestFromJsonAsync_d__6 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9e22c4c, size 0x54c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9e23198, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ManifestLoader__LoadManifestFromJsonAsync_d__6() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::Conduit::Manifest*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Meta::Conduit::ManifestLoader*", modifiers: "", def_value: None, comment: None }, CppParam { name: "manifestText", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__8__1", ty: "::Meta::Conduit::ManifestLoader___c__DisplayClass6_0*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::Conduit::Manifest*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr ManifestLoader__LoadManifestFromJsonAsync_d__6(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::Conduit::Manifest*>  __t__builder, ::Meta::Conduit::ManifestLoader*  __4__this, ::StringW  manifestText, ::Meta::Conduit::ManifestLoader___c__DisplayClass6_0*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::Conduit::Manifest*>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25422};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::Conduit::Manifest*>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Meta::Conduit::ManifestLoader*  __4__this;

/// @brief Field manifestText, offset: 0x28, size: 0x8, def value: None
 ::StringW  manifestText;

/// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
 ::Meta::Conduit::ManifestLoader___c__DisplayClass6_0*  __8__1;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::Conduit::Manifest*>  __u__1;

/// @brief Field <>u__2, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ManifestLoader__LoadManifestFromJsonAsync_d__6, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManifestLoader__LoadManifestFromJsonAsync_d__6, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManifestLoader__LoadManifestFromJsonAsync_d__6, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManifestLoader__LoadManifestFromJsonAsync_d__6, manifestText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManifestLoader__LoadManifestFromJsonAsync_d__6, __8__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManifestLoader__LoadManifestFromJsonAsync_d__6, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManifestLoader__LoadManifestFromJsonAsync_d__6, __u__2) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ManifestLoader__LoadManifestFromJsonAsync_d__6) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
