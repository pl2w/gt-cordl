#pragma once
// IWYU pragma private; include "UnityEngine/XR/InputTracking.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/zzzz__InputTracking_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableListWrapper_def.hpp"
#include "UnityEngine/XR/zzzz__InputTracking_TrackingStateEventType_def.hpp"
#include "UnityEngine/XR/zzzz__XRNodeState_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::InputTracking.add_trackingAcquired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityEngine::XR::XRNodeState>*)>(&::UnityEngine::XR::InputTracking::add_trackingAcquired)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb932598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputTracking*>(),
                        {"add_trackingAcquired", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::XRNodeState>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputTracking.remove_trackingAcquired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityEngine::XR::XRNodeState>*)>(&::UnityEngine::XR::InputTracking::remove_trackingAcquired)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb932664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputTracking*>(),
                        {"remove_trackingAcquired", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::XRNodeState>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputTracking.InvokeTrackingEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::InputTracking_TrackingStateEventType, ::UnityEngine::XR::XRNode, int64_t, bool)>(&::UnityEngine::XR::InputTracking::InvokeTrackingEvent)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xb932730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputTracking*>(),
                        {"InvokeTrackingEvent", {}, {::i2c::type_of<::GlobalNamespace::InputTracking_TrackingStateEventType>(), ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputTracking.GetNodeStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*)>(&::UnityEngine::XR::InputTracking::GetNodeStates)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb9328dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputTracking*>(),
                        {"GetNodeStates", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputTracking.GetNodeStates_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*)>(&::UnityEngine::XR::InputTracking::GetNodeStates_Internal)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xb932970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputTracking*>(),
                        {"GetNodeStates_Internal", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputTracking.GetDeviceIdAtXRNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::UnityEngine::XR::XRNode)>(&::UnityEngine::XR::InputTracking::GetDeviceIdAtXRNode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb932b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputTracking*>(),
                        {"GetDeviceIdAtXRNode", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputTracking.GetDeviceIdsAtXRNode_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::XRNode, ::System::Collections::Generic::List_1<uint64_t>*)>(&::UnityEngine::XR::InputTracking::GetDeviceIdsAtXRNode_Internal)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xb932bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputTracking*>(),
                        {"GetDeviceIdsAtXRNode_Internal", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::System::Collections::Generic::List_1<uint64_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputTracking.GetNodeStates_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::BlittableListWrapper>)>(&::UnityEngine::XR::InputTracking::GetNodeStates_Internal_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb932b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputTracking*>(),
                        {"GetNodeStates_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputTracking.GetDeviceIdsAtXRNode_Internal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::XRNode, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>)>(&::UnityEngine::XR::InputTracking::GetDeviceIdsAtXRNode_Internal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb932d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputTracking*>(),
                        {"GetDeviceIdsAtXRNode_Internal_Injected", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::InputTracking::setStaticF_trackingAcquired(::System::Action_1<::UnityEngine::XR::XRNodeState>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::XR::XRNodeState>*, "trackingAcquired", ::UnityEngine::XR::InputTracking*>(std::forward<::System::Action_1<::UnityEngine::XR::XRNodeState>*>(value));
}
inline ::System::Action_1<::UnityEngine::XR::XRNodeState>* UnityEngine::XR::InputTracking::getStaticF_trackingAcquired()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::XR::XRNodeState>*, "trackingAcquired", ::UnityEngine::XR::InputTracking*>();
}
inline void UnityEngine::XR::InputTracking::setStaticF_trackingLost(::System::Action_1<::UnityEngine::XR::XRNodeState>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::XR::XRNodeState>*, "trackingLost", ::UnityEngine::XR::InputTracking*>(std::forward<::System::Action_1<::UnityEngine::XR::XRNodeState>*>(value));
}
inline ::System::Action_1<::UnityEngine::XR::XRNodeState>* UnityEngine::XR::InputTracking::getStaticF_trackingLost()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::XR::XRNodeState>*, "trackingLost", ::UnityEngine::XR::InputTracking*>();
}
inline void UnityEngine::XR::InputTracking::setStaticF_nodeAdded(::System::Action_1<::UnityEngine::XR::XRNodeState>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::XR::XRNodeState>*, "nodeAdded", ::UnityEngine::XR::InputTracking*>(std::forward<::System::Action_1<::UnityEngine::XR::XRNodeState>*>(value));
}
inline ::System::Action_1<::UnityEngine::XR::XRNodeState>* UnityEngine::XR::InputTracking::getStaticF_nodeAdded()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::XR::XRNodeState>*, "nodeAdded", ::UnityEngine::XR::InputTracking*>();
}
inline void UnityEngine::XR::InputTracking::setStaticF_nodeRemoved(::System::Action_1<::UnityEngine::XR::XRNodeState>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::XR::XRNodeState>*, "nodeRemoved", ::UnityEngine::XR::InputTracking*>(std::forward<::System::Action_1<::UnityEngine::XR::XRNodeState>*>(value));
}
inline ::System::Action_1<::UnityEngine::XR::XRNodeState>* UnityEngine::XR::InputTracking::getStaticF_nodeRemoved()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::XR::XRNodeState>*, "nodeRemoved", ::UnityEngine::XR::InputTracking*>();
}
inline void UnityEngine::XR::InputTracking::add_trackingAcquired(::System::Action_1<::UnityEngine::XR::XRNodeState>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputTracking*>(),
                        {"add_trackingAcquired", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::XRNodeState>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::XR::InputTracking::remove_trackingAcquired(::System::Action_1<::UnityEngine::XR::XRNodeState>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputTracking*>(),
                        {"remove_trackingAcquired", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::XRNodeState>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::XR::InputTracking::InvokeTrackingEvent(::GlobalNamespace::InputTracking_TrackingStateEventType  eventType, ::UnityEngine::XR::XRNode  nodeType, int64_t  uniqueID, bool  tracked)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputTracking*>(),
                        {"InvokeTrackingEvent", {}, {::i2c::type_of<::GlobalNamespace::InputTracking_TrackingStateEventType>(), ::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eventType, nodeType, uniqueID, tracked);
}
inline void UnityEngine::XR::InputTracking::GetNodeStates(::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*  nodeStates)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputTracking*>(),
                        {"GetNodeStates", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nodeStates);
}
inline void UnityEngine::XR::InputTracking::GetNodeStates_Internal(/* [NotNull] */ ::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*  nodeStates)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputTracking*>(),
                        {"GetNodeStates_Internal", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nodeStates);
}
inline uint64_t UnityEngine::XR::InputTracking::GetDeviceIdAtXRNode(::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputTracking*>(),
                        {"GetDeviceIdAtXRNode", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, node);
}
inline void UnityEngine::XR::InputTracking::GetDeviceIdsAtXRNode_Internal(::UnityEngine::XR::XRNode  node, /* [NotNull] */ ::System::Collections::Generic::List_1<uint64_t>*  deviceIds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputTracking*>(),
                        {"GetDeviceIdsAtXRNode_Internal", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::System::Collections::Generic::List_1<uint64_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, node, deviceIds);
}
inline void UnityEngine::XR::InputTracking::GetNodeStates_Internal_Injected(::by_ref<::UnityEngine::Bindings::BlittableListWrapper>  nodeStates)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputTracking*>(),
                        {"GetNodeStates_Internal_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nodeStates);
}
inline void UnityEngine::XR::InputTracking::GetDeviceIdsAtXRNode_Internal_Injected(::UnityEngine::XR::XRNode  node, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper>  deviceIds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::InputTracking*>(),
                        {"GetDeviceIdsAtXRNode_Internal_Injected", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableListWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, node, deviceIds);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::InputTracking::InputTracking()   {
}
