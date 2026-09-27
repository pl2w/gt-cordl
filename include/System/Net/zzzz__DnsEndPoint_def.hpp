#pragma once
// IWYU pragma private; include "System/Net/DnsEndPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Sockets/zzzz__AddressFamily_def.hpp"
#include "System/Net/zzzz__EndPoint_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DnsEndPoint)
namespace System::Net::Sockets {
struct AddressFamily;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class DnsEndPoint;
}
// Write type traits
MARK_REF_T(::System::Net::DnsEndPoint*);
DEFINE_IL2CPP_CLASS(::System::Net::DnsEndPoint*, "System.Net", "DnsEndPoint");
// Dependencies System.Net.EndPoint, System.Net.Sockets.AddressFamily
namespace System::Net {
// Is value type: false
// CS Name: System.Net.DnsEndPoint
class CORDL_TYPE DnsEndPoint : public ::System::Net::EndPoint {
public:
// Declarations
 __declspec(property(get=get_AddressFamily)) ::System::Net::Sockets::AddressFamily  AddressFamily;

 __declspec(property(get=get_Host)) ::StringW  Host;

 __declspec(property(get=get_Port)) int32_t  Port;

/// @brief Field m_Family, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Family, put=__cordl_internal_set_m_Family)) ::System::Net::Sockets::AddressFamily  m_Family;

/// @brief Field m_Host, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Host, put=__cordl_internal_set_m_Host)) ::StringW  m_Host;

/// @brief Field m_Port, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Port, put=__cordl_internal_set_m_Port)) int32_t  m_Port;

/// @brief Method Equals, addr 0xac57180, size 0xb0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  comparand) ;

/// @brief Method GetHashCode, addr 0xac57230, size 0xb4, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::System::Net::DnsEndPoint* New_ctor(::StringW  host, int32_t  port) ;

static inline ::System::Net::DnsEndPoint* New_ctor(::StringW  host, int32_t  port, ::System::Net::Sockets::AddressFamily  addressFamily) ;

/// @brief Method ToString, addr 0xac572e4, size 0x178, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Net::Sockets::AddressFamily const& __cordl_internal_get_m_Family() const;

constexpr ::System::Net::Sockets::AddressFamily& __cordl_internal_get_m_Family() ;

constexpr ::StringW const& __cordl_internal_get_m_Host() const;

constexpr ::StringW& __cordl_internal_get_m_Host() ;

constexpr int32_t const& __cordl_internal_get_m_Port() const;

constexpr int32_t& __cordl_internal_get_m_Port() ;

constexpr void __cordl_internal_set_m_Family(::System::Net::Sockets::AddressFamily  value) ;

constexpr void __cordl_internal_set_m_Host(::StringW  value) ;

constexpr void __cordl_internal_set_m_Port(int32_t  value) ;

/// @brief Method .ctor, addr 0xac56f7c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  host, int32_t  port) ;

/// @brief Method .ctor, addr 0xac56f84, size 0x1f4, virtual false, abstract: false, final false
inline void _ctor(::StringW  host, int32_t  port, ::System::Net::Sockets::AddressFamily  addressFamily) ;

/// @brief Method get_AddressFamily, addr 0xac57464, size 0x8, virtual true, abstract: false, final false
inline ::System::Net::Sockets::AddressFamily get_AddressFamily() ;

/// @brief Method get_Host, addr 0xac5745c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Host() ;

/// @brief Method get_Port, addr 0xac5746c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Port() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DnsEndPoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DnsEndPoint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DnsEndPoint(DnsEndPoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DnsEndPoint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DnsEndPoint(DnsEndPoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10491};

/// @brief Field m_Host, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___m_Host;

/// @brief Field m_Port, offset: 0x18, size: 0x4, def value: None
 int32_t  ___m_Port;

/// @brief Field m_Family, offset: 0x1c, size: 0x4, def value: None
 ::System::Net::Sockets::AddressFamily  ___m_Family;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::DnsEndPoint, ___m_Host) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::DnsEndPoint, ___m_Port) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::DnsEndPoint, ___m_Family) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::System::Net::DnsEndPoint) == 0x20, "Size mismatch!");

} // namespace end def System::Net
