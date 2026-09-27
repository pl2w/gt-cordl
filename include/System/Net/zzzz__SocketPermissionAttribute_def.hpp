#pragma once
// IWYU pragma private; include "System/Net/SocketPermissionAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Permissions/zzzz__CodeAccessSecurityAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SocketPermissionAttribute)
namespace System::Security::Permissions {
struct SecurityAction;
}
namespace System::Security {
class IPermission;
}
// Forward declare root types
namespace System::Net {
class SocketPermissionAttribute;
}
// Write type traits
MARK_REF_T(::System::Net::SocketPermissionAttribute*);
DEFINE_IL2CPP_CLASS(::System::Net::SocketPermissionAttribute*, "System.Net", "SocketPermissionAttribute");
// [AttributeUsage((System.AttributeTargets)109, AllowMultiple = true, Inherited = false)]
// Dependencies System.Security.Permissions.CodeAccessSecurityAttribute
namespace System::Net {
// Is value type: false
// CS Name: System.Net.SocketPermissionAttribute
class CORDL_TYPE SocketPermissionAttribute : public ::System::Security::Permissions::CodeAccessSecurityAttribute {
public:
// Declarations
 __declspec(property(get=get_Access, put=set_Access)) ::StringW  Access;

 __declspec(property(get=get_Host, put=set_Host)) ::StringW  Host;

 __declspec(property(get=get_Port, put=set_Port)) ::StringW  Port;

 __declspec(property(get=get_Transport, put=set_Transport)) ::StringW  Transport;

/// @brief Field m_access, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_access, put=__cordl_internal_set_m_access)) ::StringW  m_access;

/// @brief Field m_host, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_host, put=__cordl_internal_set_m_host)) ::StringW  m_host;

/// @brief Field m_port, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_port, put=__cordl_internal_set_m_port)) ::StringW  m_port;

/// @brief Field m_transport, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_transport, put=__cordl_internal_set_m_transport)) ::StringW  m_transport;

/// @brief Method AlreadySet, addr 0xacb76dc, size 0x6c, virtual false, abstract: false, final false
inline void AlreadySet(::StringW  property) ;

/// @brief Method CreatePermission, addr 0xacb7880, size 0x4b0, virtual true, abstract: false, final false
inline ::System::Security::IPermission* CreatePermission() ;

static inline ::System::Net::SocketPermissionAttribute* New_ctor(::System::Security::Permissions::SecurityAction  action) ;

constexpr ::StringW const& __cordl_internal_get_m_access() const;

constexpr ::StringW& __cordl_internal_get_m_access() ;

constexpr ::StringW const& __cordl_internal_get_m_host() const;

constexpr ::StringW& __cordl_internal_get_m_host() ;

constexpr ::StringW const& __cordl_internal_get_m_port() const;

constexpr ::StringW& __cordl_internal_get_m_port() ;

constexpr ::StringW const& __cordl_internal_get_m_transport() const;

constexpr ::StringW& __cordl_internal_get_m_transport() ;

constexpr void __cordl_internal_set_m_access(::StringW  value) ;

constexpr void __cordl_internal_set_m_host(::StringW  value) ;

constexpr void __cordl_internal_set_m_port(::StringW  value) ;

constexpr void __cordl_internal_set_m_transport(::StringW  value) ;

/// @brief Method .ctor, addr 0xacb766c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::Security::Permissions::SecurityAction  action) ;

/// @brief Method get_Access, addr 0xacb7674, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Access() ;

/// @brief Method get_Host, addr 0xacb7748, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Host() ;

/// @brief Method get_Port, addr 0xacb77b0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Port() ;

/// @brief Method get_Transport, addr 0xacb7818, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Transport() ;

/// @brief Method set_Access, addr 0xacb767c, size 0x60, virtual false, abstract: false, final false
inline void set_Access(::StringW  value) ;

/// @brief Method set_Host, addr 0xacb7750, size 0x60, virtual false, abstract: false, final false
inline void set_Host(::StringW  value) ;

/// @brief Method set_Port, addr 0xacb77b8, size 0x60, virtual false, abstract: false, final false
inline void set_Port(::StringW  value) ;

/// @brief Method set_Transport, addr 0xacb7820, size 0x60, virtual false, abstract: false, final false
inline void set_Transport(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SocketPermissionAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SocketPermissionAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SocketPermissionAttribute(SocketPermissionAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SocketPermissionAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SocketPermissionAttribute(SocketPermissionAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10727};

/// @brief Field m_access, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___m_access;

/// @brief Field m_host, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___m_host;

/// @brief Field m_port, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___m_port;

/// @brief Field m_transport, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___m_transport;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::SocketPermissionAttribute, ___m_access) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::SocketPermissionAttribute, ___m_host) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::SocketPermissionAttribute, ___m_port) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::SocketPermissionAttribute, ___m_transport) == 0x30, "Offset mismatch!");

static_assert(sizeof(::System::Net::SocketPermissionAttribute) == 0x38, "Size mismatch!");

} // namespace end def System::Net
