#pragma once
// IWYU pragma private; include "System/ComponentModel/LicenseManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__LicenseManager_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/ComponentModel/zzzz__LicenseContext_def.hpp"
#include "System/ComponentModel/zzzz__LicenseProvider_def.hpp"
#include "System/ComponentModel/zzzz__LicenseUsageMode_def.hpp"
#include "System/ComponentModel/zzzz__License_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::LicenseManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::LicenseManager::*)()>(&::System::ComponentModel::LicenseManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad59464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LicenseManager.get_CurrentContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::LicenseContext* (*)()>(&::System::ComponentModel::LicenseManager::get_CurrentContext)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xad5946c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {"get_CurrentContext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LicenseManager.set_CurrentContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ComponentModel::LicenseContext*)>(&::System::ComponentModel::LicenseManager::set_CurrentContext)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xad59628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {"set_CurrentContext", {}, {::i2c::type_of<::System::ComponentModel::LicenseContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LicenseManager.get_UsageMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::LicenseUsageMode (*)()>(&::System::ComponentModel::LicenseManager::get_UsageMode)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xad597b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {"get_UsageMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LicenseManager.CacheProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::System::ComponentModel::LicenseProvider*)>(&::System::ComponentModel::LicenseManager::CacheProvider)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xad5985c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {"CacheProvider", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::ComponentModel::LicenseProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LicenseManager.CreateWithContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*, ::System::ComponentModel::LicenseContext*)>(&::System::ComponentModel::LicenseManager::CreateWithContext)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xad59a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {"CreateWithContext", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::ComponentModel::LicenseContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LicenseManager.CreateWithContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*, ::System::ComponentModel::LicenseContext*, ::ArrayW<::System::Object*>)>(&::System::ComponentModel::LicenseManager::CreateWithContext)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0xad59afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {"CreateWithContext", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::ComponentModel::LicenseContext*>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LicenseManager.GetCachedNoLicenseProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::System::ComponentModel::LicenseManager::GetCachedNoLicenseProvider)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xad59f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {"GetCachedNoLicenseProvider", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LicenseManager.GetCachedProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::LicenseProvider* (*)(::System::Type*)>(&::System::ComponentModel::LicenseManager::GetCachedProvider)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xad59ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {"GetCachedProvider", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LicenseManager.GetCachedProviderInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::LicenseProvider* (*)(::System::Type*)>(&::System::ComponentModel::LicenseManager::GetCachedProviderInstance)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xad5a0bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {"GetCachedProviderInstance", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LicenseManager.IsLicensed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::System::ComponentModel::LicenseManager::IsLicensed)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xad5a184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {"IsLicensed", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LicenseManager.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::System::ComponentModel::LicenseManager::IsValid)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xad5a2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {"IsValid", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LicenseManager.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Object*, ::by_ref<::System::ComponentModel::License*>)>(&::System::ComponentModel::LicenseManager::IsValid)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xad5a33c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {"IsValid", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::System::ComponentModel::License*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LicenseManager.LockContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::ComponentModel::LicenseManager::LockContext)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xad59dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {"LockContext", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LicenseManager.UnlockContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::ComponentModel::LicenseManager::UnlockContext)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xad5a3ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {"UnlockContext", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LicenseManager.ValidateInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Object*, bool, ::by_ref<::System::ComponentModel::License*>)>(&::System::ComponentModel::LicenseManager::ValidateInternal)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xad5a218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {"ValidateInternal", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::ComponentModel::License*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LicenseManager.ValidateInternalRecursive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ComponentModel::LicenseContext*, ::System::Type*, ::System::Object*, bool, ::by_ref<::System::ComponentModel::License*>, ::by_ref<::StringW>)>(&::System::ComponentModel::LicenseManager::ValidateInternalRecursive)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0xad5a538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {"ValidateInternalRecursive", {}, {::i2c::type_of<::System::ComponentModel::LicenseContext*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::ComponentModel::License*>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LicenseManager.Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*)>(&::System::ComponentModel::LicenseManager::Validate)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xad5a974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {"Validate", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LicenseManager.Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::License* (*)(::System::Type*, ::System::Object*)>(&::System::ComponentModel::LicenseManager::Validate)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xad5aa38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {"Validate", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::ComponentModel::LicenseManager::setStaticF_s_selfLock(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "s_selfLock", ::System::ComponentModel::LicenseManager*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::ComponentModel::LicenseManager::getStaticF_s_selfLock()  {
return ::cordl_internals::getStaticField<::System::Object*, "s_selfLock", ::System::ComponentModel::LicenseManager*>();
}
inline void System::ComponentModel::LicenseManager::setStaticF_s_context(::System::ComponentModel::LicenseContext*  value)  {
::cordl_internals::setStaticField<::System::ComponentModel::LicenseContext*, "s_context", ::System::ComponentModel::LicenseManager*>(std::forward<::System::ComponentModel::LicenseContext*>(value));
}
inline ::System::ComponentModel::LicenseContext* System::ComponentModel::LicenseManager::getStaticF_s_context()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::LicenseContext*, "s_context", ::System::ComponentModel::LicenseManager*>();
}
inline void System::ComponentModel::LicenseManager::setStaticF_s_contextLockHolder(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "s_contextLockHolder", ::System::ComponentModel::LicenseManager*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::ComponentModel::LicenseManager::getStaticF_s_contextLockHolder()  {
return ::cordl_internals::getStaticField<::System::Object*, "s_contextLockHolder", ::System::ComponentModel::LicenseManager*>();
}
inline void System::ComponentModel::LicenseManager::setStaticF_s_providers(::System::Collections::Hashtable*  value)  {
::cordl_internals::setStaticField<::System::Collections::Hashtable*, "s_providers", ::System::ComponentModel::LicenseManager*>(std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::ComponentModel::LicenseManager::getStaticF_s_providers()  {
return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "s_providers", ::System::ComponentModel::LicenseManager*>();
}
inline void System::ComponentModel::LicenseManager::setStaticF_s_providerInstances(::System::Collections::Hashtable*  value)  {
::cordl_internals::setStaticField<::System::Collections::Hashtable*, "s_providerInstances", ::System::ComponentModel::LicenseManager*>(std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::ComponentModel::LicenseManager::getStaticF_s_providerInstances()  {
return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "s_providerInstances", ::System::ComponentModel::LicenseManager*>();
}
inline void System::ComponentModel::LicenseManager::setStaticF_s_internalSyncObject(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "s_internalSyncObject", ::System::ComponentModel::LicenseManager*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::ComponentModel::LicenseManager::getStaticF_s_internalSyncObject()  {
return ::cordl_internals::getStaticField<::System::Object*, "s_internalSyncObject", ::System::ComponentModel::LicenseManager*>();
}
inline void System::ComponentModel::LicenseManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::LicenseContext* System::ComponentModel::LicenseManager::get_CurrentContext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {"get_CurrentContext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::LicenseContext*>(nullptr, ___internal_method);
}
inline void System::ComponentModel::LicenseManager::set_CurrentContext(::System::ComponentModel::LicenseContext*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {"set_CurrentContext", {}, {::i2c::type_of<::System::ComponentModel::LicenseContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::ComponentModel::LicenseUsageMode System::ComponentModel::LicenseManager::get_UsageMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {"get_UsageMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::LicenseUsageMode>(nullptr, ___internal_method);
}
inline void System::ComponentModel::LicenseManager::CacheProvider(::System::Type*  type, ::System::ComponentModel::LicenseProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {"CacheProvider", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::ComponentModel::LicenseProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, provider);
}
inline ::System::Object* System::ComponentModel::LicenseManager::CreateWithContext(::System::Type*  type, ::System::ComponentModel::LicenseContext*  creationContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {"CreateWithContext", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::ComponentModel::LicenseContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, type, creationContext);
}
inline ::System::Object* System::ComponentModel::LicenseManager::CreateWithContext(::System::Type*  type, ::System::ComponentModel::LicenseContext*  creationContext, ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {"CreateWithContext", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::ComponentModel::LicenseContext*>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, type, creationContext, args);
}
inline bool System::ComponentModel::LicenseManager::GetCachedNoLicenseProvider(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {"GetCachedNoLicenseProvider", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline ::System::ComponentModel::LicenseProvider* System::ComponentModel::LicenseManager::GetCachedProvider(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {"GetCachedProvider", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::LicenseProvider*>(nullptr, ___internal_method, type);
}
inline ::System::ComponentModel::LicenseProvider* System::ComponentModel::LicenseManager::GetCachedProviderInstance(::System::Type*  providerType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {"GetCachedProviderInstance", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::LicenseProvider*>(nullptr, ___internal_method, providerType);
}
inline bool System::ComponentModel::LicenseManager::IsLicensed(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {"IsLicensed", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool System::ComponentModel::LicenseManager::IsValid(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {"IsValid", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool System::ComponentModel::LicenseManager::IsValid(::System::Type*  type, ::System::Object*  instance, ::by_ref<::System::ComponentModel::License*>  license)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {"IsValid", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::System::ComponentModel::License*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type, instance, license);
}
inline void System::ComponentModel::LicenseManager::LockContext(::System::Object*  contextUser)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {"LockContext", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, contextUser);
}
inline void System::ComponentModel::LicenseManager::UnlockContext(::System::Object*  contextUser)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {"UnlockContext", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, contextUser);
}
inline bool System::ComponentModel::LicenseManager::ValidateInternal(::System::Type*  type, ::System::Object*  instance, bool  allowExceptions, ::by_ref<::System::ComponentModel::License*>  license)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {"ValidateInternal", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::ComponentModel::License*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type, instance, allowExceptions, license);
}
inline bool System::ComponentModel::LicenseManager::ValidateInternalRecursive(::System::ComponentModel::LicenseContext*  context, ::System::Type*  type, ::System::Object*  instance, bool  allowExceptions, ::by_ref<::System::ComponentModel::License*>  license, ::by_ref<::StringW>  licenseKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {"ValidateInternalRecursive", {}, {::i2c::type_of<::System::ComponentModel::LicenseContext*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::ComponentModel::License*>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, context, type, instance, allowExceptions, license, licenseKey);
}
inline void System::ComponentModel::LicenseManager::Validate(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {"Validate", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type);
}
inline ::System::ComponentModel::License* System::ComponentModel::LicenseManager::Validate(::System::Type*  type, ::System::Object*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseManager*>(),
                        {"Validate", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::License*>(nullptr, ___internal_method, type, instance);
}
inline ::System::ComponentModel::LicenseManager* System::ComponentModel::LicenseManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::LicenseManager*>());
}
// Ctor Parameters []
constexpr ::System::ComponentModel::LicenseManager::LicenseManager()   {
}
