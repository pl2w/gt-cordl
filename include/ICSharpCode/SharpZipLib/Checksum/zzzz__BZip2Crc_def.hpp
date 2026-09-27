#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Checksum/BZip2Crc.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BZip2Crc)
namespace ICSharpCode::SharpZipLib::Checksum {
class IChecksum;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Checksum {
class BZip2Crc;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Checksum::BZip2Crc*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Checksum::BZip2Crc*, "ICSharpCode.SharpZipLib.Checksum", "BZip2Crc");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Checksum {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Checksum.BZip2Crc
class CORDL_TYPE BZip2Crc : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Value)) int64_t  Value;

/// @brief Field checkValue, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_checkValue, put=__cordl_internal_set_checkValue)) uint32_t  checkValue;

/// @brief Field crcTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_crcTable, put=setStaticF_crcTable)) ::ArrayW<uint32_t>  crcTable;

/// @brief Convert operator to "::ICSharpCode::SharpZipLib::Checksum::IChecksum"
constexpr operator  ::ICSharpCode::SharpZipLib::Checksum::IChecksum*() noexcept;

static inline ::ICSharpCode::SharpZipLib::Checksum::BZip2Crc* New_ctor() ;

/// @brief Method Reset, addr 0x9ffd0a8, size 0xc, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method SlowUpdateLoop, addr 0x9ffd344, size 0xd8, virtual false, abstract: false, final false
inline void SlowUpdateLoop(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  end) ;

/// @brief Method Update, addr 0x9ffd15c, size 0x5c, virtual true, abstract: false, final true
inline void Update(::ArrayW<uint8_t>  buffer) ;

/// @brief Method Update, addr 0x9ffd0c0, size 0x9c, virtual true, abstract: false, final true
inline void Update(int32_t  bval) ;

/// @brief Method Update, addr 0x9ffd1b8, size 0xf8, virtual false, abstract: false, final false
inline void Update(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  count) ;

/// @brief Method Update, addr 0x9ffd2b0, size 0x94, virtual true, abstract: false, final true
inline void Update(::System::ArraySegment_1<uint8_t>  segment) ;

constexpr uint32_t const& __cordl_internal_get_checkValue() const;

constexpr uint32_t& __cordl_internal_get_checkValue() ;

constexpr void __cordl_internal_set_checkValue(uint32_t  value) ;

/// @brief Method .ctor, addr 0x9ffd088, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<uint32_t> getStaticF_crcTable() ;

/// @brief Method get_Value, addr 0x9ffd0b4, size 0xc, virtual true, abstract: false, final true
inline int64_t get_Value() ;

/// @brief Convert to "::ICSharpCode::SharpZipLib::Checksum::IChecksum"
constexpr ::ICSharpCode::SharpZipLib::Checksum::IChecksum* i___ICSharpCode__SharpZipLib__Checksum__IChecksum() noexcept;

static inline void setStaticF_crcTable(::ArrayW<uint32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BZip2Crc() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BZip2Crc", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BZip2Crc(BZip2Crc && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BZip2Crc", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BZip2Crc(BZip2Crc const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17439};

/// @brief Field crcInit offset 0xffffffff size 0x4
static constexpr uint32_t  crcInit{static_cast<uint32_t>(0xffffffffu)};

/// @brief Field checkValue, offset: 0x10, size: 0x4, def value: None
 uint32_t  ___checkValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Checksum::BZip2Crc, ___checkValue) == 0x10, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Checksum::BZip2Crc) == 0x18, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Checksum
