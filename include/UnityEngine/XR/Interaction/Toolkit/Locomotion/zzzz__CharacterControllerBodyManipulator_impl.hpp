#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/CharacterControllerBodyManipulator.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__ScriptableConstrainedBodyManipulator_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__CharacterControllerBodyManipulator_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__XRMovableBody_def.hpp"
#include "UnityEngine/zzzz__CharacterController_def.hpp"
#include "UnityEngine/zzzz__CollisionFlags_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator.get_lastCollisionFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::CollisionFlags (::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator::get_lastCollisionFlags)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb446a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator.get_isGrounded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator::get_isGrounded)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb446af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator.get_characterController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::CharacterController> (::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator::get_characterController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb446b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator*>(),
                        {"get_characterController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator.set_characterController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator::*)(::UnityEngine::CharacterController*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator::set_characterController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb446b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator*>(),
                        {"set_characterController", {}, {::i2c::type_of<::UnityEngine::CharacterController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator.OnLinkedToBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator::OnLinkedToBody)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xb446b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator.OnUnlinkedFromBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator::OnUnlinkedFromBody)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb446d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator.MoveBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::CollisionFlags (::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator::*)(::UnityEngine::Vector3)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator::MoveBody)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xb446d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb446ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::CharacterController>& UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator::__cordl_internal_get__characterController_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____characterController_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::CharacterController> const& UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator::__cordl_internal_get__characterController_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____characterController_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator::__cordl_internal_set__characterController_k__BackingField(::UnityW<::UnityEngine::CharacterController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____characterController_k__BackingField = value;
}
inline ::UnityEngine::CollisionFlags UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator::get_lastCollisionFlags()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::CollisionFlags>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator::get_isGrounded()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::CharacterController> UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator::get_characterController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator*>(),
                        {"get_characterController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::CharacterController>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator::set_characterController(::UnityEngine::CharacterController*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator*>(),
                        {"set_characterController", {}, {::i2c::type_of<::UnityEngine::CharacterController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator::OnLinkedToBody(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*  body)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, body);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator::OnUnlinkedFromBody()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::CollisionFlags UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator::MoveBody(::UnityEngine::Vector3  motion)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::CollisionFlags>(this, ___internal_method, motion);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator* UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::CharacterControllerBodyManipulator::CharacterControllerBodyManipulator()   {
}
