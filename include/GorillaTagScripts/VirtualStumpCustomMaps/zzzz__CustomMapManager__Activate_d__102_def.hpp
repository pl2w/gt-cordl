#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/CustomMapManager__Activate_d__102.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__VirtualStumpActivateMode_def.hpp"
#include "Modio/Mods/zzzz__ModId_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMapManager__Activate_d__102)
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
struct CustomMapManager__Activate_d__102;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CustomMapManager__Activate_d__102);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapManager__Activate_d__102, "GorillaTagScripts.VirtualStumpCustomMaps", "CustomMapManager/<Activate>d__102");
// [CompilerGenerated]
// Dependencies GorillaTagScripts.VirtualStumpCustomMaps.VirtualStumpActivateMode, Modio.Mods.ModId, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.VirtualStumpCustomMaps.CustomMapManager/<Activate>d__102
struct CORDL_TYPE CustomMapManager__Activate_d__102 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5be9280, size 0x758, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5be99d8, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr CustomMapManager__Activate_d__102() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "mode", ty: "::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "hasEntryTeleportNode", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_autoLoadModId_5__2", ty: "::Modio::Mods::ModId", modifiers: "", def_value: None, comment: None }, CppParam { name: "_index_5__3", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*>>", modifiers: "", def_value: None, comment: None }]
constexpr CustomMapManager__Activate_d__102(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode  mode, bool  hasEntryTeleportNode, ::Modio::Mods::ModId  _autoLoadModId_5__2, int32_t  _index_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4048};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field mode, offset: 0x28, size: 0x4, def value: None
 ::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode  mode;

/// @brief Field hasEntryTeleportNode, offset: 0x2c, size: 0x1, def value: None
 bool  hasEntryTeleportNode;

/// @brief Field <autoLoadModId>5__2, offset: 0x30, size: 0x8, def value: None
 ::Modio::Mods::ModId  _autoLoadModId_5__2;

/// @brief Field <index>5__3, offset: 0x38, size: 0x4, def value: None
 int32_t  _index_5__3;

/// [TupleElementNames(new[] { "error", "featuredMaps" })]
/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapManager__Activate_d__102, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapManager__Activate_d__102, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapManager__Activate_d__102, mode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapManager__Activate_d__102, hasEntryTeleportNode) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapManager__Activate_d__102, _autoLoadModId_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapManager__Activate_d__102, _index_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapManager__Activate_d__102, __u__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapManager__Activate_d__102) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
