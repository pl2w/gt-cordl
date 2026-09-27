#pragma once
// IWYU pragma private; include "GlobalNamespace/SizeManagerManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SizeManagerManager_def.hpp"
#include "GlobalNamespace/zzzz__SizeManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SizeManagerManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SizeManagerManager::*)()>(&::GlobalNamespace::SizeManagerManager::Awake)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x595ed08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeManagerManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SizeManagerManager.CreateManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::SizeManagerManager::CreateManager)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x595eee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeManagerManager*>(),
                        {"CreateManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SizeManagerManager.SetInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::SizeManagerManager*)>(&::GlobalNamespace::SizeManagerManager::SetInstance)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x595edfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeManagerManager*>(),
                        {"SetInstance", {}, {::i2c::type_of<::GlobalNamespace::SizeManagerManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SizeManagerManager.RegisterSM
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::SizeManager*)>(&::GlobalNamespace::SizeManagerManager::RegisterSM)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x595dcbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeManagerManager*>(),
                        {"RegisterSM", {}, {::i2c::type_of<::GlobalNamespace::SizeManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SizeManagerManager.UnregisterSM
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::SizeManager*)>(&::GlobalNamespace::SizeManagerManager::UnregisterSM)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x595db68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeManagerManager*>(),
                        {"UnregisterSM", {}, {::i2c::type_of<::GlobalNamespace::SizeManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SizeManagerManager.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SizeManagerManager::*)()>(&::GlobalNamespace::SizeManagerManager::FixedUpdate)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x595efa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeManagerManager*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SizeManagerManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SizeManagerManager::*)()>(&::GlobalNamespace::SizeManagerManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x595f06c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeManagerManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SizeManagerManager::setStaticF_instance(::UnityW<::GlobalNamespace::SizeManagerManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::SizeManagerManager>, "instance", ::GlobalNamespace::SizeManagerManager*>(std::forward<::UnityW<::GlobalNamespace::SizeManagerManager>>(value));
}
inline ::UnityW<::GlobalNamespace::SizeManagerManager> GlobalNamespace::SizeManagerManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::SizeManagerManager>, "instance", ::GlobalNamespace::SizeManagerManager*>();
}
inline void GlobalNamespace::SizeManagerManager::setStaticF_hasInstance(bool  value)  {
::cordl_internals::setStaticField<bool, "hasInstance", ::GlobalNamespace::SizeManagerManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::SizeManagerManager::getStaticF_hasInstance()  {
return ::cordl_internals::getStaticField<bool, "hasInstance", ::GlobalNamespace::SizeManagerManager*>();
}
inline void GlobalNamespace::SizeManagerManager::setStaticF_allSM(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SizeManager>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SizeManager>>*, "allSM", ::GlobalNamespace::SizeManagerManager*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SizeManager>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SizeManager>>* GlobalNamespace::SizeManagerManager::getStaticF_allSM()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SizeManager>>*, "allSM", ::GlobalNamespace::SizeManagerManager*>();
}
inline void GlobalNamespace::SizeManagerManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeManagerManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SizeManagerManager::CreateManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeManagerManager*>(),
                        {"CreateManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SizeManagerManager::SetInstance(::GlobalNamespace::SizeManagerManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeManagerManager*>(),
                        {"SetInstance", {}, {::i2c::type_of<::GlobalNamespace::SizeManagerManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, manager);
}
inline void GlobalNamespace::SizeManagerManager::RegisterSM(::GlobalNamespace::SizeManager*  sM)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeManagerManager*>(),
                        {"RegisterSM", {}, {::i2c::type_of<::GlobalNamespace::SizeManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sM);
}
inline void GlobalNamespace::SizeManagerManager::UnregisterSM(::GlobalNamespace::SizeManager*  sM)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeManagerManager*>(),
                        {"UnregisterSM", {}, {::i2c::type_of<::GlobalNamespace::SizeManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sM);
}
inline void GlobalNamespace::SizeManagerManager::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeManagerManager*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SizeManagerManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SizeManagerManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SizeManagerManager* GlobalNamespace::SizeManagerManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SizeManagerManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SizeManagerManager::SizeManagerManager()   {
}
