#pragma once
// IWYU pragma private; include "Modio/Mods/ModDependencies__FetchDependencies_d__14.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__Pagination_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModDependencies__FetchDependencies_d__14)
namespace Modio::API::SchemaDefinitions {
struct ModDependenciesObject;
}
namespace Modio::API {
class Dependencies_ModioAPI_GetModDependenciesFilter;
}
namespace Modio::Mods {
class ModDependencies;
}
namespace Modio::Mods {
class Mod;
}
namespace Modio {
class Error;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct ModDependencies__FetchDependencies_d__14;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModDependencies__FetchDependencies_d__14);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModDependencies__FetchDependencies_d__14, "Modio.Mods", "ModDependencies/<FetchDependencies>d__14");
// [CompilerGenerated]
// Dependencies Modio.API.SchemaDefinitions.Pagination`1<T>, System.Collections.Generic.List`1<T>, System.Nullable`1<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.Mods.ModDependencies/<FetchDependencies>d__14
struct CORDL_TYPE ModDependencies__FetchDependencies_d__14 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa02f9dc, size 0xcf4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa0306d0, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModDependencies__FetchDependencies_d__14() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Modio::Mods::ModDependencies*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_newMap_5__2", ty: "::ArrayW<::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_filter_5__3", ty: "::Modio::API::Dependencies_ModioAPI_GetModDependenciesFilter*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::ModDependenciesObject>>>>>", modifiers: "", def_value: None, comment: None }]
constexpr ModDependencies__FetchDependencies_d__14(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder, ::Modio::Mods::ModDependencies*  __4__this, ::ArrayW<::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*>  _newMap_5__2, ::Modio::API::Dependencies_ModioAPI_GetModDependenciesFilter*  _filter_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::ModDependenciesObject>>>>>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17586};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Modio::Mods::ModDependencies*  __4__this;

/// @brief Field <newMap>5__2, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*>  _newMap_5__2;

/// @brief Field <filter>5__3, offset: 0x30, size: 0x8, def value: None
 ::Modio::API::Dependencies_ModioAPI_GetModDependenciesFilter*  _filter_5__3;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__1;

/// [TupleElementNames(new[] { "error", "modDependenciesObjects" })]
/// @brief Field <>u__2, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::ModDependenciesObject>>>>>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModDependencies__FetchDependencies_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModDependencies__FetchDependencies_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModDependencies__FetchDependencies_d__14, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModDependencies__FetchDependencies_d__14, _newMap_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModDependencies__FetchDependencies_d__14, _filter_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModDependencies__FetchDependencies_d__14, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModDependencies__FetchDependencies_d__14, __u__2) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModDependencies__FetchDependencies_d__14) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
