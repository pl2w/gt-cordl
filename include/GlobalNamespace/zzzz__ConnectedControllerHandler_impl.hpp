#pragma once
// IWYU pragma private; include "GlobalNamespace/ConnectedControllerHandler.hpp"
#include "GlobalNamespace/zzzz__OverrideControllers_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__ConnectedControllerHandler_def.hpp"
#include "GlobalNamespace/zzzz__HandTransformFollowOffset_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__GorillaSnapTurn_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRController_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ConnectedControllerHandler.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::ConnectedControllerHandler> (*)()>(&::GlobalNamespace::ConnectedControllerHandler::get_Instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x57e3c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedControllerHandler.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::ConnectedControllerHandler*)>(&::GlobalNamespace::ConnectedControllerHandler::set_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x57e3c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::ConnectedControllerHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedControllerHandler.get_rightValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ConnectedControllerHandler::*)()>(&::GlobalNamespace::ConnectedControllerHandler::get_rightValid)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x57e3ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"get_rightValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedControllerHandler.get_leftValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ConnectedControllerHandler::*)()>(&::GlobalNamespace::ConnectedControllerHandler::get_leftValid)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x57e3d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"get_leftValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedControllerHandler.get_RightValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ConnectedControllerHandler::*)()>(&::GlobalNamespace::ConnectedControllerHandler::get_RightValid)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57e3e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"get_RightValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedControllerHandler.get_LeftValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ConnectedControllerHandler::*)()>(&::GlobalNamespace::ConnectedControllerHandler::get_LeftValid)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57e3e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"get_LeftValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedControllerHandler.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConnectedControllerHandler::*)()>(&::GlobalNamespace::ConnectedControllerHandler::Awake)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x57e3e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedControllerHandler.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConnectedControllerHandler::*)()>(&::GlobalNamespace::ConnectedControllerHandler::Start)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x57e41c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedControllerHandler.SetRightHandOffsets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConnectedControllerHandler::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::ConnectedControllerHandler::SetRightHandOffsets)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x57e4408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"SetRightHandOffsets", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedControllerHandler.SetLeftHandOffsets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConnectedControllerHandler::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::ConnectedControllerHandler::SetLeftHandOffsets)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x57e4438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"SetLeftHandOffsets", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedControllerHandler.SetOculusOffsets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConnectedControllerHandler::*)(bool, bool)>(&::GlobalNamespace::ConnectedControllerHandler::SetOculusOffsets)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x57e4468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"SetOculusOffsets", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedControllerHandler.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConnectedControllerHandler::*)()>(&::GlobalNamespace::ConnectedControllerHandler::OnEnable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e44c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedControllerHandler.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConnectedControllerHandler::*)()>(&::GlobalNamespace::ConnectedControllerHandler::OnDisable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e44cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedControllerHandler.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConnectedControllerHandler::*)()>(&::GlobalNamespace::ConnectedControllerHandler::OnDestroy)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x57e44d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedControllerHandler.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConnectedControllerHandler::*)()>(&::GlobalNamespace::ConnectedControllerHandler::LateUpdate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x57e4608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedControllerHandler.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConnectedControllerHandler::*)()>(&::GlobalNamespace::ConnectedControllerHandler::SliceUpdate)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x57e464c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedControllerHandler.UpdateControllerStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConnectedControllerHandler::*)()>(&::GlobalNamespace::ConnectedControllerHandler::UpdateControllerStates)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x57e416c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"UpdateControllerStates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedControllerHandler.AssignSnapturnController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConnectedControllerHandler::*)()>(&::GlobalNamespace::ConnectedControllerHandler::AssignSnapturnController)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x57e4a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"AssignSnapturnController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedControllerHandler.GetValidForXRNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ConnectedControllerHandler::*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::ConnectedControllerHandler::GetValidForXRNode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x57e4ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"GetValidForXRNode", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedControllerHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConnectedControllerHandler::*)()>(&::GlobalNamespace::ConnectedControllerHandler::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x57e4ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::HandTransformFollowOffset*& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_rightHandFollower()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandFollower;
}
constexpr ::GlobalNamespace::HandTransformFollowOffset* const& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_rightHandFollower() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandFollower;
}
constexpr void GlobalNamespace::ConnectedControllerHandler::__cordl_internal_set_rightHandFollower(::GlobalNamespace::HandTransformFollowOffset*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandFollower = value;
}
constexpr ::GlobalNamespace::HandTransformFollowOffset*& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_leftHandFollower()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandFollower;
}
constexpr ::GlobalNamespace::HandTransformFollowOffset* const& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_leftHandFollower() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandFollower;
}
constexpr void GlobalNamespace::ConnectedControllerHandler::__cordl_internal_set_leftHandFollower(::GlobalNamespace::HandTransformFollowOffset*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandFollower = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_rightXRController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightXRController;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController> const& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_rightXRController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightXRController;
}
constexpr void GlobalNamespace::ConnectedControllerHandler::__cordl_internal_set_rightXRController(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightXRController = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_leftXRController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftXRController;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController> const& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_leftXRController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftXRController;
}
constexpr void GlobalNamespace::ConnectedControllerHandler::__cordl_internal_set_leftXRController(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftXRController = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn>& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_snapTurnController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapTurnController;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn> const& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_snapTurnController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapTurnController;
}
constexpr void GlobalNamespace::ConnectedControllerHandler::__cordl_internal_set_snapTurnController(::UnityW<::UnityEngine::XR::Interaction::Toolkit::GorillaSnapTurn>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapTurnController = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>>*& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_rightControllerList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightControllerList;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>>* const& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_rightControllerList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightControllerList;
}
constexpr void GlobalNamespace::ConnectedControllerHandler::__cordl_internal_set_rightControllerList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightControllerList = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>>*& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_leftcontrollerList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftcontrollerList;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>>* const& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_leftcontrollerList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftcontrollerList;
}
constexpr void GlobalNamespace::ConnectedControllerHandler::__cordl_internal_set_leftcontrollerList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRController>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftcontrollerList = value;
}
constexpr bool& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_overrideEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideEnabled;
}
constexpr bool const& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_overrideEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideEnabled;
}
constexpr void GlobalNamespace::ConnectedControllerHandler::__cordl_internal_set_overrideEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideEnabled = value;
}
constexpr bool& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_overrideLeftEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideLeftEnable;
}
constexpr bool const& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_overrideLeftEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideLeftEnable;
}
constexpr void GlobalNamespace::ConnectedControllerHandler::__cordl_internal_set_overrideLeftEnable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideLeftEnable = value;
}
constexpr bool& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_overrideRightEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideRightEnable;
}
constexpr bool const& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_overrideRightEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideRightEnable;
}
constexpr void GlobalNamespace::ConnectedControllerHandler::__cordl_internal_set_overrideRightEnable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideRightEnable = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_lastRightPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRightPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_lastRightPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRightPos;
}
constexpr void GlobalNamespace::ConnectedControllerHandler::__cordl_internal_set_lastRightPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastRightPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_lastLeftPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastLeftPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_lastLeftPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastLeftPos;
}
constexpr void GlobalNamespace::ConnectedControllerHandler::__cordl_internal_set_lastLeftPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastLeftPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_tempRightPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempRightPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_tempRightPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempRightPos;
}
constexpr void GlobalNamespace::ConnectedControllerHandler::__cordl_internal_set_tempRightPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempRightPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_tempLeftPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempLeftPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_tempLeftPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempLeftPos;
}
constexpr void GlobalNamespace::ConnectedControllerHandler::__cordl_internal_set_tempLeftPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempLeftPos = value;
}
constexpr bool& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_updateControllers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateControllers;
}
constexpr bool const& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_updateControllers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateControllers;
}
constexpr void GlobalNamespace::ConnectedControllerHandler::__cordl_internal_set_updateControllers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateControllers = value;
}
constexpr ::UnityW<::GorillaLocomotion::GTPlayer>& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_playerHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerHandler;
}
constexpr ::UnityW<::GorillaLocomotion::GTPlayer> const& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_playerHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerHandler;
}
constexpr void GlobalNamespace::ConnectedControllerHandler::__cordl_internal_set_playerHandler(::UnityW<::GorillaLocomotion::GTPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerHandler = value;
}
constexpr float_t& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_stoppedDurationMinimum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stoppedDurationMinimum;
}
constexpr float_t const& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_stoppedDurationMinimum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stoppedDurationMinimum;
}
constexpr void GlobalNamespace::ConnectedControllerHandler::__cordl_internal_set_stoppedDurationMinimum(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stoppedDurationMinimum = value;
}
constexpr ::GlobalNamespace::OverrideControllers& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_overriddenControllers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overriddenControllers;
}
constexpr ::GlobalNamespace::OverrideControllers const& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_overriddenControllers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overriddenControllers;
}
constexpr void GlobalNamespace::ConnectedControllerHandler::__cordl_internal_set_overriddenControllers(::GlobalNamespace::OverrideControllers  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overriddenControllers = value;
}
constexpr float_t& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_timeStoppedMovingLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeStoppedMovingLeft;
}
constexpr float_t const& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_timeStoppedMovingLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeStoppedMovingLeft;
}
constexpr void GlobalNamespace::ConnectedControllerHandler::__cordl_internal_set_timeStoppedMovingLeft(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeStoppedMovingLeft = value;
}
constexpr float_t& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_timeStoppedMovingRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeStoppedMovingRight;
}
constexpr float_t const& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_timeStoppedMovingRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeStoppedMovingRight;
}
constexpr void GlobalNamespace::ConnectedControllerHandler::__cordl_internal_set_timeStoppedMovingRight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeStoppedMovingRight = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_oculusRightPosOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oculusRightPosOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_oculusRightPosOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oculusRightPosOffset;
}
constexpr void GlobalNamespace::ConnectedControllerHandler::__cordl_internal_set_oculusRightPosOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oculusRightPosOffset = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_oculusRightRotOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oculusRightRotOffset;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_oculusRightRotOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oculusRightRotOffset;
}
constexpr void GlobalNamespace::ConnectedControllerHandler::__cordl_internal_set_oculusRightRotOffset(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oculusRightRotOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_oculusLeftPosOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oculusLeftPosOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_oculusLeftPosOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oculusLeftPosOffset;
}
constexpr void GlobalNamespace::ConnectedControllerHandler::__cordl_internal_set_oculusLeftPosOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oculusLeftPosOffset = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_oculusLeftRotOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oculusLeftRotOffset;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::ConnectedControllerHandler::__cordl_internal_get_oculusLeftRotOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oculusLeftRotOffset;
}
constexpr void GlobalNamespace::ConnectedControllerHandler::__cordl_internal_set_oculusLeftRotOffset(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oculusLeftRotOffset = value;
}
inline void GlobalNamespace::ConnectedControllerHandler::setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::ConnectedControllerHandler>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::ConnectedControllerHandler>, "<Instance>k__BackingField", ::GlobalNamespace::ConnectedControllerHandler*>(std::forward<::UnityW<::GlobalNamespace::ConnectedControllerHandler>>(value));
}
inline ::UnityW<::GlobalNamespace::ConnectedControllerHandler> GlobalNamespace::ConnectedControllerHandler::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::ConnectedControllerHandler>, "<Instance>k__BackingField", ::GlobalNamespace::ConnectedControllerHandler*>();
}
inline ::UnityW<::GlobalNamespace::ConnectedControllerHandler> GlobalNamespace::ConnectedControllerHandler::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::ConnectedControllerHandler>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ConnectedControllerHandler::set_Instance(::GlobalNamespace::ConnectedControllerHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::ConnectedControllerHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::ConnectedControllerHandler::get_rightValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"get_rightValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::ConnectedControllerHandler::get_leftValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"get_leftValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::ConnectedControllerHandler::get_RightValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"get_RightValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::ConnectedControllerHandler::get_LeftValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"get_LeftValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::ConnectedControllerHandler::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ConnectedControllerHandler::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ConnectedControllerHandler::SetRightHandOffsets(::UnityEngine::Vector3  positionOffset, ::UnityEngine::Quaternion  rotationOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"SetRightHandOffsets", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, positionOffset, rotationOffset);
}
inline void GlobalNamespace::ConnectedControllerHandler::SetLeftHandOffsets(::UnityEngine::Vector3  positionOffset, ::UnityEngine::Quaternion  rotationOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"SetLeftHandOffsets", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, positionOffset, rotationOffset);
}
inline void GlobalNamespace::ConnectedControllerHandler::SetOculusOffsets(bool  rightHand, bool  leftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"SetOculusOffsets", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rightHand, leftHand);
}
inline void GlobalNamespace::ConnectedControllerHandler::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ConnectedControllerHandler::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ConnectedControllerHandler::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ConnectedControllerHandler::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ConnectedControllerHandler::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ConnectedControllerHandler::UpdateControllerStates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"UpdateControllerStates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ConnectedControllerHandler::AssignSnapturnController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"AssignSnapturnController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ConnectedControllerHandler::GetValidForXRNode(::UnityEngine::XR::XRNode  controllerNode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {"GetValidForXRNode", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, controllerNode);
}
inline void GlobalNamespace::ConnectedControllerHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConnectedControllerHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ConnectedControllerHandler* GlobalNamespace::ConnectedControllerHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ConnectedControllerHandler*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::ConnectedControllerHandler::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::ConnectedControllerHandler::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConnectedControllerHandler::ConnectedControllerHandler()   {
}
