#pragma once
// IWYU pragma private; include "System/Security/Cryptography/AsymmetricKeyExchangeFormatter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsymmetricKeyExchangeFormatter)
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Security::Cryptography {
class AsymmetricKeyExchangeFormatter;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::AsymmetricKeyExchangeFormatter*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::AsymmetricKeyExchangeFormatter*, "System.Security.Cryptography", "AsymmetricKeyExchangeFormatter");
// [ComVisible(true)]
// Dependencies System.Object
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.AsymmetricKeyExchangeFormatter
class CORDL_TYPE AsymmetricKeyExchangeFormatter : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Parameters)) ::StringW  Parameters;

/// @brief Method CreateKeyExchange, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<uint8_t> CreateKeyExchange(::ArrayW<uint8_t>  data) ;

/// @brief Method CreateKeyExchange, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<uint8_t> CreateKeyExchange(::ArrayW<uint8_t>  data, ::System::Type*  symAlgType) ;

static inline ::System::Security::Cryptography::AsymmetricKeyExchangeFormatter* New_ctor() ;

/// @brief Method SetKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm*  key) ;

/// @brief Method .ctor, addr 0xa162894, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Parameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_Parameters() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsymmetricKeyExchangeFormatter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsymmetricKeyExchangeFormatter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsymmetricKeyExchangeFormatter(AsymmetricKeyExchangeFormatter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsymmetricKeyExchangeFormatter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsymmetricKeyExchangeFormatter(AsymmetricKeyExchangeFormatter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6071};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Security::Cryptography::AsymmetricKeyExchangeFormatter) == 0x10, "Size mismatch!");

} // namespace end def System::Security::Cryptography
