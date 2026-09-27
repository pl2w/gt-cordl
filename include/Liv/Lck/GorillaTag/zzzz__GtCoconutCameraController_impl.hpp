#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtCoconutCameraController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtCoconutCameraController_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__CoconutCamera_def.hpp"
#include "Liv/Lck/zzzz__ILckService_def.hpp"
#include "Liv/Lck/zzzz__LckResult_def.hpp"
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtCoconutCameraController.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtCoconutCameraController::*)()>(&::Liv::Lck::GorillaTag::GtCoconutCameraController::OnEnable)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x9d21940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCoconutCameraController*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtCoconutCameraController.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtCoconutCameraController::*)()>(&::Liv::Lck::GorillaTag::GtCoconutCameraController::Start)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9d21b24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCoconutCameraController*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtCoconutCameraController.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtCoconutCameraController::*)()>(&::Liv::Lck::GorillaTag::GtCoconutCameraController::OnDisable)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x9d21b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCoconutCameraController*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtCoconutCameraController.OnRecordingStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtCoconutCameraController::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::GorillaTag::GtCoconutCameraController::OnRecordingStarted)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9d21cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCoconutCameraController*>(),
                        {"OnRecordingStarted", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtCoconutCameraController.OnRecordingStopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtCoconutCameraController::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::GorillaTag::GtCoconutCameraController::OnRecordingStopped)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9d21d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCoconutCameraController*>(),
                        {"OnRecordingStopped", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtCoconutCameraController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtCoconutCameraController::*)()>(&::Liv::Lck::GorillaTag::GtCoconutCameraController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9d21d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCoconutCameraController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::ILckService*& Liv::Lck::GorillaTag::GtCoconutCameraController::__cordl_internal_get__lckService()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr ::Liv::Lck::ILckService* const& Liv::Lck::GorillaTag::GtCoconutCameraController::__cordl_internal_get__lckService() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr void Liv::Lck::GorillaTag::GtCoconutCameraController::__cordl_internal_set__lckService(::Liv::Lck::ILckService*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lckService = value;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::CoconutCamera>& Liv::Lck::GorillaTag::GtCoconutCameraController::__cordl_internal_get__cocoCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cocoCamera;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::CoconutCamera> const& Liv::Lck::GorillaTag::GtCoconutCameraController::__cordl_internal_get__cocoCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cocoCamera;
}
constexpr void Liv::Lck::GorillaTag::GtCoconutCameraController::__cordl_internal_set__cocoCamera(::UnityW<::Liv::Lck::GorillaTag::CoconutCamera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cocoCamera = value;
}
constexpr bool& Liv::Lck::GorillaTag::GtCoconutCameraController::__cordl_internal_get__hideOnStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hideOnStart;
}
constexpr bool const& Liv::Lck::GorillaTag::GtCoconutCameraController::__cordl_internal_get__hideOnStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hideOnStart;
}
constexpr void Liv::Lck::GorillaTag::GtCoconutCameraController::__cordl_internal_set__hideOnStart(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hideOnStart = value;
}
inline void Liv::Lck::GorillaTag::GtCoconutCameraController::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCoconutCameraController*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtCoconutCameraController::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCoconutCameraController*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtCoconutCameraController::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCoconutCameraController*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtCoconutCameraController::OnRecordingStarted(::Liv::Lck::LckResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCoconutCameraController*>(),
                        {"OnRecordingStarted", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Liv::Lck::GorillaTag::GtCoconutCameraController::OnRecordingStopped(::Liv::Lck::LckResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCoconutCameraController*>(),
                        {"OnRecordingStopped", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Liv::Lck::GorillaTag::GtCoconutCameraController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtCoconutCameraController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::GorillaTag::GtCoconutCameraController* Liv::Lck::GorillaTag::GtCoconutCameraController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::GtCoconutCameraController*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::GtCoconutCameraController::GtCoconutCameraController()   {
}
