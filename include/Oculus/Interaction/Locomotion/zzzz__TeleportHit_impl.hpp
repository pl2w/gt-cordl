#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/TeleportHit.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TeleportHit_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportHit.get_Point
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Locomotion::TeleportHit::*)()>(&::Oculus::Interaction::Locomotion::TeleportHit::get_Point)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa4cd2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportHit>(),
                        {"get_Point", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportHit.get_Normal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Locomotion::TeleportHit::*)()>(&::Oculus::Interaction::Locomotion::TeleportHit::get_Normal)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xa4cd4fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportHit>(),
                        {"get_Normal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportHit._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportHit::*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Oculus::Interaction::Locomotion::TeleportHit::_ctor)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xa4cca10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportHit>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Locomotion::TeleportHit::setStaticF_DEFAULT(::Oculus::Interaction::Locomotion::TeleportHit  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Locomotion::TeleportHit, "DEFAULT", ::Oculus::Interaction::Locomotion::TeleportHit>(std::forward<::Oculus::Interaction::Locomotion::TeleportHit>(value));
}
inline ::Oculus::Interaction::Locomotion::TeleportHit Oculus::Interaction::Locomotion::TeleportHit::getStaticF_DEFAULT()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Locomotion::TeleportHit, "DEFAULT", ::Oculus::Interaction::Locomotion::TeleportHit>();
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Locomotion::TeleportHit::get_Point()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportHit>(),
                        {"get_Point", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Locomotion::TeleportHit::get_Normal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportHit>(),
                        {"get_Normal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TeleportHit::_ctor(::UnityEngine::Transform*  relativeTo, ::UnityEngine::Vector3  position, ::UnityEngine::Vector3  normal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportHit>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, relativeTo, position, normal);
}
// Ctor Parameters [CppParam { name: "relativeTo", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_localPose", ty: "::UnityEngine::Pose", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::Locomotion::TeleportHit::TeleportHit(::UnityW<::UnityEngine::Transform>  relativeTo, ::UnityEngine::Pose  _localPose) noexcept  {
this->relativeTo = relativeTo;
this->_localPose = _localPose;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::TeleportHit::TeleportHit()   {
}
