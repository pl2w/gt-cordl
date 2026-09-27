#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/TeleportationProvider.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__TeleportRequest_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionProvider_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__TeleportationProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__TeleportRequest_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__XRBodyGroundPosition_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__XRCameraForwardXZAlignment_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__XROriginUpAlignment_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider.get_currentRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::get_currentRequest)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb44f434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>(),
                        {"get_currentRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider.set_currentRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::set_currentRequest)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb44f44c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>(),
                        {"set_currentRequest", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider.get_validRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::get_validRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44f464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>(),
                        {"get_validRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider.set_validRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::set_validRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44f46c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>(),
                        {"set_validRequest", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider.get_delayTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::get_delayTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44f474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>(),
                        {"get_delayTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider.set_delayTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::set_delayTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44f47c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>(),
                        {"set_delayTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider.get_canStartMoving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::get_canStartMoving)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb44f484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider.QueueTeleportRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::QueueTeleportRequest)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb44f4c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider.get_upTransformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::get_upTransformation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44f4ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>(),
                        {"get_upTransformation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider.set_upTransformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::set_upTransformation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44f4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>(),
                        {"set_upTransformation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider.get_forwardTransformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRCameraForwardXZAlignment* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::get_forwardTransformation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44f4fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>(),
                        {"get_forwardTransformation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider.set_forwardTransformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRCameraForwardXZAlignment*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::set_forwardTransformation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44f504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>(),
                        {"set_forwardTransformation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRCameraForwardXZAlignment*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider.get_positionTransformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyGroundPosition* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::get_positionTransformation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44f50c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>(),
                        {"get_positionTransformation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider.set_positionTransformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyGroundPosition*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::set_positionTransformation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44f514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>(),
                        {"set_positionTransformation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyGroundPosition*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::Update)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0xb44f51c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xb44f7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::__cordl_internal_get__currentRequest_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentRequest_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::__cordl_internal_get__currentRequest_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentRequest_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::__cordl_internal_set__currentRequest_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentRequest_k__BackingField = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::__cordl_internal_get__validRequest_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____validRequest_k__BackingField;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::__cordl_internal_get__validRequest_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____validRequest_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::__cordl_internal_set__validRequest_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____validRequest_k__BackingField = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::__cordl_internal_get_m_DelayTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DelayTime;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::__cordl_internal_get_m_DelayTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DelayTime;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::__cordl_internal_set_m_DelayTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DelayTime = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::__cordl_internal_get__upTransformation_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____upTransformation_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::__cordl_internal_get__upTransformation_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____upTransformation_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::__cordl_internal_set__upTransformation_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____upTransformation_k__BackingField = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRCameraForwardXZAlignment*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::__cordl_internal_get__forwardTransformation_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forwardTransformation_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRCameraForwardXZAlignment* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::__cordl_internal_get__forwardTransformation_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forwardTransformation_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::__cordl_internal_set__forwardTransformation_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRCameraForwardXZAlignment*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____forwardTransformation_k__BackingField = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyGroundPosition*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::__cordl_internal_get__positionTransformation_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionTransformation_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyGroundPosition* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::__cordl_internal_get__positionTransformation_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionTransformation_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::__cordl_internal_set__positionTransformation_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyGroundPosition*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____positionTransformation_k__BackingField = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::__cordl_internal_get_m_DelayStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DelayStartTime;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::__cordl_internal_get_m_DelayStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DelayStartTime;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::__cordl_internal_set_m_DelayStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DelayStartTime = value;
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::get_currentRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>(),
                        {"get_currentRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::set_currentRequest(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>(),
                        {"set_currentRequest", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::get_validRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>(),
                        {"get_validRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::set_validRequest(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>(),
                        {"set_validRequest", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::get_delayTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>(),
                        {"get_delayTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::set_delayTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>(),
                        {"set_delayTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::get_canStartMoving()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::QueueTeleportRequest(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest  teleportRequest)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, teleportRequest);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment* UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::get_upTransformation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>(),
                        {"get_upTransformation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::set_upTransformation(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>(),
                        {"set_upTransformation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRCameraForwardXZAlignment* UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::get_forwardTransformation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>(),
                        {"get_forwardTransformation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRCameraForwardXZAlignment*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::set_forwardTransformation(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRCameraForwardXZAlignment*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>(),
                        {"set_forwardTransformation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRCameraForwardXZAlignment*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyGroundPosition* UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::get_positionTransformation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>(),
                        {"get_positionTransformation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyGroundPosition*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::set_positionTransformation(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyGroundPosition*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>(),
                        {"set_positionTransformation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyGroundPosition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider* UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationProvider::TeleportationProvider()   {
}
