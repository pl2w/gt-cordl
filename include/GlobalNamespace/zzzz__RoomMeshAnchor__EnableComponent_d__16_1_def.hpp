#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomMeshAnchor__EnableComponent_d__16_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RoomMeshAnchor__EnableComponent_d__16_1)
namespace GlobalNamespace {
class RoomMeshAnchor;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct RoomMeshAnchor__EnableComponent_d__16_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::RoomMeshAnchor__EnableComponent_d__16_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::RoomMeshAnchor__EnableComponent_d__16_1, "", "RoomMeshAnchor/<EnableComponent>d__16`1");
// [CompilerGenerated]
// Dependencies OVRTask`1::Awaiter<TResult>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: RoomMeshAnchor/<EnableComponent>d__16`1<T>
struct CORDL_TYPE RoomMeshAnchor__EnableComponent_d__16_1 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr RoomMeshAnchor__EnableComponent_d__16_1() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::RoomMeshAnchor>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_component_5__2", ty: "T", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<bool>", modifiers: "", def_value: None, comment: None }]
constexpr RoomMeshAnchor__EnableComponent_d__16_1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>  __t__builder, ::UnityW<::GlobalNamespace::RoomMeshAnchor>  __4__this, T  _component_5__2, ::GlobalNamespace::OVRTask_1_Awaiter<bool>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31429};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RoomMeshAnchor>  __4__this;

/// @brief Field <component>5__2, offset: 0x28, size: 0x8, def value: None
 T  _component_5__2;

/// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1_Awaiter<bool>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
