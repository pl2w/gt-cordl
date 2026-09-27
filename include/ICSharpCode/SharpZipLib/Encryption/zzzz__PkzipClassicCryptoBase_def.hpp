#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Encryption/PkzipClassicCryptoBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PkzipClassicCryptoBase)
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Encryption {
class PkzipClassicCryptoBase;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase*, "ICSharpCode.SharpZipLib.Encryption", "PkzipClassicCryptoBase");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Encryption {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Encryption.PkzipClassicCryptoBase
class CORDL_TYPE PkzipClassicCryptoBase : public ::System::Object {
public:
// Declarations
/// @brief Field keys, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_keys, put=__cordl_internal_set_keys)) ::ArrayW<uint32_t>  keys;

static inline ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase* New_ctor() ;

/// @brief Method Reset, addr 0x9ff8258, size 0x40, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetKeys, addr 0x9ff7f7c, size 0x148, virtual false, abstract: false, final false
inline void SetKeys(::ArrayW<uint8_t>  keyData) ;

/// @brief Method TransformByte, addr 0x9ff7f38, size 0x44, virtual false, abstract: false, final false
inline uint8_t TransformByte() ;

/// @brief Method UpdateKeys, addr 0x9ff80c4, size 0x194, virtual false, abstract: false, final false
inline void UpdateKeys(uint8_t  ch) ;

constexpr ::ArrayW<uint32_t> const& __cordl_internal_get_keys() const;

constexpr ::ArrayW<uint32_t>& __cordl_internal_get_keys() ;

constexpr void __cordl_internal_set_keys(::ArrayW<uint32_t>  value) ;

/// @brief Method .ctor, addr 0x9ff8298, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PkzipClassicCryptoBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PkzipClassicCryptoBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PkzipClassicCryptoBase(PkzipClassicCryptoBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PkzipClassicCryptoBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PkzipClassicCryptoBase(PkzipClassicCryptoBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17411};

/// @brief Field keys, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint32_t>  ___keys;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase, ___keys) == 0x10, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Encryption::PkzipClassicCryptoBase) == 0x18, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Encryption
