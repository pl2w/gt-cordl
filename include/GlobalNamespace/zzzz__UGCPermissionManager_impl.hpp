#pragma once
// IWYU pragma private; include "GlobalNamespace/UGCPermissionManager.hpp"
#include "GlobalNamespace/zzzz__UGCAccessLevel_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__UGCPermissionManager_def.hpp"
#include "GlobalNamespace/zzzz__UGCAccessLevel_def.hpp"
#include "GlobalNamespace/zzzz__UGCPermissionManager_def.hpp"
#include "KID/Model/zzzz__Permission_ManagedByEnum_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UGCPermissionManager.UsePlayFabSafety
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::UGCPermissionManager::UsePlayFabSafety)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5a35774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager*>(),
                        {"UsePlayFabSafety", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UGCPermissionManager.UseKID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::UGCPermissionManager::UseKID)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5a358cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager*>(),
                        {"UseKID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UGCPermissionManager.get_IsUGCDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::UGCPermissionManager::get_IsUGCDisabled)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5a436f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager*>(),
                        {"get_IsUGCDisabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UGCPermissionManager.get_FeaturedMapsOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::UGCPermissionManager::get_FeaturedMapsOnly)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5a4374c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager*>(),
                        {"get_FeaturedMapsOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UGCPermissionManager.get_HasNoMapAccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::UGCPermissionManager::get_HasNoMapAccess)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5a437a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager*>(),
                        {"get_HasNoMapAccess", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UGCPermissionManager.CheckPermissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::UGCPermissionManager::CheckPermissions)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5a43804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager*>(),
                        {"CheckPermissions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UGCPermissionManager.SubscribeToUGCEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::UGCPermissionManager::SubscribeToUGCEnabled)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a438c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager*>(),
                        {"SubscribeToUGCEnabled", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UGCPermissionManager.UnsubscribeFromUGCEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::UGCPermissionManager::UnsubscribeFromUGCEnabled)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a4397c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager*>(),
                        {"UnsubscribeFromUGCEnabled", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UGCPermissionManager.SubscribeToUGCDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::UGCPermissionManager::SubscribeToUGCDisabled)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a43a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager*>(),
                        {"SubscribeToUGCDisabled", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UGCPermissionManager.UnsubscribeFromUGCDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::UGCPermissionManager::UnsubscribeFromUGCDisabled)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a43ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager*>(),
                        {"UnsubscribeFromUGCDisabled", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UGCPermissionManager.SubscribeToVirtualStumpEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::UGCPermissionManager::SubscribeToVirtualStumpEnabled)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a43b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager*>(),
                        {"SubscribeToVirtualStumpEnabled", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UGCPermissionManager.UnsubscribeFromVirtualStumpEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::UGCPermissionManager::UnsubscribeFromVirtualStumpEnabled)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a43c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager*>(),
                        {"UnsubscribeFromVirtualStumpEnabled", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UGCPermissionManager.SubscribeToVirtualStumpDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::UGCPermissionManager::SubscribeToVirtualStumpDisabled)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a43d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager*>(),
                        {"SubscribeToVirtualStumpDisabled", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UGCPermissionManager.UnsubscribeFromVirtualStumpDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::UGCPermissionManager::UnsubscribeFromVirtualStumpDisabled)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a43db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager*>(),
                        {"UnsubscribeFromVirtualStumpDisabled", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UGCPermissionManager.SetAccessLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::UGCAccessLevel)>(&::GlobalNamespace::UGCPermissionManager::SetAccessLevel)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5a43e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager*>(),
                        {"SetAccessLevel", {}, {::i2c::type_of<::GlobalNamespace::UGCAccessLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UGCPermissionManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UGCPermissionManager::*)()>(&::GlobalNamespace::UGCPermissionManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a44018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UGCPermissionManager::setStaticF_permissions(::GlobalNamespace::UGCPermissionManager_IUGCPermissions*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::UGCPermissionManager_IUGCPermissions*, "permissions", ::GlobalNamespace::UGCPermissionManager*>(std::forward<::GlobalNamespace::UGCPermissionManager_IUGCPermissions*>(value));
}
inline ::GlobalNamespace::UGCPermissionManager_IUGCPermissions* GlobalNamespace::UGCPermissionManager::getStaticF_permissions()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::UGCPermissionManager_IUGCPermissions*, "permissions", ::GlobalNamespace::UGCPermissionManager*>();
}
inline void GlobalNamespace::UGCPermissionManager::setStaticF_onUGCEnabled(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "onUGCEnabled", ::GlobalNamespace::UGCPermissionManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::UGCPermissionManager::getStaticF_onUGCEnabled()  {
return ::cordl_internals::getStaticField<::System::Action*, "onUGCEnabled", ::GlobalNamespace::UGCPermissionManager*>();
}
inline void GlobalNamespace::UGCPermissionManager::setStaticF_onUGCDisabled(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "onUGCDisabled", ::GlobalNamespace::UGCPermissionManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::UGCPermissionManager::getStaticF_onUGCDisabled()  {
return ::cordl_internals::getStaticField<::System::Action*, "onUGCDisabled", ::GlobalNamespace::UGCPermissionManager*>();
}
inline void GlobalNamespace::UGCPermissionManager::setStaticF_onVirtualStumpEnabled(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "onVirtualStumpEnabled", ::GlobalNamespace::UGCPermissionManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::UGCPermissionManager::getStaticF_onVirtualStumpEnabled()  {
return ::cordl_internals::getStaticField<::System::Action*, "onVirtualStumpEnabled", ::GlobalNamespace::UGCPermissionManager*>();
}
inline void GlobalNamespace::UGCPermissionManager::setStaticF_onVirtualStumpDisabled(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "onVirtualStumpDisabled", ::GlobalNamespace::UGCPermissionManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::UGCPermissionManager::getStaticF_onVirtualStumpDisabled()  {
return ::cordl_internals::getStaticField<::System::Action*, "onVirtualStumpDisabled", ::GlobalNamespace::UGCPermissionManager*>();
}
inline void GlobalNamespace::UGCPermissionManager::setStaticF_accessLevel(::System::Nullable_1<::GlobalNamespace::UGCAccessLevel>  value)  {
::cordl_internals::setStaticField<::System::Nullable_1<::GlobalNamespace::UGCAccessLevel>, "accessLevel", ::GlobalNamespace::UGCPermissionManager*>(std::forward<::System::Nullable_1<::GlobalNamespace::UGCAccessLevel>>(value));
}
inline ::System::Nullable_1<::GlobalNamespace::UGCAccessLevel> GlobalNamespace::UGCPermissionManager::getStaticF_accessLevel()  {
return ::cordl_internals::getStaticField<::System::Nullable_1<::GlobalNamespace::UGCAccessLevel>, "accessLevel", ::GlobalNamespace::UGCPermissionManager*>();
}
inline void GlobalNamespace::UGCPermissionManager::UsePlayFabSafety()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager*>(),
                        {"UsePlayFabSafety", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::UGCPermissionManager::UseKID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager*>(),
                        {"UseKID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::UGCPermissionManager::get_IsUGCDisabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager*>(),
                        {"get_IsUGCDisabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::UGCPermissionManager::get_FeaturedMapsOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager*>(),
                        {"get_FeaturedMapsOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::UGCPermissionManager::get_HasNoMapAccess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager*>(),
                        {"get_HasNoMapAccess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::UGCPermissionManager::CheckPermissions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager*>(),
                        {"CheckPermissions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::UGCPermissionManager::SubscribeToUGCEnabled(::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager*>(),
                        {"SubscribeToUGCEnabled", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void GlobalNamespace::UGCPermissionManager::UnsubscribeFromUGCEnabled(::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager*>(),
                        {"UnsubscribeFromUGCEnabled", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void GlobalNamespace::UGCPermissionManager::SubscribeToUGCDisabled(::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager*>(),
                        {"SubscribeToUGCDisabled", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void GlobalNamespace::UGCPermissionManager::UnsubscribeFromUGCDisabled(::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager*>(),
                        {"UnsubscribeFromUGCDisabled", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void GlobalNamespace::UGCPermissionManager::SubscribeToVirtualStumpEnabled(::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager*>(),
                        {"SubscribeToVirtualStumpEnabled", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void GlobalNamespace::UGCPermissionManager::UnsubscribeFromVirtualStumpEnabled(::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager*>(),
                        {"UnsubscribeFromVirtualStumpEnabled", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void GlobalNamespace::UGCPermissionManager::SubscribeToVirtualStumpDisabled(::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager*>(),
                        {"SubscribeToVirtualStumpDisabled", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void GlobalNamespace::UGCPermissionManager::UnsubscribeFromVirtualStumpDisabled(::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager*>(),
                        {"UnsubscribeFromVirtualStumpDisabled", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void GlobalNamespace::UGCPermissionManager::SetAccessLevel(::GlobalNamespace::UGCAccessLevel  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager*>(),
                        {"SetAccessLevel", {}, {::i2c::type_of<::GlobalNamespace::UGCAccessLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, level);
}
inline void GlobalNamespace::UGCPermissionManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UGCPermissionManager* GlobalNamespace::UGCPermissionManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UGCPermissionManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UGCPermissionManager::UGCPermissionManager()   {
}
//  Writing Method size for method: ::GlobalNamespace::UGCPermissionManager_KIDPermissions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UGCPermissionManager_KIDPermissions::*)(::System::Action_1<::GlobalNamespace::UGCAccessLevel>*)>(&::GlobalNamespace::UGCPermissionManager_KIDPermissions::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5a436c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager_KIDPermissions*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::UGCAccessLevel>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UGCPermissionManager_KIDPermissions.SetAccessLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UGCPermissionManager_KIDPermissions::*)(::GlobalNamespace::UGCAccessLevel)>(&::GlobalNamespace::UGCPermissionManager_KIDPermissions::SetAccessLevel)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a440ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager_KIDPermissions*>(),
                        {"SetAccessLevel", {}, {::i2c::type_of<::GlobalNamespace::UGCAccessLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UGCPermissionManager_KIDPermissions.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UGCPermissionManager_KIDPermissions::*)()>(&::GlobalNamespace::UGCPermissionManager_KIDPermissions::Initialize)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a440c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager_KIDPermissions*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UGCPermissionManager_KIDPermissions.CheckPermissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UGCPermissionManager_KIDPermissions::*)()>(&::GlobalNamespace::UGCPermissionManager_KIDPermissions::CheckPermissions)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5a441b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager_KIDPermissions*>(),
                        {"CheckPermissions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UGCPermissionManager_KIDPermissions.OnKIDSessionUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UGCPermissionManager_KIDPermissions::*)(bool, ::GlobalNamespace::Permission_ManagedByEnum)>(&::GlobalNamespace::UGCPermissionManager_KIDPermissions::OnKIDSessionUpdate)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5a4469c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager_KIDPermissions*>(),
                        {"OnKIDSessionUpdate", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::Permission_ManagedByEnum>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UGCPermissionManager_KIDPermissions.ProcessPermissionKID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UGCPermissionManager_KIDPermissions::*)(bool, bool, ::GlobalNamespace::Permission_ManagedByEnum)>(&::GlobalNamespace::UGCPermissionManager_KIDPermissions::ProcessPermissionKID)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x5a44240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager_KIDPermissions*>(),
                        {"ProcessPermissionKID", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::Permission_ManagedByEnum>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::GlobalNamespace::UGCAccessLevel>*& GlobalNamespace::UGCPermissionManager_KIDPermissions::__cordl_internal_get_setAccessLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setAccessLevel;
}
constexpr ::System::Action_1<::GlobalNamespace::UGCAccessLevel>* const& GlobalNamespace::UGCPermissionManager_KIDPermissions::__cordl_internal_get_setAccessLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setAccessLevel;
}
constexpr void GlobalNamespace::UGCPermissionManager_KIDPermissions::__cordl_internal_set_setAccessLevel(::System::Action_1<::GlobalNamespace::UGCAccessLevel>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setAccessLevel = value;
}
inline void GlobalNamespace::UGCPermissionManager_KIDPermissions::_ctor(::System::Action_1<::GlobalNamespace::UGCAccessLevel>*  setAccessLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager_KIDPermissions*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::UGCAccessLevel>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, setAccessLevel);
}
inline void GlobalNamespace::UGCPermissionManager_KIDPermissions::SetAccessLevel(::GlobalNamespace::UGCAccessLevel  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager_KIDPermissions*>(),
                        {"SetAccessLevel", {}, {::i2c::type_of<::GlobalNamespace::UGCAccessLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level);
}
inline void GlobalNamespace::UGCPermissionManager_KIDPermissions::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager_KIDPermissions*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UGCPermissionManager_KIDPermissions::CheckPermissions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager_KIDPermissions*>(),
                        {"CheckPermissions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UGCPermissionManager_KIDPermissions::OnKIDSessionUpdate(bool  isEnabled, ::GlobalNamespace::Permission_ManagedByEnum  managedBy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager_KIDPermissions*>(),
                        {"OnKIDSessionUpdate", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::Permission_ManagedByEnum>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isEnabled, managedBy);
}
inline void GlobalNamespace::UGCPermissionManager_KIDPermissions::ProcessPermissionKID(bool  hasOptedIn, bool  isEnabled, ::GlobalNamespace::Permission_ManagedByEnum  managedBy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager_KIDPermissions*>(),
                        {"ProcessPermissionKID", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::Permission_ManagedByEnum>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasOptedIn, isEnabled, managedBy);
}
inline ::GlobalNamespace::UGCPermissionManager_KIDPermissions* GlobalNamespace::UGCPermissionManager_KIDPermissions::New_ctor(::System::Action_1<::GlobalNamespace::UGCAccessLevel>*  setAccessLevel)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UGCPermissionManager_KIDPermissions*>(setAccessLevel));
}
/// @brief Convert operator to "::GlobalNamespace::UGCPermissionManager_IUGCPermissions"
constexpr  GlobalNamespace::UGCPermissionManager_KIDPermissions::operator ::GlobalNamespace::UGCPermissionManager_IUGCPermissions*() noexcept {
return static_cast<::GlobalNamespace::UGCPermissionManager_IUGCPermissions*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::UGCPermissionManager_IUGCPermissions"
constexpr ::GlobalNamespace::UGCPermissionManager_IUGCPermissions* GlobalNamespace::UGCPermissionManager_KIDPermissions::i___GlobalNamespace__UGCPermissionManager_IUGCPermissions() noexcept {
return static_cast<::GlobalNamespace::UGCPermissionManager_IUGCPermissions*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UGCPermissionManager_KIDPermissions::UGCPermissionManager_KIDPermissions()   {
}
//  Writing Method size for method: ::GlobalNamespace::UGCPermissionManager_PlayFabPermissions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UGCPermissionManager_PlayFabPermissions::*)(::System::Action_1<::GlobalNamespace::UGCAccessLevel>*)>(&::GlobalNamespace::UGCPermissionManager_PlayFabPermissions::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5a43690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager_PlayFabPermissions*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::UGCAccessLevel>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UGCPermissionManager_PlayFabPermissions.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UGCPermissionManager_PlayFabPermissions::*)()>(&::GlobalNamespace::UGCPermissionManager_PlayFabPermissions::Initialize)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5a44020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager_PlayFabPermissions*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UGCPermissionManager_PlayFabPermissions.CheckPermissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UGCPermissionManager_PlayFabPermissions::*)()>(&::GlobalNamespace::UGCPermissionManager_PlayFabPermissions::CheckPermissions)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a440a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager_PlayFabPermissions*>(),
                        {"CheckPermissions", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::GlobalNamespace::UGCAccessLevel>*& GlobalNamespace::UGCPermissionManager_PlayFabPermissions::__cordl_internal_get_setAccessLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setAccessLevel;
}
constexpr ::System::Action_1<::GlobalNamespace::UGCAccessLevel>* const& GlobalNamespace::UGCPermissionManager_PlayFabPermissions::__cordl_internal_get_setAccessLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setAccessLevel;
}
constexpr void GlobalNamespace::UGCPermissionManager_PlayFabPermissions::__cordl_internal_set_setAccessLevel(::System::Action_1<::GlobalNamespace::UGCAccessLevel>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___setAccessLevel = value;
}
inline void GlobalNamespace::UGCPermissionManager_PlayFabPermissions::_ctor(::System::Action_1<::GlobalNamespace::UGCAccessLevel>*  setAccessLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager_PlayFabPermissions*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::UGCAccessLevel>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, setAccessLevel);
}
inline void GlobalNamespace::UGCPermissionManager_PlayFabPermissions::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager_PlayFabPermissions*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UGCPermissionManager_PlayFabPermissions::CheckPermissions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UGCPermissionManager_PlayFabPermissions*>(),
                        {"CheckPermissions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UGCPermissionManager_PlayFabPermissions* GlobalNamespace::UGCPermissionManager_PlayFabPermissions::New_ctor(::System::Action_1<::GlobalNamespace::UGCAccessLevel>*  setAccessLevel)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UGCPermissionManager_PlayFabPermissions*>(setAccessLevel));
}
/// @brief Convert operator to "::GlobalNamespace::UGCPermissionManager_IUGCPermissions"
constexpr  GlobalNamespace::UGCPermissionManager_PlayFabPermissions::operator ::GlobalNamespace::UGCPermissionManager_IUGCPermissions*() noexcept {
return static_cast<::GlobalNamespace::UGCPermissionManager_IUGCPermissions*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::UGCPermissionManager_IUGCPermissions"
constexpr ::GlobalNamespace::UGCPermissionManager_IUGCPermissions* GlobalNamespace::UGCPermissionManager_PlayFabPermissions::i___GlobalNamespace__UGCPermissionManager_IUGCPermissions() noexcept {
return static_cast<::GlobalNamespace::UGCPermissionManager_IUGCPermissions*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UGCPermissionManager_PlayFabPermissions::UGCPermissionManager_PlayFabPermissions()   {
}
//  Writing Method size for method: ::GlobalNamespace::UGCPermissionManager_IUGCPermissions.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UGCPermissionManager_IUGCPermissions::*)()>(&::GlobalNamespace::UGCPermissionManager_IUGCPermissions::Initialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UGCPermissionManager_IUGCPermissions*>(),
                    {::i2c::class_of<::GlobalNamespace::UGCPermissionManager_IUGCPermissions*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UGCPermissionManager_IUGCPermissions.CheckPermissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UGCPermissionManager_IUGCPermissions::*)()>(&::GlobalNamespace::UGCPermissionManager_IUGCPermissions::CheckPermissions)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::UGCPermissionManager_IUGCPermissions*>(),
                    {::i2c::class_of<::GlobalNamespace::UGCPermissionManager_IUGCPermissions*>(), 1}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UGCPermissionManager_IUGCPermissions::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UGCPermissionManager_IUGCPermissions*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UGCPermissionManager_IUGCPermissions::CheckPermissions()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::UGCPermissionManager_IUGCPermissions*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
