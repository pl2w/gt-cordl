#pragma once
// IWYU pragma private; include "UnityEngine/XR/InputTracking.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InputTracking)
namespace GlobalNamespace {
struct InputTracking_TrackingStateEventType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::Bindings {
struct BlittableListWrapper;
}
namespace UnityEngine::XR {
struct XRNodeState;
}
namespace UnityEngine::XR {
struct XRNode;
}
// Forward declare root types
namespace UnityEngine::XR {
class InputTracking;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::InputTracking*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::InputTracking*, "UnityEngine.XR", "InputTracking");
// [StaticAccessor("XRInputTrackingFacade::Get()", (UnityEngine.Bindings.StaticAccessorType)0)]
// [NativeConditional("ENABLE_VR")]
// [NativeHeader("Modules/XR/Subsystems/Input/Public/XRInputTrackingFacade.h")]
// [RequiredByNativeCode]
// Dependencies System.Object
namespace UnityEngine::XR {
// Is value type: false
// CS Name: UnityEngine.XR.InputTracking
class CORDL_TYPE InputTracking : public ::System::Object {
public:
// Declarations
using TrackingStateEventType = ::GlobalNamespace::InputTracking_TrackingStateEventType;

/// @brief Field nodeAdded, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_nodeAdded, put=setStaticF_nodeAdded)) ::System::Action_1<::UnityEngine::XR::XRNodeState>*  nodeAdded;

/// @brief Field nodeRemoved, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_nodeRemoved, put=setStaticF_nodeRemoved)) ::System::Action_1<::UnityEngine::XR::XRNodeState>*  nodeRemoved;

/// @brief Field trackingAcquired, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_trackingAcquired, put=setStaticF_trackingAcquired)) ::System::Action_1<::UnityEngine::XR::XRNodeState>*  trackingAcquired;

/// @brief Field trackingLost, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_trackingLost, put=setStaticF_trackingLost)) ::System::Action_1<::UnityEngine::XR::XRNodeState>*  trackingLost;

/// [StaticAccessor("XRInputTracking::Get()", (UnityEngine.Bindings.StaticAccessorType)0)]
/// [NativeHeader("Modules/XR/Subsystems/Input/Public/XRInputTracking.h")]
/// @brief Method GetDeviceIdAtXRNode, addr 0xb932b74, size 0x3c, virtual false, abstract: false, final false
static inline uint64_t GetDeviceIdAtXRNode(::UnityEngine::XR::XRNode  node) ;

/// [NativeHeader("Modules/XR/Subsystems/Input/Public/XRInputTracking.h")]
/// [StaticAccessor("XRInputTracking::Get()", (UnityEngine.Bindings.StaticAccessorType)0)]
/// @brief Method GetDeviceIdsAtXRNode_Internal, addr 0xb932bb0, size 0x1d0, virtual false, abstract: false, final false
static inline void GetDeviceIdsAtXRNode_Internal(::UnityEngine::XR::XRNode  node, /* [NotNull] */ ::System::Collections::Generic::List_1<uint64_t>*  deviceIds) ;

/// @brief Method GetDeviceIdsAtXRNode_Internal_Injected, addr 0xb932d80, size 0x44, virtual false, abstract: false, final false
static inline void GetDeviceIdsAtXRNode_Internal_Injected(::UnityEngine::XR::XRNode  node, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>  deviceIds) ;

/// @brief Method GetNodeStates, addr 0xb9328dc, size 0x94, virtual false, abstract: false, final false
static inline void GetNodeStates(::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*  nodeStates) ;

/// [NativeConditional("ENABLE_VR")]
/// @brief Method GetNodeStates_Internal, addr 0xb932970, size 0x1c8, virtual false, abstract: false, final false
static inline void GetNodeStates_Internal(/* [NotNull] */ ::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*  nodeStates) ;

/// @brief Method GetNodeStates_Internal_Injected, addr 0xb932b38, size 0x3c, virtual false, abstract: false, final false
static inline void GetNodeStates_Internal_Injected(::by_ref<::UnityEngine::Bindings::BlittableListWrapper>  nodeStates) ;

/// [RequiredByNativeCode]
/// @brief Method InvokeTrackingEvent, addr 0xb932730, size 0x190, virtual false, abstract: false, final false
static inline void InvokeTrackingEvent(::GlobalNamespace::InputTracking_TrackingStateEventType  eventType, ::UnityEngine::XR::XRNode  nodeType, int64_t  uniqueID, bool  tracked) ;

/// [CompilerGenerated]
/// @brief Method add_trackingAcquired, addr 0xb932598, size 0xcc, virtual false, abstract: false, final false
static inline void add_trackingAcquired(::System::Action_1<::UnityEngine::XR::XRNodeState>*  value) ;

static inline ::System::Action_1<::UnityEngine::XR::XRNodeState>* getStaticF_nodeAdded() ;

static inline ::System::Action_1<::UnityEngine::XR::XRNodeState>* getStaticF_nodeRemoved() ;

static inline ::System::Action_1<::UnityEngine::XR::XRNodeState>* getStaticF_trackingAcquired() ;

static inline ::System::Action_1<::UnityEngine::XR::XRNodeState>* getStaticF_trackingLost() ;

/// [CompilerGenerated]
/// @brief Method remove_trackingAcquired, addr 0xb932664, size 0xcc, virtual false, abstract: false, final false
static inline void remove_trackingAcquired(::System::Action_1<::UnityEngine::XR::XRNodeState>*  value) ;

static inline void setStaticF_nodeAdded(::System::Action_1<::UnityEngine::XR::XRNodeState>*  value) ;

static inline void setStaticF_nodeRemoved(::System::Action_1<::UnityEngine::XR::XRNodeState>*  value) ;

static inline void setStaticF_trackingAcquired(::System::Action_1<::UnityEngine::XR::XRNodeState>*  value) ;

static inline void setStaticF_trackingLost(::System::Action_1<::UnityEngine::XR::XRNodeState>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputTracking() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputTracking", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputTracking(InputTracking && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputTracking", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputTracking(InputTracking const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31606};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::InputTracking) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR
