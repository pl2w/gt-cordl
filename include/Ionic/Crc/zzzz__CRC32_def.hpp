#pragma once
// IWYU pragma private; include "Ionic/Crc/CRC32.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CRC32)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Ionic::Crc {
class CRC32;
}
// Write type traits
MARK_REF_T(::Ionic::Crc::CRC32*);
DEFINE_IL2CPP_CLASS(::Ionic::Crc::CRC32*, "Ionic.Crc", "CRC32");
// [Guid("ebc25cf6-9120-4283-b972-0e5520d0000C")]
// [ComVisible(true)]
// [ClassInterface((System.Runtime.InteropServices.ClassInterfaceType)1)]
// Dependencies System.Object
namespace Ionic::Crc {
// Is value type: false
// CS Name: Ionic.Crc.CRC32
class CORDL_TYPE CRC32 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Crc32Result)) int32_t  Crc32Result;

 __declspec(property(get=get_TotalBytesRead)) int64_t  TotalBytesRead;

/// @brief Field _TotalBytesRead, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__TotalBytesRead, put=__cordl_internal_set__TotalBytesRead)) int64_t  _TotalBytesRead;

/// @brief Field _register, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__register, put=__cordl_internal_set__register)) uint32_t  _register;

/// @brief Field crc32Table, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_crc32Table, put=__cordl_internal_set_crc32Table)) ::ArrayW<uint32_t>  crc32Table;

/// @brief Field dwPolynomial, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_dwPolynomial, put=__cordl_internal_set_dwPolynomial)) uint32_t  dwPolynomial;

/// @brief Field reverseBits, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_reverseBits, put=__cordl_internal_set_reverseBits)) bool  reverseBits;

/// @brief Method Combine, addr 0xa7a00ac, size 0x14c, virtual false, abstract: false, final false
inline void Combine(int32_t  crc, int32_t  length) ;

/// @brief Method ComputeCrc32, addr 0xa79fd2c, size 0x4, virtual false, abstract: false, final false
inline int32_t ComputeCrc32(int32_t  W, uint8_t  B) ;

/// @brief Method GenerateLookupTable, addr 0xa79feb8, size 0x124, virtual false, abstract: false, final false
inline void GenerateLookupTable() ;

/// @brief Method GetCrc32, addr 0xa79fba0, size 0x8, virtual false, abstract: false, final false
inline int32_t GetCrc32(::System::IO::Stream*  input) ;

/// @brief Method GetCrc32AndCopy, addr 0xa79fba8, size 0x184, virtual false, abstract: false, final false
inline int32_t GetCrc32AndCopy(::System::IO::Stream*  input, ::System::IO::Stream*  output) ;

static inline ::Ionic::Crc::CRC32* New_ctor() ;

static inline ::Ionic::Crc::CRC32* New_ctor(int32_t  polynomial, bool  reverseBits) ;

static inline ::Ionic::Crc::CRC32* New_ctor(bool  reverseBits) ;

/// @brief Method Reset, addr 0xa7a0274, size 0xc, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ReverseBits, addr 0xa79fe64, size 0x8, virtual false, abstract: false, final false
static inline uint32_t ReverseBits(uint32_t  data) ;

/// @brief Method ReverseBits, addr 0xa79fe6c, size 0x4c, virtual false, abstract: false, final false
static inline uint8_t ReverseBits(uint8_t  data) ;

/// @brief Method SlurpBlock, addr 0xa79bd50, size 0xfc, virtual false, abstract: false, final false
inline void SlurpBlock(::ArrayW<uint8_t>  block, int32_t  offset, int32_t  count) ;

/// @brief Method UpdateCRC, addr 0xa79fd68, size 0x74, virtual false, abstract: false, final false
inline void UpdateCRC(uint8_t  b) ;

/// @brief Method UpdateCRC, addr 0xa79fddc, size 0x88, virtual false, abstract: false, final false
inline void UpdateCRC(uint8_t  b, int32_t  n) ;

/// @brief Method _InternalComputeCrc32, addr 0xa79fd30, size 0x38, virtual false, abstract: false, final false
inline int32_t _InternalComputeCrc32(uint32_t  W, uint8_t  B) ;

constexpr int64_t const& __cordl_internal_get__TotalBytesRead() const;

constexpr int64_t& __cordl_internal_get__TotalBytesRead() ;

constexpr uint32_t const& __cordl_internal_get__register() const;

constexpr uint32_t& __cordl_internal_get__register() ;

constexpr ::ArrayW<uint32_t> const& __cordl_internal_get_crc32Table() const;

constexpr ::ArrayW<uint32_t>& __cordl_internal_get_crc32Table() ;

constexpr uint32_t const& __cordl_internal_get_dwPolynomial() const;

constexpr uint32_t& __cordl_internal_get_dwPolynomial() ;

constexpr bool const& __cordl_internal_get_reverseBits() const;

constexpr bool& __cordl_internal_get_reverseBits() ;

constexpr void __cordl_internal_set__TotalBytesRead(int64_t  value) ;

constexpr void __cordl_internal_set__register(uint32_t  value) ;

constexpr void __cordl_internal_set_crc32Table(::ArrayW<uint32_t>  value) ;

constexpr void __cordl_internal_set_dwPolynomial(uint32_t  value) ;

constexpr void __cordl_internal_set_reverseBits(bool  value) ;

/// @brief Method .ctor, addr 0xa79b94c, size 0x34, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa7a0238, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(int32_t  polynomial, bool  reverseBits) ;

/// @brief Method .ctor, addr 0xa7a01f8, size 0x40, virtual false, abstract: false, final false
inline void _ctor(bool  reverseBits) ;

/// @brief Method get_Crc32Result, addr 0xa79b7e0, size 0xc, virtual false, abstract: false, final false
inline int32_t get_Crc32Result() ;

/// @brief Method get_TotalBytesRead, addr 0xa79fb98, size 0x8, virtual false, abstract: false, final false
inline int64_t get_TotalBytesRead() ;

/// @brief Method gf2_matrix_square, addr 0xa7a0038, size 0x74, virtual false, abstract: false, final false
inline void gf2_matrix_square(::ArrayW<uint32_t>  square, ::ArrayW<uint32_t>  mat) ;

/// @brief Method gf2_matrix_times, addr 0xa79ffdc, size 0x5c, virtual false, abstract: false, final false
inline uint32_t gf2_matrix_times(::ArrayW<uint32_t>  matrix, uint32_t  vec) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CRC32() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CRC32", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CRC32(CRC32 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CRC32", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CRC32(CRC32 const& ) = delete;

/// @brief Field BUFFER_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  BUFFER_SIZE{static_cast<int32_t>(0x2000)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19482};

/// @brief Field dwPolynomial, offset: 0x10, size: 0x4, def value: None
 uint32_t  ___dwPolynomial;

/// @brief Field _TotalBytesRead, offset: 0x18, size: 0x8, def value: None
 int64_t  ____TotalBytesRead;

/// @brief Field reverseBits, offset: 0x20, size: 0x1, def value: None
 bool  ___reverseBits;

/// @brief Field crc32Table, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint32_t>  ___crc32Table;

/// @brief Field _register, offset: 0x30, size: 0x4, def value: None
 uint32_t  ____register;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Ionic::Crc::CRC32, ___dwPolynomial) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Ionic::Crc::CRC32, ____TotalBytesRead) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Ionic::Crc::CRC32, ___reverseBits) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Ionic::Crc::CRC32, ___crc32Table) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Ionic::Crc::CRC32, ____register) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Ionic::Crc::CRC32) == 0x38, "Size mismatch!");

} // namespace end def Ionic::Crc
