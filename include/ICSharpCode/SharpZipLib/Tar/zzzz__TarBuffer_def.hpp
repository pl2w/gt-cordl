#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Tar/TarBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TarBuffer)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Tar {
class TarBuffer;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Tar::TarBuffer*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Tar::TarBuffer*, "ICSharpCode.SharpZipLib.Tar", "TarBuffer");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Tar {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Tar.TarBuffer
class CORDL_TYPE TarBuffer : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_BlockFactor)) int32_t  BlockFactor;

 __declspec(property(get=get_CurrentBlock)) int32_t  CurrentBlock;

 __declspec(property(get=get_CurrentRecord)) int32_t  CurrentRecord;

 __declspec(property(get=get_IsStreamOwner, put=set_IsStreamOwner)) bool  IsStreamOwner;

 __declspec(property(get=get_RecordSize)) int32_t  RecordSize;

/// @brief Field <IsStreamOwner>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsStreamOwner_k__BackingField, put=__cordl_internal_set__IsStreamOwner_k__BackingField)) bool  _IsStreamOwner_k__BackingField;

/// @brief Field blockFactor, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_blockFactor, put=__cordl_internal_set_blockFactor)) int32_t  blockFactor;

/// @brief Field currentBlockIndex, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentBlockIndex, put=__cordl_internal_set_currentBlockIndex)) int32_t  currentBlockIndex;

/// @brief Field currentRecordIndex, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentRecordIndex, put=__cordl_internal_set_currentRecordIndex)) int32_t  currentRecordIndex;

/// @brief Field inputStream, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputStream, put=__cordl_internal_set_inputStream)) ::System::IO::Stream*  inputStream;

/// @brief Field outputStream, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_outputStream, put=__cordl_internal_set_outputStream)) ::System::IO::Stream*  outputStream;

/// @brief Field recordBuffer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_recordBuffer, put=__cordl_internal_set_recordBuffer)) ::ArrayW<uint8_t>  recordBuffer;

/// @brief Field recordSize, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_recordSize, put=__cordl_internal_set_recordSize)) int32_t  recordSize;

/// @brief Method Close, addr 0x9fef590, size 0x74, virtual false, abstract: false, final false
inline void Close() ;

/// @brief Method CreateInputTarBuffer, addr 0x9fee928, size 0x58, virtual false, abstract: false, final false
static inline ::ICSharpCode::SharpZipLib::Tar::TarBuffer* CreateInputTarBuffer(::System::IO::Stream*  inputStream) ;

/// @brief Method CreateInputTarBuffer, addr 0x9fee980, size 0x138, virtual false, abstract: false, final false
static inline ::ICSharpCode::SharpZipLib::Tar::TarBuffer* CreateInputTarBuffer(::System::IO::Stream*  inputStream, int32_t  blockFactor) ;

/// @brief Method CreateOutputTarBuffer, addr 0x9feeb44, size 0x58, virtual false, abstract: false, final false
static inline ::ICSharpCode::SharpZipLib::Tar::TarBuffer* CreateOutputTarBuffer(::System::IO::Stream*  outputStream) ;

/// @brief Method CreateOutputTarBuffer, addr 0x9feeb9c, size 0x138, virtual false, abstract: false, final false
static inline ::ICSharpCode::SharpZipLib::Tar::TarBuffer* CreateOutputTarBuffer(::System::IO::Stream*  outputStream, int32_t  blockFactor) ;

/// [Obsolete("Use BlockFactor property instead")]
/// @brief Method GetBlockFactor, addr 0x9fee904, size 0x8, virtual false, abstract: false, final false
inline int32_t GetBlockFactor() ;

/// [Obsolete("Use CurrentBlock property instead")]
/// @brief Method GetCurrentBlockNum, addr 0x9fef0c0, size 0x8, virtual false, abstract: false, final false
inline int32_t GetCurrentBlockNum() ;

/// [Obsolete("Use CurrentRecord property instead")]
/// @brief Method GetCurrentRecordNum, addr 0x9fef0d0, size 0x8, virtual false, abstract: false, final false
inline int32_t GetCurrentRecordNum() ;

/// [Obsolete("Use RecordSize property instead")]
/// @brief Method GetRecordSize, addr 0x9fee8f4, size 0x8, virtual false, abstract: false, final false
inline int32_t GetRecordSize() ;

/// @brief Method Initialize, addr 0x9feeab8, size 0x8c, virtual false, abstract: false, final false
inline void Initialize(int32_t  archiveBlockFactor) ;

/// [Obsolete("Use IsEndOfArchiveBlock instead")]
/// @brief Method IsEOFBlock, addr 0x9feecd4, size 0xd0, virtual false, abstract: false, final false
inline bool IsEOFBlock(::ArrayW<uint8_t>  block) ;

/// @brief Method IsEndOfArchiveBlock, addr 0x9feeda4, size 0xd0, virtual false, abstract: false, final false
static inline bool IsEndOfArchiveBlock(::ArrayW<uint8_t>  block) ;

static inline ::ICSharpCode::SharpZipLib::Tar::TarBuffer* New_ctor() ;

/// @brief Method ReadBlock, addr 0x9feefc0, size 0xe8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> ReadBlock() ;

/// @brief Method ReadRecord, addr 0x9feeefc, size 0xc4, virtual false, abstract: false, final false
inline bool ReadRecord() ;

/// @brief Method SkipBlock, addr 0x9feee74, size 0x80, virtual false, abstract: false, final false
inline void SkipBlock() ;

/// @brief Method WriteBlock, addr 0x9fef0d8, size 0x184, virtual false, abstract: false, final false
inline void WriteBlock(::ArrayW<uint8_t>  block) ;

/// @brief Method WriteBlock, addr 0x9fef2fc, size 0x1f4, virtual false, abstract: false, final false
inline void WriteBlock(::ArrayW<uint8_t>  buffer, int32_t  offset) ;

/// @brief Method WriteFinalRecord, addr 0x9fef4f0, size 0xa0, virtual false, abstract: false, final false
inline void WriteFinalRecord() ;

/// @brief Method WriteRecord, addr 0x9fef25c, size 0xa0, virtual false, abstract: false, final false
inline void WriteRecord() ;

constexpr bool const& __cordl_internal_get__IsStreamOwner_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsStreamOwner_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_blockFactor() const;

constexpr int32_t& __cordl_internal_get_blockFactor() ;

constexpr int32_t const& __cordl_internal_get_currentBlockIndex() const;

constexpr int32_t& __cordl_internal_get_currentBlockIndex() ;

constexpr int32_t const& __cordl_internal_get_currentRecordIndex() const;

constexpr int32_t& __cordl_internal_get_currentRecordIndex() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get_inputStream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get_inputStream() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get_outputStream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get_outputStream() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_recordBuffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_recordBuffer() ;

constexpr int32_t const& __cordl_internal_get_recordSize() const;

constexpr int32_t& __cordl_internal_get_recordSize() ;

constexpr void __cordl_internal_set__IsStreamOwner_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_blockFactor(int32_t  value) ;

constexpr void __cordl_internal_set_currentBlockIndex(int32_t  value) ;

constexpr void __cordl_internal_set_currentRecordIndex(int32_t  value) ;

constexpr void __cordl_internal_set_inputStream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set_outputStream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set_recordBuffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_recordSize(int32_t  value) ;

/// @brief Method .ctor, addr 0x9fee90c, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BlockFactor, addr 0x9fee8fc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_BlockFactor() ;

/// @brief Method get_CurrentBlock, addr 0x9fef0a8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CurrentBlock() ;

/// @brief Method get_CurrentRecord, addr 0x9fef0c8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CurrentRecord() ;

/// [CompilerGenerated]
/// @brief Method get_IsStreamOwner, addr 0x9fef0b0, size 0x8, virtual false, abstract: false, final false
inline bool get_IsStreamOwner() ;

/// @brief Method get_RecordSize, addr 0x9fee8ec, size 0x8, virtual false, abstract: false, final false
inline int32_t get_RecordSize() ;

/// [CompilerGenerated]
/// @brief Method set_IsStreamOwner, addr 0x9fef0b8, size 0x8, virtual false, abstract: false, final false
inline void set_IsStreamOwner(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TarBuffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TarBuffer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TarBuffer(TarBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TarBuffer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TarBuffer(TarBuffer const& ) = delete;

/// @brief Field BlockSize offset 0xffffffff size 0x4
static constexpr int32_t  BlockSize{static_cast<int32_t>(0x200)};

/// @brief Field DefaultBlockFactor offset 0xffffffff size 0x4
static constexpr int32_t  DefaultBlockFactor{static_cast<int32_t>(0x14)};

/// @brief Field DefaultRecordSize offset 0xffffffff size 0x4
static constexpr int32_t  DefaultRecordSize{static_cast<int32_t>(0x2800)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17391};

/// [CompilerGenerated]
/// @brief Field <IsStreamOwner>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____IsStreamOwner_k__BackingField;

/// @brief Field inputStream, offset: 0x18, size: 0x8, def value: None
 ::System::IO::Stream*  ___inputStream;

/// @brief Field outputStream, offset: 0x20, size: 0x8, def value: None
 ::System::IO::Stream*  ___outputStream;

/// @brief Field recordBuffer, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___recordBuffer;

/// @brief Field currentBlockIndex, offset: 0x30, size: 0x4, def value: None
 int32_t  ___currentBlockIndex;

/// @brief Field currentRecordIndex, offset: 0x34, size: 0x4, def value: None
 int32_t  ___currentRecordIndex;

/// @brief Field recordSize, offset: 0x38, size: 0x4, def value: None
 int32_t  ___recordSize;

/// @brief Field blockFactor, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___blockFactor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarBuffer, ____IsStreamOwner_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarBuffer, ___inputStream) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarBuffer, ___outputStream) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarBuffer, ___recordBuffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarBuffer, ___currentBlockIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarBuffer, ___currentRecordIndex) == 0x34, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarBuffer, ___recordSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Tar::TarBuffer, ___blockFactor) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Tar::TarBuffer) == 0x40, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Tar
