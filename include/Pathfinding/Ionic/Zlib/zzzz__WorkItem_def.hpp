#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zlib/WorkItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WorkItem)
namespace Pathfinding::Ionic::Zlib {
struct CompressionLevel;
}
namespace Pathfinding::Ionic::Zlib {
struct CompressionStrategy;
}
namespace Pathfinding::Ionic::Zlib {
class ZlibCodec;
}
// Forward declare root types
namespace Pathfinding::Ionic::Zlib {
class WorkItem;
}
// Write type traits
MARK_REF_T(::Pathfinding::Ionic::Zlib::WorkItem*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zlib::WorkItem*, "Pathfinding.Ionic.Zlib", "WorkItem");
// Dependencies System.Object
namespace Pathfinding::Ionic::Zlib {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zlib.WorkItem
class CORDL_TYPE WorkItem : public ::System::Object {
public:
// Declarations
/// @brief Field buffer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_buffer, put=__cordl_internal_set_buffer)) ::ArrayW<uint8_t>  buffer;

/// @brief Field compressed, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_compressed, put=__cordl_internal_set_compressed)) ::ArrayW<uint8_t>  compressed;

/// @brief Field compressedBytesAvailable, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_compressedBytesAvailable, put=__cordl_internal_set_compressedBytesAvailable)) int32_t  compressedBytesAvailable;

/// @brief Field compressor, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_compressor, put=__cordl_internal_set_compressor)) ::Pathfinding::Ionic::Zlib::ZlibCodec*  compressor;

/// @brief Field crc, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_crc, put=__cordl_internal_set_crc)) int32_t  crc;

/// @brief Field index, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Field inputBytesAvailable, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_inputBytesAvailable, put=__cordl_internal_set_inputBytesAvailable)) int32_t  inputBytesAvailable;

/// @brief Field ordinal, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_ordinal, put=__cordl_internal_set_ordinal)) int32_t  ordinal;

static inline ::Pathfinding::Ionic::Zlib::WorkItem* New_ctor(int32_t  size, ::Pathfinding::Ionic::Zlib::CompressionLevel  compressLevel, ::Pathfinding::Ionic::Zlib::CompressionStrategy  strategy, int32_t  ix) ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_buffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_buffer() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_compressed() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_compressed() ;

constexpr int32_t const& __cordl_internal_get_compressedBytesAvailable() const;

constexpr int32_t& __cordl_internal_get_compressedBytesAvailable() ;

constexpr ::Pathfinding::Ionic::Zlib::ZlibCodec* const& __cordl_internal_get_compressor() const;

constexpr ::Pathfinding::Ionic::Zlib::ZlibCodec*& __cordl_internal_get_compressor() ;

constexpr int32_t const& __cordl_internal_get_crc() const;

constexpr int32_t& __cordl_internal_get_crc() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr int32_t const& __cordl_internal_get_inputBytesAvailable() const;

constexpr int32_t& __cordl_internal_get_inputBytesAvailable() ;

constexpr int32_t const& __cordl_internal_get_ordinal() const;

constexpr int32_t& __cordl_internal_get_ordinal() ;

constexpr void __cordl_internal_set_buffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_compressed(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_compressedBytesAvailable(int32_t  value) ;

constexpr void __cordl_internal_set_compressor(::Pathfinding::Ionic::Zlib::ZlibCodec*  value) ;

constexpr void __cordl_internal_set_crc(int32_t  value) ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

constexpr void __cordl_internal_set_inputBytesAvailable(int32_t  value) ;

constexpr void __cordl_internal_set_ordinal(int32_t  value) ;

/// @brief Method .ctor, addr 0xa6aa904, size 0x14c, virtual false, abstract: false, final false
inline void _ctor(int32_t  size, ::Pathfinding::Ionic::Zlib::CompressionLevel  compressLevel, ::Pathfinding::Ionic::Zlib::CompressionStrategy  strategy, int32_t  ix) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WorkItem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WorkItem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WorkItem(WorkItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WorkItem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WorkItem(WorkItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28190};

/// @brief Field buffer, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___buffer;

/// @brief Field compressed, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___compressed;

/// @brief Field crc, offset: 0x20, size: 0x4, def value: None
 int32_t  ___crc;

/// @brief Field index, offset: 0x24, size: 0x4, def value: None
 int32_t  ___index;

/// @brief Field ordinal, offset: 0x28, size: 0x4, def value: None
 int32_t  ___ordinal;

/// @brief Field inputBytesAvailable, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___inputBytesAvailable;

/// @brief Field compressedBytesAvailable, offset: 0x30, size: 0x4, def value: None
 int32_t  ___compressedBytesAvailable;

/// @brief Field compressor, offset: 0x38, size: 0x8, def value: None
 ::Pathfinding::Ionic::Zlib::ZlibCodec*  ___compressor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Ionic::Zlib::WorkItem, ___buffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::WorkItem, ___compressed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::WorkItem, ___crc) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::WorkItem, ___index) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::WorkItem, ___ordinal) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::WorkItem, ___inputBytesAvailable) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::WorkItem, ___compressedBytesAvailable) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zlib::WorkItem, ___compressor) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Ionic::Zlib::WorkItem) == 0x40, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zlib
