#pragma once
// IWYU pragma private; include "System/Security/Cryptography/MaskGenerationMethod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MaskGenerationMethod)
// Forward declare root types
namespace System::Security::Cryptography {
class MaskGenerationMethod;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::MaskGenerationMethod*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::MaskGenerationMethod*, "System.Security.Cryptography", "MaskGenerationMethod");
// [ComVisible(true)]
// Dependencies System.Object
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.MaskGenerationMethod
class CORDL_TYPE MaskGenerationMethod : public ::System::Object {
public:
// Declarations
/// [ComVisible(true)]
/// @brief Method GenerateMask, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<uint8_t> GenerateMask(::ArrayW<uint8_t>  rgbSeed, int32_t  cbReturn) ;

static inline ::System::Security::Cryptography::MaskGenerationMethod* New_ctor() ;

/// @brief Method .ctor, addr 0xa169ac4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaskGenerationMethod() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaskGenerationMethod", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MaskGenerationMethod(MaskGenerationMethod && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaskGenerationMethod", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaskGenerationMethod(MaskGenerationMethod const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6102};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Security::Cryptography::MaskGenerationMethod) == 0x10, "Size mismatch!");

} // namespace end def System::Security::Cryptography
