#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Search/ModioUISearch__SetSearch_d__83.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModioUISearch__SetSearch_d__83)
namespace Modio::Mods {
class ModSearchFilter;
}
namespace Modio::Mods {
class Mod;
}
namespace Modio::Unity::UI::Search {
class ModioUISearch;
}
namespace Modio {
class Error;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
// Forward declare root types
namespace GlobalNamespace {
struct ModioUISearch__SetSearch_d__83;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModioUISearch__SetSearch_d__83);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModioUISearch__SetSearch_d__83, "Modio.Unity.UI.Search", "ModioUISearch/<SetSearch>d__83");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`3<T1, T2, T3>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.Unity.UI.Search.ModioUISearch/<SetSearch>d__83
struct CORDL_TYPE ModioUISearch__SetSearch_d__83 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9fa2674, size 0x7e4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9fa2e58, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModioUISearch__SetSearch_d__83() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Modio::Unity::UI::Search::ModioUISearch>", modifiers: "", def_value: None, comment: None }, CppParam { name: "searchFilter", ty: "::Modio::Mods::ModSearchFilter*", modifiers: "", def_value: None, comment: None }, CppParam { name: "isAdditiveSearch", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "customResultProvider", ty: "::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_asyncSearchIndex_5__2", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>", modifiers: "", def_value: None, comment: None }]
constexpr ModioUISearch__SetSearch_d__83(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::Modio::Unity::UI::Search::ModioUISearch>  __4__this, ::Modio::Mods::ModSearchFilter*  searchFilter, bool  isAdditiveSearch, ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>*  customResultProvider, int32_t  _asyncSearchIndex_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27041};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Search::ModioUISearch>  __4__this;

/// @brief Field searchFilter, offset: 0x30, size: 0x8, def value: None
 ::Modio::Mods::ModSearchFilter*  searchFilter;

/// @brief Field isAdditiveSearch, offset: 0x38, size: 0x1, def value: None
 bool  isAdditiveSearch;

/// [TupleElementNames(new[] { "error", "mods", "totalCount" })]
/// @brief Field customResultProvider, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>*  customResultProvider;

/// @brief Field <asyncSearchIndex>5__2, offset: 0x48, size: 0x4, def value: None
 int32_t  _asyncSearchIndex_5__2;

/// [TupleElementNames(new[] { "error", "mods", "totalCount" })]
/// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModioUISearch__SetSearch_d__83, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUISearch__SetSearch_d__83, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUISearch__SetSearch_d__83, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUISearch__SetSearch_d__83, searchFilter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUISearch__SetSearch_d__83, isAdditiveSearch) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUISearch__SetSearch_d__83, customResultProvider) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUISearch__SetSearch_d__83, _asyncSearchIndex_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUISearch__SetSearch_d__83, __u__1) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModioUISearch__SetSearch_d__83) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
