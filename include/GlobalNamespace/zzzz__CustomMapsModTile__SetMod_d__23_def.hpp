#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsModTile__SetMod_d__23.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMapsModTile__SetMod_d__23)
namespace GlobalNamespace {
class CustomMapsModTile;
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
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
struct CustomMapsModTile__SetMod_d__23;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CustomMapsModTile__SetMod_d__23);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapsModTile__SetMod_d__23, "", "CustomMapsModTile/<SetMod>d__23");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: CustomMapsModTile/<SetMod>d__23
struct CORDL_TYPE CustomMapsModTile__SetMod_d__23 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5a03fa8, size 0x904, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5a048ac, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsModTile__SetMod_d__23() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::CustomMapsModTile>", modifiers: "", def_value: None, comment: None }, CppParam { name: "useMapName", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "mod", ty: "::Modio::Mods::Mod*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_error_5__2", ty: "::Modio::Error*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_tex_5__3", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::UnityW<::UnityEngine::Texture2D>>>", modifiers: "", def_value: None, comment: None }]
constexpr CustomMapsModTile__SetMod_d__23(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::CustomMapsModTile>  __4__this, bool  useMapName, ::Modio::Mods::Mod*  mod, ::Modio::Error*  _error_5__2, ::UnityW<::UnityEngine::Texture2D>  _tex_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::UnityW<::UnityEngine::Texture2D>>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2754};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapsModTile>  __4__this;

/// @brief Field useMapName, offset: 0x30, size: 0x1, def value: None
 bool  useMapName;

/// @brief Field mod, offset: 0x38, size: 0x8, def value: None
 ::Modio::Mods::Mod*  mod;

/// @brief Field <error>5__2, offset: 0x40, size: 0x8, def value: None
 ::Modio::Error*  _error_5__2;

/// @brief Field <tex>5__3, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  _tex_5__3;

/// [TupleElementNames(new[] { "error", "texture" })]
/// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::UnityW<::UnityEngine::Texture2D>>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapsModTile__SetMod_d__23, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsModTile__SetMod_d__23, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsModTile__SetMod_d__23, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsModTile__SetMod_d__23, useMapName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsModTile__SetMod_d__23, mod) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsModTile__SetMod_d__23, _error_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsModTile__SetMod_d__23, _tex_5__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapsModTile__SetMod_d__23, __u__1) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapsModTile__SetMod_d__23) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
