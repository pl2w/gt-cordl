#pragma once
// IWYU pragma private; include "System/Net/CredentialCache.hpp"
#include "System/Net/zzzz__ICredentials_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__CredentialCache_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Net/zzzz__CredentialCache_def.hpp"
#include "System/Net/zzzz__ICredentialsByHost_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__NetworkCredential_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::CredentialCache.get_IsDefaultInCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::CredentialCache::*)()>(&::System::Net::CredentialCache::get_IsDefaultInCache)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xac54f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialCache*>(),
                        {"get_IsDefaultInCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CredentialCache._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CredentialCache::*)()>(&::System::Net::CredentialCache::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xac54f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialCache*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CredentialCache.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CredentialCache::*)(::System::Uri*, ::StringW, ::System::Net::NetworkCredential*)>(&::System::Net::CredentialCache::Add)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0xac55018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialCache*>(),
                        {"Add", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::NetworkCredential*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CredentialCache.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CredentialCache::*)(::StringW, int32_t, ::StringW, ::System::Net::NetworkCredential*)>(&::System::Net::CredentialCache::Add)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0xac552fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialCache*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::NetworkCredential*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CredentialCache.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CredentialCache::*)(::System::Uri*, ::StringW)>(&::System::Net::CredentialCache::Remove)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xac5565c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialCache*>(),
                        {"Remove", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CredentialCache.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CredentialCache::*)(::StringW, int32_t, ::StringW)>(&::System::Net::CredentialCache::Remove)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xac557a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialCache*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CredentialCache.GetCredential
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::NetworkCredential* (::System::Net::CredentialCache::*)(::System::Uri*, ::StringW)>(&::System::Net::CredentialCache::GetCredential)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0xac558c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialCache*>(),
                        {"GetCredential", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CredentialCache.GetCredential
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::NetworkCredential* (::System::Net::CredentialCache::*)(::StringW, int32_t, ::StringW)>(&::System::Net::CredentialCache::GetCredential)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0xac55c94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialCache*>(),
                        {"GetCredential", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CredentialCache.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Net::CredentialCache::*)()>(&::System::Net::CredentialCache::GetEnumerator)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xac560b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialCache*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CredentialCache.get_DefaultCredentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ICredentials* (*)()>(&::System::Net::CredentialCache::get_DefaultCredentials)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xac56340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialCache*>(),
                        {"get_DefaultCredentials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CredentialCache.get_DefaultNetworkCredentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::NetworkCredential* (*)()>(&::System::Net::CredentialCache::get_DefaultNetworkCredentials)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xac56398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialCache*>(),
                        {"get_DefaultNetworkCredentials", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Hashtable*& System::Net::CredentialCache::__cordl_internal_get_cache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cache;
}
constexpr ::System::Collections::Hashtable* const& System::Net::CredentialCache::__cordl_internal_get_cache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cache;
}
constexpr void System::Net::CredentialCache::__cordl_internal_set_cache(::System::Collections::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cache = value;
}
constexpr ::System::Collections::Hashtable*& System::Net::CredentialCache::__cordl_internal_get_cacheForHosts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cacheForHosts;
}
constexpr ::System::Collections::Hashtable* const& System::Net::CredentialCache::__cordl_internal_get_cacheForHosts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cacheForHosts;
}
constexpr void System::Net::CredentialCache::__cordl_internal_set_cacheForHosts(::System::Collections::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cacheForHosts = value;
}
constexpr int32_t& System::Net::CredentialCache::__cordl_internal_get_m_version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_version;
}
constexpr int32_t const& System::Net::CredentialCache::__cordl_internal_get_m_version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_version;
}
constexpr void System::Net::CredentialCache::__cordl_internal_set_m_version(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_version = value;
}
constexpr int32_t& System::Net::CredentialCache::__cordl_internal_get_m_NumbDefaultCredInCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NumbDefaultCredInCache;
}
constexpr int32_t const& System::Net::CredentialCache::__cordl_internal_get_m_NumbDefaultCredInCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NumbDefaultCredInCache;
}
constexpr void System::Net::CredentialCache::__cordl_internal_set_m_NumbDefaultCredInCache(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NumbDefaultCredInCache = value;
}
inline bool System::Net::CredentialCache::get_IsDefaultInCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialCache*>(),
                        {"get_IsDefaultInCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::CredentialCache::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialCache*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::CredentialCache::Add(::System::Uri*  uriPrefix, ::StringW  authType, ::System::Net::NetworkCredential*  cred)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialCache*>(),
                        {"Add", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::NetworkCredential*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uriPrefix, authType, cred);
}
inline void System::Net::CredentialCache::Add(::StringW  host, int32_t  port, ::StringW  authenticationType, ::System::Net::NetworkCredential*  credential)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialCache*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::NetworkCredential*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, host, port, authenticationType, credential);
}
inline void System::Net::CredentialCache::Remove(::System::Uri*  uriPrefix, ::StringW  authType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialCache*>(),
                        {"Remove", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uriPrefix, authType);
}
inline void System::Net::CredentialCache::Remove(::StringW  host, int32_t  port, ::StringW  authenticationType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialCache*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, host, port, authenticationType);
}
inline ::System::Net::NetworkCredential* System::Net::CredentialCache::GetCredential(::System::Uri*  uriPrefix, ::StringW  authType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialCache*>(),
                        {"GetCredential", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkCredential*>(this, ___internal_method, uriPrefix, authType);
}
inline ::System::Net::NetworkCredential* System::Net::CredentialCache::GetCredential(::StringW  host, int32_t  port, ::StringW  authenticationType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialCache*>(),
                        {"GetCredential", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkCredential*>(this, ___internal_method, host, port, authenticationType);
}
inline ::System::Collections::IEnumerator* System::Net::CredentialCache::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialCache*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Net::ICredentials* System::Net::CredentialCache::get_DefaultCredentials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialCache*>(),
                        {"get_DefaultCredentials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ICredentials*>(nullptr, ___internal_method);
}
inline ::System::Net::NetworkCredential* System::Net::CredentialCache::get_DefaultNetworkCredentials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialCache*>(),
                        {"get_DefaultNetworkCredentials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkCredential*>(nullptr, ___internal_method);
}
inline ::System::Net::CredentialCache* System::Net::CredentialCache::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::CredentialCache*>());
}
/// @brief Convert operator to "::System::Net::ICredentials"
constexpr  System::Net::CredentialCache::operator ::System::Net::ICredentials*() noexcept {
return static_cast<::System::Net::ICredentials*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Net::ICredentials"
constexpr ::System::Net::ICredentials* System::Net::CredentialCache::i___System__Net__ICredentials() noexcept {
return static_cast<::System::Net::ICredentials*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Net::ICredentialsByHost"
constexpr  System::Net::CredentialCache::operator ::System::Net::ICredentialsByHost*() noexcept {
return static_cast<::System::Net::ICredentialsByHost*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Net::ICredentialsByHost"
constexpr ::System::Net::ICredentialsByHost* System::Net::CredentialCache::i___System__Net__ICredentialsByHost() noexcept {
return static_cast<::System::Net::ICredentialsByHost*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  System::Net::CredentialCache::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* System::Net::CredentialCache::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::CredentialCache::CredentialCache()   {
}
//  Writing Method size for method: ::System::Net::CredentialCache_CredentialEnumerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CredentialCache_CredentialEnumerator::*)(::System::Net::CredentialCache*, ::System::Collections::Hashtable*, ::System::Collections::Hashtable*, int32_t)>(&::System::Net::CredentialCache_CredentialEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0xac56128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialCache_CredentialEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::CredentialCache*>(), ::i2c::type_of<::System::Collections::Hashtable*>(), ::i2c::type_of<::System::Collections::Hashtable*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CredentialCache_CredentialEnumerator.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Net::CredentialCache_CredentialEnumerator::*)()>(&::System::Net::CredentialCache_CredentialEnumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xac563f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialCache_CredentialEnumerator*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CredentialCache_CredentialEnumerator.System_Collections_IEnumerator_MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::CredentialCache_CredentialEnumerator::*)()>(&::System::Net::CredentialCache_CredentialEnumerator::System_Collections_IEnumerator_MoveNext)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xac564a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialCache_CredentialEnumerator*>(),
                        {"System.Collections.IEnumerator.MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CredentialCache_CredentialEnumerator.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CredentialCache_CredentialEnumerator::*)()>(&::System::Net::CredentialCache_CredentialEnumerator::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xac5654c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialCache_CredentialEnumerator*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::CredentialCache*& System::Net::CredentialCache_CredentialEnumerator::__cordl_internal_get_m_cache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cache;
}
constexpr ::System::Net::CredentialCache* const& System::Net::CredentialCache_CredentialEnumerator::__cordl_internal_get_m_cache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_cache;
}
constexpr void System::Net::CredentialCache_CredentialEnumerator::__cordl_internal_set_m_cache(::System::Net::CredentialCache*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_cache = value;
}
constexpr ::ArrayW<::System::Net::ICredentials*>& System::Net::CredentialCache_CredentialEnumerator::__cordl_internal_get_m_array()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_array;
}
constexpr ::ArrayW<::System::Net::ICredentials*> const& System::Net::CredentialCache_CredentialEnumerator::__cordl_internal_get_m_array() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_array;
}
constexpr void System::Net::CredentialCache_CredentialEnumerator::__cordl_internal_set_m_array(::ArrayW<::System::Net::ICredentials*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_array = value;
}
constexpr int32_t& System::Net::CredentialCache_CredentialEnumerator::__cordl_internal_get_m_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_index;
}
constexpr int32_t const& System::Net::CredentialCache_CredentialEnumerator::__cordl_internal_get_m_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_index;
}
constexpr void System::Net::CredentialCache_CredentialEnumerator::__cordl_internal_set_m_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_index = value;
}
constexpr int32_t& System::Net::CredentialCache_CredentialEnumerator::__cordl_internal_get_m_version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_version;
}
constexpr int32_t const& System::Net::CredentialCache_CredentialEnumerator::__cordl_internal_get_m_version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_version;
}
constexpr void System::Net::CredentialCache_CredentialEnumerator::__cordl_internal_set_m_version(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_version = value;
}
inline void System::Net::CredentialCache_CredentialEnumerator::_ctor(::System::Net::CredentialCache*  cache, ::System::Collections::Hashtable*  table, ::System::Collections::Hashtable*  hostTable, int32_t  version)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialCache_CredentialEnumerator*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::CredentialCache*>(), ::i2c::type_of<::System::Collections::Hashtable*>(), ::i2c::type_of<::System::Collections::Hashtable*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cache, table, hostTable, version);
}
inline ::System::Object* System::Net::CredentialCache_CredentialEnumerator::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialCache_CredentialEnumerator*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Net::CredentialCache_CredentialEnumerator::System_Collections_IEnumerator_MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialCache_CredentialEnumerator*>(),
                        {"System.Collections.IEnumerator.MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::CredentialCache_CredentialEnumerator::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CredentialCache_CredentialEnumerator*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::CredentialCache_CredentialEnumerator* System::Net::CredentialCache_CredentialEnumerator::New_ctor(::System::Net::CredentialCache*  cache, ::System::Collections::Hashtable*  table, ::System::Collections::Hashtable*  hostTable, int32_t  version)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::CredentialCache_CredentialEnumerator*>(cache, table, hostTable, version));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  System::Net::CredentialCache_CredentialEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* System::Net::CredentialCache_CredentialEnumerator::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::CredentialCache_CredentialEnumerator::CredentialCache_CredentialEnumerator()   {
}
