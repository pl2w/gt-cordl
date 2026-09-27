#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsListScreen__OnGetFeaturedModsTitleData_d__102.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMapsListScreen__OnGetFeaturedModsTitleData_d__102)
namespace GlobalNamespace {
class CustomMapsListScreen;
}
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
struct CustomMapsListScreen__OnGetFeaturedModsTitleData_d__102;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CustomMapsListScreen__OnGetFeaturedModsTitleData_d__102);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapsListScreen__OnGetFeaturedModsTitleData_d__102, "", "CustomMapsListScreen/<OnGetFeaturedModsTitleData>d__102");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: CustomMapsListScreen/<OnGetFeaturedModsTitleData>d__102
struct CORDL_TYPE CustomMapsListScreen__OnGetFeaturedModsTitleData_d__102 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5a01e5c, size 0x738, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5a02594, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsListScreen__OnGetFeaturedModsTitleData_d__102() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "data", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::CustomMapsListScreen>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap1", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap2", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_featuredModId_5__4", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>", modifiers: "", def_value: None, comment: None }]
constexpr CustomMapsListScreen__OnGetFeaturedModsTitleData_d__102(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::StringW  data, ::UnityW<::GlobalNamespace::CustomMapsListScreen>  __4__this, ::ArrayW<::StringW>  __7__wrap1, int32_t  __7__wrap2, int64_t  _featuredModId_5__4, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2748};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field data, offset: 0x28, size: 0x8, def value: None
 ::StringW  data;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsListScreen>  __4__this;

/// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::StringW>  __7__wrap1;

/// @brief Field <>7__wrap2, offset: 0x40, size: 0x4, def value: None
 int32_t  __7__wrap2;

/// @brief Field <featuredModId>5__4, offset: 0x48, size: 0x8, def value: None
 int64_t  _featuredModId_5__4;

/// [TupleElementNames(new[] { "error", "result" })]
/// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen__OnGetFeaturedModsTitleData_d__102, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen__OnGetFeaturedModsTitleData_d__102, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen__OnGetFeaturedModsTitleData_d__102, data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen__OnGetFeaturedModsTitleData_d__102, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen__OnGetFeaturedModsTitleData_d__102, __7__wrap1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen__OnGetFeaturedModsTitleData_d__102, __7__wrap2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen__OnGetFeaturedModsTitleData_d__102, _featuredModId_5__4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsListScreen__OnGetFeaturedModsTitleData_d__102, __u__1) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapsListScreen__OnGetFeaturedModsTitleData_d__102) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
