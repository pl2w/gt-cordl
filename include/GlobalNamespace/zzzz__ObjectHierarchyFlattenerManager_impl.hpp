#pragma once
// IWYU pragma private; include "GlobalNamespace/ObjectHierarchyFlattenerManager.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourPostTick_impl.hpp"
#include "GlobalNamespace/zzzz__ObjectHierarchyFlattenerManager_def.hpp"
#include "GlobalNamespace/zzzz__ObjectHierarchyFlattener_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ObjectHierarchyFlattenerManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObjectHierarchyFlattenerManager::*)()>(&::GlobalNamespace::ObjectHierarchyFlattenerManager::Awake)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x567c9bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectHierarchyFlattenerManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectHierarchyFlattenerManager.CreateManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::ObjectHierarchyFlattenerManager::CreateManager)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x567cb94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectHierarchyFlattenerManager*>(),
                        {"CreateManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectHierarchyFlattenerManager.SetInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::ObjectHierarchyFlattenerManager*)>(&::GlobalNamespace::ObjectHierarchyFlattenerManager::SetInstance)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x567cab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectHierarchyFlattenerManager*>(),
                        {"SetInstance", {}, {::i2c::type_of<::GlobalNamespace::ObjectHierarchyFlattenerManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectHierarchyFlattenerManager.RegisterOHF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::ObjectHierarchyFlattener*)>(&::GlobalNamespace::ObjectHierarchyFlattenerManager::RegisterOHF)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x567c858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectHierarchyFlattenerManager*>(),
                        {"RegisterOHF", {}, {::i2c::type_of<::GlobalNamespace::ObjectHierarchyFlattener*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectHierarchyFlattenerManager.UnregisterOHF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::ObjectHierarchyFlattener*)>(&::GlobalNamespace::ObjectHierarchyFlattenerManager::UnregisterOHF)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x567c1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectHierarchyFlattenerManager*>(),
                        {"UnregisterOHF", {}, {::i2c::type_of<::GlobalNamespace::ObjectHierarchyFlattener*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectHierarchyFlattenerManager.PostTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObjectHierarchyFlattenerManager::*)()>(&::GlobalNamespace::ObjectHierarchyFlattenerManager::PostTick)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x567cc54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ObjectHierarchyFlattenerManager*>(),
                    {::i2c::class_of<::GlobalNamespace::ObjectHierarchyFlattenerManager*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObjectHierarchyFlattenerManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObjectHierarchyFlattenerManager::*)()>(&::GlobalNamespace::ObjectHierarchyFlattenerManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x567cd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectHierarchyFlattenerManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ObjectHierarchyFlattenerManager::setStaticF_instance(::UnityW<::GlobalNamespace::ObjectHierarchyFlattenerManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::ObjectHierarchyFlattenerManager>, "instance", ::GlobalNamespace::ObjectHierarchyFlattenerManager*>(std::forward<::UnityW<::GlobalNamespace::ObjectHierarchyFlattenerManager>>(value));
}
inline ::UnityW<::GlobalNamespace::ObjectHierarchyFlattenerManager> GlobalNamespace::ObjectHierarchyFlattenerManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::ObjectHierarchyFlattenerManager>, "instance", ::GlobalNamespace::ObjectHierarchyFlattenerManager*>();
}
inline void GlobalNamespace::ObjectHierarchyFlattenerManager::setStaticF_hasInstance(bool  value)  {
::cordl_internals::setStaticField<bool, "hasInstance", ::GlobalNamespace::ObjectHierarchyFlattenerManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::ObjectHierarchyFlattenerManager::getStaticF_hasInstance()  {
return ::cordl_internals::getStaticField<bool, "hasInstance", ::GlobalNamespace::ObjectHierarchyFlattenerManager*>();
}
inline void GlobalNamespace::ObjectHierarchyFlattenerManager::setStaticF_alloHF(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>>*, "alloHF", ::GlobalNamespace::ObjectHierarchyFlattenerManager*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>>* GlobalNamespace::ObjectHierarchyFlattenerManager::getStaticF_alloHF()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>>*, "alloHF", ::GlobalNamespace::ObjectHierarchyFlattenerManager*>();
}
inline void GlobalNamespace::ObjectHierarchyFlattenerManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectHierarchyFlattenerManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ObjectHierarchyFlattenerManager::CreateManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectHierarchyFlattenerManager*>(),
                        {"CreateManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ObjectHierarchyFlattenerManager::SetInstance(::GlobalNamespace::ObjectHierarchyFlattenerManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectHierarchyFlattenerManager*>(),
                        {"SetInstance", {}, {::i2c::type_of<::GlobalNamespace::ObjectHierarchyFlattenerManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, manager);
}
inline void GlobalNamespace::ObjectHierarchyFlattenerManager::RegisterOHF(::GlobalNamespace::ObjectHierarchyFlattener*  rbWI)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectHierarchyFlattenerManager*>(),
                        {"RegisterOHF", {}, {::i2c::type_of<::GlobalNamespace::ObjectHierarchyFlattener*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rbWI);
}
inline void GlobalNamespace::ObjectHierarchyFlattenerManager::UnregisterOHF(::GlobalNamespace::ObjectHierarchyFlattener*  rbWI)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectHierarchyFlattenerManager*>(),
                        {"UnregisterOHF", {}, {::i2c::type_of<::GlobalNamespace::ObjectHierarchyFlattener*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rbWI);
}
inline void GlobalNamespace::ObjectHierarchyFlattenerManager::PostTick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ObjectHierarchyFlattenerManager*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ObjectHierarchyFlattenerManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ObjectHierarchyFlattenerManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ObjectHierarchyFlattenerManager* GlobalNamespace::ObjectHierarchyFlattenerManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ObjectHierarchyFlattenerManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObjectHierarchyFlattenerManager::ObjectHierarchyFlattenerManager()   {
}
