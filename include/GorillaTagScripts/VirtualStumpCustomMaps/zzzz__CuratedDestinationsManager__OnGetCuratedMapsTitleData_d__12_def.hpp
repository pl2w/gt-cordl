#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12)
namespace Modio::Mods {
class Mod;
}
namespace Modio {
class Error;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12, "GorillaTagScripts.VirtualStumpCustomMaps", "CuratedDestinationsManager/<OnGetCuratedMapsTitleData>d__12");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.VirtualStumpCustomMaps.CuratedDestinationsManager/<OnGetCuratedMapsTitleData>d__12
struct CORDL_TYPE CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5bde1cc, size 0x9e4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5bdebb0, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "data", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_succeeded_5__2", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap2", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap3", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_curatedModId_5__5", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>", modifiers: "", def_value: None, comment: None }]
constexpr CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::StringW  data, bool  _succeeded_5__2, ::ArrayW<::StringW>  __7__wrap2, int32_t  __7__wrap3, int64_t  _curatedModId_5__5, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4037};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field data, offset: 0x28, size: 0x8, def value: None
 ::StringW  data;

/// @brief Field <succeeded>5__2, offset: 0x30, size: 0x1, def value: None
 bool  _succeeded_5__2;

/// @brief Field <>7__wrap2, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::StringW>  __7__wrap2;

/// @brief Field <>7__wrap3, offset: 0x40, size: 0x4, def value: None
 int32_t  __7__wrap3;

/// @brief Field <curatedModId>5__5, offset: 0x48, size: 0x8, def value: None
 int64_t  _curatedModId_5__5;

/// [TupleElementNames(new[] { "error", "result" })]
/// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12, data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12, _succeeded_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12, __7__wrap2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12, __7__wrap3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12, _curatedModId_5__5) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12, __u__1) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CuratedDestinationsManager__OnGetCuratedMapsTitleData_d__12) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
