#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Search/ModioUISearch__GetModsViaLocalQuery_d__86.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModioUISearch__GetModsViaLocalQuery_d__86)
namespace Modio::Mods {
class Mod;
}
namespace Modio::Unity::UI::Search {
class ModioUISearch;
}
namespace Modio::Users {
class ModRepository;
}
namespace Modio {
class Error;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct ModioUISearch__GetModsViaLocalQuery_d__86;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModioUISearch__GetModsViaLocalQuery_d__86);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModioUISearch__GetModsViaLocalQuery_d__86, "Modio.Unity.UI.Search", "ModioUISearch/<GetModsViaLocalQuery>d__86");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`3<T1, T2, T3>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.Unity.UI.Search.ModioUISearch/<GetModsViaLocalQuery>d__86
struct CORDL_TYPE ModioUISearch__GetModsViaLocalQuery_d__86 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9fa18a8, size 0x86c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9fa2114, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModioUISearch__GetModsViaLocalQuery_d__86() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Modio::Unity::UI::Search::ModioUISearch>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_repo_5__2", ty: "::Modio::Users::ModRepository*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_mods_5__3", ty: "::System::Collections::Generic::IEnumerable_1<::Modio::Mods::Mod*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>", modifiers: "", def_value: None, comment: None }]
constexpr ModioUISearch__GetModsViaLocalQuery_d__86(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>  __t__builder, ::UnityW<::Modio::Unity::UI::Search::ModioUISearch>  __4__this, ::Modio::Users::ModRepository*  _repo_5__2, ::System::Collections::Generic::IEnumerable_1<::Modio::Mods::Mod*>*  _mods_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27039};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// [TupleElementNames(new[] { "error", "mods", "totalCount" })]
/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Search::ModioUISearch>  __4__this;

/// @brief Field <repo>5__2, offset: 0x28, size: 0x8, def value: None
 ::Modio::Users::ModRepository*  _repo_5__2;

/// @brief Field <mods>5__3, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<::Modio::Mods::Mod*>*  _mods_5__3;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModioUISearch__GetModsViaLocalQuery_d__86, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUISearch__GetModsViaLocalQuery_d__86, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUISearch__GetModsViaLocalQuery_d__86, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUISearch__GetModsViaLocalQuery_d__86, _repo_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUISearch__GetModsViaLocalQuery_d__86, _mods_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUISearch__GetModsViaLocalQuery_d__86, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModioUISearch__GetModsViaLocalQuery_d__86) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
