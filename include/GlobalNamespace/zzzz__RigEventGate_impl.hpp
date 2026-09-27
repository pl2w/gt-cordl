#pragma once
// IWYU pragma private; include "GlobalNamespace/RigEventGate.hpp"
#include "GlobalNamespace/zzzz__RigEventGate_Mode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RigEventGate_def.hpp"
#include "GlobalNamespace/zzzz__IBuildValidation_def.hpp"
#include "GlobalNamespace/zzzz__RigContainer_def.hpp"
#include "GlobalNamespace/zzzz__RigEventGate_Mode_def.hpp"
#include "GlobalNamespace/zzzz__RigEventVolumeTrigger_def.hpp"
#include "GlobalNamespace/zzzz__VRRigCollection_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RigEventGate.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigEventGate::*)()>(&::GlobalNamespace::RigEventGate::OnEnable)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5741680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventGate*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigEventGate.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigEventGate::*)()>(&::GlobalNamespace::RigEventGate::OnDisable)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x574184c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventGate*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigEventGate.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigEventGate::*)()>(&::GlobalNamespace::RigEventGate::OnDestroy)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5741a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventGate*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigEventGate.OnJoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigEventGate::*)(::GlobalNamespace::RigContainer*)>(&::GlobalNamespace::RigEventGate::OnJoined)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5741be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventGate*>(),
                        {"OnJoined", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigEventGate.OnLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigEventGate::*)(::GlobalNamespace::RigContainer*)>(&::GlobalNamespace::RigEventGate::OnLeft)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5741dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventGate*>(),
                        {"OnLeft", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigEventGate.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigEventGate::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::RigEventGate::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5741fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventGate*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigEventGate.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigEventGate::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::RigEventGate::OnTriggerExit)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5742158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventGate*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigEventGate.countChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigEventGate::*)(int32_t, int32_t, int32_t, int32_t, ::GlobalNamespace::RigEventVolumeTrigger*)>(&::GlobalNamespace::RigEventGate::countChanged)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5741ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventGate*>(),
                        {"countChanged", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::RigEventVolumeTrigger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigEventGate.IBuildValidation_BuildValidationCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RigEventGate::*)()>(&::GlobalNamespace::RigEventGate::IBuildValidation_BuildValidationCheck)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x574234c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventGate*>(),
                        {"IBuildValidation.BuildValidationCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigEventGate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigEventGate::*)()>(&::GlobalNamespace::RigEventGate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x574244c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventGate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RigEventVolumeTrigger>>*& GlobalNamespace::RigEventGate::__cordl_internal_get_gameObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjects;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RigEventVolumeTrigger>>* const& GlobalNamespace::RigEventGate::__cordl_internal_get_gameObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjects;
}
constexpr void GlobalNamespace::RigEventGate::__cordl_internal_set_gameObjects(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RigEventVolumeTrigger>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameObjects = value;
}
constexpr ::GlobalNamespace::RigEventGate_Mode& GlobalNamespace::RigEventGate::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr ::GlobalNamespace::RigEventGate_Mode const& GlobalNamespace::RigEventGate::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void GlobalNamespace::RigEventGate::__cordl_internal_set_mode(::GlobalNamespace::RigEventGate_Mode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
constexpr float_t& GlobalNamespace::RigEventGate::__cordl_internal_get_relThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___relThreshold;
}
constexpr float_t const& GlobalNamespace::RigEventGate::__cordl_internal_get_relThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___relThreshold;
}
constexpr void GlobalNamespace::RigEventGate::__cordl_internal_set_relThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___relThreshold = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRigCollection>& GlobalNamespace::RigEventGate::__cordl_internal_get_rigCollection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigCollection;
}
constexpr ::UnityW<::GlobalNamespace::VRRigCollection> const& GlobalNamespace::RigEventGate::__cordl_internal_get_rigCollection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigCollection;
}
constexpr void GlobalNamespace::RigEventGate::__cordl_internal_set_rigCollection(::UnityW<::GlobalNamespace::VRRigCollection>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigCollection = value;
}
constexpr int32_t& GlobalNamespace::RigEventGate::__cordl_internal_get_absThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___absThreshold;
}
constexpr int32_t const& GlobalNamespace::RigEventGate::__cordl_internal_get_absThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___absThreshold;
}
constexpr void GlobalNamespace::RigEventGate::__cordl_internal_set_absThreshold(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___absThreshold = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*& GlobalNamespace::RigEventGate::__cordl_internal_get_RigExits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RigExits;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>* const& GlobalNamespace::RigEventGate::__cordl_internal_get_RigExits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RigExits;
}
constexpr void GlobalNamespace::RigEventGate::__cordl_internal_set_RigExits(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RigExits = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::RigEventGate::__cordl_internal_get_GoesOverThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GoesOverThreshold;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::RigEventGate::__cordl_internal_get_GoesOverThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GoesOverThreshold;
}
constexpr void GlobalNamespace::RigEventGate::__cordl_internal_set_GoesOverThreshold(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GoesOverThreshold = value;
}
inline void GlobalNamespace::RigEventGate::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventGate*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RigEventGate::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventGate*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RigEventGate::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventGate*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RigEventGate::OnJoined(::GlobalNamespace::RigContainer*  rc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventGate*>(),
                        {"OnJoined", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rc);
}
inline void GlobalNamespace::RigEventGate::OnLeft(::GlobalNamespace::RigContainer*  rc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventGate*>(),
                        {"OnLeft", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rc);
}
inline void GlobalNamespace::RigEventGate::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventGate*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::RigEventGate::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventGate*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::RigEventGate::countChanged(int32_t  oldValue, int32_t  newValue, int32_t  oldPlayerCount, int32_t  newPlayerCount, ::GlobalNamespace::RigEventVolumeTrigger*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventGate*>(),
                        {"countChanged", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::RigEventVolumeTrigger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldValue, newValue, oldPlayerCount, newPlayerCount, rig);
}
inline bool GlobalNamespace::RigEventGate::IBuildValidation_BuildValidationCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventGate*>(),
                        {"IBuildValidation.BuildValidationCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::RigEventGate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventGate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RigEventGate* GlobalNamespace::RigEventGate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RigEventGate*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr  GlobalNamespace::RigEventGate::operator ::GlobalNamespace::IBuildValidation*() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* GlobalNamespace::RigEventGate::i___GlobalNamespace__IBuildValidation() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RigEventGate::RigEventGate()   {
}
