#pragma once
// IWYU pragma private; include "GlobalNamespace/FlockingUpdateManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FlockingUpdateManager_def.hpp"
#include "GlobalNamespace/zzzz__Flocking_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FlockingUpdateManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlockingUpdateManager::*)()>(&::GlobalNamespace::FlockingUpdateManager::Awake)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5808660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingUpdateManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlockingUpdateManager.CreateManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::FlockingUpdateManager::CreateManager)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5808880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingUpdateManager*>(),
                        {"CreateManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlockingUpdateManager.SetInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::FlockingUpdateManager*)>(&::GlobalNamespace::FlockingUpdateManager::SetInstance)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x580879c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingUpdateManager*>(),
                        {"SetInstance", {}, {::i2c::type_of<::GlobalNamespace::FlockingUpdateManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlockingUpdateManager.RegisterFlocking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::Flocking*)>(&::GlobalNamespace::FlockingUpdateManager::RegisterFlocking)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x58084d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingUpdateManager*>(),
                        {"RegisterFlocking", {}, {::i2c::type_of<::GlobalNamespace::Flocking*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlockingUpdateManager.UnregisterFlocking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::Flocking*)>(&::GlobalNamespace::FlockingUpdateManager::UnregisterFlocking)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x58064ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingUpdateManager*>(),
                        {"UnregisterFlocking", {}, {::i2c::type_of<::GlobalNamespace::Flocking*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlockingUpdateManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlockingUpdateManager::*)()>(&::GlobalNamespace::FlockingUpdateManager::Update)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5808940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingUpdateManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlockingUpdateManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlockingUpdateManager::*)()>(&::GlobalNamespace::FlockingUpdateManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5808a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingUpdateManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::FlockingUpdateManager::setStaticF_instance(::UnityW<::GlobalNamespace::FlockingUpdateManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::FlockingUpdateManager>, "instance", ::GlobalNamespace::FlockingUpdateManager*>(std::forward<::UnityW<::GlobalNamespace::FlockingUpdateManager>>(value));
}
inline ::UnityW<::GlobalNamespace::FlockingUpdateManager> GlobalNamespace::FlockingUpdateManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::FlockingUpdateManager>, "instance", ::GlobalNamespace::FlockingUpdateManager*>();
}
inline void GlobalNamespace::FlockingUpdateManager::setStaticF_hasInstance(bool  value)  {
::cordl_internals::setStaticField<bool, "hasInstance", ::GlobalNamespace::FlockingUpdateManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::FlockingUpdateManager::getStaticF_hasInstance()  {
return ::cordl_internals::getStaticField<bool, "hasInstance", ::GlobalNamespace::FlockingUpdateManager*>();
}
inline void GlobalNamespace::FlockingUpdateManager::setStaticF_allFlockings(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Flocking>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Flocking>>*, "allFlockings", ::GlobalNamespace::FlockingUpdateManager*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Flocking>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Flocking>>* GlobalNamespace::FlockingUpdateManager::getStaticF_allFlockings()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::Flocking>>*, "allFlockings", ::GlobalNamespace::FlockingUpdateManager*>();
}
inline void GlobalNamespace::FlockingUpdateManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingUpdateManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FlockingUpdateManager::CreateManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingUpdateManager*>(),
                        {"CreateManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::FlockingUpdateManager::SetInstance(::GlobalNamespace::FlockingUpdateManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingUpdateManager*>(),
                        {"SetInstance", {}, {::i2c::type_of<::GlobalNamespace::FlockingUpdateManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, manager);
}
inline void GlobalNamespace::FlockingUpdateManager::RegisterFlocking(::GlobalNamespace::Flocking*  flocking)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingUpdateManager*>(),
                        {"RegisterFlocking", {}, {::i2c::type_of<::GlobalNamespace::Flocking*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, flocking);
}
inline void GlobalNamespace::FlockingUpdateManager::UnregisterFlocking(::GlobalNamespace::Flocking*  flocking)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingUpdateManager*>(),
                        {"UnregisterFlocking", {}, {::i2c::type_of<::GlobalNamespace::Flocking*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, flocking);
}
inline void GlobalNamespace::FlockingUpdateManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingUpdateManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FlockingUpdateManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FlockingUpdateManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FlockingUpdateManager* GlobalNamespace::FlockingUpdateManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FlockingUpdateManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FlockingUpdateManager::FlockingUpdateManager()   {
}
