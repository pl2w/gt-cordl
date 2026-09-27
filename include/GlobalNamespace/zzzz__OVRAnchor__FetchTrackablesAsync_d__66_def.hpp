#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor__FetchTrackablesAsync_d__66.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRAnchor_FetchResult_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_TrackableType_def.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_HashSetScope_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_TaskScope_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Result_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceComponentType_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_def.hpp"
#include "GlobalNamespace/zzzz__OVRTaskBuilder_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRAnchor__FetchTrackablesAsync_d__66)
namespace GlobalNamespace {
struct OVRAnchor_TrackableType;
}
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace GlobalNamespace {
struct OVRPlugin_Result;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRAnchor__FetchTrackablesAsync_d__66;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66, "", "OVRAnchor/<FetchTrackablesAsync>d__66");
// [CompilerGenerated]
// Dependencies OVRAnchor::FetchResult, OVRAnchor::TrackableType, OVRObjectPool::HashSetScope`1<T>, OVRObjectPool::TaskScope`1<T>, OVRPlugin::Result, OVRPlugin::SpaceComponentType, OVRResult`2<TValue, TStatus>, OVRTaskBuilder`1<T>, OVRTask`1::Awaiter<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/<FetchTrackablesAsync>d__66
struct CORDL_TYPE OVRAnchor__FetchTrackablesAsync_d__66 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa572ab4, size 0xa50, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa573504, size 0x58, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRAnchor__FetchTrackablesAsync_d__66() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "anchors", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "trackableTypes", ty: "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "incrementalResultsCallback", ty: "::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap1", ty: "::GlobalNamespace::OVRObjectPool_HashSetScope_1<::GlobalNamespace::OVRAnchor_TrackableType>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap2", ty: "::GlobalNamespace::OVRObjectPool_HashSetScope_1<::GlobalNamespace::OVRPlugin_SpaceComponentType>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap3", ty: "::GlobalNamespace::OVRObjectPool_TaskScope_1<::GlobalNamespace::OVRPlugin_Result>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_Result>*>", modifiers: "", def_value: None, comment: None }]
constexpr OVRAnchor__FetchTrackablesAsync_d__66(int32_t  __1__state, ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>  __t__builder, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  anchors, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>*  trackableTypes, ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*  incrementalResultsCallback, ::GlobalNamespace::OVRObjectPool_HashSetScope_1<::GlobalNamespace::OVRAnchor_TrackableType>  __7__wrap1, ::GlobalNamespace::OVRObjectPool_HashSetScope_1<::GlobalNamespace::OVRPlugin_SpaceComponentType>  __7__wrap2, ::GlobalNamespace::OVRObjectPool_TaskScope_1<::GlobalNamespace::OVRPlugin_Result>  __7__wrap3, ::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_Result>*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11838};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>  __t__builder;

/// @brief Field anchors, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  anchors;

/// @brief Field trackableTypes, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>*  trackableTypes;

/// @brief Field incrementalResultsCallback, offset: 0x30, size: 0x8, def value: None
 ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*  incrementalResultsCallback;

/// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::OVRObjectPool_HashSetScope_1<::GlobalNamespace::OVRAnchor_TrackableType>  __7__wrap1;

/// @brief Field <>7__wrap2, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::OVRObjectPool_HashSetScope_1<::GlobalNamespace::OVRPlugin_SpaceComponentType>  __7__wrap2;

/// @brief Field <>7__wrap3, offset: 0x48, size: 0x10, def value: None
 ::GlobalNamespace::OVRObjectPool_TaskScope_1<::GlobalNamespace::OVRPlugin_Result>  __7__wrap3;

/// @brief Field <>u__1, offset: 0x58, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_Result>*>  __u__1;

/// @brief Size padding 0x70 - 0x68 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66, anchors) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66, trackableTypes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66, incrementalResultsCallback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66, __7__wrap1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66, __7__wrap2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66, __7__wrap3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66, __u__1) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
