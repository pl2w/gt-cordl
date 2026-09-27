#pragma once
// IWYU pragma private; include "GlobalNamespace/TransferrableObjectManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TransferrableObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TransferrableObjectManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObjectManager::*)()>(&::GlobalNamespace::TransferrableObjectManager::Awake)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5772d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObjectManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObjectManager::*)()>(&::GlobalNamespace::TransferrableObjectManager::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5772f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObjectManager.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObjectManager::*)()>(&::GlobalNamespace::TransferrableObjectManager::LateUpdate)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5772fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectManager*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObjectManager.CreateManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::TransferrableObjectManager::CreateManager)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x57730b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectManager*>(),
                        {"CreateManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObjectManager.SetInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::TransferrableObjectManager*)>(&::GlobalNamespace::TransferrableObjectManager::SetInstance)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5772e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectManager*>(),
                        {"SetInstance", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObjectManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObjectManager.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::TransferrableObject*)>(&::GlobalNamespace::TransferrableObjectManager::Register)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x576cee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectManager*>(),
                        {"Register", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObjectManager.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::TransferrableObject*)>(&::GlobalNamespace::TransferrableObjectManager::Unregister)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x576d840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObjectManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObjectManager::*)()>(&::GlobalNamespace::TransferrableObjectManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57731ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TransferrableObjectManager::setStaticF_instance(::UnityW<::GlobalNamespace::TransferrableObjectManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::TransferrableObjectManager>, "instance", ::GlobalNamespace::TransferrableObjectManager*>(std::forward<::UnityW<::GlobalNamespace::TransferrableObjectManager>>(value));
}
inline ::UnityW<::GlobalNamespace::TransferrableObjectManager> GlobalNamespace::TransferrableObjectManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::TransferrableObjectManager>, "instance", ::GlobalNamespace::TransferrableObjectManager*>();
}
inline void GlobalNamespace::TransferrableObjectManager::setStaticF_hasInstance(bool  value)  {
::cordl_internals::setStaticField<bool, "hasInstance", ::GlobalNamespace::TransferrableObjectManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::TransferrableObjectManager::getStaticF_hasInstance()  {
return ::cordl_internals::getStaticField<bool, "hasInstance", ::GlobalNamespace::TransferrableObjectManager*>();
}
inline void GlobalNamespace::TransferrableObjectManager::setStaticF_transObs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TransferrableObject>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TransferrableObject>>*, "transObs", ::GlobalNamespace::TransferrableObjectManager*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TransferrableObject>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TransferrableObject>>* GlobalNamespace::TransferrableObjectManager::getStaticF_transObs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TransferrableObject>>*, "transObs", ::GlobalNamespace::TransferrableObjectManager*>();
}
inline void GlobalNamespace::TransferrableObjectManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObjectManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObjectManager::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectManager*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObjectManager::CreateManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectManager*>(),
                        {"CreateManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::TransferrableObjectManager::SetInstance(::GlobalNamespace::TransferrableObjectManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectManager*>(),
                        {"SetInstance", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObjectManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, manager);
}
inline void GlobalNamespace::TransferrableObjectManager::Register(::GlobalNamespace::TransferrableObject*  transOb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectManager*>(),
                        {"Register", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transOb);
}
inline void GlobalNamespace::TransferrableObjectManager::Unregister(::GlobalNamespace::TransferrableObject*  transOb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transOb);
}
inline void GlobalNamespace::TransferrableObjectManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TransferrableObjectManager* GlobalNamespace::TransferrableObjectManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TransferrableObjectManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TransferrableObjectManager::TransferrableObjectManager()   {
}
