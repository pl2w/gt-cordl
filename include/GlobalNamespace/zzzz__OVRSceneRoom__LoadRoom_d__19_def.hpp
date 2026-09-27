#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneRoom__LoadRoom_d__19.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_HashSetScope_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_ListScope_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTaskBuilder_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSceneRoom__LoadRoom_d__19)
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace GlobalNamespace {
class OVRSceneRoom;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRSceneRoom__LoadRoom_d__19;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19, "", "OVRSceneRoom/<LoadRoom>d__19");
// [CompilerGenerated]
// Dependencies OVRAnchor, OVRObjectPool::HashSetScope`1<T>, OVRObjectPool::ListScope`1<T>, OVRTaskBuilder`1<T>, OVRTask`1::Awaiter<TResult>, OVRTask`1<TResult>, System.Guid
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSceneRoom/<LoadRoom>d__19
struct CORDL_TYPE OVRSceneRoom__LoadRoom_d__19 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa63b1d4, size 0x124c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa63c420, size 0x58, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRSceneRoom__LoadRoom_d__19() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::GlobalNamespace::OVRTaskBuilder_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "floor", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }, CppParam { name: "ceiling", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }, CppParam { name: "walls", ty: "::ArrayW<::System::Guid>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::OVRSceneRoom>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap1", ty: "::GlobalNamespace::OVRObjectPool_HashSetScope_1<::System::Guid>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_anchors_5__3", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap3", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap4", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap5", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<bool>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<bool>*>", modifiers: "", def_value: None, comment: None }]
constexpr OVRSceneRoom__LoadRoom_d__19(int32_t  __1__state, ::GlobalNamespace::OVRTaskBuilder_1<bool>  __t__builder, ::System::Guid  floor, ::System::Guid  ceiling, ::ArrayW<::System::Guid>  walls, ::UnityW<::GlobalNamespace::OVRSceneRoom>  __4__this, ::GlobalNamespace::OVRObjectPool_HashSetScope_1<::System::Guid>  __7__wrap1, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  _anchors_5__3, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>  __7__wrap3, ::GlobalNamespace::OVRTask_1_Awaiter<bool>  __u__1, ::GlobalNamespace::OVRObjectPool_ListScope_1<bool>  __7__wrap4, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<bool>>  __7__wrap5, ::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<bool>*>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12443};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xa0};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::GlobalNamespace::OVRTaskBuilder_1<bool>  __t__builder;

/// @brief Field floor, offset: 0x20, size: 0x10, def value: None
 ::System::Guid  floor;

/// @brief Field ceiling, offset: 0x30, size: 0x10, def value: None
 ::System::Guid  ceiling;

/// @brief Field walls, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::System::Guid>  walls;

/// @brief Field <>4__this, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRSceneRoom>  __4__this;

/// @brief Field <>7__wrap1, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::OVRObjectPool_HashSetScope_1<::System::Guid>  __7__wrap1;

/// @brief Field <anchors>5__3, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  _anchors_5__3;

/// @brief Field <>7__wrap3, offset: 0x60, size: 0x8, def value: None
 ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>  __7__wrap3;

/// @brief Field <>u__1, offset: 0x68, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1_Awaiter<bool>  __u__1;

/// @brief Field <>7__wrap4, offset: 0x78, size: 0x8, def value: None
 ::GlobalNamespace::OVRObjectPool_ListScope_1<bool>  __7__wrap4;

/// @brief Field <>7__wrap5, offset: 0x80, size: 0x8, def value: None
 ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<bool>>  __7__wrap5;

/// @brief Field <>u__2, offset: 0x88, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<bool>*>  __u__2;

/// @brief Size padding 0xa0 - 0x98 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19, floor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19, ceiling) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19, walls) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19, __4__this) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19, __7__wrap1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19, _anchors_5__3) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19, __7__wrap3) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19, __u__1) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19, __7__wrap4) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19, __7__wrap5) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19, __u__2) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSceneRoom__LoadRoom_d__19) == 0xa0, "Size mismatch!");

} // namespace end def GlobalNamespace
