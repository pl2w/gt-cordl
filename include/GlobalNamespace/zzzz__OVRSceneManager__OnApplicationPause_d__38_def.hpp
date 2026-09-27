#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneManager__OnApplicationPause_d__38.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_ListScope_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSceneManager__OnApplicationPause_d__38)
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace GlobalNamespace {
class OVRSceneManager;
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
struct OVRSceneManager__OnApplicationPause_d__38;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__38);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__38, "", "OVRSceneManager/<OnApplicationPause>d__38");
// [CompilerGenerated]
// Dependencies OVRAnchor, OVRObjectPool::ListScope`1<T>, OVRTask`1::Awaiter<TResult>, System.Runtime.CompilerServices.AsyncVoidMethodBuilder
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSceneManager/<OnApplicationPause>d__38
struct CORDL_TYPE OVRSceneManager__OnApplicationPause_d__38 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa635324, size 0x658, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa63597c, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRSceneManager__OnApplicationPause_d__38() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "isPaused", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::OVRSceneManager>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_anchors_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap2", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<bool>", modifiers: "", def_value: None, comment: None }]
constexpr OVRSceneManager__OnApplicationPause_d__38(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, bool  isPaused, ::UnityW<::GlobalNamespace::OVRSceneManager>  __4__this, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  _anchors_5__2, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>  __7__wrap2, ::GlobalNamespace::OVRTask_1_Awaiter<bool>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12426};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field isPaused, offset: 0x28, size: 0x1, def value: None
 bool  isPaused;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRSceneManager>  __4__this;

/// @brief Field <anchors>5__2, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  _anchors_5__2;

/// @brief Field <>7__wrap2, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>  __7__wrap2;

/// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1_Awaiter<bool>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__38, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__38, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__38, isPaused) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__38, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__38, _anchors_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__38, __7__wrap2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__38, __u__1) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSceneManager__OnApplicationPause_d__38) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
