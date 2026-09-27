#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Checksum/CrcUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CrcUtilities)
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Checksum {
class CrcUtilities;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Checksum::CrcUtilities*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Checksum::CrcUtilities*, "ICSharpCode.SharpZipLib.Checksum", "CrcUtilities");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Checksum {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Checksum.CrcUtilities
class CORDL_TYPE CrcUtilities : public ::System::Object {
public:
// Declarations
/// @brief Method GenerateSlicingLookupTable, addr 0x9ffd480, size 0xd0, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t> GenerateSlicingLookupTable(uint32_t  polynomial, bool  isReversed) ;

/// @brief Method UpdateDataCommon, addr 0x9ffda88, size 0x2ac, virtual false, abstract: false, final false
static inline uint32_t UpdateDataCommon(::ArrayW<uint8_t>  input, int32_t  offset, ::ArrayW<uint32_t>  crcTable, uint8_t  x1, uint8_t  x2, uint8_t  x3, uint8_t  x4) ;

/// @brief Method UpdateDataForNormalPoly, addr 0x9ffd994, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t UpdateDataForNormalPoly(::ArrayW<uint8_t>  input, int32_t  offset, ::ArrayW<uint32_t>  crcTable, uint32_t  checkValue) ;

/// @brief Method UpdateDataForReversedPoly, addr 0x9ffda10, size 0x78, virtual false, abstract: false, final false
static inline uint32_t UpdateDataForReversedPoly(::ArrayW<uint8_t>  input, int32_t  offset, ::ArrayW<uint32_t>  crcTable, uint32_t  checkValue) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrcUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrcUtilities", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrcUtilities(CrcUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrcUtilities", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrcUtilities(CrcUtilities const& ) = delete;

/// @brief Field SlicingDegree offset 0xffffffff size 0x4
static constexpr int32_t  SlicingDegree{static_cast<int32_t>(0x10)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17441};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::Checksum::CrcUtilities) == 0x10, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Checksum
