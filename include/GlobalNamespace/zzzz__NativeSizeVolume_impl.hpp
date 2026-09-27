#pragma once
// IWYU pragma private; include "GlobalNamespace/NativeSizeVolume.hpp"
#include "GlobalNamespace/zzzz__NativeSizeVolume_NativeSizeVolumeAction_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NativeSizeVolume_def.hpp"
#include "GlobalNamespace/zzzz__NativeSizeChangerSettings_def.hpp"
#include "GlobalNamespace/zzzz__NativeSizeVolume_NativeSizeVolumeAction_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NativeSizeVolume.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NativeSizeVolume::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::NativeSizeVolume::OnTriggerEnter)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x56d3a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeSizeVolume*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NativeSizeVolume.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NativeSizeVolume::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::NativeSizeVolume::OnTriggerExit)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x56d3b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeSizeVolume*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NativeSizeVolume._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NativeSizeVolume::*)()>(&::GlobalNamespace::NativeSizeVolume::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d3c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeSizeVolume*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::NativeSizeVolume::__cordl_internal_get_triggerVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerVolume;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::NativeSizeVolume::__cordl_internal_get_triggerVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerVolume;
}
constexpr void GlobalNamespace::NativeSizeVolume::__cordl_internal_set_triggerVolume(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerVolume = value;
}
constexpr ::GlobalNamespace::NativeSizeChangerSettings*& GlobalNamespace::NativeSizeVolume::__cordl_internal_get_settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr ::GlobalNamespace::NativeSizeChangerSettings* const& GlobalNamespace::NativeSizeVolume::__cordl_internal_get_settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr void GlobalNamespace::NativeSizeVolume::__cordl_internal_set_settings(::GlobalNamespace::NativeSizeChangerSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settings = value;
}
constexpr ::GlobalNamespace::NativeSizeVolume_NativeSizeVolumeAction& GlobalNamespace::NativeSizeVolume::__cordl_internal_get_OnEnterAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEnterAction;
}
constexpr ::GlobalNamespace::NativeSizeVolume_NativeSizeVolumeAction const& GlobalNamespace::NativeSizeVolume::__cordl_internal_get_OnEnterAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEnterAction;
}
constexpr void GlobalNamespace::NativeSizeVolume::__cordl_internal_set_OnEnterAction(::GlobalNamespace::NativeSizeVolume_NativeSizeVolumeAction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnEnterAction = value;
}
constexpr ::GlobalNamespace::NativeSizeVolume_NativeSizeVolumeAction& GlobalNamespace::NativeSizeVolume::__cordl_internal_get_OnExitAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnExitAction;
}
constexpr ::GlobalNamespace::NativeSizeVolume_NativeSizeVolumeAction const& GlobalNamespace::NativeSizeVolume::__cordl_internal_get_OnExitAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnExitAction;
}
constexpr void GlobalNamespace::NativeSizeVolume::__cordl_internal_set_OnExitAction(::GlobalNamespace::NativeSizeVolume_NativeSizeVolumeAction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnExitAction = value;
}
inline void GlobalNamespace::NativeSizeVolume::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeSizeVolume*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::NativeSizeVolume::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeSizeVolume*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::NativeSizeVolume::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeSizeVolume*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NativeSizeVolume* GlobalNamespace::NativeSizeVolume::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NativeSizeVolume*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NativeSizeVolume::NativeSizeVolume()   {
}
