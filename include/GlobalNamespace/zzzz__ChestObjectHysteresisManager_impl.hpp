#pragma once
// IWYU pragma private; include "GlobalNamespace/ChestObjectHysteresisManager.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_impl.hpp"
#include "GlobalNamespace/zzzz__ChestObjectHysteresisManager_def.hpp"
#include "GlobalNamespace/zzzz__ChestObjectHysteresis_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ChestObjectHysteresisManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ChestObjectHysteresisManager::*)()>(&::GlobalNamespace::ChestObjectHysteresisManager::Awake)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5754e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChestObjectHysteresisManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChestObjectHysteresisManager.CreateManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::ChestObjectHysteresisManager::CreateManager)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5755060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChestObjectHysteresisManager*>(),
                        {"CreateManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChestObjectHysteresisManager.SetInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::ChestObjectHysteresisManager*)>(&::GlobalNamespace::ChestObjectHysteresisManager::SetInstance)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5754f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChestObjectHysteresisManager*>(),
                        {"SetInstance", {}, {::i2c::type_of<::GlobalNamespace::ChestObjectHysteresisManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChestObjectHysteresisManager.RegisterCH
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::ChestObjectHysteresis*)>(&::GlobalNamespace::ChestObjectHysteresisManager::RegisterCH)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5754ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChestObjectHysteresisManager*>(),
                        {"RegisterCH", {}, {::i2c::type_of<::GlobalNamespace::ChestObjectHysteresis*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChestObjectHysteresisManager.UnregisterCH
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::ChestObjectHysteresis*)>(&::GlobalNamespace::ChestObjectHysteresisManager::UnregisterCH)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5754c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChestObjectHysteresisManager*>(),
                        {"UnregisterCH", {}, {::i2c::type_of<::GlobalNamespace::ChestObjectHysteresis*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChestObjectHysteresisManager.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ChestObjectHysteresisManager::*)()>(&::GlobalNamespace::ChestObjectHysteresisManager::Tick)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5755120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ChestObjectHysteresisManager*>(),
                    {::i2c::class_of<::GlobalNamespace::ChestObjectHysteresisManager*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ChestObjectHysteresisManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ChestObjectHysteresisManager::*)()>(&::GlobalNamespace::ChestObjectHysteresisManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57551ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChestObjectHysteresisManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ChestObjectHysteresisManager::setStaticF_instance(::UnityW<::GlobalNamespace::ChestObjectHysteresisManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::ChestObjectHysteresisManager>, "instance", ::GlobalNamespace::ChestObjectHysteresisManager*>(std::forward<::UnityW<::GlobalNamespace::ChestObjectHysteresisManager>>(value));
}
inline ::UnityW<::GlobalNamespace::ChestObjectHysteresisManager> GlobalNamespace::ChestObjectHysteresisManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::ChestObjectHysteresisManager>, "instance", ::GlobalNamespace::ChestObjectHysteresisManager*>();
}
inline void GlobalNamespace::ChestObjectHysteresisManager::setStaticF_hasInstance(bool  value)  {
::cordl_internals::setStaticField<bool, "hasInstance", ::GlobalNamespace::ChestObjectHysteresisManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::ChestObjectHysteresisManager::getStaticF_hasInstance()  {
return ::cordl_internals::getStaticField<bool, "hasInstance", ::GlobalNamespace::ChestObjectHysteresisManager*>();
}
inline void GlobalNamespace::ChestObjectHysteresisManager::setStaticF_allChests(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ChestObjectHysteresis>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ChestObjectHysteresis>>*, "allChests", ::GlobalNamespace::ChestObjectHysteresisManager*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ChestObjectHysteresis>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ChestObjectHysteresis>>* GlobalNamespace::ChestObjectHysteresisManager::getStaticF_allChests()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ChestObjectHysteresis>>*, "allChests", ::GlobalNamespace::ChestObjectHysteresisManager*>();
}
inline void GlobalNamespace::ChestObjectHysteresisManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChestObjectHysteresisManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ChestObjectHysteresisManager::CreateManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChestObjectHysteresisManager*>(),
                        {"CreateManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ChestObjectHysteresisManager::SetInstance(::GlobalNamespace::ChestObjectHysteresisManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChestObjectHysteresisManager*>(),
                        {"SetInstance", {}, {::i2c::type_of<::GlobalNamespace::ChestObjectHysteresisManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, manager);
}
inline void GlobalNamespace::ChestObjectHysteresisManager::RegisterCH(::GlobalNamespace::ChestObjectHysteresis*  cOH)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChestObjectHysteresisManager*>(),
                        {"RegisterCH", {}, {::i2c::type_of<::GlobalNamespace::ChestObjectHysteresis*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cOH);
}
inline void GlobalNamespace::ChestObjectHysteresisManager::UnregisterCH(::GlobalNamespace::ChestObjectHysteresis*  cOH)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChestObjectHysteresisManager*>(),
                        {"UnregisterCH", {}, {::i2c::type_of<::GlobalNamespace::ChestObjectHysteresis*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cOH);
}
inline void GlobalNamespace::ChestObjectHysteresisManager::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ChestObjectHysteresisManager*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ChestObjectHysteresisManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ChestObjectHysteresisManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ChestObjectHysteresisManager* GlobalNamespace::ChestObjectHysteresisManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ChestObjectHysteresisManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ChestObjectHysteresisManager::ChestObjectHysteresisManager()   {
}
