#pragma once
// IWYU pragma private; include "System/IO/Enumeration/FileSystemEntry___fileNameBuffer_e__FixedBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(FileSystemEntry___fileNameBuffer_e__FixedBuffer)
// Forward declare root types
namespace GlobalNamespace {
struct FileSystemEntry___fileNameBuffer_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FileSystemEntry___fileNameBuffer_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FileSystemEntry___fileNameBuffer_e__FixedBuffer, "System.IO.Enumeration", "FileSystemEntry/<_fileNameBuffer>e__FixedBuffer");
// [UnsafeValueType]
// [CompilerGenerated]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.IO.Enumeration.FileSystemEntry/<_fileNameBuffer>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE FileSystemEntry___fileNameBuffer_e__FixedBuffer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr FileSystemEntry___fileNameBuffer_e__FixedBuffer() ;

// Ctor Parameters [CppParam { name: "FixedElementField", ty: "char16_t", modifiers: "", def_value: None, comment: None }]
constexpr FileSystemEntry___fileNameBuffer_e__FixedBuffer(char16_t  FixedElementField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7076};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x200};

/// @brief Field FixedElementField, offset: 0x0, size: 0x2, def value: None
 char16_t  FixedElementField;

/// @brief Size padding 0x200 - 0x2 = 0x1fe, packed as 0x1fe
 uint8_t  _cordl_size_padding[0x1fe];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FileSystemEntry___fileNameBuffer_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FileSystemEntry___fileNameBuffer_e__FixedBuffer) == 0x200, "Size mismatch!");

} // namespace end def GlobalNamespace
