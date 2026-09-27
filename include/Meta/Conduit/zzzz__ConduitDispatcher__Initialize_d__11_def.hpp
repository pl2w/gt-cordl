#pragma once
// IWYU pragma private; include "Meta/Conduit/ConduitDispatcher__Initialize_d__11.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConduitDispatcher__Initialize_d__11)
namespace Meta::Conduit {
class ConduitDispatcher;
}
namespace Meta::Conduit {
class Manifest;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct ConduitDispatcher__Initialize_d__11;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ConduitDispatcher__Initialize_d__11);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConduitDispatcher__Initialize_d__11, "Meta.Conduit", "ConduitDispatcher/<Initialize>d__11");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.Conduit.ConduitDispatcher/<Initialize>d__11
struct CORDL_TYPE ConduitDispatcher__Initialize_d__11 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9e1e1f8, size 0x608, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9e1e800, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ConduitDispatcher__Initialize_d__11() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Meta::Conduit::ConduitDispatcher*", modifiers: "", def_value: None, comment: None }, CppParam { name: "manifestFilePath", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::Conduit::Manifest*>", modifiers: "", def_value: None, comment: None }]
constexpr ConduitDispatcher__Initialize_d__11(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Meta::Conduit::ConduitDispatcher*  __4__this, ::StringW  manifestFilePath, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::Conduit::Manifest*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25407};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Meta::Conduit::ConduitDispatcher*  __4__this;

/// @brief Field manifestFilePath, offset: 0x28, size: 0x8, def value: None
 ::StringW  manifestFilePath;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::Conduit::Manifest*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConduitDispatcher__Initialize_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConduitDispatcher__Initialize_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConduitDispatcher__Initialize_d__11, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConduitDispatcher__Initialize_d__11, manifestFilePath) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConduitDispatcher__Initialize_d__11, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ConduitDispatcher__Initialize_d__11) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
