#pragma once
// IWYU pragma private; include "System/Security/Principal/SecurityIdentifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Principal/zzzz__IdentityReference_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecurityIdentifier)
// Forward declare root types
namespace System::Security::Principal {
class SecurityIdentifier;
}
// Write type traits
MARK_REF_T(::System::Security::Principal::SecurityIdentifier*);
DEFINE_IL2CPP_CLASS(::System::Security::Principal::SecurityIdentifier*, "System.Security.Principal", "SecurityIdentifier");
// [ComVisible(false)]
// Dependencies System.Security.Principal.IdentityReference
namespace System::Security::Principal {
// Is value type: false
// CS Name: System.Security.Principal.SecurityIdentifier
class CORDL_TYPE SecurityIdentifier : public ::System::Security::Principal::IdentityReference {
public:
// Declarations
 __declspec(property(get=get_BinaryLength)) int32_t  BinaryLength;

/// @brief Field MaxBinaryLength, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MaxBinaryLength, put=setStaticF_MaxBinaryLength)) int32_t  MaxBinaryLength;

/// @brief Field MinBinaryLength, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MinBinaryLength, put=setStaticF_MinBinaryLength)) int32_t  MinBinaryLength;

/// @brief Field buffer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_buffer, put=__cordl_internal_set_buffer)) ::ArrayW<uint8_t>  buffer;

/// @brief Method GetBinaryForm, addr 0xa18b23c, size 0xc0, virtual false, abstract: false, final false
inline void GetBinaryForm(::ArrayW<uint8_t>  binaryForm, int32_t  offset) ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_buffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_buffer() ;

constexpr void __cordl_internal_set_buffer(::ArrayW<uint8_t>  value) ;

static inline int32_t getStaticF_MaxBinaryLength() ;

static inline int32_t getStaticF_MinBinaryLength() ;

/// @brief Method get_BinaryLength, addr 0xa18b224, size 0x18, virtual false, abstract: false, final false
inline int32_t get_BinaryLength() ;

static inline void setStaticF_MaxBinaryLength(int32_t  value) ;

static inline void setStaticF_MinBinaryLength(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SecurityIdentifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SecurityIdentifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SecurityIdentifier(SecurityIdentifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SecurityIdentifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SecurityIdentifier(SecurityIdentifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6172};

/// @brief Field buffer, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___buffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Principal::SecurityIdentifier, ___buffer) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::Security::Principal::SecurityIdentifier) == 0x18, "Size mismatch!");

} // namespace end def System::Security::Principal
