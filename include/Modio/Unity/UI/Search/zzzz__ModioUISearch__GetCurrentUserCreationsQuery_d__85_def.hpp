#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Search/ModioUISearch__GetCurrentUserCreationsQuery_d__85.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModioUISearch__GetCurrentUserCreationsQuery_d__85)
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
// Forward declare root types
namespace GlobalNamespace {
struct ModioUISearch__GetCurrentUserCreationsQuery_d__85;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModioUISearch__GetCurrentUserCreationsQuery_d__85);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModioUISearch__GetCurrentUserCreationsQuery_d__85, "Modio.Unity.UI.Search", "ModioUISearch/<GetCurrentUserCreationsQuery>d__85");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.ValueTuple`3<T1, T2, T3>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.Unity.UI.Search.ModioUISearch/<GetCurrentUserCreationsQuery>d__85
struct CORDL_TYPE ModioUISearch__GetCurrentUserCreationsQuery_d__85 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9fa1258, size 0x5d4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9fa182c, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModioUISearch__GetCurrentUserCreationsQuery_d__85() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Modio::Unity::UI::Search::ModioUISearch>", modifiers: "", def_value: None, comment: None }]
constexpr ModioUISearch__GetCurrentUserCreationsQuery_d__85(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>  __t__builder, ::UnityW<::Modio::Unity::UI::Search::ModioUISearch>  __4__this) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27038};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// [TupleElementNames(new[] { "error", "mods", "totalCount" })]
/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Search::ModioUISearch>  __4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModioUISearch__GetCurrentUserCreationsQuery_d__85, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUISearch__GetCurrentUserCreationsQuery_d__85, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUISearch__GetCurrentUserCreationsQuery_d__85, __4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModioUISearch__GetCurrentUserCreationsQuery_d__85) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
