#pragma once
// IWYU pragma private; include "GlobalNamespace/WorldShareableItemManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__WorldShareableItemManager_def.hpp"
#include "GlobalNamespace/zzzz__WorldShareableItem_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItemManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItemManager::*)()>(&::GlobalNamespace::WorldShareableItemManager::Awake)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x574015c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItemManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItemManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItemManager::*)()>(&::GlobalNamespace::WorldShareableItemManager::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x574036c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItemManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItemManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItemManager::*)()>(&::GlobalNamespace::WorldShareableItemManager::Update)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x574043c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItemManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItemManager.CreateManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::WorldShareableItemManager::CreateManager)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x57405b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItemManager*>(),
                        {"CreateManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItemManager.SetInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::WorldShareableItemManager*)>(&::GlobalNamespace::WorldShareableItemManager::SetInstance)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5740250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItemManager*>(),
                        {"SetInstance", {}, {::i2c::type_of<::GlobalNamespace::WorldShareableItemManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItemManager.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::WorldShareableItem*)>(&::GlobalNamespace::WorldShareableItemManager::Register)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x573eaac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItemManager*>(),
                        {"Register", {}, {::i2c::type_of<::GlobalNamespace::WorldShareableItem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItemManager.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::WorldShareableItem*)>(&::GlobalNamespace::WorldShareableItemManager::Unregister)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x573ee14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItemManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::GlobalNamespace::WorldShareableItem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldShareableItemManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldShareableItemManager::*)()>(&::GlobalNamespace::WorldShareableItemManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57406ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItemManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::WorldShareableItemManager::setStaticF_instance(::UnityW<::GlobalNamespace::WorldShareableItemManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::WorldShareableItemManager>, "instance", ::GlobalNamespace::WorldShareableItemManager*>(std::forward<::UnityW<::GlobalNamespace::WorldShareableItemManager>>(value));
}
inline ::UnityW<::GlobalNamespace::WorldShareableItemManager> GlobalNamespace::WorldShareableItemManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::WorldShareableItemManager>, "instance", ::GlobalNamespace::WorldShareableItemManager*>();
}
inline void GlobalNamespace::WorldShareableItemManager::setStaticF_hasInstance(bool  value)  {
::cordl_internals::setStaticField<bool, "hasInstance", ::GlobalNamespace::WorldShareableItemManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::WorldShareableItemManager::getStaticF_hasInstance()  {
return ::cordl_internals::getStaticField<bool, "hasInstance", ::GlobalNamespace::WorldShareableItemManager*>();
}
inline void GlobalNamespace::WorldShareableItemManager::setStaticF_worldShareableItems(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::WorldShareableItem>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::WorldShareableItem>>*, "worldShareableItems", ::GlobalNamespace::WorldShareableItemManager*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::WorldShareableItem>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::WorldShareableItem>>* GlobalNamespace::WorldShareableItemManager::getStaticF_worldShareableItems()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::WorldShareableItem>>*, "worldShareableItems", ::GlobalNamespace::WorldShareableItemManager*>();
}
inline void GlobalNamespace::WorldShareableItemManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItemManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WorldShareableItemManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItemManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WorldShareableItemManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItemManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WorldShareableItemManager::CreateManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItemManager*>(),
                        {"CreateManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::WorldShareableItemManager::SetInstance(::GlobalNamespace::WorldShareableItemManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItemManager*>(),
                        {"SetInstance", {}, {::i2c::type_of<::GlobalNamespace::WorldShareableItemManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, manager);
}
inline void GlobalNamespace::WorldShareableItemManager::Register(::GlobalNamespace::WorldShareableItem*  worldShareableItem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItemManager*>(),
                        {"Register", {}, {::i2c::type_of<::GlobalNamespace::WorldShareableItem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, worldShareableItem);
}
inline void GlobalNamespace::WorldShareableItemManager::Unregister(::GlobalNamespace::WorldShareableItem*  worldShareableItem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItemManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::GlobalNamespace::WorldShareableItem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, worldShareableItem);
}
inline void GlobalNamespace::WorldShareableItemManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldShareableItemManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::WorldShareableItemManager* GlobalNamespace::WorldShareableItemManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::WorldShareableItemManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WorldShareableItemManager::WorldShareableItemManager()   {
}
