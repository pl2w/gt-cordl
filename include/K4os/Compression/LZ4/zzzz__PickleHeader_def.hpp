#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/PickleHeader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PickleHeader)
// Forward declare root types
namespace K4os::Compression::LZ4 {
struct PickleHeader;
}
// Write type traits
MARK_VAL_T(::K4os::Compression::LZ4::PickleHeader);
DEFINE_IL2CPP_CLASS(::K4os::Compression::LZ4::PickleHeader, "K4os.Compression.LZ4", "PickleHeader");
// [IsReadOnly]
// Dependencies 
namespace K4os::Compression::LZ4 {
// Is value type: true
// CS Name: K4os.Compression.LZ4.PickleHeader
#pragma pack(push, 1)
struct CORDL_TYPE PickleHeader {
public:
// Declarations
 __declspec(property(get=get_DataOffset)) uint16_t  DataOffset;

 __declspec(property(get=get_Flags)) uint16_t  Flags;

 __declspec(property(get=get_IsCompressed)) bool  IsCompressed;

 __declspec(property(get=get_ResultLength)) int32_t  ResultLength;

/// @brief Method .ctor, addr 0x9cba638, size 0x14, virtual false, abstract: false, final false
inline void _ctor(uint16_t  dataOffset, int32_t  resultLength, bool  compressed) ;

/// [CompilerGenerated]
/// @brief Method get_DataOffset, addr 0x9cba64c, size 0x8, virtual false, abstract: false, final false
inline uint16_t get_DataOffset() ;

/// [CompilerGenerated]
/// @brief Method get_Flags, addr 0x9cba654, size 0x8, virtual false, abstract: false, final false
inline uint16_t get_Flags() ;

/// @brief Method get_IsCompressed, addr 0x9cba420, size 0xc, virtual false, abstract: false, final false
inline bool get_IsCompressed() ;

/// [CompilerGenerated]
/// @brief Method get_ResultLength, addr 0x9cba65c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ResultLength() ;

// Ctor Parameters []
// @brief default ctor
constexpr PickleHeader() ;

// Ctor Parameters [CppParam { name: "_DataOffset_k__BackingField", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Flags_k__BackingField", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ResultLength_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PickleHeader(uint16_t  _DataOffset_k__BackingField, uint16_t  _Flags_k__BackingField, int32_t  _ResultLength_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31570};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [CompilerGenerated]
/// @brief Field <DataOffset>k__BackingField, offset: 0x0, size: 0x2, def value: None
 uint16_t  _DataOffset_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Flags>k__BackingField, offset: 0x2, size: 0x2, def value: None
 uint16_t  _Flags_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ResultLength>k__BackingField, offset: 0x4, size: 0x4, def value: None
 int32_t  _ResultLength_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::K4os::Compression::LZ4::PickleHeader, _DataOffset_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::K4os::Compression::LZ4::PickleHeader, _Flags_k__BackingField) == 0x2, "Offset mismatch!");

static_assert(offsetof(::K4os::Compression::LZ4::PickleHeader, _ResultLength_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(sizeof(::K4os::Compression::LZ4::PickleHeader) == 0x8, "Size mismatch!");

} // namespace end def K4os::Compression::LZ4
