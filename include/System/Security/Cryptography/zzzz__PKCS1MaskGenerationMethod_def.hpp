#pragma once
// IWYU pragma private; include "System/Security/Cryptography/PKCS1MaskGenerationMethod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__MaskGenerationMethod_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PKCS1MaskGenerationMethod)
// Forward declare root types
namespace System::Security::Cryptography {
class PKCS1MaskGenerationMethod;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::PKCS1MaskGenerationMethod*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::PKCS1MaskGenerationMethod*, "System.Security.Cryptography", "PKCS1MaskGenerationMethod");
// [ComVisible(true)]
// Dependencies System.Security.Cryptography.MaskGenerationMethod
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.PKCS1MaskGenerationMethod
class CORDL_TYPE PKCS1MaskGenerationMethod : public ::System::Security::Cryptography::MaskGenerationMethod {
public:
// Declarations
 __declspec(property(get=get_HashName, put=set_HashName)) ::StringW  HashName;

/// @brief Field HashNameValue, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_HashNameValue, put=__cordl_internal_set_HashNameValue)) ::StringW  HashNameValue;

/// @brief Method GenerateMask, addr 0xa16b038, size 0x80, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> GenerateMask(::ArrayW<uint8_t>  rgbSeed, int32_t  cbReturn) ;

static inline ::System::Security::Cryptography::PKCS1MaskGenerationMethod* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_HashNameValue() const;

constexpr ::StringW& __cordl_internal_get_HashNameValue() ;

constexpr void __cordl_internal_set_HashNameValue(::StringW  value) ;

/// @brief Method .ctor, addr 0xa16af64, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HashName, addr 0xa16afbc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_HashName() ;

/// @brief Method set_HashName, addr 0xa16afc4, size 0x74, virtual false, abstract: false, final false
inline void set_HashName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PKCS1MaskGenerationMethod() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PKCS1MaskGenerationMethod", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PKCS1MaskGenerationMethod(PKCS1MaskGenerationMethod && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PKCS1MaskGenerationMethod", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PKCS1MaskGenerationMethod(PKCS1MaskGenerationMethod const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6105};

/// @brief Field HashNameValue, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___HashNameValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::PKCS1MaskGenerationMethod, ___HashNameValue) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::Security::Cryptography::PKCS1MaskGenerationMethod) == 0x18, "Size mismatch!");

} // namespace end def System::Security::Cryptography
