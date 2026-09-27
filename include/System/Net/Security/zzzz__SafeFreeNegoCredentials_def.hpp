#pragma once
// IWYU pragma private; include "System/Net/Security/SafeFreeNegoCredentials.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Security/zzzz__SafeFreeCredentials_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SafeFreeNegoCredentials)
namespace Microsoft::Win32::SafeHandles {
class SafeGssCredHandle;
}
// Forward declare root types
namespace System::Net::Security {
class SafeFreeNegoCredentials;
}
// Write type traits
MARK_REF_T(::System::Net::Security::SafeFreeNegoCredentials*);
DEFINE_IL2CPP_CLASS(::System::Net::Security::SafeFreeNegoCredentials*, "System.Net.Security", "SafeFreeNegoCredentials");
// Dependencies System.Net.Security.SafeFreeCredentials
namespace System::Net::Security {
// Is value type: false
// CS Name: System.Net.Security.SafeFreeNegoCredentials
class CORDL_TYPE SafeFreeNegoCredentials : public ::System::Net::Security::SafeFreeCredentials {
public:
// Declarations
 __declspec(property(get=get_GssCredential)) ::Microsoft::Win32::SafeHandles::SafeGssCredHandle*  GssCredential;

 __declspec(property(get=get_IsDefault)) bool  IsDefault;

 __declspec(property(get=get_IsInvalid)) bool  IsInvalid;

 __declspec(property(get=get_IsNtlmOnly)) bool  IsNtlmOnly;

 __declspec(property(get=get_UserName)) ::StringW  UserName;

/// @brief Field _credential, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__credential, put=__cordl_internal_set__credential)) ::Microsoft::Win32::SafeHandles::SafeGssCredHandle*  _credential;

/// @brief Field _isDefault, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDefault, put=__cordl_internal_set__isDefault)) bool  _isDefault;

/// @brief Field _isNtlmOnly, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__isNtlmOnly, put=__cordl_internal_set__isNtlmOnly)) bool  _isNtlmOnly;

/// @brief Field _userName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__userName, put=__cordl_internal_set__userName)) ::StringW  _userName;

static inline ::System::Net::Security::SafeFreeNegoCredentials* New_ctor(bool  isNtlmOnly, ::StringW  username, ::StringW  password, ::StringW  domain) ;

/// @brief Method ReleaseHandle, addr 0xacf4a90, size 0x38, virtual true, abstract: false, final false
inline bool ReleaseHandle() ;

constexpr ::Microsoft::Win32::SafeHandles::SafeGssCredHandle* const& __cordl_internal_get__credential() const;

constexpr ::Microsoft::Win32::SafeHandles::SafeGssCredHandle*& __cordl_internal_get__credential() ;

constexpr bool const& __cordl_internal_get__isDefault() const;

constexpr bool& __cordl_internal_get__isDefault() ;

constexpr bool const& __cordl_internal_get__isNtlmOnly() const;

constexpr bool& __cordl_internal_get__isNtlmOnly() ;

constexpr ::StringW const& __cordl_internal_get__userName() const;

constexpr ::StringW& __cordl_internal_get__userName() ;

constexpr void __cordl_internal_set__credential(::Microsoft::Win32::SafeHandles::SafeGssCredHandle*  value) ;

constexpr void __cordl_internal_set__isDefault(bool  value) ;

constexpr void __cordl_internal_set__isNtlmOnly(bool  value) ;

constexpr void __cordl_internal_set__userName(::StringW  value) ;

/// @brief Method .ctor, addr 0xacf3e80, size 0x1d4, virtual false, abstract: false, final false
inline void _ctor(bool  isNtlmOnly, ::StringW  username, ::StringW  password, ::StringW  domain) ;

/// @brief Method get_GssCredential, addr 0xacf4a60, size 0x8, virtual false, abstract: false, final false
inline ::Microsoft::Win32::SafeHandles::SafeGssCredHandle* get_GssCredential() ;

/// @brief Method get_IsDefault, addr 0xacf4a78, size 0x8, virtual false, abstract: false, final false
inline bool get_IsDefault() ;

/// @brief Method get_IsInvalid, addr 0xacf4a80, size 0x10, virtual true, abstract: false, final false
inline bool get_IsInvalid() ;

/// @brief Method get_IsNtlmOnly, addr 0xacf4a68, size 0x8, virtual false, abstract: false, final false
inline bool get_IsNtlmOnly() ;

/// @brief Method get_UserName, addr 0xacf4a70, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_UserName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SafeFreeNegoCredentials() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SafeFreeNegoCredentials", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SafeFreeNegoCredentials(SafeFreeNegoCredentials && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SafeFreeNegoCredentials", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SafeFreeNegoCredentials(SafeFreeNegoCredentials const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10933};

/// @brief Field _credential, offset: 0x20, size: 0x8, def value: None
 ::Microsoft::Win32::SafeHandles::SafeGssCredHandle*  ____credential;

/// @brief Field _isNtlmOnly, offset: 0x28, size: 0x1, def value: None
 bool  ____isNtlmOnly;

/// @brief Field _userName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____userName;

/// @brief Field _isDefault, offset: 0x38, size: 0x1, def value: None
 bool  ____isDefault;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Security::SafeFreeNegoCredentials, ____credential) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Security::SafeFreeNegoCredentials, ____isNtlmOnly) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Security::SafeFreeNegoCredentials, ____userName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::Security::SafeFreeNegoCredentials, ____isDefault) == 0x38, "Offset mismatch!");

static_assert(sizeof(::System::Net::Security::SafeFreeNegoCredentials) == 0x40, "Size mismatch!");

} // namespace end def System::Net::Security
