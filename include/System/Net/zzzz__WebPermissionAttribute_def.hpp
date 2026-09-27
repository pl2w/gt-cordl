#pragma once
// IWYU pragma private; include "System/Net/WebPermissionAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Permissions/zzzz__CodeAccessSecurityAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WebPermissionAttribute)
namespace System::Security::Permissions {
struct SecurityAction;
}
namespace System::Security {
class IPermission;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class WebPermissionAttribute;
}
// Write type traits
MARK_REF_T(::System::Net::WebPermissionAttribute*);
DEFINE_IL2CPP_CLASS(::System::Net::WebPermissionAttribute*, "System.Net", "WebPermissionAttribute");
// [AttributeUsage((System.AttributeTargets)109, AllowMultiple = true, Inherited = false)]
// Dependencies System.Security.Permissions.CodeAccessSecurityAttribute
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebPermissionAttribute
class CORDL_TYPE WebPermissionAttribute : public ::System::Security::Permissions::CodeAccessSecurityAttribute {
public:
// Declarations
 __declspec(property(get=get_Accept, put=set_Accept)) ::StringW  Accept;

 __declspec(property(get=get_AcceptPattern, put=set_AcceptPattern)) ::StringW  AcceptPattern;

 __declspec(property(get=get_Connect, put=set_Connect)) ::StringW  Connect;

 __declspec(property(get=get_ConnectPattern, put=set_ConnectPattern)) ::StringW  ConnectPattern;

/// @brief Field m_accept, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_accept, put=__cordl_internal_set_m_accept)) ::System::Object*  m_accept;

/// @brief Field m_connect, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_connect, put=__cordl_internal_set_m_connect)) ::System::Object*  m_connect;

/// @brief Method CreatePermission, addr 0xac63c80, size 0x1f4, virtual true, abstract: false, final false
inline ::System::Security::IPermission* CreatePermission() ;

static inline ::System::Net::WebPermissionAttribute* New_ctor(::System::Security::Permissions::SecurityAction  action) ;

constexpr ::System::Object* const& __cordl_internal_get_m_accept() const;

constexpr ::System::Object*& __cordl_internal_get_m_accept() ;

constexpr ::System::Object* const& __cordl_internal_get_m_connect() const;

constexpr ::System::Object*& __cordl_internal_get_m_connect() ;

constexpr void __cordl_internal_set_m_accept(::System::Object*  value) ;

constexpr void __cordl_internal_set_m_connect(::System::Object*  value) ;

/// @brief Method .ctor, addr 0xac634dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::Security::Permissions::SecurityAction  action) ;

/// @brief Method get_Accept, addr 0xac63600, size 0x2c, virtual false, abstract: false, final false
inline ::StringW get_Accept() ;

/// @brief Method get_AcceptPattern, addr 0xac63a0c, size 0xc8, virtual false, abstract: false, final false
inline ::StringW get_AcceptPattern() ;

/// @brief Method get_Connect, addr 0xac634e4, size 0x2c, virtual false, abstract: false, final false
inline ::StringW get_Connect() ;

/// @brief Method get_ConnectPattern, addr 0xac6371c, size 0xc8, virtual false, abstract: false, final false
inline ::StringW get_ConnectPattern() ;

/// @brief Method set_Accept, addr 0xac6362c, size 0xf0, virtual false, abstract: false, final false
inline void set_Accept(::StringW  value) ;

/// @brief Method set_AcceptPattern, addr 0xac63ad4, size 0x1ac, virtual false, abstract: false, final false
inline void set_AcceptPattern(::StringW  value) ;

/// @brief Method set_Connect, addr 0xac63510, size 0xf0, virtual false, abstract: false, final false
inline void set_Connect(::StringW  value) ;

/// @brief Method set_ConnectPattern, addr 0xac637e4, size 0x1ac, virtual false, abstract: false, final false
inline void set_ConnectPattern(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebPermissionAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebPermissionAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebPermissionAttribute(WebPermissionAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebPermissionAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebPermissionAttribute(WebPermissionAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10560};

/// @brief Field m_accept, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  ___m_accept;

/// @brief Field m_connect, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ___m_connect;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebPermissionAttribute, ___m_accept) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebPermissionAttribute, ___m_connect) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebPermissionAttribute) == 0x28, "Size mismatch!");

} // namespace end def System::Net
