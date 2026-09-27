#pragma once
// IWYU pragma private; include "System/Security/Cryptography/CspParameters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CspParameters)
namespace System::Security::AccessControl {
class CryptoKeySecurity;
}
namespace System::Security::Cryptography {
struct CspProviderFlags;
}
namespace System::Security {
class SecureString;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace System::Security::Cryptography {
class CspParameters;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::CspParameters*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::CspParameters*, "System.Security.Cryptography", "CspParameters");
// [ComVisible(true)]
// Dependencies System.IntPtr, System.Object
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.CspParameters
class CORDL_TYPE CspParameters : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CryptoKeySecurity, put=set_CryptoKeySecurity)) ::System::Security::AccessControl::CryptoKeySecurity*  CryptoKeySecurity;

 __declspec(property(get=get_Flags, put=set_Flags)) ::System::Security::Cryptography::CspProviderFlags  Flags;

/// @brief Field KeyContainerName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_KeyContainerName, put=__cordl_internal_set_KeyContainerName)) ::StringW  KeyContainerName;

/// @brief Field KeyNumber, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_KeyNumber, put=__cordl_internal_set_KeyNumber)) int32_t  KeyNumber;

 __declspec(property(get=get_KeyPassword, put=set_KeyPassword)) ::System::Security::SecureString*  KeyPassword;

 __declspec(property(get=get_ParentWindowHandle, put=set_ParentWindowHandle)) ::System::IntPtr  ParentWindowHandle;

/// @brief Field ProviderName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ProviderName, put=__cordl_internal_set_ProviderName)) ::StringW  ProviderName;

/// @brief Field ProviderType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_ProviderType, put=__cordl_internal_set_ProviderType)) int32_t  ProviderType;

/// @brief Field m_cryptoKeySecurity, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_cryptoKeySecurity, put=__cordl_internal_set_m_cryptoKeySecurity)) ::System::Security::AccessControl::CryptoKeySecurity*  m_cryptoKeySecurity;

/// @brief Field m_flags, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_flags, put=__cordl_internal_set_m_flags)) int32_t  m_flags;

/// @brief Field m_keyPassword, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_keyPassword, put=__cordl_internal_set_m_keyPassword)) ::System::Security::SecureString*  m_keyPassword;

/// @brief Field m_parentWindowHandle, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_parentWindowHandle, put=__cordl_internal_set_m_parentWindowHandle)) ::System::IntPtr  m_parentWindowHandle;

static inline ::System::Security::Cryptography::CspParameters* New_ctor() ;

static inline ::System::Security::Cryptography::CspParameters* New_ctor(int32_t  dwTypeIn) ;

static inline ::System::Security::Cryptography::CspParameters* New_ctor(int32_t  dwTypeIn, ::StringW  strProviderNameIn) ;

static inline ::System::Security::Cryptography::CspParameters* New_ctor(int32_t  dwTypeIn, ::StringW  strProviderNameIn, ::StringW  strContainerNameIn) ;

static inline ::System::Security::Cryptography::CspParameters* New_ctor(::System::Security::Cryptography::CspParameters*  parameters) ;

static inline ::System::Security::Cryptography::CspParameters* New_ctor(int32_t  providerType, ::StringW  providerName, ::StringW  keyContainerName, ::System::Security::AccessControl::CryptoKeySecurity*  cryptoKeySecurity, ::System::Security::SecureString*  keyPassword) ;

static inline ::System::Security::Cryptography::CspParameters* New_ctor(int32_t  providerType, ::StringW  providerName, ::StringW  keyContainerName, ::System::Security::AccessControl::CryptoKeySecurity*  cryptoKeySecurity, ::System::IntPtr  parentWindowHandle) ;

static inline ::System::Security::Cryptography::CspParameters* New_ctor(int32_t  providerType, ::StringW  providerName, ::StringW  keyContainerName, ::System::Security::Cryptography::CspProviderFlags  flags) ;

constexpr ::StringW const& __cordl_internal_get_KeyContainerName() const;

constexpr ::StringW& __cordl_internal_get_KeyContainerName() ;

constexpr int32_t const& __cordl_internal_get_KeyNumber() const;

constexpr int32_t& __cordl_internal_get_KeyNumber() ;

constexpr ::StringW const& __cordl_internal_get_ProviderName() const;

constexpr ::StringW& __cordl_internal_get_ProviderName() ;

constexpr int32_t const& __cordl_internal_get_ProviderType() const;

constexpr int32_t& __cordl_internal_get_ProviderType() ;

constexpr ::System::Security::AccessControl::CryptoKeySecurity* const& __cordl_internal_get_m_cryptoKeySecurity() const;

constexpr ::System::Security::AccessControl::CryptoKeySecurity*& __cordl_internal_get_m_cryptoKeySecurity() ;

constexpr int32_t const& __cordl_internal_get_m_flags() const;

constexpr int32_t& __cordl_internal_get_m_flags() ;

constexpr ::System::Security::SecureString* const& __cordl_internal_get_m_keyPassword() const;

constexpr ::System::Security::SecureString*& __cordl_internal_get_m_keyPassword() ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_parentWindowHandle() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_parentWindowHandle() ;

constexpr void __cordl_internal_set_KeyContainerName(::StringW  value) ;

constexpr void __cordl_internal_set_KeyNumber(int32_t  value) ;

constexpr void __cordl_internal_set_ProviderName(::StringW  value) ;

constexpr void __cordl_internal_set_ProviderType(int32_t  value) ;

constexpr void __cordl_internal_set_m_cryptoKeySecurity(::System::Security::AccessControl::CryptoKeySecurity*  value) ;

constexpr void __cordl_internal_set_m_flags(int32_t  value) ;

constexpr void __cordl_internal_set_m_keyPassword(::System::Security::SecureString*  value) ;

constexpr void __cordl_internal_set_m_parentWindowHandle(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0xa163f20, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa163f3c, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  dwTypeIn) ;

/// @brief Method .ctor, addr 0xa163f4c, size 0xc, virtual false, abstract: false, final false
inline void _ctor(int32_t  dwTypeIn, ::StringW  strProviderNameIn) ;

/// @brief Method .ctor, addr 0xa163f34, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int32_t  dwTypeIn, ::StringW  strProviderNameIn, ::StringW  strContainerNameIn) ;

/// @brief Method .ctor, addr 0xa164044, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::System::Security::Cryptography::CspParameters*  parameters) ;

/// @brief Method .ctor, addr 0xa163fc4, size 0x44, virtual false, abstract: false, final false
inline void _ctor(int32_t  providerType, ::StringW  providerName, ::StringW  keyContainerName, ::System::Security::AccessControl::CryptoKeySecurity*  cryptoKeySecurity, ::System::Security::SecureString*  keyPassword) ;

/// @brief Method .ctor, addr 0xa164008, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(int32_t  providerType, ::StringW  providerName, ::StringW  keyContainerName, ::System::Security::AccessControl::CryptoKeySecurity*  cryptoKeySecurity, ::System::IntPtr  parentWindowHandle) ;

/// @brief Method .ctor, addr 0xa163f58, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(int32_t  providerType, ::StringW  providerName, ::StringW  keyContainerName, ::System::Security::Cryptography::CspProviderFlags  flags) ;

/// @brief Method get_CryptoKeySecurity, addr 0xa163ed0, size 0x8, virtual false, abstract: false, final false
inline ::System::Security::AccessControl::CryptoKeySecurity* get_CryptoKeySecurity() ;

/// @brief Method get_Flags, addr 0xa163dec, size 0x8, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::CspProviderFlags get_Flags() ;

/// @brief Method get_KeyPassword, addr 0xa163ee0, size 0x8, virtual false, abstract: false, final false
inline ::System::Security::SecureString* get_KeyPassword() ;

/// @brief Method get_ParentWindowHandle, addr 0xa163f08, size 0x8, virtual false, abstract: false, final false
inline ::System::IntPtr get_ParentWindowHandle() ;

/// @brief Method set_CryptoKeySecurity, addr 0xa163ed8, size 0x8, virtual false, abstract: false, final false
inline void set_CryptoKeySecurity(::System::Security::AccessControl::CryptoKeySecurity*  value) ;

/// @brief Method set_Flags, addr 0xa163df4, size 0xdc, virtual false, abstract: false, final false
inline void set_Flags(::System::Security::Cryptography::CspProviderFlags  value) ;

/// @brief Method set_KeyPassword, addr 0xa163ee8, size 0x20, virtual false, abstract: false, final false
inline void set_KeyPassword(::System::Security::SecureString*  value) ;

/// @brief Method set_ParentWindowHandle, addr 0xa163f10, size 0x10, virtual false, abstract: false, final false
inline void set_ParentWindowHandle(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CspParameters() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CspParameters", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CspParameters(CspParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CspParameters", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CspParameters(CspParameters const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6083};

/// @brief Field ProviderType, offset: 0x10, size: 0x4, def value: None
 int32_t  ___ProviderType;

/// @brief Field ProviderName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___ProviderName;

/// @brief Field KeyContainerName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___KeyContainerName;

/// @brief Field KeyNumber, offset: 0x28, size: 0x4, def value: None
 int32_t  ___KeyNumber;

/// @brief Field m_flags, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___m_flags;

/// @brief Field m_cryptoKeySecurity, offset: 0x30, size: 0x8, def value: None
 ::System::Security::AccessControl::CryptoKeySecurity*  ___m_cryptoKeySecurity;

/// @brief Field m_keyPassword, offset: 0x38, size: 0x8, def value: None
 ::System::Security::SecureString*  ___m_keyPassword;

/// @brief Field m_parentWindowHandle, offset: 0x40, size: 0x8, def value: None
 ::System::IntPtr  ___m_parentWindowHandle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::CspParameters, ___ProviderType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::CspParameters, ___ProviderName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::CspParameters, ___KeyContainerName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::CspParameters, ___KeyNumber) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::CspParameters, ___m_flags) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::CspParameters, ___m_cryptoKeySecurity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::CspParameters, ___m_keyPassword) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::CspParameters, ___m_parentWindowHandle) == 0x40, "Offset mismatch!");

static_assert(sizeof(::System::Security::Cryptography::CspParameters) == 0x48, "Size mismatch!");

} // namespace end def System::Security::Cryptography
