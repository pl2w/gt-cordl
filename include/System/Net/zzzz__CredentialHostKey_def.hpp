#pragma once
// IWYU pragma private; include "System/Net/CredentialHostKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CredentialHostKey)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class CredentialHostKey;
}
// Write type traits
MARK_REF_T(::System::Net::CredentialHostKey*);
DEFINE_IL2CPP_CLASS(::System::Net::CredentialHostKey*, "System.Net", "CredentialHostKey");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.CredentialHostKey
class CORDL_TYPE CredentialHostKey : public ::System::Object {
public:
// Declarations
/// @brief Field AuthenticationType, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_AuthenticationType, put=__cordl_internal_set_AuthenticationType)) ::StringW  AuthenticationType;

/// @brief Field Host, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Host, put=__cordl_internal_set_Host)) ::StringW  Host;

/// @brief Field Port, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Port, put=__cordl_internal_set_Port)) int32_t  Port;

/// @brief Field m_ComputedHashCode, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ComputedHashCode, put=__cordl_internal_set_m_ComputedHashCode)) bool  m_ComputedHashCode;

/// @brief Field m_HashCode, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HashCode, put=__cordl_internal_set_m_HashCode)) int32_t  m_HashCode;

/// @brief Method Equals, addr 0xac566f4, size 0xc0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  comparand) ;

/// @brief Method GetHashCode, addr 0xac5665c, size 0x98, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Match, addr 0xac56044, size 0x70, virtual false, abstract: false, final false
inline bool Match(::StringW  host, int32_t  port, ::StringW  authenticationType) ;

static inline ::System::Net::CredentialHostKey* New_ctor(::StringW  host, int32_t  port, ::StringW  authenticationType) ;

/// @brief Method ToString, addr 0xac567b4, size 0x210, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get_AuthenticationType() const;

constexpr ::StringW& __cordl_internal_get_AuthenticationType() ;

constexpr ::StringW const& __cordl_internal_get_Host() const;

constexpr ::StringW& __cordl_internal_get_Host() ;

constexpr int32_t const& __cordl_internal_get_Port() const;

constexpr int32_t& __cordl_internal_get_Port() ;

constexpr bool const& __cordl_internal_get_m_ComputedHashCode() const;

constexpr bool& __cordl_internal_get_m_ComputedHashCode() ;

constexpr int32_t const& __cordl_internal_get_m_HashCode() const;

constexpr int32_t& __cordl_internal_get_m_HashCode() ;

constexpr void __cordl_internal_set_AuthenticationType(::StringW  value) ;

constexpr void __cordl_internal_set_Host(::StringW  value) ;

constexpr void __cordl_internal_set_Port(int32_t  value) ;

constexpr void __cordl_internal_set_m_ComputedHashCode(bool  value) ;

constexpr void __cordl_internal_set_m_HashCode(int32_t  value) ;

/// @brief Method .ctor, addr 0xac55608, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::StringW  host, int32_t  port, ::StringW  authenticationType) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CredentialHostKey() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CredentialHostKey", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CredentialHostKey(CredentialHostKey && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CredentialHostKey", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CredentialHostKey(CredentialHostKey const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10489};

/// @brief Field Host, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Host;

/// @brief Field AuthenticationType, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___AuthenticationType;

/// @brief Field Port, offset: 0x20, size: 0x4, def value: None
 int32_t  ___Port;

/// @brief Field m_HashCode, offset: 0x24, size: 0x4, def value: None
 int32_t  ___m_HashCode;

/// @brief Field m_ComputedHashCode, offset: 0x28, size: 0x1, def value: None
 bool  ___m_ComputedHashCode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::CredentialHostKey, ___Host) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::CredentialHostKey, ___AuthenticationType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::CredentialHostKey, ___Port) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::CredentialHostKey, ___m_HashCode) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Net::CredentialHostKey, ___m_ComputedHashCode) == 0x28, "Offset mismatch!");

static_assert(sizeof(::System::Net::CredentialHostKey) == 0x30, "Size mismatch!");

} // namespace end def System::Net
