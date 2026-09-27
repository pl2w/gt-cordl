#pragma once
// IWYU pragma private; include "System/Net/CredentialCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CredentialCache)
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Net {
class CredentialCache_CredentialEnumerator;
}
namespace System::Net {
class ICredentialsByHost;
}
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class NetworkCredential;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class CredentialCache;
}
namespace System::Net {
class CredentialCache_CredentialEnumerator;
}
// Write type traits
MARK_REF_T(::System::Net::CredentialCache*);
MARK_REF_T(::System::Net::CredentialCache_CredentialEnumerator*);
DEFINE_IL2CPP_CLASS(::System::Net::CredentialCache*, "System.Net", "CredentialCache");
DEFINE_IL2CPP_CLASS(::System::Net::CredentialCache_CredentialEnumerator*, "System.Net", "CredentialCache/CredentialEnumerator");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.CredentialCache
class CORDL_TYPE CredentialCache : public ::System::Object {
public:
// Declarations
using CredentialEnumerator = ::System::Net::CredentialCache_CredentialEnumerator;

 __declspec(property(get=get_IsDefaultInCache)) bool  IsDefaultInCache;

/// @brief Field cache, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_cache, put=__cordl_internal_set_cache)) ::System::Collections::Hashtable*  cache;

/// @brief Field cacheForHosts, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_cacheForHosts, put=__cordl_internal_set_cacheForHosts)) ::System::Collections::Hashtable*  cacheForHosts;

/// @brief Field m_NumbDefaultCredInCache, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_NumbDefaultCredInCache, put=__cordl_internal_set_m_NumbDefaultCredInCache)) int32_t  m_NumbDefaultCredInCache;

/// @brief Field m_version, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_version, put=__cordl_internal_set_m_version)) int32_t  m_version;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Net::ICredentials"
constexpr operator  ::System::Net::ICredentials*() noexcept;

/// @brief Convert operator to "::System::Net::ICredentialsByHost"
constexpr operator  ::System::Net::ICredentialsByHost*() noexcept;

/// @brief Method Add, addr 0xac552fc, size 0x30c, virtual false, abstract: false, final false
inline void Add(::StringW  host, int32_t  port, ::StringW  authenticationType, ::System::Net::NetworkCredential*  credential) ;

/// @brief Method Add, addr 0xac55018, size 0x268, virtual false, abstract: false, final false
inline void Add(::System::Uri*  uriPrefix, ::StringW  authType, ::System::Net::NetworkCredential*  cred) ;

/// @brief Method GetCredential, addr 0xac55c94, size 0x3b0, virtual true, abstract: false, final true
inline ::System::Net::NetworkCredential* GetCredential(::StringW  host, int32_t  port, ::StringW  authenticationType) ;

/// @brief Method GetCredential, addr 0xac558c4, size 0x324, virtual true, abstract: false, final true
inline ::System::Net::NetworkCredential* GetCredential(::System::Uri*  uriPrefix, ::StringW  authType) ;

/// @brief Method GetEnumerator, addr 0xac560b4, size 0x74, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* GetEnumerator() ;

static inline ::System::Net::CredentialCache* New_ctor() ;

/// @brief Method Remove, addr 0xac557a4, size 0x120, virtual false, abstract: false, final false
inline void Remove(::StringW  host, int32_t  port, ::StringW  authenticationType) ;

/// @brief Method Remove, addr 0xac5565c, size 0x148, virtual false, abstract: false, final false
inline void Remove(::System::Uri*  uriPrefix, ::StringW  authType) ;

constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_cache() const;

constexpr ::System::Collections::Hashtable*& __cordl_internal_get_cache() ;

constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_cacheForHosts() const;

constexpr ::System::Collections::Hashtable*& __cordl_internal_get_cacheForHosts() ;

constexpr int32_t const& __cordl_internal_get_m_NumbDefaultCredInCache() const;

constexpr int32_t& __cordl_internal_get_m_NumbDefaultCredInCache() ;

constexpr int32_t const& __cordl_internal_get_m_version() const;

constexpr int32_t& __cordl_internal_get_m_version() ;

constexpr void __cordl_internal_set_cache(::System::Collections::Hashtable*  value) ;

constexpr void __cordl_internal_set_cacheForHosts(::System::Collections::Hashtable*  value) ;

constexpr void __cordl_internal_set_m_NumbDefaultCredInCache(int32_t  value) ;

constexpr void __cordl_internal_set_m_version(int32_t  value) ;

/// @brief Method .ctor, addr 0xac54f88, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DefaultCredentials, addr 0xac56340, size 0x58, virtual false, abstract: false, final false
static inline ::System::Net::ICredentials* get_DefaultCredentials() ;

/// @brief Method get_DefaultNetworkCredentials, addr 0xac56398, size 0x58, virtual false, abstract: false, final false
static inline ::System::Net::NetworkCredential* get_DefaultNetworkCredentials() ;

/// @brief Method get_IsDefaultInCache, addr 0xac54f78, size 0x10, virtual false, abstract: false, final false
inline bool get_IsDefaultInCache() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Net::ICredentials"
constexpr ::System::Net::ICredentials* i___System__Net__ICredentials() noexcept;

/// @brief Convert to "::System::Net::ICredentialsByHost"
constexpr ::System::Net::ICredentialsByHost* i___System__Net__ICredentialsByHost() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CredentialCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CredentialCache", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CredentialCache(CredentialCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CredentialCache", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CredentialCache(CredentialCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10487};

/// @brief Field cache, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Hashtable*  ___cache;

/// @brief Field cacheForHosts, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Hashtable*  ___cacheForHosts;

/// @brief Field m_version, offset: 0x20, size: 0x4, def value: None
 int32_t  ___m_version;

/// @brief Field m_NumbDefaultCredInCache, offset: 0x24, size: 0x4, def value: None
 int32_t  ___m_NumbDefaultCredInCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::CredentialCache, ___cache) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::CredentialCache, ___cacheForHosts) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::CredentialCache, ___m_version) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::CredentialCache, ___m_NumbDefaultCredInCache) == 0x24, "Offset mismatch!");

static_assert(sizeof(::System::Net::CredentialCache) == 0x28, "Size mismatch!");

} // namespace end def System::Net
// Dependencies System.Net.ICredentials, System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.CredentialCache/CredentialEnumerator
class CORDL_TYPE CredentialCache_CredentialEnumerator : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field m_array, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_array, put=__cordl_internal_set_m_array)) ::ArrayW<::System::Net::ICredentials*>  m_array;

/// @brief Field m_cache, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_cache, put=__cordl_internal_set_m_cache)) ::System::Net::CredentialCache*  m_cache;

/// @brief Field m_index, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_index, put=__cordl_internal_set_m_index)) int32_t  m_index;

/// @brief Field m_version, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_version, put=__cordl_internal_set_m_version)) int32_t  m_version;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

static inline ::System::Net::CredentialCache_CredentialEnumerator* New_ctor(::System::Net::CredentialCache*  cache, ::System::Collections::Hashtable*  table, ::System::Collections::Hashtable*  hostTable, int32_t  version) ;

/// @brief Method System.Collections.IEnumerator.MoveNext, addr 0xac564a0, size 0xac, virtual true, abstract: false, final true
inline bool System_Collections_IEnumerator_MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0xac5654c, size 0xc, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xac563f0, size 0xb0, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

constexpr ::ArrayW<::System::Net::ICredentials*> const& __cordl_internal_get_m_array() const;

constexpr ::ArrayW<::System::Net::ICredentials*>& __cordl_internal_get_m_array() ;

constexpr ::System::Net::CredentialCache* const& __cordl_internal_get_m_cache() const;

constexpr ::System::Net::CredentialCache*& __cordl_internal_get_m_cache() ;

constexpr int32_t const& __cordl_internal_get_m_index() const;

constexpr int32_t& __cordl_internal_get_m_index() ;

constexpr int32_t const& __cordl_internal_get_m_version() const;

constexpr int32_t& __cordl_internal_get_m_version() ;

constexpr void __cordl_internal_set_m_array(::ArrayW<::System::Net::ICredentials*>  value) ;

constexpr void __cordl_internal_set_m_cache(::System::Net::CredentialCache*  value) ;

constexpr void __cordl_internal_set_m_index(int32_t  value) ;

constexpr void __cordl_internal_set_m_version(int32_t  value) ;

/// @brief Method .ctor, addr 0xac56128, size 0x218, virtual false, abstract: false, final false
inline void _ctor(::System::Net::CredentialCache*  cache, ::System::Collections::Hashtable*  table, ::System::Collections::Hashtable*  hostTable, int32_t  version) ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CredentialCache_CredentialEnumerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CredentialCache_CredentialEnumerator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CredentialCache_CredentialEnumerator(CredentialCache_CredentialEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CredentialCache_CredentialEnumerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CredentialCache_CredentialEnumerator(CredentialCache_CredentialEnumerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10486};

/// @brief Field m_cache, offset: 0x10, size: 0x8, def value: None
 ::System::Net::CredentialCache*  ___m_cache;

/// @brief Field m_array, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::System::Net::ICredentials*>  ___m_array;

/// @brief Field m_index, offset: 0x20, size: 0x4, def value: None
 int32_t  ___m_index;

/// @brief Field m_version, offset: 0x24, size: 0x4, def value: None
 int32_t  ___m_version;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::CredentialCache_CredentialEnumerator, ___m_cache) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::CredentialCache_CredentialEnumerator, ___m_array) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::CredentialCache_CredentialEnumerator, ___m_index) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::CredentialCache_CredentialEnumerator, ___m_version) == 0x24, "Offset mismatch!");

static_assert(sizeof(::System::Net::CredentialCache_CredentialEnumerator) == 0x28, "Size mismatch!");

} // namespace end def System::Net
