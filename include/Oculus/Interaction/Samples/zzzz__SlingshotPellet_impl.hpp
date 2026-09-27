#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/SlingshotPellet.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabInteractable_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/Samples/zzzz__SlingshotPellet_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabInteractor_def.hpp"
#include "Oculus/Interaction/zzzz__Grabbable_def.hpp"
#include "Oculus/Interaction/zzzz__UniqueIdentifier_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Samples::SlingshotPellet.get_HandGrabber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor> (::Oculus::Interaction::Samples::SlingshotPellet::*)()>(&::Oculus::Interaction::Samples::SlingshotPellet::get_HandGrabber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa439ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SlingshotPellet*>(),
                        {"get_HandGrabber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SlingshotPellet.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::SlingshotPellet::*)()>(&::Oculus::Interaction::Samples::SlingshotPellet::Awake)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa439abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SlingshotPellet*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SlingshotPellet.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::SlingshotPellet::*)()>(&::Oculus::Interaction::Samples::SlingshotPellet::OnEnable)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa439ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SlingshotPellet*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SlingshotPellet.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::SlingshotPellet::*)()>(&::Oculus::Interaction::Samples::SlingshotPellet::OnDisable)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xa439cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SlingshotPellet*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SlingshotPellet.HandleSelectingHandGrabInteractorAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::SlingshotPellet::*)(::Oculus::Interaction::HandGrab::HandGrabInteractor*)>(&::Oculus::Interaction::Samples::SlingshotPellet::HandleSelectingHandGrabInteractorAdded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa439e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SlingshotPellet*>(),
                        {"HandleSelectingHandGrabInteractorAdded", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SlingshotPellet.Attach
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::SlingshotPellet::*)()>(&::Oculus::Interaction::Samples::SlingshotPellet::Attach)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xa439e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SlingshotPellet*>(),
                        {"Attach", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SlingshotPellet.Move
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::SlingshotPellet::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Samples::SlingshotPellet::Move)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa43a018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SlingshotPellet*>(),
                        {"Move", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SlingshotPellet.Eject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::SlingshotPellet::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Samples::SlingshotPellet::Eject)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa43a0cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SlingshotPellet*>(),
                        {"Eject", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SlingshotPellet.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::SlingshotPellet::*)()>(&::Oculus::Interaction::Samples::SlingshotPellet::FixedUpdate)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa43a1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SlingshotPellet*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SlingshotPellet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::SlingshotPellet::*)()>(&::Oculus::Interaction::Samples::SlingshotPellet::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa43a250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SlingshotPellet*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rigidbody>& Oculus::Interaction::Samples::SlingshotPellet::__cordl_internal_get__rigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& Oculus::Interaction::Samples::SlingshotPellet::__cordl_internal_get__rigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbody;
}
constexpr void Oculus::Interaction::Samples::SlingshotPellet::__cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rigidbody = value;
}
constexpr ::UnityW<::Oculus::Interaction::Grabbable>& Oculus::Interaction::Samples::SlingshotPellet::__cordl_internal_get_grabbable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbable;
}
constexpr ::UnityW<::Oculus::Interaction::Grabbable> const& Oculus::Interaction::Samples::SlingshotPellet::__cordl_internal_get_grabbable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbable;
}
constexpr void Oculus::Interaction::Samples::SlingshotPellet::__cordl_internal_set_grabbable(::UnityW<::Oculus::Interaction::Grabbable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabbable = value;
}
constexpr ::ArrayW<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>>& Oculus::Interaction::Samples::SlingshotPellet::__cordl_internal_get__handGrabInteractables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabInteractables;
}
constexpr ::ArrayW<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>> const& Oculus::Interaction::Samples::SlingshotPellet::__cordl_internal_get__handGrabInteractables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabInteractables;
}
constexpr void Oculus::Interaction::Samples::SlingshotPellet::__cordl_internal_set__handGrabInteractables(::ArrayW<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractable>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handGrabInteractables = value;
}
constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor>& Oculus::Interaction::Samples::SlingshotPellet::__cordl_internal_get__lastHandGrabInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastHandGrabInteractor;
}
constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor> const& Oculus::Interaction::Samples::SlingshotPellet::__cordl_internal_get__lastHandGrabInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastHandGrabInteractor;
}
constexpr void Oculus::Interaction::Samples::SlingshotPellet::__cordl_internal_set__lastHandGrabInteractor(::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastHandGrabInteractor = value;
}
constexpr ::Oculus::Interaction::UniqueIdentifier*& Oculus::Interaction::Samples::SlingshotPellet::__cordl_internal_get_Identifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Identifier;
}
constexpr ::Oculus::Interaction::UniqueIdentifier* const& Oculus::Interaction::Samples::SlingshotPellet::__cordl_internal_get_Identifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Identifier;
}
constexpr void Oculus::Interaction::Samples::SlingshotPellet::__cordl_internal_set_Identifier(::Oculus::Interaction::UniqueIdentifier*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Identifier = value;
}
constexpr bool& Oculus::Interaction::Samples::SlingshotPellet::__cordl_internal_get__hasPendingForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasPendingForce;
}
constexpr bool const& Oculus::Interaction::Samples::SlingshotPellet::__cordl_internal_get__hasPendingForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasPendingForce;
}
constexpr void Oculus::Interaction::Samples::SlingshotPellet::__cordl_internal_set__hasPendingForce(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasPendingForce = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::Samples::SlingshotPellet::__cordl_internal_get__linearVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linearVelocity;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::Samples::SlingshotPellet::__cordl_internal_get__linearVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linearVelocity;
}
constexpr void Oculus::Interaction::Samples::SlingshotPellet::__cordl_internal_set__linearVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____linearVelocity = value;
}
inline ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor> Oculus::Interaction::Samples::SlingshotPellet::get_HandGrabber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SlingshotPellet*>(),
                        {"get_HandGrabber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor>>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::SlingshotPellet::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SlingshotPellet*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::SlingshotPellet::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SlingshotPellet*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::SlingshotPellet::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SlingshotPellet*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::SlingshotPellet::HandleSelectingHandGrabInteractorAdded(::Oculus::Interaction::HandGrab::HandGrabInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SlingshotPellet*>(),
                        {"HandleSelectingHandGrabInteractorAdded", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandGrabInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void Oculus::Interaction::Samples::SlingshotPellet::Attach()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SlingshotPellet*>(),
                        {"Attach", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::SlingshotPellet::Move(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SlingshotPellet*>(),
                        {"Move", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transform);
}
inline void Oculus::Interaction::Samples::SlingshotPellet::Eject(::UnityEngine::Vector3  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SlingshotPellet*>(),
                        {"Eject", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, force);
}
inline void Oculus::Interaction::Samples::SlingshotPellet::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SlingshotPellet*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::SlingshotPellet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SlingshotPellet*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Samples::SlingshotPellet* Oculus::Interaction::Samples::SlingshotPellet::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::SlingshotPellet*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::SlingshotPellet::SlingshotPellet()   {
}
