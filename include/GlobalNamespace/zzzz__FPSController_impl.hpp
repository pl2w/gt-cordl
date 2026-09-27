#pragma once
// IWYU pragma private; include "GlobalNamespace/FPSController.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__FPSController_def.hpp"
#include "GlobalNamespace/zzzz__FPSController_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FPSController.add_OnStartEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FPSController::*)(::GlobalNamespace::FPSController_OnStateChangeEventHandler*)>(&::GlobalNamespace::FPSController::add_OnStartEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5adf614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSController*>(),
                        {"add_OnStartEvent", {}, {::i2c::type_of<::GlobalNamespace::FPSController_OnStateChangeEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FPSController.remove_OnStartEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FPSController::*)(::GlobalNamespace::FPSController_OnStateChangeEventHandler*)>(&::GlobalNamespace::FPSController::remove_OnStartEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5adf6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSController*>(),
                        {"remove_OnStartEvent", {}, {::i2c::type_of<::GlobalNamespace::FPSController_OnStateChangeEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FPSController.add_OnStopEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FPSController::*)(::GlobalNamespace::FPSController_OnStateChangeEventHandler*)>(&::GlobalNamespace::FPSController::add_OnStopEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5adf74c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSController*>(),
                        {"add_OnStopEvent", {}, {::i2c::type_of<::GlobalNamespace::FPSController_OnStateChangeEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FPSController.remove_OnStopEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FPSController::*)(::GlobalNamespace::FPSController_OnStateChangeEventHandler*)>(&::GlobalNamespace::FPSController::remove_OnStopEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5adf7e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSController*>(),
                        {"remove_OnStopEvent", {}, {::i2c::type_of<::GlobalNamespace::FPSController_OnStateChangeEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FPSController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FPSController::*)()>(&::GlobalNamespace::FPSController::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5adf884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::FPSController::__cordl_internal_get_baseMoveSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseMoveSpeed;
}
constexpr float_t const& GlobalNamespace::FPSController::__cordl_internal_get_baseMoveSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseMoveSpeed;
}
constexpr void GlobalNamespace::FPSController::__cordl_internal_set_baseMoveSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseMoveSpeed = value;
}
constexpr float_t& GlobalNamespace::FPSController::__cordl_internal_get_shiftMoveSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftMoveSpeed;
}
constexpr float_t const& GlobalNamespace::FPSController::__cordl_internal_get_shiftMoveSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftMoveSpeed;
}
constexpr void GlobalNamespace::FPSController::__cordl_internal_set_shiftMoveSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shiftMoveSpeed = value;
}
constexpr float_t& GlobalNamespace::FPSController::__cordl_internal_get_ctrlMoveSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ctrlMoveSpeed;
}
constexpr float_t const& GlobalNamespace::FPSController::__cordl_internal_get_ctrlMoveSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ctrlMoveSpeed;
}
constexpr void GlobalNamespace::FPSController::__cordl_internal_set_ctrlMoveSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ctrlMoveSpeed = value;
}
constexpr float_t& GlobalNamespace::FPSController::__cordl_internal_get_lookHorizontal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookHorizontal;
}
constexpr float_t const& GlobalNamespace::FPSController::__cordl_internal_get_lookHorizontal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookHorizontal;
}
constexpr void GlobalNamespace::FPSController::__cordl_internal_set_lookHorizontal(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookHorizontal = value;
}
constexpr float_t& GlobalNamespace::FPSController::__cordl_internal_get_lookVertical()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookVertical;
}
constexpr float_t const& GlobalNamespace::FPSController::__cordl_internal_get_lookVertical() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookVertical;
}
constexpr void GlobalNamespace::FPSController::__cordl_internal_set_lookVertical(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookVertical = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FPSController::__cordl_internal_get_leftControllerPosOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftControllerPosOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FPSController::__cordl_internal_get_leftControllerPosOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftControllerPosOffset;
}
constexpr void GlobalNamespace::FPSController::__cordl_internal_set_leftControllerPosOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftControllerPosOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FPSController::__cordl_internal_get_leftControllerRotationOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftControllerRotationOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FPSController::__cordl_internal_get_leftControllerRotationOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftControllerRotationOffset;
}
constexpr void GlobalNamespace::FPSController::__cordl_internal_set_leftControllerRotationOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftControllerRotationOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FPSController::__cordl_internal_get_rightControllerPosOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightControllerPosOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FPSController::__cordl_internal_get_rightControllerPosOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightControllerPosOffset;
}
constexpr void GlobalNamespace::FPSController::__cordl_internal_set_rightControllerPosOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightControllerPosOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FPSController::__cordl_internal_get_rightControllerRotationOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightControllerRotationOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FPSController::__cordl_internal_get_rightControllerRotationOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightControllerRotationOffset;
}
constexpr void GlobalNamespace::FPSController::__cordl_internal_set_rightControllerRotationOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightControllerRotationOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FPSController::__cordl_internal_get_noclipLeftControllerPosOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noclipLeftControllerPosOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FPSController::__cordl_internal_get_noclipLeftControllerPosOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noclipLeftControllerPosOffset;
}
constexpr void GlobalNamespace::FPSController::__cordl_internal_set_noclipLeftControllerPosOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noclipLeftControllerPosOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FPSController::__cordl_internal_get_noclipLeftControllerRotationOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noclipLeftControllerRotationOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FPSController::__cordl_internal_get_noclipLeftControllerRotationOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noclipLeftControllerRotationOffset;
}
constexpr void GlobalNamespace::FPSController::__cordl_internal_set_noclipLeftControllerRotationOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noclipLeftControllerRotationOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FPSController::__cordl_internal_get_noclipRightControllerPosOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noclipRightControllerPosOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FPSController::__cordl_internal_get_noclipRightControllerPosOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noclipRightControllerPosOffset;
}
constexpr void GlobalNamespace::FPSController::__cordl_internal_set_noclipRightControllerPosOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noclipRightControllerPosOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FPSController::__cordl_internal_get_noclipRightControllerRotationOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noclipRightControllerRotationOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FPSController::__cordl_internal_get_noclipRightControllerRotationOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noclipRightControllerRotationOffset;
}
constexpr void GlobalNamespace::FPSController::__cordl_internal_set_noclipRightControllerRotationOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noclipRightControllerRotationOffset = value;
}
constexpr bool& GlobalNamespace::FPSController::__cordl_internal_get_toggleGrab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggleGrab;
}
constexpr bool const& GlobalNamespace::FPSController::__cordl_internal_get_toggleGrab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggleGrab;
}
constexpr void GlobalNamespace::FPSController::__cordl_internal_set_toggleGrab(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toggleGrab = value;
}
constexpr bool& GlobalNamespace::FPSController::__cordl_internal_get_clampGrab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clampGrab;
}
constexpr bool const& GlobalNamespace::FPSController::__cordl_internal_get_clampGrab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clampGrab;
}
constexpr void GlobalNamespace::FPSController::__cordl_internal_set_clampGrab(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clampGrab = value;
}
constexpr ::GlobalNamespace::FPSController_OnStateChangeEventHandler*& GlobalNamespace::FPSController::__cordl_internal_get_OnStartEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStartEvent;
}
constexpr ::GlobalNamespace::FPSController_OnStateChangeEventHandler* const& GlobalNamespace::FPSController::__cordl_internal_get_OnStartEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStartEvent;
}
constexpr void GlobalNamespace::FPSController::__cordl_internal_set_OnStartEvent(::GlobalNamespace::FPSController_OnStateChangeEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnStartEvent = value;
}
constexpr ::GlobalNamespace::FPSController_OnStateChangeEventHandler*& GlobalNamespace::FPSController::__cordl_internal_get_OnStopEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStopEvent;
}
constexpr ::GlobalNamespace::FPSController_OnStateChangeEventHandler* const& GlobalNamespace::FPSController::__cordl_internal_get_OnStopEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStopEvent;
}
constexpr void GlobalNamespace::FPSController::__cordl_internal_set_OnStopEvent(::GlobalNamespace::FPSController_OnStateChangeEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnStopEvent = value;
}
constexpr bool& GlobalNamespace::FPSController::__cordl_internal_get_controlRightHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlRightHand;
}
constexpr bool const& GlobalNamespace::FPSController::__cordl_internal_get_controlRightHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlRightHand;
}
constexpr void GlobalNamespace::FPSController::__cordl_internal_set_controlRightHand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controlRightHand = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::FPSController::__cordl_internal_get_HandMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::FPSController::__cordl_internal_get_HandMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandMask;
}
constexpr void GlobalNamespace::FPSController::__cordl_internal_set_HandMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HandMask = value;
}
inline void GlobalNamespace::FPSController::add_OnStartEvent(::GlobalNamespace::FPSController_OnStateChangeEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSController*>(),
                        {"add_OnStartEvent", {}, {::i2c::type_of<::GlobalNamespace::FPSController_OnStateChangeEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FPSController::remove_OnStartEvent(::GlobalNamespace::FPSController_OnStateChangeEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSController*>(),
                        {"remove_OnStartEvent", {}, {::i2c::type_of<::GlobalNamespace::FPSController_OnStateChangeEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FPSController::add_OnStopEvent(::GlobalNamespace::FPSController_OnStateChangeEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSController*>(),
                        {"add_OnStopEvent", {}, {::i2c::type_of<::GlobalNamespace::FPSController_OnStateChangeEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FPSController::remove_OnStopEvent(::GlobalNamespace::FPSController_OnStateChangeEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSController*>(),
                        {"remove_OnStopEvent", {}, {::i2c::type_of<::GlobalNamespace::FPSController_OnStateChangeEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FPSController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FPSController* GlobalNamespace::FPSController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FPSController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FPSController::FPSController()   {
}
//  Writing Method size for method: ::GlobalNamespace::FPSController_OnStateChangeEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FPSController_OnStateChangeEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::FPSController_OnStateChangeEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5adf8dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSController_OnStateChangeEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FPSController_OnStateChangeEventHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FPSController_OnStateChangeEventHandler::*)()>(&::GlobalNamespace::FPSController_OnStateChangeEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5adf978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FPSController_OnStateChangeEventHandler*>(),
                    {::i2c::class_of<::GlobalNamespace::FPSController_OnStateChangeEventHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FPSController_OnStateChangeEventHandler.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::FPSController_OnStateChangeEventHandler::*)(::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::FPSController_OnStateChangeEventHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5adf98c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FPSController_OnStateChangeEventHandler*>(),
                    {::i2c::class_of<::GlobalNamespace::FPSController_OnStateChangeEventHandler*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FPSController_OnStateChangeEventHandler.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FPSController_OnStateChangeEventHandler::*)(::System::IAsyncResult*)>(&::GlobalNamespace::FPSController_OnStateChangeEventHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5adf9a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::FPSController_OnStateChangeEventHandler*>(),
                    {::i2c::class_of<::GlobalNamespace::FPSController_OnStateChangeEventHandler*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::FPSController_OnStateChangeEventHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FPSController_OnStateChangeEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::FPSController_OnStateChangeEventHandler::Invoke()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FPSController_OnStateChangeEventHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* GlobalNamespace::FPSController_OnStateChangeEventHandler::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FPSController_OnStateChangeEventHandler*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, object);
}
inline void GlobalNamespace::FPSController_OnStateChangeEventHandler::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::FPSController_OnStateChangeEventHandler*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::FPSController_OnStateChangeEventHandler* GlobalNamespace::FPSController_OnStateChangeEventHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FPSController_OnStateChangeEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FPSController_OnStateChangeEventHandler::FPSController_OnStateChangeEventHandler()   {
}
