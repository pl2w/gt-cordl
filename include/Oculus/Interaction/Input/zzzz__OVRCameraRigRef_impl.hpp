#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/OVRCameraRigRef.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__OVRCameraRigRef_def.hpp"
#include "GlobalNamespace/zzzz__OVRCameraRig_def.hpp"
#include "GlobalNamespace/zzzz__OVRHand_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IOVRCameraRigRef_def.hpp"
#include "Oculus/Interaction/Input/zzzz__OVRCameraRigRef_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::OVRCameraRigRef.get_CameraRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::OVRCameraRig> (::Oculus::Interaction::Input::OVRCameraRigRef::*)()>(&::Oculus::Interaction::Input::OVRCameraRigRef::get_CameraRig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41f5dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(),
                        {"get_CameraRig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OVRCameraRigRef.get_LeftHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::OVRHand> (::Oculus::Interaction::Input::OVRCameraRigRef::*)()>(&::Oculus::Interaction::Input::OVRCameraRigRef::get_LeftHand)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa41f5e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(),
                        {"get_LeftHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OVRCameraRigRef.get_RightHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::OVRHand> (::Oculus::Interaction::Input::OVRCameraRigRef::*)()>(&::Oculus::Interaction::Input::OVRCameraRigRef::get_RightHand)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa41f6b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(),
                        {"get_RightHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OVRCameraRigRef.get_LeftController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::Input::OVRCameraRigRef::*)()>(&::Oculus::Interaction::Input::OVRCameraRigRef::get_LeftController)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa41f6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(),
                        {"get_LeftController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OVRCameraRigRef.get_RightController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::Input::OVRCameraRigRef::*)()>(&::Oculus::Interaction::Input::OVRCameraRigRef::get_RightController)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa41f6e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(),
                        {"get_RightController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OVRCameraRigRef.add_WhenInputDataDirtied
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::OVRCameraRigRef::*)(::System::Action_1<bool>*)>(&::Oculus::Interaction::Input::OVRCameraRigRef::add_WhenInputDataDirtied)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa41f700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(),
                        {"add_WhenInputDataDirtied", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OVRCameraRigRef.remove_WhenInputDataDirtied
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::OVRCameraRigRef::*)(::System::Action_1<bool>*)>(&::Oculus::Interaction::Input::OVRCameraRigRef::remove_WhenInputDataDirtied)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa41f7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(),
                        {"remove_WhenInputDataDirtied", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OVRCameraRigRef.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::OVRCameraRigRef::*)()>(&::Oculus::Interaction::Input::OVRCameraRigRef::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa41f860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OVRCameraRigRef.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::OVRCameraRigRef::*)()>(&::Oculus::Interaction::Input::OVRCameraRigRef::FixedUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41f88c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OVRCameraRigRef.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::OVRCameraRigRef::*)()>(&::Oculus::Interaction::Input::OVRCameraRigRef::Update)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41f894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OVRCameraRigRef.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::OVRCameraRigRef::*)()>(&::Oculus::Interaction::Input::OVRCameraRigRef::LateUpdate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa41f89c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OVRCameraRigRef.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::OVRCameraRigRef::*)()>(&::Oculus::Interaction::Input::OVRCameraRigRef::OnEnable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa41f8a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OVRCameraRigRef.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::OVRCameraRigRef::*)()>(&::Oculus::Interaction::Input::OVRCameraRigRef::OnDisable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa41f944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OVRCameraRigRef.GetHandCached
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::OVRHand> (::Oculus::Interaction::Input::OVRCameraRigRef::*)(::by_ref<::GlobalNamespace::OVRHand*>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Input::OVRCameraRigRef::GetHandCached)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa41f600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(),
                        {"GetHandCached", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::OVRHand*>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OVRCameraRigRef.HandleInputDataDirtied
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::OVRCameraRigRef::*)(::GlobalNamespace::OVRCameraRig*)>(&::Oculus::Interaction::Input::OVRCameraRigRef::HandleInputDataDirtied)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa41f9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(),
                        {"HandleInputDataDirtied", {}, {::i2c::type_of<::GlobalNamespace::OVRCameraRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OVRCameraRigRef.InjectAllOVRCameraRigRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::OVRCameraRigRef::*)(::GlobalNamespace::OVRCameraRig*, bool)>(&::Oculus::Interaction::Input::OVRCameraRigRef::InjectAllOVRCameraRigRef)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa41fa04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(),
                        {"InjectAllOVRCameraRigRef", {}, {::i2c::type_of<::GlobalNamespace::OVRCameraRig*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OVRCameraRigRef.InjectInteractionOVRCameraRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::OVRCameraRigRef::*)(::GlobalNamespace::OVRCameraRig*)>(&::Oculus::Interaction::Input::OVRCameraRigRef::InjectInteractionOVRCameraRig)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa41fa28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(),
                        {"InjectInteractionOVRCameraRig", {}, {::i2c::type_of<::GlobalNamespace::OVRCameraRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OVRCameraRigRef.InjectRequireHands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::OVRCameraRigRef::*)(bool)>(&::Oculus::Interaction::Input::OVRCameraRigRef::InjectRequireHands)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41fa5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(),
                        {"InjectRequireHands", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OVRCameraRigRef._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::OVRCameraRigRef::*)()>(&::Oculus::Interaction::Input::OVRCameraRigRef::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa41fa64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& Oculus::Interaction::Input::OVRCameraRigRef::__cordl_internal_get__ovrCameraRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ovrCameraRig;
}
constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& Oculus::Interaction::Input::OVRCameraRigRef::__cordl_internal_get__ovrCameraRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ovrCameraRig;
}
constexpr void Oculus::Interaction::Input::OVRCameraRigRef::__cordl_internal_set__ovrCameraRig(::UnityW<::GlobalNamespace::OVRCameraRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ovrCameraRig = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRHand>& Oculus::Interaction::Input::OVRCameraRigRef::__cordl_internal_get__leftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftHand;
}
constexpr ::UnityW<::GlobalNamespace::OVRHand> const& Oculus::Interaction::Input::OVRCameraRigRef::__cordl_internal_get__leftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____leftHand;
}
constexpr void Oculus::Interaction::Input::OVRCameraRigRef::__cordl_internal_set__leftHand(::UnityW<::GlobalNamespace::OVRHand>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____leftHand = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRHand>& Oculus::Interaction::Input::OVRCameraRigRef::__cordl_internal_get__rightHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightHand;
}
constexpr ::UnityW<::GlobalNamespace::OVRHand> const& Oculus::Interaction::Input::OVRCameraRigRef::__cordl_internal_get__rightHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rightHand;
}
constexpr void Oculus::Interaction::Input::OVRCameraRigRef::__cordl_internal_set__rightHand(::UnityW<::GlobalNamespace::OVRHand>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rightHand = value;
}
constexpr bool& Oculus::Interaction::Input::OVRCameraRigRef::__cordl_internal_get__requireOvrHands()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requireOvrHands;
}
constexpr bool const& Oculus::Interaction::Input::OVRCameraRigRef::__cordl_internal_get__requireOvrHands() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requireOvrHands;
}
constexpr void Oculus::Interaction::Input::OVRCameraRigRef::__cordl_internal_set__requireOvrHands(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____requireOvrHands = value;
}
constexpr ::System::Action_1<bool>*& Oculus::Interaction::Input::OVRCameraRigRef::__cordl_internal_get_WhenInputDataDirtied()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenInputDataDirtied;
}
constexpr ::System::Action_1<bool>* const& Oculus::Interaction::Input::OVRCameraRigRef::__cordl_internal_get_WhenInputDataDirtied() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenInputDataDirtied;
}
constexpr void Oculus::Interaction::Input::OVRCameraRigRef::__cordl_internal_set_WhenInputDataDirtied(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenInputDataDirtied = value;
}
constexpr bool& Oculus::Interaction::Input::OVRCameraRigRef::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Input::OVRCameraRigRef::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Input::OVRCameraRigRef::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
constexpr bool& Oculus::Interaction::Input::OVRCameraRigRef::__cordl_internal_get__isLateUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isLateUpdate;
}
constexpr bool const& Oculus::Interaction::Input::OVRCameraRigRef::__cordl_internal_get__isLateUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isLateUpdate;
}
constexpr void Oculus::Interaction::Input::OVRCameraRigRef::__cordl_internal_set__isLateUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isLateUpdate = value;
}
inline ::UnityW<::GlobalNamespace::OVRCameraRig> Oculus::Interaction::Input::OVRCameraRigRef::get_CameraRig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(),
                        {"get_CameraRig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OVRCameraRig>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::OVRHand> Oculus::Interaction::Input::OVRCameraRigRef::get_LeftHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(),
                        {"get_LeftHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OVRHand>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::OVRHand> Oculus::Interaction::Input::OVRCameraRigRef::get_RightHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(),
                        {"get_RightHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OVRHand>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::Input::OVRCameraRigRef::get_LeftController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(),
                        {"get_LeftController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::Input::OVRCameraRigRef::get_RightController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(),
                        {"get_RightController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::OVRCameraRigRef::add_WhenInputDataDirtied(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(),
                        {"add_WhenInputDataDirtied", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Input::OVRCameraRigRef::remove_WhenInputDataDirtied(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(),
                        {"remove_WhenInputDataDirtied", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Input::OVRCameraRigRef::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::OVRCameraRigRef::FixedUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::OVRCameraRigRef::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::OVRCameraRigRef::LateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::OVRCameraRigRef::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::OVRCameraRigRef::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::OVRHand> Oculus::Interaction::Input::OVRCameraRigRef::GetHandCached(::by_ref<::GlobalNamespace::OVRHand*>  cachedValue, ::UnityEngine::Transform*  handAnchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(),
                        {"GetHandCached", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::OVRHand*>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OVRHand>>(this, ___internal_method, cachedValue, handAnchor);
}
inline void Oculus::Interaction::Input::OVRCameraRigRef::HandleInputDataDirtied(::GlobalNamespace::OVRCameraRig*  cameraRig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(),
                        {"HandleInputDataDirtied", {}, {::i2c::type_of<::GlobalNamespace::OVRCameraRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraRig);
}
inline void Oculus::Interaction::Input::OVRCameraRigRef::InjectAllOVRCameraRigRef(::GlobalNamespace::OVRCameraRig*  ovrCameraRig, bool  requireHands)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(),
                        {"InjectAllOVRCameraRigRef", {}, {::i2c::type_of<::GlobalNamespace::OVRCameraRig*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ovrCameraRig, requireHands);
}
inline void Oculus::Interaction::Input::OVRCameraRigRef::InjectInteractionOVRCameraRig(::GlobalNamespace::OVRCameraRig*  ovrCameraRig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(),
                        {"InjectInteractionOVRCameraRig", {}, {::i2c::type_of<::GlobalNamespace::OVRCameraRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ovrCameraRig);
}
inline void Oculus::Interaction::Input::OVRCameraRigRef::InjectRequireHands(bool  requireHands)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(),
                        {"InjectRequireHands", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requireHands);
}
inline void Oculus::Interaction::Input::OVRCameraRigRef::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::OVRCameraRigRef* Oculus::Interaction::Input::OVRCameraRigRef::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::OVRCameraRigRef*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Input::IOVRCameraRigRef"
constexpr  Oculus::Interaction::Input::OVRCameraRigRef::operator ::Oculus::Interaction::Input::IOVRCameraRigRef*() noexcept {
return static_cast<::Oculus::Interaction::Input::IOVRCameraRigRef*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::IOVRCameraRigRef"
constexpr ::Oculus::Interaction::Input::IOVRCameraRigRef* Oculus::Interaction::Input::OVRCameraRigRef::i___Oculus__Interaction__Input__IOVRCameraRigRef() noexcept {
return static_cast<::Oculus::Interaction::Input::IOVRCameraRigRef*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::OVRCameraRigRef::OVRCameraRigRef()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Input::OVRCameraRigRef___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::OVRCameraRigRef___c::*)()>(&::Oculus::Interaction::Input::OVRCameraRigRef___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41fbc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OVRCameraRigRef___c.__ctor_b__30_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::OVRCameraRigRef___c::*)(bool)>(&::Oculus::Interaction::Input::OVRCameraRigRef___c::__ctor_b__30_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa41fbcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef___c*>(),
                        {"<.ctor>b__30_0", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Input::OVRCameraRigRef___c::setStaticF___9(::Oculus::Interaction::Input::OVRCameraRigRef___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Input::OVRCameraRigRef___c*, "<>9", ::Oculus::Interaction::Input::OVRCameraRigRef___c*>(std::forward<::Oculus::Interaction::Input::OVRCameraRigRef___c*>(value));
}
inline ::Oculus::Interaction::Input::OVRCameraRigRef___c* Oculus::Interaction::Input::OVRCameraRigRef___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Input::OVRCameraRigRef___c*, "<>9", ::Oculus::Interaction::Input::OVRCameraRigRef___c*>();
}
inline void Oculus::Interaction::Input::OVRCameraRigRef___c::setStaticF___9__30_0(::System::Action_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<bool>*, "<>9__30_0", ::Oculus::Interaction::Input::OVRCameraRigRef___c*>(std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* Oculus::Interaction::Input::OVRCameraRigRef___c::getStaticF___9__30_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "<>9__30_0", ::Oculus::Interaction::Input::OVRCameraRigRef___c*>();
}
inline void Oculus::Interaction::Input::OVRCameraRigRef___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::OVRCameraRigRef___c::__ctor_b__30_0(bool  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRCameraRigRef___c*>(),
                        {"<.ctor>b__30_0", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
inline ::Oculus::Interaction::Input::OVRCameraRigRef___c* Oculus::Interaction::Input::OVRCameraRigRef___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::OVRCameraRigRef___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::OVRCameraRigRef___c::OVRCameraRigRef___c()   {
}
