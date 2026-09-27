#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Checksum/Adler32.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Adler32)
namespace ICSharpCode::SharpZipLib::Checksum {
class IChecksum;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Checksum {
class Adler32;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Checksum::Adler32*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Checksum::Adler32*, "ICSharpCode.SharpZipLib.Checksum", "Adler32");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Checksum {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Checksum.Adler32
class CORDL_TYPE Adler32 : public ::System::Object {
public:
// Declarations
/// @brief Field BASE, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_BASE, put=setStaticF_BASE)) uint32_t  BASE;

 __declspec(property(get=get_Value)) int64_t  Value;

/// @brief Field checkValue, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_checkValue, put=__cordl_internal_set_checkValue)) uint32_t  checkValue;

/// @brief Convert operator to "::ICSharpCode::SharpZipLib::Checksum::IChecksum"
constexpr operator  ::ICSharpCode::SharpZipLib::Checksum::IChecksum*() noexcept;

static inline ::ICSharpCode::SharpZipLib::Checksum::Adler32* New_ctor() ;

/// @brief Method Reset, addr 0x9ffcd74, size 0xc, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method Update, addr 0x9ffce18, size 0xc0, virtual true, abstract: false, final true
inline void Update(::ArrayW<uint8_t>  buffer) ;

/// @brief Method Update, addr 0x9ffcd88, size 0x90, virtual true, abstract: false, final true
inline void Update(int32_t  bval) ;

/// @brief Method Update, addr 0x9ffced8, size 0x164, virtual true, abstract: false, final true
inline void Update(::System::ArraySegment_1<uint8_t>  segment) ;

constexpr uint32_t const& __cordl_internal_get_checkValue() const;

constexpr uint32_t& __cordl_internal_get_checkValue() ;

constexpr void __cordl_internal_set_checkValue(uint32_t  value) ;

/// @brief Method .ctor, addr 0x9ffcd54, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

static inline uint32_t getStaticF_BASE() ;

/// @brief Method get_Value, addr 0x9ffcd80, size 0x8, virtual true, abstract: false, final true
inline int64_t get_Value() ;

/// @brief Convert to "::ICSharpCode::SharpZipLib::Checksum::IChecksum"
constexpr ::ICSharpCode::SharpZipLib::Checksum::IChecksum* i___ICSharpCode__SharpZipLib__Checksum__IChecksum() noexcept;

static inline void setStaticF_BASE(uint32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Adler32() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Adler32", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Adler32(Adler32 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Adler32", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Adler32(Adler32 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17438};

/// @brief Field checkValue, offset: 0x10, size: 0x4, def value: None
 uint32_t  ___checkValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Checksum::Adler32, ___checkValue) == 0x10, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Checksum::Adler32) == 0x18, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Checksum
