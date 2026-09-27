#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRAnchor_FetchOptions_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_FetchResult_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_ListScope_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_def.hpp"
#include "GlobalNamespace/zzzz__OVRTaskBuilder_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65)
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace GlobalNamespace {
struct OVRSpatialAnchor_UnboundAnchor;
}
namespace GlobalNamespace {
class OVRSpatialAnchor___c__DisplayClass65_0;
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
struct OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65, "", "OVRSpatialAnchor/<LoadUnboundAnchorsAsync>d__65");
// [CompilerGenerated]
// Dependencies OVRAnchor, OVRAnchor::FetchOptions, OVRAnchor::FetchResult, OVRObjectPool::ListScope`1<T>, OVRResult`2<TValue, TStatus>, OVRTaskBuilder`1<T>, OVRTask`1::Awaiter<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSpatialAnchor/<LoadUnboundAnchorsAsync>d__65
struct CORDL_TYPE OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa648634, size 0x87c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa648eb0, size 0x58, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "unboundAnchors", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "resultsHandler", ty: "::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,int32_t>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "fetchOptions", ty: "::GlobalNamespace::OVRAnchor_FetchOptions", modifiers: "", def_value: None, comment: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap1", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>", modifiers: "", def_value: None, comment: None }]
constexpr OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65(int32_t  __1__state, ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>  __t__builder, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*  unboundAnchors, ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,int32_t>*  resultsHandler, ::GlobalNamespace::OVRAnchor_FetchOptions  fetchOptions, ::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0*  __8__1, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>  __7__wrap1, ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12471};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x88};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>  __t__builder;

/// @brief Field unboundAnchors, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*  unboundAnchors;

/// @brief Field resultsHandler, offset: 0x28, size: 0x8, def value: None
 ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,int32_t>*  resultsHandler;

/// @brief Field fetchOptions, offset: 0x30, size: 0x28, def value: None
 ::GlobalNamespace::OVRAnchor_FetchOptions  fetchOptions;

/// @brief Field <>8__1, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0*  __8__1;

/// @brief Field <>7__wrap1, offset: 0x60, size: 0x8, def value: None
 ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>  __7__wrap1;

/// @brief Field <>u__1, offset: 0x68, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>  __u__1;

/// @brief Size padding 0x88 - 0x78 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65, unboundAnchors) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65, resultsHandler) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65, fetchOptions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65, __8__1) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65, __7__wrap1) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65, __u__1) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
