#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/SnakeInCanHoldable.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__SnakeInCanHoldable_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GlobalNamespace/zzzz__DropZone_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__RubberDuckEvents_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__SnakeInCanHoldable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::SnakeInCanHoldable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::SnakeInCanHoldable::*)()>(&::GorillaTag::Cosmetics::SnakeInCanHoldable::Awake)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5da15d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::SnakeInCanHoldable*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::SnakeInCanHoldable*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::SnakeInCanHoldable.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::SnakeInCanHoldable::*)()>(&::GorillaTag::Cosmetics::SnakeInCanHoldable::OnEnable)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x5da161c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::SnakeInCanHoldable*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::SnakeInCanHoldable*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::SnakeInCanHoldable.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::SnakeInCanHoldable::*)()>(&::GorillaTag::Cosmetics::SnakeInCanHoldable::OnDisable)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5da190c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::SnakeInCanHoldable*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::SnakeInCanHoldable*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::SnakeInCanHoldable.OnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::SnakeInCanHoldable::*)(::GlobalNamespace::DropZone*, ::UnityEngine::GameObject*)>(&::GorillaTag::Cosmetics::SnakeInCanHoldable::OnRelease)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x5da1a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::SnakeInCanHoldable*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::SnakeInCanHoldable*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::SnakeInCanHoldable.OnEnableObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::SnakeInCanHoldable::*)(int32_t, int32_t, ::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GorillaTag::Cosmetics::SnakeInCanHoldable::OnEnableObject)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5da1dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::SnakeInCanHoldable*>(),
                        {"OnEnableObject", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::SnakeInCanHoldable.EnableObjectLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::SnakeInCanHoldable::*)(bool)>(&::GorillaTag::Cosmetics::SnakeInCanHoldable::EnableObjectLocal)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5da1cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::SnakeInCanHoldable*>(),
                        {"EnableObjectLocal", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::SnakeInCanHoldable.SmoothTransition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaTag::Cosmetics::SnakeInCanHoldable::*)()>(&::GorillaTag::Cosmetics::SnakeInCanHoldable::SmoothTransition)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5da1f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::SnakeInCanHoldable*>(),
                        {"SmoothTransition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::SnakeInCanHoldable.OnButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::SnakeInCanHoldable::*)()>(&::GorillaTag::Cosmetics::SnakeInCanHoldable::OnButtonPressed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5da1ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::SnakeInCanHoldable*>(),
                        {"OnButtonPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::SnakeInCanHoldable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::SnakeInCanHoldable::*)()>(&::GorillaTag::Cosmetics::SnakeInCanHoldable::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5da1ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::SnakeInCanHoldable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GorillaTag::Cosmetics::SnakeInCanHoldable::__cordl_internal_get_jumpSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpSpeed;
}
constexpr float_t const& GorillaTag::Cosmetics::SnakeInCanHoldable::__cordl_internal_get_jumpSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpSpeed;
}
constexpr void GorillaTag::Cosmetics::SnakeInCanHoldable::__cordl_internal_set_jumpSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jumpSpeed = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::Cosmetics::SnakeInCanHoldable::__cordl_internal_get_stretchedPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stretchedPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::Cosmetics::SnakeInCanHoldable::__cordl_internal_get_stretchedPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stretchedPoint;
}
constexpr void GorillaTag::Cosmetics::SnakeInCanHoldable::__cordl_internal_set_stretchedPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stretchedPoint = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::Cosmetics::SnakeInCanHoldable::__cordl_internal_get_compressedPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressedPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::Cosmetics::SnakeInCanHoldable::__cordl_internal_get_compressedPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressedPoint;
}
constexpr void GorillaTag::Cosmetics::SnakeInCanHoldable::__cordl_internal_set_compressedPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___compressedPoint = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTag::Cosmetics::SnakeInCanHoldable::__cordl_internal_get_topRigObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topRigObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTag::Cosmetics::SnakeInCanHoldable::__cordl_internal_get_topRigObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topRigObject;
}
constexpr void GorillaTag::Cosmetics::SnakeInCanHoldable::__cordl_internal_set_topRigObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___topRigObject = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTag::Cosmetics::SnakeInCanHoldable::__cordl_internal_get_disableObjectBeforeTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableObjectBeforeTrigger;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTag::Cosmetics::SnakeInCanHoldable::__cordl_internal_get_disableObjectBeforeTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableObjectBeforeTrigger;
}
constexpr void GorillaTag::Cosmetics::SnakeInCanHoldable::__cordl_internal_set_disableObjectBeforeTrigger(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableObjectBeforeTrigger = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GorillaTag::Cosmetics::SnakeInCanHoldable::__cordl_internal_get_snakeInCanCallLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snakeInCanCallLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& GorillaTag::Cosmetics::SnakeInCanHoldable::__cordl_internal_get_snakeInCanCallLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snakeInCanCallLimiter;
}
constexpr void GorillaTag::Cosmetics::SnakeInCanHoldable::__cordl_internal_set_snakeInCanCallLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snakeInCanCallLimiter = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Cosmetics::SnakeInCanHoldable::__cordl_internal_get_topRigPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topRigPosition;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Cosmetics::SnakeInCanHoldable::__cordl_internal_get_topRigPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topRigPosition;
}
constexpr void GorillaTag::Cosmetics::SnakeInCanHoldable::__cordl_internal_set_topRigPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___topRigPosition = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Cosmetics::SnakeInCanHoldable::__cordl_internal_get_originalTopRigPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalTopRigPosition;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Cosmetics::SnakeInCanHoldable::__cordl_internal_get_originalTopRigPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalTopRigPosition;
}
constexpr void GorillaTag::Cosmetics::SnakeInCanHoldable::__cordl_internal_set_originalTopRigPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalTopRigPosition = value;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& GorillaTag::Cosmetics::SnakeInCanHoldable::__cordl_internal_get__events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& GorillaTag::Cosmetics::SnakeInCanHoldable::__cordl_internal_get__events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr void GorillaTag::Cosmetics::SnakeInCanHoldable::__cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____events = value;
}
inline void GorillaTag::Cosmetics::SnakeInCanHoldable::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::SnakeInCanHoldable*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::SnakeInCanHoldable::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::SnakeInCanHoldable*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::SnakeInCanHoldable::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::SnakeInCanHoldable*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::SnakeInCanHoldable::OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::SnakeInCanHoldable*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zoneReleased, releasingHand);
}
inline void GorillaTag::Cosmetics::SnakeInCanHoldable::OnEnableObject(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  arg, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::SnakeInCanHoldable*>(),
                        {"OnEnableObject", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, target, arg, info);
}
inline void GorillaTag::Cosmetics::SnakeInCanHoldable::EnableObjectLocal(bool  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::SnakeInCanHoldable*>(),
                        {"EnableObjectLocal", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable);
}
inline ::System::Collections::IEnumerator* GorillaTag::Cosmetics::SnakeInCanHoldable::SmoothTransition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::SnakeInCanHoldable*>(),
                        {"SmoothTransition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::SnakeInCanHoldable::OnButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::SnakeInCanHoldable*>(),
                        {"OnButtonPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::SnakeInCanHoldable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::SnakeInCanHoldable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::SnakeInCanHoldable* GorillaTag::Cosmetics::SnakeInCanHoldable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::SnakeInCanHoldable*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::SnakeInCanHoldable::SnakeInCanHoldable()   {
}
//  Writing Method size for method: ::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15::*)(int32_t)>(&::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5da1fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15::*)()>(&::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5da209c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15::*)()>(&::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x5da20a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15::*)()>(&::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5da2350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15::*)()>(&::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5da2358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15::*)()>(&::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5da2390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaTag::Cosmetics::SnakeInCanHoldable>& GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaTag::Cosmetics::SnakeInCanHoldable> const& GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15::__cordl_internal_set___4__this(::UnityW<::GorillaTag::Cosmetics::SnakeInCanHoldable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15* GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::SnakeInCanHoldable__SmoothTransition_d__15::SnakeInCanHoldable__SmoothTransition_d__15()   {
}
