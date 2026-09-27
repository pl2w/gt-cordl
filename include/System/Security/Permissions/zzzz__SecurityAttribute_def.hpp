#pragma once
// IWYU pragma private; include "System/Security/Permissions/SecurityAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Permissions/zzzz__SecurityAction_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(SecurityAttribute)
namespace System::Security::Permissions {
struct SecurityAction;
}
namespace System::Security {
class IPermission;
}
// Forward declare root types
namespace System::Security::Permissions {
class SecurityAttribute;
}
// Write type traits
MARK_REF_T(::System::Security::Permissions::SecurityAttribute*);
DEFINE_IL2CPP_CLASS(::System::Security::Permissions::SecurityAttribute*, "System.Security.Permissions", "SecurityAttribute");
// [ComVisible(true)]
// [AttributeUsage((System.AttributeTargets)109, AllowMultiple = true, Inherited = false)]
// [Obsolete("CAS support is not available with Silverlight applications.")]
// Dependencies System.Attribute, System.Security.Permissions.SecurityAction
namespace System::Security::Permissions {
// Is value type: false
// CS Name: System.Security.Permissions.SecurityAttribute
class CORDL_TYPE SecurityAttribute : public ::System::Attribute {
public:
// Declarations
 __declspec(property(put=set_Action)) ::System::Security::Permissions::SecurityAction  Action;

 __declspec(property(get=get_Unrestricted)) bool  Unrestricted;

/// @brief Field m_Action, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Action, put=__cordl_internal_set_m_Action)) ::System::Security::Permissions::SecurityAction  m_Action;

/// @brief Field m_Unrestricted, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Unrestricted, put=__cordl_internal_set_m_Unrestricted)) bool  m_Unrestricted;

/// @brief Method CreatePermission, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Security::IPermission* CreatePermission() ;

static inline ::System::Security::Permissions::SecurityAttribute* New_ctor(::System::Security::Permissions::SecurityAction  action) ;

constexpr ::System::Security::Permissions::SecurityAction const& __cordl_internal_get_m_Action() const;

constexpr ::System::Security::Permissions::SecurityAction& __cordl_internal_get_m_Action() ;

constexpr bool const& __cordl_internal_get_m_Unrestricted() const;

constexpr bool& __cordl_internal_get_m_Unrestricted() ;

constexpr void __cordl_internal_set_m_Action(::System::Security::Permissions::SecurityAction  value) ;

constexpr void __cordl_internal_set_m_Unrestricted(bool  value) ;

/// @brief Method .ctor, addr 0xa15acfc, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::System::Security::Permissions::SecurityAction  action) ;

/// @brief Method get_Unrestricted, addr 0xa15ad24, size 0x8, virtual false, abstract: false, final false
inline bool get_Unrestricted() ;

/// @brief Method set_Action, addr 0xa15ad2c, size 0x8, virtual false, abstract: false, final false
inline void set_Action(::System::Security::Permissions::SecurityAction  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SecurityAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SecurityAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SecurityAttribute(SecurityAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SecurityAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SecurityAttribute(SecurityAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6050};

/// @brief Field m_Action, offset: 0x10, size: 0x4, def value: None
 ::System::Security::Permissions::SecurityAction  ___m_Action;

/// @brief Field m_Unrestricted, offset: 0x14, size: 0x1, def value: None
 bool  ___m_Unrestricted;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Permissions::SecurityAttribute, ___m_Action) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Permissions::SecurityAttribute, ___m_Unrestricted) == 0x14, "Offset mismatch!");

static_assert(sizeof(::System::Security::Permissions::SecurityAttribute) == 0x18, "Size mismatch!");

} // namespace end def System::Security::Permissions
