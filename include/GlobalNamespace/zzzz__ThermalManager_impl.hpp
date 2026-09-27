#pragma once
// IWYU pragma private; include "GlobalNamespace/ThermalManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ThermalManager_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__ThermalReceiver_def.hpp"
#include "GlobalNamespace/zzzz__ThermalSourceVolume_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ThermalManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThermalManager::*)()>(&::GlobalNamespace::ThermalManager::OnEnable)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x56afea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThermalManager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThermalManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThermalManager::*)()>(&::GlobalNamespace::ThermalManager::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x56affc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThermalManager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThermalManager.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThermalManager::*)()>(&::GlobalNamespace::ThermalManager::SliceUpdate)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x56affd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThermalManager*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThermalManager.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::ThermalSourceVolume*)>(&::GlobalNamespace::ThermalManager::Register)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x56b03b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThermalManager*>(),
                        {"Register", {}, {::i2c::type_of<::GlobalNamespace::ThermalSourceVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThermalManager.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::ThermalSourceVolume*)>(&::GlobalNamespace::ThermalManager::Unregister)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x56b0488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThermalManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::GlobalNamespace::ThermalSourceVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThermalManager.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::ThermalReceiver*)>(&::GlobalNamespace::ThermalManager::Register)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x56b0508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThermalManager*>(),
                        {"Register", {}, {::i2c::type_of<::GlobalNamespace::ThermalReceiver*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThermalManager.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::ThermalReceiver*)>(&::GlobalNamespace::ThermalManager::Unregister)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x56b05dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThermalManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::GlobalNamespace::ThermalReceiver*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ThermalManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ThermalManager::*)()>(&::GlobalNamespace::ThermalManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56b065c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThermalManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::ThermalManager::__cordl_internal_get_lastTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTime;
}
constexpr float_t const& GlobalNamespace::ThermalManager::__cordl_internal_get_lastTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTime;
}
constexpr void GlobalNamespace::ThermalManager::__cordl_internal_set_lastTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTime = value;
}
inline void GlobalNamespace::ThermalManager::setStaticF_sources(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThermalSourceVolume>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThermalSourceVolume>>*, "sources", ::GlobalNamespace::ThermalManager*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThermalSourceVolume>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThermalSourceVolume>>* GlobalNamespace::ThermalManager::getStaticF_sources()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThermalSourceVolume>>*, "sources", ::GlobalNamespace::ThermalManager*>();
}
inline void GlobalNamespace::ThermalManager::setStaticF_receivers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThermalReceiver>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThermalReceiver>>*, "receivers", ::GlobalNamespace::ThermalManager*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThermalReceiver>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThermalReceiver>>* GlobalNamespace::ThermalManager::getStaticF_receivers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ThermalReceiver>>*, "receivers", ::GlobalNamespace::ThermalManager*>();
}
inline void GlobalNamespace::ThermalManager::setStaticF_instance(::UnityW<::GlobalNamespace::ThermalManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::ThermalManager>, "instance", ::GlobalNamespace::ThermalManager*>(std::forward<::UnityW<::GlobalNamespace::ThermalManager>>(value));
}
inline ::UnityW<::GlobalNamespace::ThermalManager> GlobalNamespace::ThermalManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::ThermalManager>, "instance", ::GlobalNamespace::ThermalManager*>();
}
inline void GlobalNamespace::ThermalManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThermalManager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ThermalManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThermalManager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ThermalManager::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThermalManager*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ThermalManager::Register(::GlobalNamespace::ThermalSourceVolume*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThermalManager*>(),
                        {"Register", {}, {::i2c::type_of<::GlobalNamespace::ThermalSourceVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source);
}
inline void GlobalNamespace::ThermalManager::Unregister(::GlobalNamespace::ThermalSourceVolume*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThermalManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::GlobalNamespace::ThermalSourceVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source);
}
inline void GlobalNamespace::ThermalManager::Register(::GlobalNamespace::ThermalReceiver*  receiver)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThermalManager*>(),
                        {"Register", {}, {::i2c::type_of<::GlobalNamespace::ThermalReceiver*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, receiver);
}
inline void GlobalNamespace::ThermalManager::Unregister(::GlobalNamespace::ThermalReceiver*  receiver)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThermalManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::GlobalNamespace::ThermalReceiver*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, receiver);
}
inline void GlobalNamespace::ThermalManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ThermalManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ThermalManager* GlobalNamespace::ThermalManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ThermalManager*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::ThermalManager::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::ThermalManager::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ThermalManager::ThermalManager()   {
}
