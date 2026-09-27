#pragma once
// IWYU pragma private; include "System/Net/NclUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NclUtilities)
namespace System::Net {
class IPAddress;
}
namespace System::Net {
class IPHostEntry;
}
namespace System::Net {
struct SecurityStatus;
}
namespace System::Threading {
class ContextCallback;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class NclUtilities;
}
// Write type traits
MARK_REF_T(::System::Net::NclUtilities*);
DEFINE_IL2CPP_CLASS(::System::Net::NclUtilities*, "System.Net", "NclUtilities");
// Dependencies System.Net.IPAddress, System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.NclUtilities
class CORDL_TYPE NclUtilities : public ::System::Object {
public:
// Declarations
/// @brief Field _LocalAddresses, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__LocalAddresses, put=setStaticF__LocalAddresses)) ::ArrayW<::System::Net::IPAddress*>  _LocalAddresses;

/// @brief Field _LocalAddressesLock, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__LocalAddressesLock, put=setStaticF__LocalAddressesLock)) ::System::Object*  _LocalAddressesLock;

/// @brief Field _LocalDomainName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__LocalDomainName, put=setStaticF__LocalDomainName)) ::StringW  _LocalDomainName;

/// @brief Field s_ContextRelativeDemandCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ContextRelativeDemandCallback, put=setStaticF_s_ContextRelativeDemandCallback)) ::System::Threading::ContextCallback*  s_ContextRelativeDemandCallback;

/// @brief Method DemandCallback, addr 0xac598fc, size 0x4, virtual false, abstract: false, final false
static inline void DemandCallback(::System::Object*  state) ;

/// @brief Method GetLocalHost, addr 0xac59fd0, size 0x58, virtual false, abstract: false, final false
static inline ::System::Net::IPHostEntry* GetLocalHost() ;

/// @brief Method GuessWhetherHostIsLoopback, addr 0xac59900, size 0x98, virtual false, abstract: false, final false
static inline bool GuessWhetherHostIsLoopback(::StringW  host) ;

/// @brief Method IsAddressLocal, addr 0xac59a68, size 0x90, virtual false, abstract: false, final false
static inline bool IsAddressLocal(::System::Net::IPAddress*  ipAddress) ;

/// @brief Method IsClientFault, addr 0xac59804, size 0x30, virtual false, abstract: false, final false
static inline bool IsClientFault(::System::Net::SecurityStatus  error) ;

/// @brief Method IsCredentialFailure, addr 0xac597d8, size 0x2c, virtual false, abstract: false, final false
static inline bool IsCredentialFailure(::System::Net::SecurityStatus  error) ;

/// @brief Method IsFatal, addr 0xac59998, size 0xd0, virtual false, abstract: false, final false
static inline bool IsFatal(::System::Exception*  exception) ;

/// @brief Method IsThreadPoolLow, addr 0xac59778, size 0x28, virtual false, abstract: false, final false
static inline bool IsThreadPoolLow() ;

static inline ::ArrayW<::System::Net::IPAddress*> getStaticF__LocalAddresses() ;

static inline ::System::Object* getStaticF__LocalAddressesLock() ;

static inline ::StringW getStaticF__LocalDomainName() ;

static inline ::System::Threading::ContextCallback* getStaticF_s_ContextRelativeDemandCallback() ;

/// @brief Method get_ContextRelativeDemandCallback, addr 0xac59834, size 0xc8, virtual false, abstract: false, final false
static inline ::System::Threading::ContextCallback* get_ContextRelativeDemandCallback() ;

/// @brief Method get_HasShutdownStarted, addr 0xac597a0, size 0x38, virtual false, abstract: false, final false
static inline bool get_HasShutdownStarted() ;

/// @brief Method get_LocalAddresses, addr 0xac59af8, size 0x4d8, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Net::IPAddress*> get_LocalAddresses() ;

/// @brief Method get_LocalAddressesLock, addr 0xac5a028, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Object* get_LocalAddressesLock() ;

static inline void setStaticF__LocalAddresses(::ArrayW<::System::Net::IPAddress*>  value) ;

static inline void setStaticF__LocalAddressesLock(::System::Object*  value) ;

static inline void setStaticF__LocalDomainName(::StringW  value) ;

static inline void setStaticF_s_ContextRelativeDemandCallback(::System::Threading::ContextCallback*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NclUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NclUtilities", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NclUtilities(NclUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NclUtilities", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NclUtilities(NclUtilities const& ) = delete;

/// @brief Field HostNameBufferLength offset 0xffffffff size 0x4
static constexpr int32_t  HostNameBufferLength{static_cast<int32_t>(0x100)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10510};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::NclUtilities) == 0x10, "Size mismatch!");

} // namespace end def System::Net
