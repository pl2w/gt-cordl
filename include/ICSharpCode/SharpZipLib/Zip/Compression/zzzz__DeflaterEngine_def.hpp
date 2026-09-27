#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/Compression/DeflaterEngine.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ICSharpCode/SharpZipLib/Zip/Compression/zzzz__DeflateStrategy_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DeflaterEngine)
namespace ICSharpCode::SharpZipLib::Checksum {
class Adler32;
}
namespace ICSharpCode::SharpZipLib::Zip::Compression {
struct DeflateStrategy;
}
namespace ICSharpCode::SharpZipLib::Zip::Compression {
class DeflaterHuffman;
}
namespace ICSharpCode::SharpZipLib::Zip::Compression {
class DeflaterPending;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip::Compression {
class DeflaterEngine;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*, "ICSharpCode.SharpZipLib.Zip.Compression", "DeflaterEngine");
// Dependencies ICSharpCode.SharpZipLib.Zip.Compression.DeflateStrategy, System.Object
namespace ICSharpCode::SharpZipLib::Zip::Compression {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.Compression.DeflaterEngine
class CORDL_TYPE DeflaterEngine : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Adler)) int32_t  Adler;

 __declspec(property(get=get_Strategy, put=set_Strategy)) ::ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy  Strategy;

 __declspec(property(get=get_TotalIn)) int64_t  TotalIn;

/// @brief Field adler, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_adler, put=__cordl_internal_set_adler)) ::ICSharpCode::SharpZipLib::Checksum::Adler32*  adler;

/// @brief Field blockStart, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_blockStart, put=__cordl_internal_set_blockStart)) int32_t  blockStart;

/// @brief Field compressionFunction, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_compressionFunction, put=__cordl_internal_set_compressionFunction)) int32_t  compressionFunction;

/// @brief Field goodLength, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_goodLength, put=__cordl_internal_set_goodLength)) int32_t  goodLength;

/// @brief Field head, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_head, put=__cordl_internal_set_head)) ::ArrayW<int16_t>  head;

/// @brief Field huffman, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_huffman, put=__cordl_internal_set_huffman)) ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman*  huffman;

/// @brief Field inputBuf, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputBuf, put=__cordl_internal_set_inputBuf)) ::ArrayW<uint8_t>  inputBuf;

/// @brief Field inputEnd, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_inputEnd, put=__cordl_internal_set_inputEnd)) int32_t  inputEnd;

/// @brief Field inputOff, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_inputOff, put=__cordl_internal_set_inputOff)) int32_t  inputOff;

/// @brief Field ins_h, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_ins_h, put=__cordl_internal_set_ins_h)) int32_t  ins_h;

/// @brief Field lookahead, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lookahead, put=__cordl_internal_set_lookahead)) int32_t  lookahead;

/// @brief Field matchLen, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_matchLen, put=__cordl_internal_set_matchLen)) int32_t  matchLen;

/// @brief Field matchStart, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_matchStart, put=__cordl_internal_set_matchStart)) int32_t  matchStart;

/// @brief Field max_chain, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_max_chain, put=__cordl_internal_set_max_chain)) int32_t  max_chain;

/// @brief Field max_lazy, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_max_lazy, put=__cordl_internal_set_max_lazy)) int32_t  max_lazy;

/// @brief Field niceLength, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_niceLength, put=__cordl_internal_set_niceLength)) int32_t  niceLength;

/// @brief Field pending, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_pending, put=__cordl_internal_set_pending)) ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*  pending;

/// @brief Field prev, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_prev, put=__cordl_internal_set_prev)) ::ArrayW<int16_t>  prev;

/// @brief Field prevAvailable, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_prevAvailable, put=__cordl_internal_set_prevAvailable)) bool  prevAvailable;

/// @brief Field strategy, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_strategy, put=__cordl_internal_set_strategy)) ::ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy  strategy;

/// @brief Field strstart, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_strstart, put=__cordl_internal_set_strstart)) int32_t  strstart;

/// @brief Field totalIn, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_totalIn, put=__cordl_internal_set_totalIn)) int64_t  totalIn;

/// @brief Field window, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_window, put=__cordl_internal_set_window)) ::ArrayW<uint8_t>  window;

/// @brief Method Deflate, addr 0x9fd27dc, size 0xf0, virtual false, abstract: false, final false
inline bool Deflate(bool  flush, bool  finish) ;

/// @brief Method DeflateFast, addr 0x9fd3134, size 0x240, virtual false, abstract: false, final false
inline bool DeflateFast(bool  flush, bool  finish) ;

/// @brief Method DeflateSlow, addr 0x9fd3374, size 0x2b4, virtual false, abstract: false, final false
inline bool DeflateSlow(bool  flush, bool  finish) ;

/// @brief Method DeflateStored, addr 0x9fd2fdc, size 0x158, virtual false, abstract: false, final false
inline bool DeflateStored(bool  flush, bool  finish) ;

/// @brief Method FillWindow, addr 0x9fd2ed0, size 0x10c, virtual false, abstract: false, final false
inline void FillWindow() ;

/// @brief Method FindLongestMatch, addr 0x9fd3cdc, size 0x96c, virtual false, abstract: false, final false
inline bool FindLongestMatch(int32_t  curMatch) ;

/// @brief Method InsertString, addr 0x9fd3674, size 0x8c, virtual false, abstract: false, final false
inline int32_t InsertString() ;

/// @brief Method NeedsInput, addr 0x9fd1fac, size 0x10, virtual false, abstract: false, final false
inline bool NeedsInput() ;

static inline ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine* New_ctor(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*  pending) ;

static inline ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine* New_ctor(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*  pending, bool  noAdlerCalculation) ;

/// @brief Method Reset, addr 0x9fd1e14, size 0xb0, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ResetAdler, addr 0x9fd2700, size 0x14, virtual false, abstract: false, final false
inline void ResetAdler() ;

/// @brief Method SetDictionary, addr 0x9fd2a70, size 0x100, virtual false, abstract: false, final false
inline void SetDictionary(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  length) ;

/// @brief Method SetInput, addr 0x9fd203c, size 0x12c, virtual false, abstract: false, final false
inline void SetInput(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method SetLevel, addr 0x9fd2168, size 0x280, virtual false, abstract: false, final false
inline void SetLevel(int32_t  level) ;

/// @brief Method SlideWindow, addr 0x9fd3c0c, size 0xd0, virtual false, abstract: false, final false
inline void SlideWindow() ;

/// @brief Method UpdateHash, addr 0x9fd3628, size 0x4c, virtual false, abstract: false, final false
inline void UpdateHash() ;

constexpr ::ICSharpCode::SharpZipLib::Checksum::Adler32* const& __cordl_internal_get_adler() const;

constexpr ::ICSharpCode::SharpZipLib::Checksum::Adler32*& __cordl_internal_get_adler() ;

constexpr int32_t const& __cordl_internal_get_blockStart() const;

constexpr int32_t& __cordl_internal_get_blockStart() ;

constexpr int32_t const& __cordl_internal_get_compressionFunction() const;

constexpr int32_t& __cordl_internal_get_compressionFunction() ;

constexpr int32_t const& __cordl_internal_get_goodLength() const;

constexpr int32_t& __cordl_internal_get_goodLength() ;

constexpr ::ArrayW<int16_t> const& __cordl_internal_get_head() const;

constexpr ::ArrayW<int16_t>& __cordl_internal_get_head() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman* const& __cordl_internal_get_huffman() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman*& __cordl_internal_get_huffman() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_inputBuf() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_inputBuf() ;

constexpr int32_t const& __cordl_internal_get_inputEnd() const;

constexpr int32_t& __cordl_internal_get_inputEnd() ;

constexpr int32_t const& __cordl_internal_get_inputOff() const;

constexpr int32_t& __cordl_internal_get_inputOff() ;

constexpr int32_t const& __cordl_internal_get_ins_h() const;

constexpr int32_t& __cordl_internal_get_ins_h() ;

constexpr int32_t const& __cordl_internal_get_lookahead() const;

constexpr int32_t& __cordl_internal_get_lookahead() ;

constexpr int32_t const& __cordl_internal_get_matchLen() const;

constexpr int32_t& __cordl_internal_get_matchLen() ;

constexpr int32_t const& __cordl_internal_get_matchStart() const;

constexpr int32_t& __cordl_internal_get_matchStart() ;

constexpr int32_t const& __cordl_internal_get_max_chain() const;

constexpr int32_t& __cordl_internal_get_max_chain() ;

constexpr int32_t const& __cordl_internal_get_max_lazy() const;

constexpr int32_t& __cordl_internal_get_max_lazy() ;

constexpr int32_t const& __cordl_internal_get_niceLength() const;

constexpr int32_t& __cordl_internal_get_niceLength() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending* const& __cordl_internal_get_pending() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*& __cordl_internal_get_pending() ;

constexpr ::ArrayW<int16_t> const& __cordl_internal_get_prev() const;

constexpr ::ArrayW<int16_t>& __cordl_internal_get_prev() ;

constexpr bool const& __cordl_internal_get_prevAvailable() const;

constexpr bool& __cordl_internal_get_prevAvailable() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy const& __cordl_internal_get_strategy() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy& __cordl_internal_get_strategy() ;

constexpr int32_t const& __cordl_internal_get_strstart() const;

constexpr int32_t& __cordl_internal_get_strstart() ;

constexpr int64_t const& __cordl_internal_get_totalIn() const;

constexpr int64_t& __cordl_internal_get_totalIn() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_window() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_window() ;

constexpr void __cordl_internal_set_adler(::ICSharpCode::SharpZipLib::Checksum::Adler32*  value) ;

constexpr void __cordl_internal_set_blockStart(int32_t  value) ;

constexpr void __cordl_internal_set_compressionFunction(int32_t  value) ;

constexpr void __cordl_internal_set_goodLength(int32_t  value) ;

constexpr void __cordl_internal_set_head(::ArrayW<int16_t>  value) ;

constexpr void __cordl_internal_set_huffman(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman*  value) ;

constexpr void __cordl_internal_set_inputBuf(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_inputEnd(int32_t  value) ;

constexpr void __cordl_internal_set_inputOff(int32_t  value) ;

constexpr void __cordl_internal_set_ins_h(int32_t  value) ;

constexpr void __cordl_internal_set_lookahead(int32_t  value) ;

constexpr void __cordl_internal_set_matchLen(int32_t  value) ;

constexpr void __cordl_internal_set_matchStart(int32_t  value) ;

constexpr void __cordl_internal_set_max_chain(int32_t  value) ;

constexpr void __cordl_internal_set_max_lazy(int32_t  value) ;

constexpr void __cordl_internal_set_niceLength(int32_t  value) ;

constexpr void __cordl_internal_set_pending(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*  value) ;

constexpr void __cordl_internal_set_prev(::ArrayW<int16_t>  value) ;

constexpr void __cordl_internal_set_prevAvailable(bool  value) ;

constexpr void __cordl_internal_set_strategy(::ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy  value) ;

constexpr void __cordl_internal_set_strstart(int32_t  value) ;

constexpr void __cordl_internal_set_totalIn(int64_t  value) ;

constexpr void __cordl_internal_set_window(::ArrayW<uint8_t>  value) ;

/// @brief Method .ctor, addr 0x9fd2d6c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*  pending) ;

/// @brief Method .ctor, addr 0x9fd1c98, size 0x158, virtual false, abstract: false, final false
inline void _ctor(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*  pending, bool  noAdlerCalculation) ;

/// @brief Method get_Adler, addr 0x9fd1eec, size 0x1c, virtual false, abstract: false, final false
inline int32_t get_Adler() ;

/// @brief Method get_Strategy, addr 0x9fd3740, size 0x8, virtual false, abstract: false, final false
inline ::ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy get_Strategy() ;

/// @brief Method get_TotalIn, addr 0x9fd3738, size 0x8, virtual false, abstract: false, final false
inline int64_t get_TotalIn() ;

/// @brief Method set_Strategy, addr 0x9fd3748, size 0x8, virtual false, abstract: false, final false
inline void set_Strategy(::ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeflaterEngine() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeflaterEngine", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeflaterEngine(DeflaterEngine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeflaterEngine", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeflaterEngine(DeflaterEngine const& ) = delete;

/// @brief Field TooFar offset 0xffffffff size 0x4
static constexpr int32_t  TooFar{static_cast<int32_t>(0x1000)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17374};

/// @brief Field ins_h, offset: 0x10, size: 0x4, def value: None
 int32_t  ___ins_h;

/// @brief Field head, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<int16_t>  ___head;

/// @brief Field prev, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<int16_t>  ___prev;

/// @brief Field matchStart, offset: 0x28, size: 0x4, def value: None
 int32_t  ___matchStart;

/// @brief Field matchLen, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___matchLen;

/// @brief Field prevAvailable, offset: 0x30, size: 0x1, def value: None
 bool  ___prevAvailable;

/// @brief Field blockStart, offset: 0x34, size: 0x4, def value: None
 int32_t  ___blockStart;

/// @brief Field strstart, offset: 0x38, size: 0x4, def value: None
 int32_t  ___strstart;

/// @brief Field lookahead, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___lookahead;

/// @brief Field window, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___window;

/// @brief Field strategy, offset: 0x48, size: 0x4, def value: None
 ::ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy  ___strategy;

/// @brief Field max_chain, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___max_chain;

/// @brief Field max_lazy, offset: 0x50, size: 0x4, def value: None
 int32_t  ___max_lazy;

/// @brief Field niceLength, offset: 0x54, size: 0x4, def value: None
 int32_t  ___niceLength;

/// @brief Field goodLength, offset: 0x58, size: 0x4, def value: None
 int32_t  ___goodLength;

/// @brief Field compressionFunction, offset: 0x5c, size: 0x4, def value: None
 int32_t  ___compressionFunction;

/// @brief Field inputBuf, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___inputBuf;

/// @brief Field totalIn, offset: 0x68, size: 0x8, def value: None
 int64_t  ___totalIn;

/// @brief Field inputOff, offset: 0x70, size: 0x4, def value: None
 int32_t  ___inputOff;

/// @brief Field inputEnd, offset: 0x74, size: 0x4, def value: None
 int32_t  ___inputEnd;

/// @brief Field pending, offset: 0x78, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*  ___pending;

/// @brief Field huffman, offset: 0x80, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman*  ___huffman;

/// @brief Field adler, offset: 0x88, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Checksum::Adler32*  ___adler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine, ___ins_h) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine, ___head) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine, ___prev) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine, ___matchStart) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine, ___matchLen) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine, ___prevAvailable) == 0x30, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine, ___blockStart) == 0x34, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine, ___strstart) == 0x38, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine, ___lookahead) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine, ___window) == 0x40, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine, ___strategy) == 0x48, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine, ___max_chain) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine, ___max_lazy) == 0x50, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine, ___niceLength) == 0x54, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine, ___goodLength) == 0x58, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine, ___compressionFunction) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine, ___inputBuf) == 0x60, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine, ___totalIn) == 0x68, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine, ___inputOff) == 0x70, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine, ___inputEnd) == 0x74, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine, ___pending) == 0x78, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine, ___huffman) == 0x80, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine, ___adler) == 0x88, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine) == 0x90, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip::Compression
