#pragma once
// IWYU pragma private; include "GlobalNamespace/SlingshotProjectileManager.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_impl.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectileManager_def.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectile_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectileManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotProjectileManager::*)()>(&::GlobalNamespace::SlingshotProjectileManager::Awake)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x573c998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectileManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectileManager.CreateManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::SlingshotProjectileManager::CreateManager)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x573cb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectileManager*>(),
                        {"CreateManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectileManager.SetInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::SlingshotProjectileManager*)>(&::GlobalNamespace::SlingshotProjectileManager::SetInstance)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x573ca8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectileManager*>(),
                        {"SetInstance", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectileManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectileManager.RegisterSP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::SlingshotProjectile*)>(&::GlobalNamespace::SlingshotProjectileManager::RegisterSP)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x573a5a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectileManager*>(),
                        {"RegisterSP", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectileManager.UnregisterSP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::SlingshotProjectile*)>(&::GlobalNamespace::SlingshotProjectileManager::UnregisterSP)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x573a750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectileManager*>(),
                        {"UnregisterSP", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectileManager.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotProjectileManager::*)()>(&::GlobalNamespace::SlingshotProjectileManager::Tick)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x573cc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SlingshotProjectileManager*>(),
                    {::i2c::class_of<::GlobalNamespace::SlingshotProjectileManager*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlingshotProjectileManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SlingshotProjectileManager::*)()>(&::GlobalNamespace::SlingshotProjectileManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x573ccfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectileManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SlingshotProjectileManager::setStaticF_instance(::UnityW<::GlobalNamespace::SlingshotProjectileManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::SlingshotProjectileManager>, "instance", ::GlobalNamespace::SlingshotProjectileManager*>(std::forward<::UnityW<::GlobalNamespace::SlingshotProjectileManager>>(value));
}
inline ::UnityW<::GlobalNamespace::SlingshotProjectileManager> GlobalNamespace::SlingshotProjectileManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::SlingshotProjectileManager>, "instance", ::GlobalNamespace::SlingshotProjectileManager*>();
}
inline void GlobalNamespace::SlingshotProjectileManager::setStaticF_hasInstance(bool  value)  {
::cordl_internals::setStaticField<bool, "hasInstance", ::GlobalNamespace::SlingshotProjectileManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::SlingshotProjectileManager::getStaticF_hasInstance()  {
return ::cordl_internals::getStaticField<bool, "hasInstance", ::GlobalNamespace::SlingshotProjectileManager*>();
}
inline void GlobalNamespace::SlingshotProjectileManager::setStaticF_allsP(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SlingshotProjectile>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SlingshotProjectile>>*, "allsP", ::GlobalNamespace::SlingshotProjectileManager*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SlingshotProjectile>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SlingshotProjectile>>* GlobalNamespace::SlingshotProjectileManager::getStaticF_allsP()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SlingshotProjectile>>*, "allsP", ::GlobalNamespace::SlingshotProjectileManager*>();
}
inline void GlobalNamespace::SlingshotProjectileManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectileManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SlingshotProjectileManager::CreateManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectileManager*>(),
                        {"CreateManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SlingshotProjectileManager::SetInstance(::GlobalNamespace::SlingshotProjectileManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectileManager*>(),
                        {"SetInstance", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectileManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, manager);
}
inline void GlobalNamespace::SlingshotProjectileManager::RegisterSP(::GlobalNamespace::SlingshotProjectile*  sP)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectileManager*>(),
                        {"RegisterSP", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sP);
}
inline void GlobalNamespace::SlingshotProjectileManager::UnregisterSP(::GlobalNamespace::SlingshotProjectile*  sP)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectileManager*>(),
                        {"UnregisterSP", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sP);
}
inline void GlobalNamespace::SlingshotProjectileManager::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SlingshotProjectileManager*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SlingshotProjectileManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SlingshotProjectileManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SlingshotProjectileManager* GlobalNamespace::SlingshotProjectileManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SlingshotProjectileManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SlingshotProjectileManager::SlingshotProjectileManager()   {
}
