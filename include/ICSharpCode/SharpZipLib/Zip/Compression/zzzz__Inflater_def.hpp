#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/Compression/Inflater.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Inflater)
namespace ICSharpCode::SharpZipLib::Checksum {
class Adler32;
}
namespace ICSharpCode::SharpZipLib::Zip::Compression::Streams {
class OutputWindow;
}
namespace ICSharpCode::SharpZipLib::Zip::Compression::Streams {
class StreamManipulator;
}
namespace ICSharpCode::SharpZipLib::Zip::Compression {
class InflaterDynHeader;
}
namespace ICSharpCode::SharpZipLib::Zip::Compression {
class InflaterHuffmanTree;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip::Compression {
class Inflater;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*, "ICSharpCode.SharpZipLib.Zip.Compression", "Inflater");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Zip::Compression {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.Compression.Inflater
class CORDL_TYPE Inflater : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Adler)) int32_t  Adler;

/// @brief Field CPDEXT, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CPDEXT, put=setStaticF_CPDEXT)) ::ArrayW<int32_t>  CPDEXT;

/// @brief Field CPDIST, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CPDIST, put=setStaticF_CPDIST)) ::ArrayW<int32_t>  CPDIST;

/// @brief Field CPLENS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CPLENS, put=setStaticF_CPLENS)) ::ArrayW<int32_t>  CPLENS;

/// @brief Field CPLEXT, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CPLEXT, put=setStaticF_CPLEXT)) ::ArrayW<int32_t>  CPLEXT;

 __declspec(property(get=get_IsFinished)) bool  IsFinished;

 __declspec(property(get=get_IsNeedingDictionary)) bool  IsNeedingDictionary;

 __declspec(property(get=get_IsNeedingInput)) bool  IsNeedingInput;

 __declspec(property(get=get_RemainingInput)) int32_t  RemainingInput;

 __declspec(property(get=get_TotalIn)) int64_t  TotalIn;

 __declspec(property(get=get_TotalOut)) int64_t  TotalOut;

/// @brief Field adler, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_adler, put=__cordl_internal_set_adler)) ::ICSharpCode::SharpZipLib::Checksum::Adler32*  adler;

/// @brief Field distTree, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_distTree, put=__cordl_internal_set_distTree)) ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*  distTree;

/// @brief Field dynHeader, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_dynHeader, put=__cordl_internal_set_dynHeader)) ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader*  dynHeader;

/// @brief Field input, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_input, put=__cordl_internal_set_input)) ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator*  input;

/// @brief Field isLastBlock, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLastBlock, put=__cordl_internal_set_isLastBlock)) bool  isLastBlock;

/// @brief Field litlenTree, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_litlenTree, put=__cordl_internal_set_litlenTree)) ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*  litlenTree;

/// @brief Field mode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) int32_t  mode;

/// @brief Field neededBits, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_neededBits, put=__cordl_internal_set_neededBits)) int32_t  neededBits;

/// @brief Field noHeader, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_noHeader, put=__cordl_internal_set_noHeader)) bool  noHeader;

/// @brief Field outputWindow, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_outputWindow, put=__cordl_internal_set_outputWindow)) ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::OutputWindow*  outputWindow;

/// @brief Field readAdler, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_readAdler, put=__cordl_internal_set_readAdler)) int32_t  readAdler;

/// @brief Field repDist, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_repDist, put=__cordl_internal_set_repDist)) int32_t  repDist;

/// @brief Field repLength, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_repLength, put=__cordl_internal_set_repLength)) int32_t  repLength;

/// @brief Field totalIn, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_totalIn, put=__cordl_internal_set_totalIn)) int64_t  totalIn;

/// @brief Field totalOut, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_totalOut, put=__cordl_internal_set_totalOut)) int64_t  totalOut;

/// @brief Field uncomprLen, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_uncomprLen, put=__cordl_internal_set_uncomprLen)) int32_t  uncomprLen;

/// @brief Method Decode, addr 0x9fd7148, size 0x458, virtual false, abstract: false, final false
inline bool Decode() ;

/// @brief Method DecodeChksum, addr 0x9fd6f08, size 0x240, virtual false, abstract: false, final false
inline bool DecodeChksum() ;

/// @brief Method DecodeDict, addr 0x9fd66a0, size 0x7c, virtual false, abstract: false, final false
inline bool DecodeDict() ;

/// @brief Method DecodeHeader, addr 0x9fd64e0, size 0x10c, virtual false, abstract: false, final false
inline bool DecodeHeader() ;

/// @brief Method DecodeHuffman, addr 0x9fd671c, size 0x450, virtual false, abstract: false, final false
inline bool DecodeHuffman() ;

/// @brief Method Inflate, addr 0x9fd7ec0, size 0x5c, virtual false, abstract: false, final false
inline int32_t Inflate(::ArrayW<uint8_t>  buffer) ;

/// @brief Method Inflate, addr 0x9fd7f1c, size 0x264, virtual false, abstract: false, final false
inline int32_t Inflate(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

static inline ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater* New_ctor() ;

static inline ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater* New_ctor(bool  noHeader) ;

/// @brief Method Reset, addr 0x9fcc534, size 0x88, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetDictionary, addr 0x9fd79c0, size 0x18, virtual false, abstract: false, final false
inline void SetDictionary(::ArrayW<uint8_t>  buffer) ;

/// @brief Method SetDictionary, addr 0x9fd79d8, size 0x204, virtual false, abstract: false, final false
inline void SetDictionary(::ArrayW<uint8_t>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method SetInput, addr 0x9fd7ccc, size 0x18, virtual false, abstract: false, final false
inline void SetInput(::ArrayW<uint8_t>  buffer) ;

/// @brief Method SetInput, addr 0x9fd7ce4, size 0x38, virtual false, abstract: false, final false
inline void SetInput(::ArrayW<uint8_t>  buffer, int32_t  index, int32_t  count) ;

constexpr ::ICSharpCode::SharpZipLib::Checksum::Adler32* const& __cordl_internal_get_adler() const;

constexpr ::ICSharpCode::SharpZipLib::Checksum::Adler32*& __cordl_internal_get_adler() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree* const& __cordl_internal_get_distTree() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*& __cordl_internal_get_distTree() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader* const& __cordl_internal_get_dynHeader() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader*& __cordl_internal_get_dynHeader() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator* const& __cordl_internal_get_input() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator*& __cordl_internal_get_input() ;

constexpr bool const& __cordl_internal_get_isLastBlock() const;

constexpr bool& __cordl_internal_get_isLastBlock() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree* const& __cordl_internal_get_litlenTree() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*& __cordl_internal_get_litlenTree() ;

constexpr int32_t const& __cordl_internal_get_mode() const;

constexpr int32_t& __cordl_internal_get_mode() ;

constexpr int32_t const& __cordl_internal_get_neededBits() const;

constexpr int32_t& __cordl_internal_get_neededBits() ;

constexpr bool const& __cordl_internal_get_noHeader() const;

constexpr bool& __cordl_internal_get_noHeader() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::OutputWindow* const& __cordl_internal_get_outputWindow() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::OutputWindow*& __cordl_internal_get_outputWindow() ;

constexpr int32_t const& __cordl_internal_get_readAdler() const;

constexpr int32_t& __cordl_internal_get_readAdler() ;

constexpr int32_t const& __cordl_internal_get_repDist() const;

constexpr int32_t& __cordl_internal_get_repDist() ;

constexpr int32_t const& __cordl_internal_get_repLength() const;

constexpr int32_t& __cordl_internal_get_repLength() ;

constexpr int64_t const& __cordl_internal_get_totalIn() const;

constexpr int64_t& __cordl_internal_get_totalIn() ;

constexpr int64_t const& __cordl_internal_get_totalOut() const;

constexpr int64_t& __cordl_internal_get_totalOut() ;

constexpr int32_t const& __cordl_internal_get_uncomprLen() const;

constexpr int32_t& __cordl_internal_get_uncomprLen() ;

constexpr void __cordl_internal_set_adler(::ICSharpCode::SharpZipLib::Checksum::Adler32*  value) ;

constexpr void __cordl_internal_set_distTree(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*  value) ;

constexpr void __cordl_internal_set_dynHeader(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader*  value) ;

constexpr void __cordl_internal_set_input(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator*  value) ;

constexpr void __cordl_internal_set_isLastBlock(bool  value) ;

constexpr void __cordl_internal_set_litlenTree(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*  value) ;

constexpr void __cordl_internal_set_mode(int32_t  value) ;

constexpr void __cordl_internal_set_neededBits(int32_t  value) ;

constexpr void __cordl_internal_set_noHeader(bool  value) ;

constexpr void __cordl_internal_set_outputWindow(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::OutputWindow*  value) ;

constexpr void __cordl_internal_set_readAdler(int32_t  value) ;

constexpr void __cordl_internal_set_repDist(int32_t  value) ;

constexpr void __cordl_internal_set_repLength(int32_t  value) ;

constexpr void __cordl_internal_set_totalIn(int64_t  value) ;

constexpr void __cordl_internal_set_totalOut(int64_t  value) ;

constexpr void __cordl_internal_set_uncomprLen(int32_t  value) ;

/// @brief Method .ctor, addr 0x9fd645c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9fcb46c, size 0x104, virtual false, abstract: false, final false
inline void _ctor(bool  noHeader) ;

static inline ::ArrayW<int32_t> getStaticF_CPDEXT() ;

static inline ::ArrayW<int32_t> getStaticF_CPDIST() ;

static inline ::ArrayW<int32_t> getStaticF_CPLENS() ;

static inline ::ArrayW<int32_t> getStaticF_CPLEXT() ;

/// @brief Method get_Adler, addr 0x9fd8288, size 0x38, virtual false, abstract: false, final false
inline int32_t get_Adler() ;

/// @brief Method get_IsFinished, addr 0x9fcd84c, size 0x34, virtual false, abstract: false, final false
inline bool get_IsFinished() ;

/// @brief Method get_IsNeedingDictionary, addr 0x9fd7bdc, size 0x24, virtual false, abstract: false, final false
inline bool get_IsNeedingDictionary() ;

/// @brief Method get_IsNeedingInput, addr 0x9fd8268, size 0x20, virtual false, abstract: false, final false
inline bool get_IsNeedingInput() ;

/// @brief Method get_RemainingInput, addr 0x9fcc5e8, size 0x24, virtual false, abstract: false, final false
inline int32_t get_RemainingInput() ;

/// @brief Method get_TotalIn, addr 0x9fcc5bc, size 0x2c, virtual false, abstract: false, final false
inline int64_t get_TotalIn() ;

/// @brief Method get_TotalOut, addr 0x9fd82c0, size 0x8, virtual false, abstract: false, final false
inline int64_t get_TotalOut() ;

static inline void setStaticF_CPDEXT(::ArrayW<int32_t>  value) ;

static inline void setStaticF_CPDIST(::ArrayW<int32_t>  value) ;

static inline void setStaticF_CPLENS(::ArrayW<int32_t>  value) ;

static inline void setStaticF_CPLEXT(::ArrayW<int32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Inflater() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Inflater", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Inflater(Inflater && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Inflater", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Inflater(Inflater const& ) = delete;

/// @brief Field DECODE_BLOCKS offset 0xffffffff size 0x4
static constexpr int32_t  DECODE_BLOCKS{static_cast<int32_t>(0x2)};

/// @brief Field DECODE_CHKSUM offset 0xffffffff size 0x4
static constexpr int32_t  DECODE_CHKSUM{static_cast<int32_t>(0xb)};

/// @brief Field DECODE_DICT offset 0xffffffff size 0x4
static constexpr int32_t  DECODE_DICT{static_cast<int32_t>(0x1)};

/// @brief Field DECODE_DYN_HEADER offset 0xffffffff size 0x4
static constexpr int32_t  DECODE_DYN_HEADER{static_cast<int32_t>(0x6)};

/// @brief Field DECODE_HEADER offset 0xffffffff size 0x4
static constexpr int32_t  DECODE_HEADER{static_cast<int32_t>(0x0)};

/// @brief Field DECODE_HUFFMAN offset 0xffffffff size 0x4
static constexpr int32_t  DECODE_HUFFMAN{static_cast<int32_t>(0x7)};

/// @brief Field DECODE_HUFFMAN_DIST offset 0xffffffff size 0x4
static constexpr int32_t  DECODE_HUFFMAN_DIST{static_cast<int32_t>(0x9)};

/// @brief Field DECODE_HUFFMAN_DISTBITS offset 0xffffffff size 0x4
static constexpr int32_t  DECODE_HUFFMAN_DISTBITS{static_cast<int32_t>(0xa)};

/// @brief Field DECODE_HUFFMAN_LENBITS offset 0xffffffff size 0x4
static constexpr int32_t  DECODE_HUFFMAN_LENBITS{static_cast<int32_t>(0x8)};

/// @brief Field DECODE_STORED offset 0xffffffff size 0x4
static constexpr int32_t  DECODE_STORED{static_cast<int32_t>(0x5)};

/// @brief Field DECODE_STORED_LEN1 offset 0xffffffff size 0x4
static constexpr int32_t  DECODE_STORED_LEN1{static_cast<int32_t>(0x3)};

/// @brief Field DECODE_STORED_LEN2 offset 0xffffffff size 0x4
static constexpr int32_t  DECODE_STORED_LEN2{static_cast<int32_t>(0x4)};

/// @brief Field FINISHED offset 0xffffffff size 0x4
static constexpr int32_t  FINISHED{static_cast<int32_t>(0xc)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17378};

/// @brief Field mode, offset: 0x10, size: 0x4, def value: None
 int32_t  ___mode;

/// @brief Field readAdler, offset: 0x14, size: 0x4, def value: None
 int32_t  ___readAdler;

/// @brief Field neededBits, offset: 0x18, size: 0x4, def value: None
 int32_t  ___neededBits;

/// @brief Field repLength, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___repLength;

/// @brief Field repDist, offset: 0x20, size: 0x4, def value: None
 int32_t  ___repDist;

/// @brief Field uncomprLen, offset: 0x24, size: 0x4, def value: None
 int32_t  ___uncomprLen;

/// @brief Field isLastBlock, offset: 0x28, size: 0x1, def value: None
 bool  ___isLastBlock;

/// @brief Field totalOut, offset: 0x30, size: 0x8, def value: None
 int64_t  ___totalOut;

/// @brief Field totalIn, offset: 0x38, size: 0x8, def value: None
 int64_t  ___totalIn;

/// @brief Field noHeader, offset: 0x40, size: 0x1, def value: None
 bool  ___noHeader;

/// @brief Field input, offset: 0x48, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator*  ___input;

/// @brief Field outputWindow, offset: 0x50, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::OutputWindow*  ___outputWindow;

/// @brief Field dynHeader, offset: 0x58, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader*  ___dynHeader;

/// @brief Field litlenTree, offset: 0x60, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*  ___litlenTree;

/// @brief Field distTree, offset: 0x68, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*  ___distTree;

/// @brief Field adler, offset: 0x70, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Checksum::Adler32*  ___adler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Inflater, ___mode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Inflater, ___readAdler) == 0x14, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Inflater, ___neededBits) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Inflater, ___repLength) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Inflater, ___repDist) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Inflater, ___uncomprLen) == 0x24, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Inflater, ___isLastBlock) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Inflater, ___totalOut) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Inflater, ___totalIn) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Inflater, ___noHeader) == 0x40, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Inflater, ___input) == 0x48, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Inflater, ___outputWindow) == 0x50, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Inflater, ___dynHeader) == 0x58, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Inflater, ___litlenTree) == 0x60, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Inflater, ___distTree) == 0x68, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Inflater, ___adler) == 0x70, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::Compression::Inflater) == 0x78, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip::Compression
