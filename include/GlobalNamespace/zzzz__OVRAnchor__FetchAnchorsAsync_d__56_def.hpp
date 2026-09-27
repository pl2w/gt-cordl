#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor__FetchAnchorsAsync_d__56.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Result_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceComponentType_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_StorageLocation_def.hpp"
#include "GlobalNamespace/zzzz__OVRTaskBuilder_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRAnchor__FetchAnchorsAsync_d__56)
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRAnchor__FetchAnchorsAsync_d__56;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56, "", "OVRAnchor/<FetchAnchorsAsync>d__56");
// [CompilerGenerated]
// Dependencies OVRPlugin::Result, OVRPlugin::SpaceComponentType, OVRSpace::StorageLocation, OVRTaskBuilder`1<T>, OVRTask`1::Awaiter<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/<FetchAnchorsAsync>d__56
struct CORDL_TYPE OVRAnchor__FetchAnchorsAsync_d__56 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa571e6c, size 0x3a4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa572210, size 0x58, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRAnchor__FetchAnchorsAsync_d__56() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::GlobalNamespace::OVRTaskBuilder_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "type", ty: "::GlobalNamespace::OVRPlugin_SpaceComponentType", modifiers: "", def_value: None, comment: None }, CppParam { name: "location", ty: "::GlobalNamespace::OVRSpace_StorageLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxResults", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "timeout", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "anchors", ty: "::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result>", modifiers: "", def_value: None, comment: None }]
constexpr OVRAnchor__FetchAnchorsAsync_d__56(int32_t  __1__state, ::GlobalNamespace::OVRTaskBuilder_1<bool>  __t__builder, ::GlobalNamespace::OVRPlugin_SpaceComponentType  type, ::GlobalNamespace::OVRSpace_StorageLocation  location, int32_t  maxResults, double_t  timeout, ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*  anchors, ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11835};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::GlobalNamespace::OVRTaskBuilder_1<bool>  __t__builder;

/// @brief Field type, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_SpaceComponentType  type;

/// @brief Field location, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::OVRSpace_StorageLocation  location;

/// @brief Field maxResults, offset: 0x28, size: 0x4, def value: None
 int32_t  maxResults;

/// @brief Field timeout, offset: 0x30, size: 0x8, def value: None
 double_t  timeout;

/// @brief Field anchors, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*  anchors;

/// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result>  __u__1;

/// @brief Size padding 0x58 - 0x50 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56, type) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56, location) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56, maxResults) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56, timeout) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56, anchors) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56, __u__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
