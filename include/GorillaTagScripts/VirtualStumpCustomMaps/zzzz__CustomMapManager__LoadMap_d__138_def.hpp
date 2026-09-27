#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/CustomMapManager__LoadMap_d__138.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTMapLoadSource_def.hpp"
#include "Modio/Mods/zzzz__ModId_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMapManager__LoadMap_d__138)
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
struct CustomMapManager__LoadMap_d__138;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CustomMapManager__LoadMap_d__138);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapManager__LoadMap_d__138, "GorillaTagScripts.VirtualStumpCustomMaps", "CustomMapManager/<LoadMap>d__138");
// [CompilerGenerated]
// Dependencies GTMapLoadSource, Modio.Mods.ModId, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.VirtualStumpCustomMaps.CustomMapManager/<LoadMap>d__138
struct CORDL_TYPE CustomMapManager__LoadMap_d__138 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5beba10, size 0xebc, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5bec8cc, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr CustomMapManager__LoadMap_d__138() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "modId", ty: "::Modio::Mods::ModId", modifiers: "", def_value: None, comment: None }, CppParam { name: "loadSource", ty: "::GlobalNamespace::GTMapLoadSource", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None, comment: None }]
constexpr CustomMapManager__LoadMap_d__138(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Modio::Mods::ModId  modId, ::GlobalNamespace::GTMapLoadSource  loadSource, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4055};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field modId, offset: 0x20, size: 0x8, def value: None
 ::Modio::Mods::ModId  modId;

/// @brief Field loadSource, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::GTMapLoadSource  loadSource;

/// [TupleElementNames(new[] { "error", "result" })]
/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Mods::Mod*>>  __u__1;

/// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapManager__LoadMap_d__138, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapManager__LoadMap_d__138, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapManager__LoadMap_d__138, modId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapManager__LoadMap_d__138, loadSource) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapManager__LoadMap_d__138, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapManager__LoadMap_d__138, __u__2) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapManager__LoadMap_d__138) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
