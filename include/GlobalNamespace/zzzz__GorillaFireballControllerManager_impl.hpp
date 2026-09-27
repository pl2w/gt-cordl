#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaFireballControllerManager.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaFireballControllerManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaFireballControllerManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaFireballControllerManager::*)()>(&::GlobalNamespace::GorillaFireballControllerManager::Update)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x59a5124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFireballControllerManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaFireballControllerManager.TryThrowFireball
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaFireballControllerManager::*)(bool)>(&::GlobalNamespace::GorillaFireballControllerManager::TryThrowFireball)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x59a55bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFireballControllerManager*>(),
                        {"TryThrowFireball", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaFireballControllerManager.CreateFireball
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaFireballControllerManager::*)(bool)>(&::GlobalNamespace::GorillaFireballControllerManager::CreateFireball)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x59a5350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFireballControllerManager*>(),
                        {"CreateFireball", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaFireballControllerManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaFireballControllerManager::*)()>(&::GlobalNamespace::GorillaFireballControllerManager::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59a57c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFireballControllerManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::InputDevice& GlobalNamespace::GorillaFireballControllerManager::__cordl_internal_get_leftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHand;
}
constexpr ::UnityEngine::XR::InputDevice const& GlobalNamespace::GorillaFireballControllerManager::__cordl_internal_get_leftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHand;
}
constexpr void GlobalNamespace::GorillaFireballControllerManager::__cordl_internal_set_leftHand(::UnityEngine::XR::InputDevice  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHand = value;
}
constexpr ::UnityEngine::XR::InputDevice& GlobalNamespace::GorillaFireballControllerManager::__cordl_internal_get_rightHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHand;
}
constexpr ::UnityEngine::XR::InputDevice const& GlobalNamespace::GorillaFireballControllerManager::__cordl_internal_get_rightHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHand;
}
constexpr void GlobalNamespace::GorillaFireballControllerManager::__cordl_internal_set_rightHand(::UnityEngine::XR::InputDevice  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHand = value;
}
constexpr bool& GlobalNamespace::GorillaFireballControllerManager::__cordl_internal_get_hasInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasInitialized;
}
constexpr bool const& GlobalNamespace::GorillaFireballControllerManager::__cordl_internal_get_hasInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasInitialized;
}
constexpr void GlobalNamespace::GorillaFireballControllerManager::__cordl_internal_set_hasInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasInitialized = value;
}
constexpr float_t& GlobalNamespace::GorillaFireballControllerManager::__cordl_internal_get_leftHandLastState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandLastState;
}
constexpr float_t const& GlobalNamespace::GorillaFireballControllerManager::__cordl_internal_get_leftHandLastState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandLastState;
}
constexpr void GlobalNamespace::GorillaFireballControllerManager::__cordl_internal_set_leftHandLastState(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandLastState = value;
}
constexpr float_t& GlobalNamespace::GorillaFireballControllerManager::__cordl_internal_get_rightHandLastState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandLastState;
}
constexpr float_t const& GlobalNamespace::GorillaFireballControllerManager::__cordl_internal_get_rightHandLastState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandLastState;
}
constexpr void GlobalNamespace::GorillaFireballControllerManager::__cordl_internal_set_rightHandLastState(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandLastState = value;
}
constexpr float_t& GlobalNamespace::GorillaFireballControllerManager::__cordl_internal_get_throwingThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwingThreshold;
}
constexpr float_t const& GlobalNamespace::GorillaFireballControllerManager::__cordl_internal_get_throwingThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwingThreshold;
}
constexpr void GlobalNamespace::GorillaFireballControllerManager::__cordl_internal_set_throwingThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___throwingThreshold = value;
}
inline void GlobalNamespace::GorillaFireballControllerManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFireballControllerManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaFireballControllerManager::TryThrowFireball(bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFireballControllerManager*>(),
                        {"TryThrowFireball", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeftHand);
}
inline void GlobalNamespace::GorillaFireballControllerManager::CreateFireball(bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFireballControllerManager*>(),
                        {"CreateFireball", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeftHand);
}
inline void GlobalNamespace::GorillaFireballControllerManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaFireballControllerManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaFireballControllerManager* GlobalNamespace::GorillaFireballControllerManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaFireballControllerManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaFireballControllerManager::GorillaFireballControllerManager()   {
}
