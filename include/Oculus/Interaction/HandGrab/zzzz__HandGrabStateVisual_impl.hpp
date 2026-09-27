#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/HandGrabStateVisual.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabStateVisual_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandPose_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__IHandGrabState_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFingerFlags_def.hpp"
#include "Oculus/Interaction/Input/zzzz__SyntheticHand_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabStateVisual.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabStateVisual::*)()>(&::Oculus::Interaction::HandGrab::HandGrabStateVisual::Awake)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa4d7fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabStateVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabStateVisual*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabStateVisual.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabStateVisual::*)()>(&::Oculus::Interaction::HandGrab::HandGrabStateVisual::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4d8040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabStateVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabStateVisual*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabStateVisual.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabStateVisual::*)()>(&::Oculus::Interaction::HandGrab::HandGrabStateVisual::LateUpdate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa4d806c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabStateVisual*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabStateVisual.ConstrainingForce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabStateVisual::*)(::Oculus::Interaction::HandGrab::IHandGrabState*, ::by_ref<float_t>, ::by_ref<float_t>)>(&::Oculus::Interaction::HandGrab::HandGrabStateVisual::ConstrainingForce)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0xa4d80ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabStateVisual*>(),
                        {"ConstrainingForce", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabState*>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabStateVisual.UpdateHandPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabStateVisual::*)(::Oculus::Interaction::HandGrab::IHandGrabState*, float_t, float_t)>(&::Oculus::Interaction::HandGrab::HandGrabStateVisual::UpdateHandPose)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xa4d83d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabStateVisual*>(),
                        {"UpdateHandPose", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabState*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabStateVisual.UpdateFingers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabStateVisual::*)(::Oculus::Interaction::HandGrab::HandPose*, ::Oculus::Interaction::Input::HandFingerFlags, float_t)>(&::Oculus::Interaction::HandGrab::HandGrabStateVisual::UpdateFingers)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa4d8648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabStateVisual*>(),
                        {"UpdateFingers", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandPose*>(), ::i2c::type_of<::Oculus::Interaction::Input::HandFingerFlags>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabStateVisual.FreeFingers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::HandGrabStateVisual::*)()>(&::Oculus::Interaction::HandGrab::HandGrabStateVisual::FreeFingers)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa4d85bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabStateVisual*>(),
                        {"FreeFingers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabStateVisual.FreeWrist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::HandGrabStateVisual::*)()>(&::Oculus::Interaction::HandGrab::HandGrabStateVisual::FreeWrist)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4d8600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabStateVisual*>(),
                        {"FreeWrist", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabStateVisual.InjectAllHandGrabInteractorVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabStateVisual::*)(::Oculus::Interaction::HandGrab::IHandGrabState*, ::Oculus::Interaction::Input::SyntheticHand*)>(&::Oculus::Interaction::HandGrab::HandGrabStateVisual::InjectAllHandGrabInteractorVisual)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4d8734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabStateVisual*>(),
                        {"InjectAllHandGrabInteractorVisual", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabState*>(), ::i2c::type_of<::Oculus::Interaction::Input::SyntheticHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabStateVisual.InjectHandGrabState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabStateVisual::*)(::Oculus::Interaction::HandGrab::IHandGrabState*)>(&::Oculus::Interaction::HandGrab::HandGrabStateVisual::InjectHandGrabState)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa4d8760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabStateVisual*>(),
                        {"InjectHandGrabState", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabStateVisual.InjectSyntheticHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabStateVisual::*)(::Oculus::Interaction::Input::SyntheticHand*)>(&::Oculus::Interaction::HandGrab::HandGrabStateVisual::InjectSyntheticHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d882c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabStateVisual*>(),
                        {"InjectSyntheticHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::SyntheticHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandGrabStateVisual._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandGrabStateVisual::*)()>(&::Oculus::Interaction::HandGrab::HandGrabStateVisual::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4d8834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabStateVisual*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::HandGrab::HandGrabStateVisual::__cordl_internal_get__handGrabState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabState;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::HandGrab::HandGrabStateVisual::__cordl_internal_get__handGrabState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabState;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabStateVisual::__cordl_internal_set__handGrabState(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handGrabState = value;
}
constexpr ::Oculus::Interaction::HandGrab::IHandGrabState*& Oculus::Interaction::HandGrab::HandGrabStateVisual::__cordl_internal_get_HandGrabState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandGrabState;
}
constexpr ::Oculus::Interaction::HandGrab::IHandGrabState* const& Oculus::Interaction::HandGrab::HandGrabStateVisual::__cordl_internal_get_HandGrabState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandGrabState;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabStateVisual::__cordl_internal_set_HandGrabState(::Oculus::Interaction::HandGrab::IHandGrabState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HandGrabState = value;
}
constexpr ::UnityW<::Oculus::Interaction::Input::SyntheticHand>& Oculus::Interaction::HandGrab::HandGrabStateVisual::__cordl_internal_get__syntheticHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____syntheticHand;
}
constexpr ::UnityW<::Oculus::Interaction::Input::SyntheticHand> const& Oculus::Interaction::HandGrab::HandGrabStateVisual::__cordl_internal_get__syntheticHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____syntheticHand;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabStateVisual::__cordl_internal_set__syntheticHand(::UnityW<::Oculus::Interaction::Input::SyntheticHand>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____syntheticHand = value;
}
constexpr bool& Oculus::Interaction::HandGrab::HandGrabStateVisual::__cordl_internal_get__areFingersFree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____areFingersFree;
}
constexpr bool const& Oculus::Interaction::HandGrab::HandGrabStateVisual::__cordl_internal_get__areFingersFree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____areFingersFree;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabStateVisual::__cordl_internal_set__areFingersFree(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____areFingersFree = value;
}
constexpr bool& Oculus::Interaction::HandGrab::HandGrabStateVisual::__cordl_internal_get__isWristFree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isWristFree;
}
constexpr bool const& Oculus::Interaction::HandGrab::HandGrabStateVisual::__cordl_internal_get__isWristFree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isWristFree;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabStateVisual::__cordl_internal_set__isWristFree(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isWristFree = value;
}
constexpr bool& Oculus::Interaction::HandGrab::HandGrabStateVisual::__cordl_internal_get__wasCompletelyFree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasCompletelyFree;
}
constexpr bool const& Oculus::Interaction::HandGrab::HandGrabStateVisual::__cordl_internal_get__wasCompletelyFree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasCompletelyFree;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabStateVisual::__cordl_internal_set__wasCompletelyFree(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wasCompletelyFree = value;
}
constexpr bool& Oculus::Interaction::HandGrab::HandGrabStateVisual::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::HandGrab::HandGrabStateVisual::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::HandGrab::HandGrabStateVisual::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline void Oculus::Interaction::HandGrab::HandGrabStateVisual::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabStateVisual*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabStateVisual::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabStateVisual*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabStateVisual::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabStateVisual*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabStateVisual::ConstrainingForce(::Oculus::Interaction::HandGrab::IHandGrabState*  grabSource, ::by_ref<float_t>  fingersConstraint, ::by_ref<float_t>  wristConstraint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabStateVisual*>(),
                        {"ConstrainingForce", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabState*>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabSource, fingersConstraint, wristConstraint);
}
inline void Oculus::Interaction::HandGrab::HandGrabStateVisual::UpdateHandPose(::Oculus::Interaction::HandGrab::IHandGrabState*  grabSource, float_t  fingersConstraint, float_t  wristConstraint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabStateVisual*>(),
                        {"UpdateHandPose", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabState*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabSource, fingersConstraint, wristConstraint);
}
inline void Oculus::Interaction::HandGrab::HandGrabStateVisual::UpdateFingers(::Oculus::Interaction::HandGrab::HandPose*  handPose, ::Oculus::Interaction::Input::HandFingerFlags  grabbingFingers, float_t  strength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabStateVisual*>(),
                        {"UpdateFingers", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandPose*>(), ::i2c::type_of<::Oculus::Interaction::Input::HandFingerFlags>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handPose, grabbingFingers, strength);
}
inline bool Oculus::Interaction::HandGrab::HandGrabStateVisual::FreeFingers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabStateVisual*>(),
                        {"FreeFingers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::HandGrab::HandGrabStateVisual::FreeWrist()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabStateVisual*>(),
                        {"FreeWrist", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandGrabStateVisual::InjectAllHandGrabInteractorVisual(::Oculus::Interaction::HandGrab::IHandGrabState*  handGrabState, ::Oculus::Interaction::Input::SyntheticHand*  syntheticHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabStateVisual*>(),
                        {"InjectAllHandGrabInteractorVisual", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabState*>(), ::i2c::type_of<::Oculus::Interaction::Input::SyntheticHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handGrabState, syntheticHand);
}
inline void Oculus::Interaction::HandGrab::HandGrabStateVisual::InjectHandGrabState(::Oculus::Interaction::HandGrab::IHandGrabState*  handGrabState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabStateVisual*>(),
                        {"InjectHandGrabState", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handGrabState);
}
inline void Oculus::Interaction::HandGrab::HandGrabStateVisual::InjectSyntheticHand(::Oculus::Interaction::Input::SyntheticHand*  syntheticHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabStateVisual*>(),
                        {"InjectSyntheticHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::SyntheticHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, syntheticHand);
}
inline void Oculus::Interaction::HandGrab::HandGrabStateVisual::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandGrabStateVisual*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandGrab::HandGrabStateVisual* Oculus::Interaction::HandGrab::HandGrabStateVisual::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandGrab::HandGrabStateVisual*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandGrab::HandGrabStateVisual::HandGrabStateVisual()   {
}
