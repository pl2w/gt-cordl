#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AR/Inputs/ScreenSpaceRayPoseDriver.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AR/Inputs/zzzz__ScreenSpaceRayPoseDriver_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputValueReader_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__UnityObjectReferenceCache_1_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver.get_controllerCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::get_controllerCamera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cfa38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver*>(),
                        {"get_controllerCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver.set_controllerCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::*)(::UnityEngine::Camera*)>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::set_controllerCamera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cfa40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver*>(),
                        {"set_controllerCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver.get_tapStartPositionInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::get_tapStartPositionInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cfa48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver*>(),
                        {"get_tapStartPositionInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver.set_tapStartPositionInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*)>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::set_tapStartPositionInput)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb4cfa50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver*>(),
                        {"set_tapStartPositionInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver.get_dragStartPositionInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::get_dragStartPositionInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cfaac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver*>(),
                        {"get_dragStartPositionInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver.set_dragStartPositionInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*)>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::set_dragStartPositionInput)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb4cfab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver*>(),
                        {"set_dragStartPositionInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver.get_dragCurrentPositionInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::get_dragCurrentPositionInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cfb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver*>(),
                        {"get_dragCurrentPositionInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver.set_dragCurrentPositionInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*)>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::set_dragCurrentPositionInput)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb4cfb18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver*>(),
                        {"set_dragCurrentPositionInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver.get_screenTouchCountInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>* (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::get_screenTouchCountInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cfb74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver*>(),
                        {"get_screenTouchCountInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver.set_screenTouchCountInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*)>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::set_screenTouchCountInput)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb4cfb7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver*>(),
                        {"set_screenTouchCountInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::OnEnable)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xb4cfbd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::OnDisable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb4cfd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::Update)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xb4cfd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver.ApplyPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::*)(::UnityEngine::Vector2)>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::ApplyPose)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0xb4cfee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver*>(),
                        {"ApplyPose", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::_ctor)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xb4d014c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::__cordl_internal_get_m_ControllerCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControllerCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::__cordl_internal_get_m_ControllerCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControllerCamera;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::__cordl_internal_set_m_ControllerCamera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ControllerCamera = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::__cordl_internal_get_m_TapStartPositionInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TapStartPositionInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::__cordl_internal_get_m_TapStartPositionInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TapStartPositionInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::__cordl_internal_set_m_TapStartPositionInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TapStartPositionInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::__cordl_internal_get_m_DragStartPositionInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DragStartPositionInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::__cordl_internal_get_m_DragStartPositionInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DragStartPositionInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::__cordl_internal_set_m_DragStartPositionInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DragStartPositionInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::__cordl_internal_get_m_DragCurrentPositionInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DragCurrentPositionInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::__cordl_internal_get_m_DragCurrentPositionInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DragCurrentPositionInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::__cordl_internal_set_m_DragCurrentPositionInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DragCurrentPositionInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*& UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::__cordl_internal_get_m_ScreenTouchCountInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScreenTouchCountInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>* const& UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::__cordl_internal_get_m_ScreenTouchCountInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScreenTouchCountInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::__cordl_internal_set_m_ScreenTouchCountInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ScreenTouchCountInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<::UnityW<::UnityEngine::Transform>>*& UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::__cordl_internal_get_m_ParentTransformCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ParentTransformCache;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<::UnityW<::UnityEngine::Transform>>* const& UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::__cordl_internal_get_m_ParentTransformCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ParentTransformCache;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::__cordl_internal_set_m_ParentTransformCache(::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ParentTransformCache = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::__cordl_internal_get_m_TapStartPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TapStartPosition;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::__cordl_internal_get_m_TapStartPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TapStartPosition;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::__cordl_internal_set_m_TapStartPosition(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TapStartPosition = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::__cordl_internal_get_m_DragStartPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DragStartPosition;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::__cordl_internal_get_m_DragStartPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DragStartPosition;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::__cordl_internal_set_m_DragStartPosition(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DragStartPosition = value;
}
inline ::UnityW<::UnityEngine::Camera> UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::get_controllerCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver*>(),
                        {"get_controllerCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::set_controllerCamera(::UnityEngine::Camera*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver*>(),
                        {"set_controllerCamera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::get_tapStartPositionInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver*>(),
                        {"get_tapStartPositionInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::set_tapStartPositionInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver*>(),
                        {"set_tapStartPositionInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::get_dragStartPositionInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver*>(),
                        {"get_dragStartPositionInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::set_dragStartPositionInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver*>(),
                        {"set_dragStartPositionInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::get_dragCurrentPositionInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver*>(),
                        {"get_dragCurrentPositionInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::set_dragCurrentPositionInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver*>(),
                        {"set_dragCurrentPositionInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>* UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::get_screenTouchCountInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver*>(),
                        {"get_screenTouchCountInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::set_screenTouchCountInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver*>(),
                        {"set_screenTouchCountInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::ApplyPose(::UnityEngine::Vector2  screenPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver*>(),
                        {"ApplyPose", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, screenPosition);
}
inline void UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver* UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRayPoseDriver::ScreenSpaceRayPoseDriver()   {
}
