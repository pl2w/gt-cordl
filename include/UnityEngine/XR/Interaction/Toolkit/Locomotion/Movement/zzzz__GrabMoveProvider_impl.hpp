#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Movement/GrabMoveProvider.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Movement/zzzz__ConstrainedMoveProvider_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Movement/zzzz__GrabMoveProvider_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputButtonReader_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRSelectInteractor_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider.get_controllerTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::get_controllerTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb451ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {"get_controllerTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider.set_controllerTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::set_controllerTransform)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb451ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {"set_controllerTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider.get_enableMoveWhileSelecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::get_enableMoveWhileSelecting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb451bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {"get_enableMoveWhileSelecting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider.set_enableMoveWhileSelecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::set_enableMoveWhileSelecting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb451be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {"set_enableMoveWhileSelecting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider.get_moveFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::get_moveFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb451bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {"get_moveFactor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider.set_moveFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::set_moveFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb451bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {"set_moveFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider.get_grabMoveInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::get_grabMoveInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb451bfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {"get_grabMoveInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider.set_grabMoveInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::set_grabMoveInput)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb451c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {"set_grabMoveInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider.get_canMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::get_canMove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb451c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {"get_canMove", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider.set_canMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::set_canMove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb451c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {"set_canMove", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::Awake)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xb451c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::OnEnable)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb451d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::OnDisable)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb451de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider.ComputeDesiredMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::*)(::by_ref<bool>)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::ComputeDesiredMove)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xb451e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider.IsGrabbing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::IsGrabbing)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb451fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {"IsGrabbing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider.GatherControllerInteractors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::GatherControllerInteractors)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb451afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {"GatherControllerInteractors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider.ControllerHasSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::ControllerHasSelection)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xb452054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {"ControllerHasSelection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider.get_grabMoveAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputActionProperty (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::get_grabMoveAction)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb452168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {"get_grabMoveAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider.set_grabMoveAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::set_grabMoveAction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb452180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {"set_grabMoveAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider.SetInputActionProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::*)(::by_ref<::UnityEngine::InputSystem::InputActionProperty>, ::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::SetInputActionProperty)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb4521b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {"SetInputActionProperty", {}, {::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionProperty>>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::_ctor)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xb4522a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::__cordl_internal_get_m_ControllerTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControllerTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::__cordl_internal_get_m_ControllerTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControllerTransform;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::__cordl_internal_set_m_ControllerTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ControllerTransform = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::__cordl_internal_get_m_EnableMoveWhileSelecting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableMoveWhileSelecting;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::__cordl_internal_get_m_EnableMoveWhileSelecting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableMoveWhileSelecting;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::__cordl_internal_set_m_EnableMoveWhileSelecting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EnableMoveWhileSelecting = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::__cordl_internal_get_m_MoveFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MoveFactor;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::__cordl_internal_get_m_MoveFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MoveFactor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::__cordl_internal_set_m_MoveFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MoveFactor = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::__cordl_internal_get_m_GrabMoveInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GrabMoveInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::__cordl_internal_get_m_GrabMoveInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GrabMoveInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::__cordl_internal_set_m_GrabMoveInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GrabMoveInput = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::__cordl_internal_get__canMove_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canMove_k__BackingField;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::__cordl_internal_get__canMove_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canMove_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::__cordl_internal_set__canMove_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____canMove_k__BackingField = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::__cordl_internal_get_m_IsMoving()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsMoving;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::__cordl_internal_get_m_IsMoving() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsMoving;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::__cordl_internal_set_m_IsMoving(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsMoving = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::__cordl_internal_get_m_PreviousControllerLocalPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousControllerLocalPosition;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::__cordl_internal_get_m_PreviousControllerLocalPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousControllerLocalPosition;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::__cordl_internal_set_m_PreviousControllerLocalPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousControllerLocalPosition = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::__cordl_internal_get_m_ControllerInteractors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControllerInteractors;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::__cordl_internal_get_m_ControllerInteractors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ControllerInteractors;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::__cordl_internal_set_m_ControllerInteractors(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ControllerInteractors = value;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::__cordl_internal_get_m_GrabMoveAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GrabMoveAction;
}
constexpr ::UnityEngine::InputSystem::InputActionProperty const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::__cordl_internal_get_m_GrabMoveAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GrabMoveAction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::__cordl_internal_set_m_GrabMoveAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GrabMoveAction = value;
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::get_controllerTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {"get_controllerTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::set_controllerTransform(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {"set_controllerTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::get_enableMoveWhileSelecting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {"get_enableMoveWhileSelecting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::set_enableMoveWhileSelecting(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {"set_enableMoveWhileSelecting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::get_moveFactor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {"get_moveFactor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::set_moveFactor(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {"set_moveFactor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::get_grabMoveInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {"get_grabMoveInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::set_grabMoveInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {"set_grabMoveInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::get_canMove()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {"get_canMove", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::set_canMove(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {"set_canMove", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::ComputeDesiredMove(::by_ref<bool>  attemptingMove)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, attemptingMove);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::IsGrabbing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {"IsGrabbing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::GatherControllerInteractors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {"GatherControllerInteractors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::ControllerHasSelection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {"ControllerHasSelection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionProperty UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::get_grabMoveAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {"get_grabMoveAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionProperty>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::set_grabMoveAction(::UnityEngine::InputSystem::InputActionProperty  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {"set_grabMoveAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::SetInputActionProperty(::by_ref<::UnityEngine::InputSystem::InputActionProperty>  property, ::UnityEngine::InputSystem::InputActionProperty  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {"SetInputActionProperty", {}, {::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputActionProperty>>(), ::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider* UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::GrabMoveProvider::GrabMoveProvider()   {
}
