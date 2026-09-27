#pragma once
// IWYU pragma private; include "System/Net/SocketPermission.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/zzzz__CodeAccessPermission_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SocketPermission)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Net {
struct NetworkAccess;
}
namespace System::Net {
struct TransportType;
}
namespace System::Security::Permissions {
class IUnrestrictedPermission;
}
namespace System::Security::Permissions {
struct PermissionState;
}
namespace System::Security {
class IPermission;
}
namespace System::Security {
class SecurityElement;
}
// Forward declare root types
namespace System::Net {
class SocketPermission;
}
// Write type traits
MARK_REF_T(::System::Net::SocketPermission*);
DEFINE_IL2CPP_CLASS(::System::Net::SocketPermission*, "System.Net", "SocketPermission");
// Dependencies System.Security.CodeAccessPermission
namespace System::Net {
// Is value type: false
// CS Name: System.Net.SocketPermission
class CORDL_TYPE SocketPermission : public ::System::Security::CodeAccessPermission {
public:
// Declarations
 __declspec(property(get=get_AcceptList)) ::System::Collections::IEnumerator*  AcceptList;

 __declspec(property(get=get_ConnectList)) ::System::Collections::IEnumerator*  ConnectList;

/// @brief Field m_acceptList, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_acceptList, put=__cordl_internal_set_m_acceptList)) ::System::Collections::ArrayList*  m_acceptList;

/// @brief Field m_connectList, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_connectList, put=__cordl_internal_set_m_connectList)) ::System::Collections::ArrayList*  m_connectList;

/// @brief Field m_noRestriction, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_noRestriction, put=__cordl_internal_set_m_noRestriction)) bool  m_noRestriction;

/// @brief Convert operator to "::System::Security::Permissions::IUnrestrictedPermission"
constexpr operator  ::System::Security::Permissions::IUnrestrictedPermission*() noexcept;

/// @brief Method AddPermission, addr 0xacb55f8, size 0xc8, virtual false, abstract: false, final false
inline void AddPermission(::System::Net::NetworkAccess  access, ::System::Net::TransportType  transport, ::StringW  hostName, int32_t  portNumber) ;

/// @brief Method Copy, addr 0xacb5700, size 0x194, virtual true, abstract: false, final false
inline ::System::Security::IPermission* Copy() ;

/// @brief Method FromXml, addr 0xacb70a0, size 0x464, virtual false, abstract: false, final false
inline void FromXml(::System::Collections::ArrayList*  endpoints, ::System::Net::NetworkAccess  access) ;

/// @brief Method FromXml, addr 0xacb6c24, size 0x47c, virtual true, abstract: false, final false
inline void FromXml(::System::Security::SecurityElement*  securityElement) ;

/// @brief Method Intersect, addr 0xacb5894, size 0x13c, virtual true, abstract: false, final false
inline ::System::Security::IPermission* Intersect(::System::Security::IPermission*  target) ;

/// @brief Method Intersect, addr 0xacb5a34, size 0x608, virtual false, abstract: false, final false
inline void Intersect(::System::Collections::ArrayList*  list1, ::System::Collections::ArrayList*  list2, ::System::Collections::ArrayList*  result) ;

/// @brief Method IntersectEmpty, addr 0xacb59d0, size 0x64, virtual false, abstract: false, final false
inline bool IntersectEmpty(::System::Net::SocketPermission*  permission) ;

/// @brief Method IsSubsetOf, addr 0xacb61d8, size 0x544, virtual false, abstract: false, final false
inline bool IsSubsetOf(::System::Collections::ArrayList*  list1, ::System::Collections::ArrayList*  list2) ;

/// @brief Method IsSubsetOf, addr 0xacb603c, size 0x19c, virtual true, abstract: false, final false
inline bool IsSubsetOf(::System::Security::IPermission*  target) ;

/// @brief Method IsUnrestricted, addr 0xacb671c, size 0x8, virtual true, abstract: false, final true
inline bool IsUnrestricted() ;

static inline ::System::Net::SocketPermission* New_ctor(::System::Net::NetworkAccess  access, ::System::Net::TransportType  transport, ::StringW  hostName, int32_t  portNumber) ;

static inline ::System::Net::SocketPermission* New_ctor(::System::Security::Permissions::PermissionState  state) ;

/// @brief Method ToXml, addr 0xacb6724, size 0x204, virtual true, abstract: false, final false
inline ::System::Security::SecurityElement* ToXml() ;

/// @brief Method ToXml, addr 0xacb6928, size 0x2fc, virtual false, abstract: false, final false
inline void ToXml(::System::Security::SecurityElement*  root, ::StringW  childName, ::System::Collections::IEnumerator*  enumerator) ;

/// @brief Method Union, addr 0xacb7504, size 0x168, virtual true, abstract: false, final false
inline ::System::Security::IPermission* Union(::System::Security::IPermission*  target) ;

constexpr ::System::Collections::ArrayList* const& __cordl_internal_get_m_acceptList() const;

constexpr ::System::Collections::ArrayList*& __cordl_internal_get_m_acceptList() ;

constexpr ::System::Collections::ArrayList* const& __cordl_internal_get_m_connectList() const;

constexpr ::System::Collections::ArrayList*& __cordl_internal_get_m_connectList() ;

constexpr bool const& __cordl_internal_get_m_noRestriction() const;

constexpr bool& __cordl_internal_get_m_noRestriction() ;

constexpr void __cordl_internal_set_m_acceptList(::System::Collections::ArrayList*  value) ;

constexpr void __cordl_internal_set_m_connectList(::System::Collections::ArrayList*  value) ;

constexpr void __cordl_internal_set_m_noRestriction(bool  value) ;

/// @brief Method .ctor, addr 0xacb552c, size 0xcc, virtual false, abstract: false, final false
inline void _ctor(::System::Net::NetworkAccess  access, ::System::Net::TransportType  transport, ::StringW  hostName, int32_t  portNumber) ;

/// @brief Method .ctor, addr 0xacb5480, size 0xac, virtual false, abstract: false, final false
inline void _ctor(::System::Security::Permissions::PermissionState  state) ;

/// @brief Method get_AcceptList, addr 0xacb56c0, size 0x20, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* get_AcceptList() ;

/// @brief Method get_ConnectList, addr 0xacb56e0, size 0x20, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* get_ConnectList() ;

/// @brief Convert to "::System::Security::Permissions::IUnrestrictedPermission"
constexpr ::System::Security::Permissions::IUnrestrictedPermission* i___System__Security__Permissions__IUnrestrictedPermission() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SocketPermission() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SocketPermission", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SocketPermission(SocketPermission && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SocketPermission", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SocketPermission(SocketPermission const& ) = delete;

/// @brief Field AllPorts offset 0xffffffff size 0x4
static constexpr int32_t  AllPorts{static_cast<int32_t>(0xffffffff)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10726};

/// @brief Field m_acceptList, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::ArrayList*  ___m_acceptList;

/// @brief Field m_connectList, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::ArrayList*  ___m_connectList;

/// @brief Field m_noRestriction, offset: 0x20, size: 0x1, def value: None
 bool  ___m_noRestriction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::SocketPermission, ___m_acceptList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::SocketPermission, ___m_connectList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::SocketPermission, ___m_noRestriction) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Net::SocketPermission) == 0x28, "Size mismatch!");

} // namespace end def System::Net
