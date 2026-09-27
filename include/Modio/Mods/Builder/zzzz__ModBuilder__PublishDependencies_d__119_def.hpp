#pragma once
// IWYU pragma private; include "Modio/Mods/Builder/ModBuilder__PublishDependencies_d__119.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__AddModDependenciesResponse_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModBuilder__PublishDependencies_d__119)
namespace Modio::Mods::Builder {
class ModBuilder;
}
namespace Modio {
class Error;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct ModBuilder__PublishDependencies_d__119;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModBuilder__PublishDependencies_d__119);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModBuilder__PublishDependencies_d__119, "Modio.Mods.Builder", "ModBuilder/<PublishDependencies>d__119");
// [CompilerGenerated]
// Dependencies Modio.API.SchemaDefinitions.AddModDependenciesResponse, System.Nullable`1<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.Mods.Builder.ModBuilder/<PublishDependencies>d__119
struct CORDL_TYPE ModBuilder__PublishDependencies_d__119 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa035c98, size 0x46c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa036104, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModBuilder__PublishDependencies_d__119() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Modio::Mods::Builder::ModBuilder*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::AddModDependenciesResponse>>>", modifiers: "", def_value: None, comment: None }]
constexpr ModBuilder__PublishDependencies_d__119(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder, ::Modio::Mods::Builder::ModBuilder*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::AddModDependenciesResponse>>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17609};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Modio::Mods::Builder::ModBuilder*  __4__this;

/// [TupleElementNames(new[] { "error", "addModDependenciesResponse" })]
/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::AddModDependenciesResponse>>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModBuilder__PublishDependencies_d__119, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModBuilder__PublishDependencies_d__119, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModBuilder__PublishDependencies_d__119, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModBuilder__PublishDependencies_d__119, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModBuilder__PublishDependencies_d__119) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
