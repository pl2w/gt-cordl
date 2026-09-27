#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/DescriptorData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DescriptorData)
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip {
class DescriptorData;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::DescriptorData*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::DescriptorData*, "ICSharpCode.SharpZipLib.Zip", "DescriptorData");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Zip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.DescriptorData
class CORDL_TYPE DescriptorData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CompressedSize, put=set_CompressedSize)) int64_t  CompressedSize;

 __declspec(property(get=get_Crc, put=set_Crc)) int64_t  Crc;

 __declspec(property(get=get_Size, put=set_Size)) int64_t  Size;

/// @brief Field compressedSize, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_compressedSize, put=__cordl_internal_set_compressedSize)) int64_t  compressedSize;

/// @brief Field crc, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_crc, put=__cordl_internal_set_crc)) int64_t  crc;

/// @brief Field size, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_size, put=__cordl_internal_set_size)) int64_t  size;

static inline ::ICSharpCode::SharpZipLib::Zip::DescriptorData* New_ctor() ;

constexpr int64_t const& __cordl_internal_get_compressedSize() const;

constexpr int64_t& __cordl_internal_get_compressedSize() ;

constexpr int64_t const& __cordl_internal_get_crc() const;

constexpr int64_t& __cordl_internal_get_crc() ;

constexpr int64_t const& __cordl_internal_get_size() const;

constexpr int64_t& __cordl_internal_get_size() ;

constexpr void __cordl_internal_set_compressedSize(int64_t  value) ;

constexpr void __cordl_internal_set_crc(int64_t  value) ;

constexpr void __cordl_internal_set_size(int64_t  value) ;

/// @brief Method .ctor, addr 0x9f87444, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CompressedSize, addr 0x9f8f188, size 0x8, virtual false, abstract: false, final false
inline int64_t get_CompressedSize() ;

/// @brief Method get_Crc, addr 0x9f8f1a8, size 0x8, virtual false, abstract: false, final false
inline int64_t get_Crc() ;

/// @brief Method get_Size, addr 0x9f8f198, size 0x8, virtual false, abstract: false, final false
inline int64_t get_Size() ;

/// @brief Method set_CompressedSize, addr 0x9f8f190, size 0x8, virtual false, abstract: false, final false
inline void set_CompressedSize(int64_t  value) ;

/// @brief Method set_Crc, addr 0x9f8f1b0, size 0xc, virtual false, abstract: false, final false
inline void set_Crc(int64_t  value) ;

/// @brief Method set_Size, addr 0x9f8f1a0, size 0x8, virtual false, abstract: false, final false
inline void set_Size(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DescriptorData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DescriptorData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DescriptorData(DescriptorData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DescriptorData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DescriptorData(DescriptorData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17361};

/// @brief Field size, offset: 0x10, size: 0x8, def value: None
 int64_t  ___size;

/// @brief Field compressedSize, offset: 0x18, size: 0x8, def value: None
 int64_t  ___compressedSize;

/// @brief Field crc, offset: 0x20, size: 0x8, def value: None
 int64_t  ___crc;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::DescriptorData, ___size) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::DescriptorData, ___compressedSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::DescriptorData, ___crc) == 0x20, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::DescriptorData) == 0x28, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip
