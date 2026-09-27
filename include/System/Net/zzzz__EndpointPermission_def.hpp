#pragma once
// IWYU pragma private; include "System/Net/EndpointPermission.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/zzzz__TransportType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EndpointPermission)
namespace System::Net {
struct TransportType;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class EndpointPermission;
}
// Write type traits
MARK_REF_T(::System::Net::EndpointPermission*);
DEFINE_IL2CPP_CLASS(::System::Net::EndpointPermission*, "System.Net", "EndpointPermission");
// Dependencies System.Net.IPAddress, System.Net.TransportType, System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.EndpointPermission
class CORDL_TYPE EndpointPermission : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Hostname)) ::StringW  Hostname;

 __declspec(property(get=get_Port)) int32_t  Port;

 __declspec(property(get=get_Transport)) ::System::Net::TransportType  Transport;

/// @brief Field addresses, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_addresses, put=__cordl_internal_set_addresses)) ::ArrayW<::System::Net::IPAddress*>  addresses;

/// @brief Field dot_char, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_dot_char, put=setStaticF_dot_char)) ::ArrayW<char16_t>  dot_char;

/// @brief Field hasWildcard, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasWildcard, put=__cordl_internal_set_hasWildcard)) bool  hasWildcard;

/// @brief Field hostname, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_hostname, put=__cordl_internal_set_hostname)) ::StringW  hostname;

/// @brief Field port, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_port, put=__cordl_internal_set_port)) int32_t  port;

/// @brief Field resolved, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_resolved, put=__cordl_internal_set_resolved)) bool  resolved;

/// @brief Field transport, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_transport, put=__cordl_internal_set_transport)) ::System::Net::TransportType  transport;

/// @brief Method Equals, addr 0xac94f20, size 0xb8, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode, addr 0xac94fd8, size 0x28, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Intersect, addr 0xac95a74, size 0x2c0, virtual false, abstract: false, final false
inline ::StringW Intersect(::StringW  addr1, ::StringW  addr2) ;

/// @brief Method Intersect, addr 0xac95794, size 0x11c, virtual false, abstract: false, final false
inline ::System::Net::EndpointPermission* Intersect(::System::Net::EndpointPermission*  perm) ;

/// @brief Method IntersectHostname, addr 0xac958b0, size 0x1c4, virtual false, abstract: false, final false
inline ::StringW IntersectHostname(::System::Net::EndpointPermission*  perm) ;

/// @brief Method IsSubsetOf, addr 0xac95540, size 0x130, virtual false, abstract: false, final false
inline bool IsSubsetOf(::StringW  addr1, ::StringW  addr2) ;

/// @brief Method IsSubsetOf, addr 0xac95140, size 0x174, virtual false, abstract: false, final false
inline bool IsSubsetOf(::System::Net::EndpointPermission*  perm) ;

static inline ::System::Net::EndpointPermission* New_ctor() ;

static inline ::System::Net::EndpointPermission* New_ctor(::StringW  hostname, int32_t  port, ::System::Net::TransportType  transport) ;

/// @brief Method Resolve, addr 0xac952b4, size 0x28c, virtual false, abstract: false, final false
inline void Resolve() ;

/// @brief Method ToNumber, addr 0xac95670, size 0x124, virtual false, abstract: false, final false
inline int32_t ToNumber(::StringW  value) ;

/// @brief Method ToString, addr 0xac95000, size 0x140, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method UndoResolve, addr 0xac95d34, size 0x8, virtual false, abstract: false, final false
inline void UndoResolve() ;

constexpr ::ArrayW<::System::Net::IPAddress*> const& __cordl_internal_get_addresses() const;

constexpr ::ArrayW<::System::Net::IPAddress*>& __cordl_internal_get_addresses() ;

constexpr bool const& __cordl_internal_get_hasWildcard() const;

constexpr bool& __cordl_internal_get_hasWildcard() ;

constexpr ::StringW const& __cordl_internal_get_hostname() const;

constexpr ::StringW& __cordl_internal_get_hostname() ;

constexpr int32_t const& __cordl_internal_get_port() const;

constexpr int32_t& __cordl_internal_get_port() ;

constexpr bool const& __cordl_internal_get_resolved() const;

constexpr bool& __cordl_internal_get_resolved() ;

constexpr ::System::Net::TransportType const& __cordl_internal_get_transport() const;

constexpr ::System::Net::TransportType& __cordl_internal_get_transport() ;

constexpr void __cordl_internal_set_addresses(::ArrayW<::System::Net::IPAddress*>  value) ;

constexpr void __cordl_internal_set_hasWildcard(bool  value) ;

constexpr void __cordl_internal_set_hostname(::StringW  value) ;

constexpr void __cordl_internal_set_port(int32_t  value) ;

constexpr void __cordl_internal_set_resolved(bool  value) ;

constexpr void __cordl_internal_set_transport(::System::Net::TransportType  value) ;

/// @brief Method .ctor, addr 0xac95dcc, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xac94e64, size 0xa4, virtual false, abstract: false, final false
inline void _ctor(::StringW  hostname, int32_t  port, ::System::Net::TransportType  transport) ;

static inline ::ArrayW<char16_t> getStaticF_dot_char() ;

/// @brief Method get_Hostname, addr 0xac94f08, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Hostname() ;

/// @brief Method get_Port, addr 0xac94f10, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Port() ;

/// @brief Method get_Transport, addr 0xac94f18, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::TransportType get_Transport() ;

static inline void setStaticF_dot_char(::ArrayW<char16_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EndpointPermission() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EndpointPermission", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EndpointPermission(EndpointPermission && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EndpointPermission", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EndpointPermission(EndpointPermission const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10673};

/// @brief Field hostname, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___hostname;

/// @brief Field port, offset: 0x18, size: 0x4, def value: None
 int32_t  ___port;

/// @brief Field transport, offset: 0x1c, size: 0x4, def value: None
 ::System::Net::TransportType  ___transport;

/// @brief Field resolved, offset: 0x20, size: 0x1, def value: None
 bool  ___resolved;

/// @brief Field hasWildcard, offset: 0x21, size: 0x1, def value: None
 bool  ___hasWildcard;

/// @brief Field addresses, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::System::Net::IPAddress*>  ___addresses;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::EndpointPermission, ___hostname) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::EndpointPermission, ___port) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::EndpointPermission, ___transport) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Net::EndpointPermission, ___resolved) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::EndpointPermission, ___hasWildcard) == 0x21, "Offset mismatch!");

static_assert(offsetof(::System::Net::EndpointPermission, ___addresses) == 0x28, "Offset mismatch!");

static_assert(sizeof(::System::Net::EndpointPermission) == 0x30, "Size mismatch!");

} // namespace end def System::Net
