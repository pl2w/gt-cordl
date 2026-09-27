#pragma once
// IWYU pragma private; include "System/Net/CredentialKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CredentialKey)
namespace System {
class Object;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class CredentialKey;
}
// Write type traits
MARK_REF_T(::System::Net::CredentialKey*);
DEFINE_IL2CPP_CLASS(::System::Net::CredentialKey*, "System.Net", "CredentialKey");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.CredentialKey
class CORDL_TYPE CredentialKey : public ::System::Object {
public:
// Declarations
/// @brief Field AuthenticationType, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_AuthenticationType, put=__cordl_internal_set_AuthenticationType)) ::StringW  AuthenticationType;

/// @brief Field UriPrefix, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_UriPrefix, put=__cordl_internal_set_UriPrefix)) ::System::Uri*  UriPrefix;

/// @brief Field UriPrefixLength, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_UriPrefixLength, put=__cordl_internal_set_UriPrefixLength)) int32_t  UriPrefixLength;

/// @brief Field m_ComputedHashCode, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ComputedHashCode, put=__cordl_internal_set_m_ComputedHashCode)) bool  m_ComputedHashCode;

/// @brief Field m_HashCode, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HashCode, put=__cordl_internal_set_m_HashCode)) int32_t  m_HashCode;

/// @brief Method Equals, addr 0xac56d24, size 0xb4, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  comparand) ;

/// @brief Method GetHashCode, addr 0xac56ca4, size 0x80, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IsPrefix, addr 0xac56b68, size 0x13c, virtual false, abstract: false, final false
inline bool IsPrefix(::System::Uri*  uri, ::System::Uri*  prefixUri) ;

/// @brief Method Match, addr 0xac55be8, size 0xac, virtual false, abstract: false, final false
inline bool Match(::System::Uri*  uri, ::StringW  authenticationType) ;

static inline ::System::Net::CredentialKey* New_ctor(::System::Uri*  uriPrefix, ::StringW  authenticationType) ;

/// @brief Method ToString, addr 0xac56dd8, size 0x1a4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get_AuthenticationType() const;

constexpr ::StringW& __cordl_internal_get_AuthenticationType() ;

constexpr ::System::Uri* const& __cordl_internal_get_UriPrefix() const;

constexpr ::System::Uri*& __cordl_internal_get_UriPrefix() ;

constexpr int32_t const& __cordl_internal_get_UriPrefixLength() const;

constexpr int32_t& __cordl_internal_get_UriPrefixLength() ;

constexpr bool const& __cordl_internal_get_m_ComputedHashCode() const;

constexpr bool& __cordl_internal_get_m_ComputedHashCode() ;

constexpr int32_t const& __cordl_internal_get_m_HashCode() const;

constexpr int32_t& __cordl_internal_get_m_HashCode() ;

constexpr void __cordl_internal_set_AuthenticationType(::StringW  value) ;

constexpr void __cordl_internal_set_UriPrefix(::System::Uri*  value) ;

constexpr void __cordl_internal_set_UriPrefixLength(int32_t  value) ;

constexpr void __cordl_internal_set_m_ComputedHashCode(bool  value) ;

constexpr void __cordl_internal_set_m_HashCode(int32_t  value) ;

/// @brief Method .ctor, addr 0xac55280, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::System::Uri*  uriPrefix, ::StringW  authenticationType) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CredentialKey() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CredentialKey", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CredentialKey(CredentialKey && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CredentialKey", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CredentialKey(CredentialKey const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10490};

/// @brief Field UriPrefix, offset: 0x10, size: 0x8, def value: None
 ::System::Uri*  ___UriPrefix;

/// @brief Field UriPrefixLength, offset: 0x18, size: 0x4, def value: None
 int32_t  ___UriPrefixLength;

/// @brief Field AuthenticationType, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___AuthenticationType;

/// @brief Field m_HashCode, offset: 0x28, size: 0x4, def value: None
 int32_t  ___m_HashCode;

/// @brief Field m_ComputedHashCode, offset: 0x2c, size: 0x1, def value: None
 bool  ___m_ComputedHashCode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::CredentialKey, ___UriPrefix) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::CredentialKey, ___UriPrefixLength) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::CredentialKey, ___AuthenticationType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::CredentialKey, ___m_HashCode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::CredentialKey, ___m_ComputedHashCode) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::System::Net::CredentialKey) == 0x30, "Size mismatch!");

} // namespace end def System::Net
