#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/DroneController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/GorillaTag/zzzz__DroneController_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__DroneCamera_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__DroneDataModel_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__DroneGUI_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__DroneGamepad_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__DroneGeneralKeyboard_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__DroneKeyboard_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__DroneMouse_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__DroneMovement_def.hpp"
#include "Liv/Lck/Recorder/zzzz__RecordingData_def.hpp"
#include "Liv/Lck/zzzz__ILckService_def.hpp"
#include "Liv/Lck/zzzz__LckCamera_def.hpp"
#include "Liv/Lck/zzzz__LckResult_1_def.hpp"
#include "Liv/Lck/zzzz__LckResult_def.hpp"
#include "UnityEngine/zzzz__GUISkin_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneController.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneController::*)()>(&::Liv::Lck::GorillaTag::DroneController::Awake)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x9d15e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneController*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneController.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneController::*)()>(&::Liv::Lck::GorillaTag::DroneController::OnEnable)> {
  constexpr static std::size_t size = 0xc80;
  constexpr static std::size_t addrs = 0x9d17448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneController*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneController.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneController::*)()>(&::Liv::Lck::GorillaTag::DroneController::OnDisable)> {
  constexpr static std::size_t size = 0xc44;
  constexpr static std::size_t addrs = 0x9d19c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneController*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneController.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneController::*)()>(&::Liv::Lck::GorillaTag::DroneController::OnGUI)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9d1bde4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneController*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneController.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneController::*)()>(&::Liv::Lck::GorillaTag::DroneController::Update)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x9d1bf54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneController*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneController.GetLckCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Liv::Lck::LckCamera> (::Liv::Lck::GorillaTag::DroneController::*)()>(&::Liv::Lck::GorillaTag::DroneController::GetLckCamera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d1cc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneController*>(),
                        {"GetLckCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneController.GetModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::GorillaTag::DroneDataModel* (::Liv::Lck::GorillaTag::DroneController::*)()>(&::Liv::Lck::GorillaTag::DroneController::GetModel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d1cc38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneController*>(),
                        {"GetModel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneController.SetDronePositionAndRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneController::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Liv::Lck::GorillaTag::DroneController::SetDronePositionAndRotation)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9d1cc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneController*>(),
                        {"SetDronePositionAndRotation", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneController.OnRecordingStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneController::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::GorillaTag::DroneController::OnRecordingStarted)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9d1cce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneController*>(),
                        {"OnRecordingStarted", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneController.OnRecordingStopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneController::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::GorillaTag::DroneController::OnRecordingStopped)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9d1cdac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneController*>(),
                        {"OnRecordingStopped", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneController.OnRecordingSaved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneController::*)(::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*)>(&::Liv::Lck::GorillaTag::DroneController::OnRecordingSaved)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9d1cdf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneController*>(),
                        {"OnRecordingSaved", {}, {::i2c::type_of<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneController.ProcessRecordButtonBeingPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneController::*)()>(&::Liv::Lck::GorillaTag::DroneController::ProcessRecordButtonBeingPressed)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x9d1ce98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneController*>(),
                        {"ProcessRecordButtonBeingPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneController.ProcessDroneActiveState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneController::*)(bool)>(&::Liv::Lck::GorillaTag::DroneController::ProcessDroneActiveState)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x9d1d03c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneController*>(),
                        {"ProcessDroneActiveState", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneController.SetProcessedMovementSmoothness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneController::*)(float_t)>(&::Liv::Lck::GorillaTag::DroneController::SetProcessedMovementSmoothness)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9d1d170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneController*>(),
                        {"SetProcessedMovementSmoothness", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneController.SetProcessedRotationSmoothness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneController::*)(float_t)>(&::Liv::Lck::GorillaTag::DroneController::SetProcessedRotationSmoothness)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9d1d1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneController*>(),
                        {"SetProcessedRotationSmoothness", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneController.SetProcessedFovSmoothness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneController::*)(float_t)>(&::Liv::Lck::GorillaTag::DroneController::SetProcessedFovSmoothness)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9d1d1d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneController*>(),
                        {"SetProcessedFovSmoothness", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneController::*)()>(&::Liv::Lck::GorillaTag::DroneController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d1d204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GUISkin>& Liv::Lck::GorillaTag::DroneController::__cordl_internal_get__skin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skin;
}
constexpr ::UnityW<::UnityEngine::GUISkin> const& Liv::Lck::GorillaTag::DroneController::__cordl_internal_get__skin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skin;
}
constexpr void Liv::Lck::GorillaTag::DroneController::__cordl_internal_set__skin(::UnityW<::UnityEngine::GUISkin>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____skin = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Liv::Lck::GorillaTag::DroneController::__cordl_internal_get__droneTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____droneTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Liv::Lck::GorillaTag::DroneController::__cordl_internal_get__droneTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____droneTransform;
}
constexpr void Liv::Lck::GorillaTag::DroneController::__cordl_internal_set__droneTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____droneTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Liv::Lck::GorillaTag::DroneController::__cordl_internal_get__gimbalTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gimbalTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Liv::Lck::GorillaTag::DroneController::__cordl_internal_get__gimbalTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gimbalTransform;
}
constexpr void Liv::Lck::GorillaTag::DroneController::__cordl_internal_set__gimbalTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gimbalTransform = value;
}
constexpr ::UnityW<::Liv::Lck::LckCamera>& Liv::Lck::GorillaTag::DroneController::__cordl_internal_get__lckCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckCamera;
}
constexpr ::UnityW<::Liv::Lck::LckCamera> const& Liv::Lck::GorillaTag::DroneController::__cordl_internal_get__lckCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckCamera;
}
constexpr void Liv::Lck::GorillaTag::DroneController::__cordl_internal_set__lckCamera(::UnityW<::Liv::Lck::LckCamera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lckCamera = value;
}
constexpr ::Liv::Lck::GorillaTag::DroneDataModel*& Liv::Lck::GorillaTag::DroneController::__cordl_internal_get__model()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____model;
}
constexpr ::Liv::Lck::GorillaTag::DroneDataModel* const& Liv::Lck::GorillaTag::DroneController::__cordl_internal_get__model() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____model;
}
constexpr void Liv::Lck::GorillaTag::DroneController::__cordl_internal_set__model(::Liv::Lck::GorillaTag::DroneDataModel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____model = value;
}
constexpr ::Liv::Lck::GorillaTag::DroneGeneralKeyboard*& Liv::Lck::GorillaTag::DroneController::__cordl_internal_get__droneGeneralKeyboard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____droneGeneralKeyboard;
}
constexpr ::Liv::Lck::GorillaTag::DroneGeneralKeyboard* const& Liv::Lck::GorillaTag::DroneController::__cordl_internal_get__droneGeneralKeyboard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____droneGeneralKeyboard;
}
constexpr void Liv::Lck::GorillaTag::DroneController::__cordl_internal_set__droneGeneralKeyboard(::Liv::Lck::GorillaTag::DroneGeneralKeyboard*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____droneGeneralKeyboard = value;
}
constexpr ::Liv::Lck::GorillaTag::DroneKeyboard*& Liv::Lck::GorillaTag::DroneController::__cordl_internal_get__droneKeyboard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____droneKeyboard;
}
constexpr ::Liv::Lck::GorillaTag::DroneKeyboard* const& Liv::Lck::GorillaTag::DroneController::__cordl_internal_get__droneKeyboard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____droneKeyboard;
}
constexpr void Liv::Lck::GorillaTag::DroneController::__cordl_internal_set__droneKeyboard(::Liv::Lck::GorillaTag::DroneKeyboard*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____droneKeyboard = value;
}
constexpr ::Liv::Lck::GorillaTag::DroneMouse*& Liv::Lck::GorillaTag::DroneController::__cordl_internal_get__droneMouse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____droneMouse;
}
constexpr ::Liv::Lck::GorillaTag::DroneMouse* const& Liv::Lck::GorillaTag::DroneController::__cordl_internal_get__droneMouse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____droneMouse;
}
constexpr void Liv::Lck::GorillaTag::DroneController::__cordl_internal_set__droneMouse(::Liv::Lck::GorillaTag::DroneMouse*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____droneMouse = value;
}
constexpr ::Liv::Lck::GorillaTag::DroneGamepad*& Liv::Lck::GorillaTag::DroneController::__cordl_internal_get__droneGamepad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____droneGamepad;
}
constexpr ::Liv::Lck::GorillaTag::DroneGamepad* const& Liv::Lck::GorillaTag::DroneController::__cordl_internal_get__droneGamepad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____droneGamepad;
}
constexpr void Liv::Lck::GorillaTag::DroneController::__cordl_internal_set__droneGamepad(::Liv::Lck::GorillaTag::DroneGamepad*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____droneGamepad = value;
}
constexpr ::Liv::Lck::GorillaTag::DroneMovement*& Liv::Lck::GorillaTag::DroneController::__cordl_internal_get__droneMovement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____droneMovement;
}
constexpr ::Liv::Lck::GorillaTag::DroneMovement* const& Liv::Lck::GorillaTag::DroneController::__cordl_internal_get__droneMovement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____droneMovement;
}
constexpr void Liv::Lck::GorillaTag::DroneController::__cordl_internal_set__droneMovement(::Liv::Lck::GorillaTag::DroneMovement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____droneMovement = value;
}
constexpr ::Liv::Lck::GorillaTag::DroneCamera*& Liv::Lck::GorillaTag::DroneController::__cordl_internal_get__droneCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____droneCamera;
}
constexpr ::Liv::Lck::GorillaTag::DroneCamera* const& Liv::Lck::GorillaTag::DroneController::__cordl_internal_get__droneCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____droneCamera;
}
constexpr void Liv::Lck::GorillaTag::DroneController::__cordl_internal_set__droneCamera(::Liv::Lck::GorillaTag::DroneCamera*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____droneCamera = value;
}
constexpr ::Liv::Lck::GorillaTag::DroneGUI*& Liv::Lck::GorillaTag::DroneController::__cordl_internal_get__droneGUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____droneGUI;
}
constexpr ::Liv::Lck::GorillaTag::DroneGUI* const& Liv::Lck::GorillaTag::DroneController::__cordl_internal_get__droneGUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____droneGUI;
}
constexpr void Liv::Lck::GorillaTag::DroneController::__cordl_internal_set__droneGUI(::Liv::Lck::GorillaTag::DroneGUI*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____droneGUI = value;
}
constexpr ::Liv::Lck::ILckService*& Liv::Lck::GorillaTag::DroneController::__cordl_internal_get__lckService()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr ::Liv::Lck::ILckService* const& Liv::Lck::GorillaTag::DroneController::__cordl_internal_get__lckService() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr void Liv::Lck::GorillaTag::DroneController::__cordl_internal_set__lckService(::Liv::Lck::ILckService*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lckService = value;
}
inline void Liv::Lck::GorillaTag::DroneController::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneController*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::DroneController::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneController*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::DroneController::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneController*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::DroneController::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneController*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::DroneController::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneController*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::Liv::Lck::LckCamera> Liv::Lck::GorillaTag::DroneController::GetLckCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneController*>(),
                        {"GetLckCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Liv::Lck::LckCamera>>(this, ___internal_method);
}
inline ::Liv::Lck::GorillaTag::DroneDataModel* Liv::Lck::GorillaTag::DroneController::GetModel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneController*>(),
                        {"GetModel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::GorillaTag::DroneDataModel*>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::DroneController::SetDronePositionAndRotation(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneController*>(),
                        {"SetDronePositionAndRotation", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, rotation);
}
inline void Liv::Lck::GorillaTag::DroneController::OnRecordingStarted(::Liv::Lck::LckResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneController*>(),
                        {"OnRecordingStarted", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Liv::Lck::GorillaTag::DroneController::OnRecordingStopped(::Liv::Lck::LckResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneController*>(),
                        {"OnRecordingStopped", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Liv::Lck::GorillaTag::DroneController::OnRecordingSaved(::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*  lckResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneController*>(),
                        {"OnRecordingSaved", {}, {::i2c::type_of<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lckResult);
}
inline void Liv::Lck::GorillaTag::DroneController::ProcessRecordButtonBeingPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneController*>(),
                        {"ProcessRecordButtonBeingPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::DroneController::ProcessDroneActiveState(bool  isActive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneController*>(),
                        {"ProcessDroneActiveState", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isActive);
}
inline void Liv::Lck::GorillaTag::DroneController::SetProcessedMovementSmoothness(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneController*>(),
                        {"SetProcessedMovementSmoothness", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::GorillaTag::DroneController::SetProcessedRotationSmoothness(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneController*>(),
                        {"SetProcessedRotationSmoothness", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::GorillaTag::DroneController::SetProcessedFovSmoothness(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneController*>(),
                        {"SetProcessedFovSmoothness", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::GorillaTag::DroneController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::GorillaTag::DroneController* Liv::Lck::GorillaTag::DroneController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::DroneController*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::DroneController::DroneController()   {
}
