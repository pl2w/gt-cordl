#pragma once
// IWYU pragma private; include "GorillaTag/Gravity/MonkeGravityManager.hpp"
#include "GorillaTag/Gravity/zzzz__GravityInfo_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Gravity/zzzz__MonkeGravityManager_def.hpp"
#include "GlobalNamespace/zzzz__CallbackContainerUnique_1_def.hpp"
#include "GorillaTag/Gravity/zzzz__BasicGravityZone_def.hpp"
#include "GorillaTag/Gravity/zzzz__GravityInfo_def.hpp"
#include "GorillaTag/Gravity/zzzz__MonkeGravityController_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::MonkeGravityManager::*)()>(&::GorillaTag::Gravity::MonkeGravityManager::Awake)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5d3affc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityManager.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::MonkeGravityManager::*)()>(&::GorillaTag::Gravity::MonkeGravityManager::FixedUpdate)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5d3b170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityManager*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityManager.get_DefaultGravityInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::Gravity::GravityInfo (*)()>(&::GorillaTag::Gravity::MonkeGravityManager::get_DefaultGravityInfo)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d3b214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityManager*>(),
                        {"get_DefaultGravityInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityManager.AddMonkeGravityController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTag::Gravity::MonkeGravityController*)>(&::GorillaTag::Gravity::MonkeGravityManager::AddMonkeGravityController)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5d39860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityManager*>(),
                        {"AddMonkeGravityController", {}, {::i2c::type_of<::GorillaTag::Gravity::MonkeGravityController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityManager.RemoveMonkeGravityController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTag::Gravity::MonkeGravityController*)>(&::GorillaTag::Gravity::MonkeGravityManager::RemoveMonkeGravityController)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5d399ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityManager*>(),
                        {"RemoveMonkeGravityController", {}, {::i2c::type_of<::GorillaTag::Gravity::MonkeGravityController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityManager.GetMonkeGravityController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<bool,::UnityW<::GorillaTag::Gravity::MonkeGravityController>> (*)(::UnityEngine::Collider*)>(&::GorillaTag::Gravity::MonkeGravityManager::GetMonkeGravityController)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5d37c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityManager*>(),
                        {"GetMonkeGravityController", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityManager.AddGravityCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTag::Gravity::BasicGravityZone*)>(&::GorillaTag::Gravity::MonkeGravityManager::AddGravityCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d37b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityManager*>(),
                        {"AddGravityCallback", {}, {::i2c::type_of<::GorillaTag::Gravity::BasicGravityZone*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityManager.RemoveGravityCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTag::Gravity::BasicGravityZone*)>(&::GorillaTag::Gravity::MonkeGravityManager::RemoveGravityCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d36e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityManager*>(),
                        {"RemoveGravityCallback", {}, {::i2c::type_of<::GorillaTag::Gravity::BasicGravityZone*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Gravity::MonkeGravityManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Gravity::MonkeGravityManager::*)()>(&::GorillaTag::Gravity::MonkeGravityManager::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5d3b280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GorillaTag::Gravity::MonkeGravityManager::__cordl_internal_get_defaultRotationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultRotationSpeed;
}
constexpr float_t const& GorillaTag::Gravity::MonkeGravityManager::__cordl_internal_get_defaultRotationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultRotationSpeed;
}
constexpr void GorillaTag::Gravity::MonkeGravityManager::__cordl_internal_set_defaultRotationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultRotationSpeed = value;
}
constexpr float_t& GorillaTag::Gravity::MonkeGravityManager::__cordl_internal_get_defaultGravityStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultGravityStrength;
}
constexpr float_t const& GorillaTag::Gravity::MonkeGravityManager::__cordl_internal_get_defaultGravityStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultGravityStrength;
}
constexpr void GorillaTag::Gravity::MonkeGravityManager::__cordl_internal_set_defaultGravityStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultGravityStrength = value;
}
inline void GorillaTag::Gravity::MonkeGravityManager::setStaticF_k_zones(::GlobalNamespace::CallbackContainerUnique_1<::UnityW<::GorillaTag::Gravity::BasicGravityZone>>*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::CallbackContainerUnique_1<::UnityW<::GorillaTag::Gravity::BasicGravityZone>>*, "k_zones", ::GorillaTag::Gravity::MonkeGravityManager*>(std::forward<::GlobalNamespace::CallbackContainerUnique_1<::UnityW<::GorillaTag::Gravity::BasicGravityZone>>*>(value));
}
inline ::GlobalNamespace::CallbackContainerUnique_1<::UnityW<::GorillaTag::Gravity::BasicGravityZone>>* GorillaTag::Gravity::MonkeGravityManager::getStaticF_k_zones()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::CallbackContainerUnique_1<::UnityW<::GorillaTag::Gravity::BasicGravityZone>>*, "k_zones", ::GorillaTag::Gravity::MonkeGravityManager*>();
}
inline void GorillaTag::Gravity::MonkeGravityManager::setStaticF_k_allowedColliders(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GorillaTag::Gravity::MonkeGravityController>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GorillaTag::Gravity::MonkeGravityController>>*, "k_allowedColliders", ::GorillaTag::Gravity::MonkeGravityManager*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GorillaTag::Gravity::MonkeGravityController>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GorillaTag::Gravity::MonkeGravityController>>* GorillaTag::Gravity::MonkeGravityManager::getStaticF_k_allowedColliders()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GorillaTag::Gravity::MonkeGravityController>>*, "k_allowedColliders", ::GorillaTag::Gravity::MonkeGravityManager*>();
}
inline void GorillaTag::Gravity::MonkeGravityManager::setStaticF_k_controllers(::GlobalNamespace::CallbackContainerUnique_1<::UnityW<::GorillaTag::Gravity::MonkeGravityController>>*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::CallbackContainerUnique_1<::UnityW<::GorillaTag::Gravity::MonkeGravityController>>*, "k_controllers", ::GorillaTag::Gravity::MonkeGravityManager*>(std::forward<::GlobalNamespace::CallbackContainerUnique_1<::UnityW<::GorillaTag::Gravity::MonkeGravityController>>*>(value));
}
inline ::GlobalNamespace::CallbackContainerUnique_1<::UnityW<::GorillaTag::Gravity::MonkeGravityController>>* GorillaTag::Gravity::MonkeGravityManager::getStaticF_k_controllers()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::CallbackContainerUnique_1<::UnityW<::GorillaTag::Gravity::MonkeGravityController>>*, "k_controllers", ::GorillaTag::Gravity::MonkeGravityManager*>();
}
inline void GorillaTag::Gravity::MonkeGravityManager::setStaticF_k_defaultGravityInfo(::GorillaTag::Gravity::GravityInfo  value)  {
::cordl_internals::setStaticField<::GorillaTag::Gravity::GravityInfo, "k_defaultGravityInfo", ::GorillaTag::Gravity::MonkeGravityManager*>(std::forward<::GorillaTag::Gravity::GravityInfo>(value));
}
inline ::GorillaTag::Gravity::GravityInfo GorillaTag::Gravity::MonkeGravityManager::getStaticF_k_defaultGravityInfo()  {
return ::cordl_internals::getStaticField<::GorillaTag::Gravity::GravityInfo, "k_defaultGravityInfo", ::GorillaTag::Gravity::MonkeGravityManager*>();
}
inline void GorillaTag::Gravity::MonkeGravityManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Gravity::MonkeGravityManager::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityManager*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Gravity::GravityInfo GorillaTag::Gravity::MonkeGravityManager::get_DefaultGravityInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityManager*>(),
                        {"get_DefaultGravityInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::Gravity::GravityInfo>(nullptr, ___internal_method);
}
inline void GorillaTag::Gravity::MonkeGravityManager::AddMonkeGravityController(::GorillaTag::Gravity::MonkeGravityController*  gravity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityManager*>(),
                        {"AddMonkeGravityController", {}, {::i2c::type_of<::GorillaTag::Gravity::MonkeGravityController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gravity);
}
inline void GorillaTag::Gravity::MonkeGravityManager::RemoveMonkeGravityController(::GorillaTag::Gravity::MonkeGravityController*  gravity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityManager*>(),
                        {"RemoveMonkeGravityController", {}, {::i2c::type_of<::GorillaTag::Gravity::MonkeGravityController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gravity);
}
inline ::System::ValueTuple_2<bool,::UnityW<::GorillaTag::Gravity::MonkeGravityController>> GorillaTag::Gravity::MonkeGravityManager::GetMonkeGravityController(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityManager*>(),
                        {"GetMonkeGravityController", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<bool,::UnityW<::GorillaTag::Gravity::MonkeGravityController>>>(nullptr, ___internal_method, collider);
}
inline void GorillaTag::Gravity::MonkeGravityManager::AddGravityCallback(::GorillaTag::Gravity::BasicGravityZone*  zone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityManager*>(),
                        {"AddGravityCallback", {}, {::i2c::type_of<::GorillaTag::Gravity::BasicGravityZone*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, zone);
}
inline void GorillaTag::Gravity::MonkeGravityManager::RemoveGravityCallback(::GorillaTag::Gravity::BasicGravityZone*  zone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityManager*>(),
                        {"RemoveGravityCallback", {}, {::i2c::type_of<::GorillaTag::Gravity::BasicGravityZone*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, zone);
}
inline void GorillaTag::Gravity::MonkeGravityManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Gravity::MonkeGravityManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Gravity::MonkeGravityManager* GorillaTag::Gravity::MonkeGravityManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Gravity::MonkeGravityManager*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Gravity::MonkeGravityManager::MonkeGravityManager()   {
}
