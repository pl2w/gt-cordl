#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Checksum/Crc32.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Crc32)
namespace ICSharpCode::SharpZipLib::Checksum {
class IChecksum;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Checksum {
class Crc32;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Checksum::Crc32*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Checksum::Crc32*, "ICSharpCode.SharpZipLib.Checksum", "Crc32");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Checksum {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Checksum.Crc32
class CORDL_TYPE Crc32 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Value)) int64_t  Value;

/// @brief Field checkValue, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_checkValue, put=__cordl_internal_set_checkValue)) uint32_t  checkValue;

/// @brief Field crcInit, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_crcInit, put=setStaticF_crcInit)) uint32_t  crcInit;

/// @brief Field crcTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_crcTable, put=setStaticF_crcTable)) ::ArrayW<uint32_t>  crcTable;

/// @brief Field crcXor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_crcXor, put=setStaticF_crcXor)) uint32_t  crcXor;

/// @brief Convert operator to "::ICSharpCode::SharpZipLib::Checksum::IChecksum"
constexpr operator  ::ICSharpCode::SharpZipLib::Checksum::IChecksum*() noexcept;

/// @brief Method ComputeCrc32, addr 0x9ffd550, size 0x90, virtual false, abstract: false, final false
static inline uint32_t ComputeCrc32(uint32_t  oldCrc, uint8_t  bval) ;

static inline ::ICSharpCode::SharpZipLib::Checksum::Crc32* New_ctor() ;

/// @brief Method Reset, addr 0x9ffd5e0, size 0x60, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method SlowUpdateLoop, addr 0x9ffd83c, size 0xe8, virtual false, abstract: false, final false
inline void SlowUpdateLoop(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  end) ;

/// @brief Method Update, addr 0x9ffd6e8, size 0x5c, virtual true, abstract: false, final true
inline void Update(::ArrayW<uint8_t>  buffer) ;

/// @brief Method Update, addr 0x9ffd640, size 0xa8, virtual true, abstract: false, final true
inline void Update(int32_t  bval) ;

/// @brief Method Update, addr 0x9ffd744, size 0xf8, virtual false, abstract: false, final false
inline void Update(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  count) ;

/// @brief Method Update, addr 0x9ff7134, size 0x94, virtual true, abstract: false, final true
inline void Update(::System::ArraySegment_1<uint8_t>  segment) ;

constexpr uint32_t const& __cordl_internal_get_checkValue() const;

constexpr uint32_t& __cordl_internal_get_checkValue() ;

constexpr void __cordl_internal_set_checkValue(uint32_t  value) ;

/// @brief Method .ctor, addr 0x9ff7474, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline uint32_t getStaticF_crcInit() ;

static inline ::ArrayW<uint32_t> getStaticF_crcTable() ;

static inline uint32_t getStaticF_crcXor() ;

/// @brief Method get_Value, addr 0x9ff7490, size 0x64, virtual true, abstract: false, final true
inline int64_t get_Value() ;

/// @brief Convert to "::ICSharpCode::SharpZipLib::Checksum::IChecksum"
constexpr ::ICSharpCode::SharpZipLib::Checksum::IChecksum* i___ICSharpCode__SharpZipLib__Checksum__IChecksum() noexcept;

static inline void setStaticF_crcInit(uint32_t  value) ;

static inline void setStaticF_crcTable(::ArrayW<uint32_t>  value) ;

static inline void setStaticF_crcXor(uint32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Crc32() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Crc32", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Crc32(Crc32 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Crc32", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Crc32(Crc32 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17440};

/// @brief Field checkValue, offset: 0x10, size: 0x4, def value: None
 uint32_t  ___checkValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Checksum::Crc32, ___checkValue) == 0x10, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Checksum::Crc32) == 0x18, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Checksum
