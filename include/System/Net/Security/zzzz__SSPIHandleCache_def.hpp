#pragma once
// IWYU pragma private; include "System/Net/Security/SSPIHandleCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Security/zzzz__SafeCredentialReference_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SSPIHandleCache)
namespace System::Net::Security {
class SafeFreeCredentials;
}
// Forward declare root types
namespace System::Net::Security {
class SSPIHandleCache;
}
// Write type traits
MARK_REF_T(::System::Net::Security::SSPIHandleCache*);
DEFINE_IL2CPP_CLASS(::System::Net::Security::SSPIHandleCache*, "System.Net.Security", "SSPIHandleCache");
// Dependencies System.Net.Security.SafeCredentialReference, System.Object
namespace System::Net::Security {
// Is value type: false
// CS Name: System.Net.Security.SSPIHandleCache
class CORDL_TYPE SSPIHandleCache : public ::System::Object {
public:
// Declarations
/// @brief Field s_cacheSlots, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_cacheSlots, put=setStaticF_s_cacheSlots)) ::ArrayW<::System::Net::Security::SafeCredentialReference*>  s_cacheSlots;

/// @brief Field s_current, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_current, put=setStaticF_s_current)) int32_t  s_current;

/// @brief Method CacheCredential, addr 0xacf4390, size 0x19c, virtual false, abstract: false, final false
static inline void CacheCredential(::System::Net::Security::SafeFreeCredentials*  newHandle) ;

static inline ::ArrayW<::System::Net::Security::SafeCredentialReference*> getStaticF_s_cacheSlots() ;

static inline int32_t getStaticF_s_current() ;

static inline void setStaticF_s_cacheSlots(::ArrayW<::System::Net::Security::SafeCredentialReference*>  value) ;

static inline void setStaticF_s_current(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SSPIHandleCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SSPIHandleCache", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SSPIHandleCache(SSPIHandleCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SSPIHandleCache", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SSPIHandleCache(SSPIHandleCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10926};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Security::SSPIHandleCache) == 0x10, "Size mismatch!");

} // namespace end def System::Net::Security
