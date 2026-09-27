#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/ColliderContainsHandJointActiveState.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__ColliderContainsHandJointActiveState_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState.get_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::*)()>(&::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::get_Active)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa498d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState*>(),
                        {"get_Active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState.set_Active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::*)(bool)>(&::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::set_Active)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa498d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState*>(),
                        {"set_Active", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::*)()>(&::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::Awake)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa498d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::*)()>(&::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa498df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::*)()>(&::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::Update)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa498df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState.JointPassesTests
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::JointPassesTests)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa498efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState*>(),
                        {"JointPassesTests", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState.IsPointWithinColliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::*)(::UnityEngine::Vector3, ::ArrayW<::UnityEngine::Collider*>)>(&::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::IsPointWithinColliders)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa498f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState*>(),
                        {"IsPointWithinColliders", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState.InjectAllColliderContainsHandJointActiveState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::*)(::Oculus::Interaction::Input::IHand*, ::ArrayW<::UnityEngine::Collider*>, ::ArrayW<::UnityEngine::Collider*>, ::Oculus::Interaction::Input::HandJointId)>(&::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::InjectAllColliderContainsHandJointActiveState)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa498fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState*>(),
                        {"InjectAllColliderContainsHandJointActiveState", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState.InjectHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::InjectHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa49902c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState.InjectEntryColliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::*)(::ArrayW<::UnityEngine::Collider*>)>(&::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::InjectEntryColliders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4990fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState*>(),
                        {"InjectEntryColliders", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState.InjectExitColliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::*)(::ArrayW<::UnityEngine::Collider*>)>(&::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::InjectExitColliders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa499104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState*>(),
                        {"InjectExitColliders", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState.InjectJointToTest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::*)(::Oculus::Interaction::Input::HandJointId)>(&::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::InjectJointToTest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa49910c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState*>(),
                        {"InjectJointToTest", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::*)()>(&::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa499114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::__cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::__cordl_internal_get_Hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Hand;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::__cordl_internal_get_Hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Hand;
}
constexpr void Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::__cordl_internal_set_Hand(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Hand = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::__cordl_internal_get__entryColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entryColliders;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::__cordl_internal_get__entryColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entryColliders;
}
constexpr void Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::__cordl_internal_set__entryColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____entryColliders = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::__cordl_internal_get__exitColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exitColliders;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::__cordl_internal_get__exitColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exitColliders;
}
constexpr void Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::__cordl_internal_set__exitColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____exitColliders = value;
}
constexpr ::Oculus::Interaction::Input::HandJointId& Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::__cordl_internal_get__jointToTest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointToTest;
}
constexpr ::Oculus::Interaction::Input::HandJointId const& Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::__cordl_internal_get__jointToTest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointToTest;
}
constexpr void Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::__cordl_internal_set__jointToTest(::Oculus::Interaction::Input::HandJointId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jointToTest = value;
}
constexpr bool& Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::__cordl_internal_get__Active_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Active_k__BackingField;
}
constexpr bool const& Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::__cordl_internal_get__Active_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Active_k__BackingField;
}
constexpr void Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::__cordl_internal_set__Active_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Active_k__BackingField = value;
}
constexpr bool& Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::__cordl_internal_get__active()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____active;
}
constexpr bool const& Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::__cordl_internal_get__active() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____active;
}
constexpr void Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::__cordl_internal_set__active(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____active = value;
}
inline bool Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::get_Active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState*>(),
                        {"get_Active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::set_Active(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState*>(),
                        {"set_Active", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::JointPassesTests(::UnityEngine::Pose  jointPose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState*>(),
                        {"JointPassesTests", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, jointPose);
}
inline bool Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::IsPointWithinColliders(::UnityEngine::Vector3  point, ::ArrayW<::UnityEngine::Collider*>  colliders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState*>(),
                        {"IsPointWithinColliders", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, point, colliders);
}
inline void Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::InjectAllColliderContainsHandJointActiveState(::Oculus::Interaction::Input::IHand*  hand, ::ArrayW<::UnityEngine::Collider*>  entryColliders, ::ArrayW<::UnityEngine::Collider*>  exitColliders, ::Oculus::Interaction::Input::HandJointId  jointToTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState*>(),
                        {"InjectAllColliderContainsHandJointActiveState", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand, entryColliders, exitColliders, jointToTest);
}
inline void Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::InjectHand(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::InjectEntryColliders(::ArrayW<::UnityEngine::Collider*>  entryColliders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState*>(),
                        {"InjectEntryColliders", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entryColliders);
}
inline void Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::InjectExitColliders(::ArrayW<::UnityEngine::Collider*>  exitColliders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState*>(),
                        {"InjectExitColliders", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exitColliders);
}
inline void Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::InjectJointToTest(::Oculus::Interaction::Input::HandJointId  jointToTest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState*>(),
                        {"InjectJointToTest", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jointToTest);
}
inline void Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState* Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr  Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::operator ::Oculus::Interaction::IActiveState*() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::i___Oculus__Interaction__IActiveState() noexcept {
return static_cast<::Oculus::Interaction::IActiveState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::ColliderContainsHandJointActiveState::ColliderContainsHandJointActiveState()   {
}
