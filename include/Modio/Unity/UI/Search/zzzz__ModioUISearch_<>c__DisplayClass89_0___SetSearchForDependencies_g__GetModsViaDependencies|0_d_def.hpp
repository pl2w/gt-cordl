#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Search/ModioUISearch_<>c__DisplayClass89_0___SetSearchForDependencies_g__GetModsViaDependencies|0_d.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModioUISearch_<>c__DisplayClass89_0___SetSearchForDependencies_g__GetModsViaDependencies|0_d)
namespace Modio::Mods {
class Mod;
}
namespace Modio::Unity::UI::Search {
class ModioUISearch___c__DisplayClass89_0;
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
struct __c__DisplayClass89_0_ModioUISearch___SetSearchForDependencies_g__GetModsViaDependencies_0_d;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__c__DisplayClass89_0_ModioUISearch___SetSearchForDependencies_g__GetModsViaDependencies_0_d);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::__c__DisplayClass89_0_ModioUISearch___SetSearchForDependencies_g__GetModsViaDependencies_0_d, "Modio.Unity.UI.Search", "ModioUISearch/<>c__DisplayClass89_0/<<SetSearchForDependencies>g__GetModsViaDependencies|0>d");
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>, System.ValueTuple`3<T1, T2, T3>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.Unity.UI.Search.ModioUISearch/<>c__DisplayClass89_0/<<SetSearchForDependencies>g__GetModsViaDependencies|0>d
struct CORDL_TYPE __c__DisplayClass89_0_ModioUISearch___SetSearchForDependencies_g__GetModsViaDependencies_0_d {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9fa0ce0, size 0x4fc, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9fa11dc, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __c__DisplayClass89_0_ModioUISearch___SetSearchForDependencies_g__GetModsViaDependencies_0_d() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass89_0*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*>>", modifiers: "", def_value: None, comment: None }]
constexpr __c__DisplayClass89_0_ModioUISearch___SetSearchForDependencies_g__GetModsViaDependencies_0_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>  __t__builder, ::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass89_0*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27036};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// [TupleElementNames(new[] { "error", "dependencies", "totalCount" })]
/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass89_0*  __4__this;

/// [TupleElementNames(new[] { "error", "results" })]
/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::__c__DisplayClass89_0_ModioUISearch___SetSearchForDependencies_g__GetModsViaDependencies_0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__c__DisplayClass89_0_ModioUISearch___SetSearchForDependencies_g__GetModsViaDependencies_0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__c__DisplayClass89_0_ModioUISearch___SetSearchForDependencies_g__GetModsViaDependencies_0_d, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__c__DisplayClass89_0_ModioUISearch___SetSearchForDependencies_g__GetModsViaDependencies_0_d, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::__c__DisplayClass89_0_ModioUISearch___SetSearchForDependencies_g__GetModsViaDependencies_0_d) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
