#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/TeleportingEventArgs.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__TeleportRequest_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__BaseInteractionEventArgs_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__TeleportingEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__TeleportRequest_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs.get_teleportRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs::get_teleportRequest)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb44f8b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs*>(),
                        {"get_teleportRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs.set_teleportRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs::set_teleportRequest)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb44f8c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs*>(),
                        {"set_teleportRequest", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44d534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs::__cordl_internal_get__teleportRequest_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____teleportRequest_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs::__cordl_internal_get__teleportRequest_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____teleportRequest_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs::__cordl_internal_set__teleportRequest_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____teleportRequest_k__BackingField = value;
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs::get_teleportRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs*>(),
                        {"get_teleportRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs::set_teleportRequest(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs*>(),
                        {"set_teleportRequest", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs* UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportingEventArgs::TeleportingEventArgs()   {
}
