#pragma once
// IWYU pragma private; include "Modio/Mods/Mod__GetMods_d__120.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Mod__GetMods_d__120)
namespace Modio::API {
class Mods_ModioAPI_GetModsFilter;
}
namespace Modio::Mods {
class Mod;
}
namespace Modio::Mods {
template<typename T>
class ModioPage_1;
}
namespace Modio {
class Error;
}
namespace Modio {
class ModIndex;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
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
struct Mod__GetMods_d__120;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Mod__GetMods_d__120);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Mod__GetMods_d__120, "Modio.Mods", "Mod/<GetMods>d__120");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.Mods.Mod/<GetMods>d__120
struct CORDL_TYPE Mod__GetMods_d__120 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa02bc6c, size 0x169c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa02d314, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr Mod__GetMods_d__120() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "neededModIds", ty: "::System::Collections::Generic::ICollection_1<int64_t>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "forceRefresh", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "tempIndex", ty: "::Modio::ModIndex*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_output_5__2", ty: "::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_filter_5__3", ty: "::Modio::API::Mods_ModioAPI_GetModsFilter*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_modInstallManagementRefreshList_5__4", ty: "::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::ModioPage_1<::Modio::Mods::Mod*>*>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap4", ty: "::System::Collections::Generic::IEnumerator_1<int64_t>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_modId_5__6", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>", modifiers: "", def_value: None, comment: None }]
constexpr Mod__GetMods_d__120(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>>  __t__builder, ::System::Collections::Generic::ICollection_1<int64_t>*  neededModIds, bool  forceRefresh, ::Modio::ModIndex*  tempIndex, ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  _output_5__2, ::Modio::API::Mods_ModioAPI_GetModsFilter*  _filter_5__3, ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  _modInstallManagementRefreshList_5__4, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::ModioPage_1<::Modio::Mods::Mod*>*>>  __u__1, ::System::Collections::Generic::IEnumerator_1<int64_t>*  __7__wrap4, int64_t  _modId_5__6, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17576};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// [TupleElementNames(new[] { "error", null })]
/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>>  __t__builder;

/// @brief Field neededModIds, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::ICollection_1<int64_t>*  neededModIds;

/// @brief Field forceRefresh, offset: 0x28, size: 0x1, def value: None
 bool  forceRefresh;

/// @brief Field tempIndex, offset: 0x30, size: 0x8, def value: None
 ::Modio::ModIndex*  tempIndex;

/// @brief Field <output>5__2, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  _output_5__2;

/// @brief Field <filter>5__3, offset: 0x40, size: 0x8, def value: None
 ::Modio::API::Mods_ModioAPI_GetModsFilter*  _filter_5__3;

/// @brief Field <modInstallManagementRefreshList>5__4, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  _modInstallManagementRefreshList_5__4;

/// [TupleElementNames(new[] { "error", "page" })]
/// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::ModioPage_1<::Modio::Mods::Mod*>*>>  __u__1;

/// @brief Field <>7__wrap4, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<int64_t>*  __7__wrap4;

/// @brief Field <modId>5__6, offset: 0x60, size: 0x8, def value: None
 int64_t  _modId_5__6;

/// [TupleElementNames(new[] { "error", "result" })]
/// @brief Field <>u__2, offset: 0x68, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Mod__GetMods_d__120, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Mod__GetMods_d__120, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Mod__GetMods_d__120, neededModIds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Mod__GetMods_d__120, forceRefresh) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Mod__GetMods_d__120, tempIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Mod__GetMods_d__120, _output_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Mod__GetMods_d__120, _filter_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Mod__GetMods_d__120, _modInstallManagementRefreshList_5__4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Mod__GetMods_d__120, __u__1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Mod__GetMods_d__120, __7__wrap4) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Mod__GetMods_d__120, _modId_5__6) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Mod__GetMods_d__120, __u__2) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Mod__GetMods_d__120) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
