#pragma once
// IWYU pragma private; include "Ionic/Zlib/ZlibCodec.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Ionic/Zlib/zzzz__CompressionLevel_def.hpp"
#include "Ionic/Zlib/zzzz__CompressionStrategy_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZlibCodec)
namespace Ionic::Zlib {
struct CompressionLevel;
}
namespace Ionic::Zlib {
struct CompressionMode;
}
namespace Ionic::Zlib {
struct CompressionStrategy;
}
namespace Ionic::Zlib {
class DeflateManager;
}
namespace Ionic::Zlib {
struct FlushType;
}
namespace Ionic::Zlib {
class InflateManager;
}
// Forward declare root types
namespace Ionic::Zlib {
class ZlibCodec;
}
// Write type traits
MARK_REF_T(::Ionic::Zlib::ZlibCodec*);
DEFINE_IL2CPP_CLASS(::Ionic::Zlib::ZlibCodec*, "Ionic.Zlib", "ZlibCodec");
// [Guid("ebc25cf6-9120-4283-b972-0e5520d0000D")]
// [ComVisible(true)]
// [ClassInterface((System.Runtime.InteropServices.ClassInterfaceType)1)]
// Dependencies Ionic.Zlib.CompressionLevel, Ionic.Zlib.CompressionStrategy, System.Object
namespace Ionic::Zlib {
// Is value type: false
// CS Name: Ionic.Zlib.ZlibCodec
class CORDL_TYPE ZlibCodec : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Adler32)) int32_t  Adler32;

/// @brief Field AvailableBytesIn, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_AvailableBytesIn, put=__cordl_internal_set_AvailableBytesIn)) int32_t  AvailableBytesIn;

/// @brief Field AvailableBytesOut, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_AvailableBytesOut, put=__cordl_internal_set_AvailableBytesOut)) int32_t  AvailableBytesOut;

/// @brief Field CompressLevel, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_CompressLevel, put=__cordl_internal_set_CompressLevel)) ::Ionic::Zlib::CompressionLevel  CompressLevel;

/// @brief Field InputBuffer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_InputBuffer, put=__cordl_internal_set_InputBuffer)) ::ArrayW<uint8_t>  InputBuffer;

/// @brief Field Message, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_Message, put=__cordl_internal_set_Message)) ::StringW  Message;

/// @brief Field NextIn, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_NextIn, put=__cordl_internal_set_NextIn)) int32_t  NextIn;

/// @brief Field NextOut, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_NextOut, put=__cordl_internal_set_NextOut)) int32_t  NextOut;

/// @brief Field OutputBuffer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OutputBuffer, put=__cordl_internal_set_OutputBuffer)) ::ArrayW<uint8_t>  OutputBuffer;

/// @brief Field Strategy, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_Strategy, put=__cordl_internal_set_Strategy)) ::Ionic::Zlib::CompressionStrategy  Strategy;

/// @brief Field TotalBytesIn, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_TotalBytesIn, put=__cordl_internal_set_TotalBytesIn)) int64_t  TotalBytesIn;

/// @brief Field TotalBytesOut, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_TotalBytesOut, put=__cordl_internal_set_TotalBytesOut)) int64_t  TotalBytesOut;

/// @brief Field WindowBits, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_WindowBits, put=__cordl_internal_set_WindowBits)) int32_t  WindowBits;

/// @brief Field _Adler32, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__Adler32, put=__cordl_internal_set__Adler32)) uint32_t  _Adler32;

/// @brief Field dstate, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_dstate, put=__cordl_internal_set_dstate)) ::Ionic::Zlib::DeflateManager*  dstate;

/// @brief Field istate, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_istate, put=__cordl_internal_set_istate)) ::Ionic::Zlib::InflateManager*  istate;

/// @brief Method Deflate, addr 0xa79bea4, size 0x58, virtual false, abstract: false, final false
inline int32_t Deflate(::Ionic::Zlib::FlushType  flush) ;

/// @brief Method EndDeflate, addr 0xa79c484, size 0x68, virtual false, abstract: false, final false
inline int32_t EndDeflate() ;

/// @brief Method EndInflate, addr 0xa79c4ec, size 0x84, virtual false, abstract: false, final false
inline int32_t EndInflate() ;

/// @brief Method Inflate, addr 0xa79be4c, size 0x58, virtual false, abstract: false, final false
inline int32_t Inflate(::Ionic::Zlib::FlushType  flush) ;

/// @brief Method InitializeDeflate, addr 0xa79da38, size 0x8, virtual false, abstract: false, final false
inline int32_t InitializeDeflate() ;

/// @brief Method InitializeDeflate, addr 0xa79dc78, size 0x10, virtual false, abstract: false, final false
inline int32_t InitializeDeflate(::Ionic::Zlib::CompressionLevel  level) ;

/// @brief Method InitializeDeflate, addr 0xa79dc88, size 0xc, virtual false, abstract: false, final false
inline int32_t InitializeDeflate(::Ionic::Zlib::CompressionLevel  level, int32_t  bits) ;

/// @brief Method InitializeDeflate, addr 0xa79dc94, size 0x10, virtual false, abstract: false, final false
inline int32_t InitializeDeflate(::Ionic::Zlib::CompressionLevel  level, int32_t  bits, bool  wantRfc1950Header) ;

/// @brief Method InitializeDeflate, addr 0xa79ba8c, size 0x10, virtual false, abstract: false, final false
inline int32_t InitializeDeflate(::Ionic::Zlib::CompressionLevel  level, bool  wantRfc1950Header) ;

/// @brief Method InitializeInflate, addr 0xa79da40, size 0xc, virtual false, abstract: false, final false
inline int32_t InitializeInflate() ;

/// @brief Method InitializeInflate, addr 0xa79ba7c, size 0x10, virtual false, abstract: false, final false
inline int32_t InitializeInflate(bool  expectRfc1950Header) ;

/// @brief Method InitializeInflate, addr 0xa79da4c, size 0xc, virtual false, abstract: false, final false
inline int32_t InitializeInflate(int32_t  windowBits) ;

/// @brief Method InitializeInflate, addr 0xa79da58, size 0xe4, virtual false, abstract: false, final false
inline int32_t InitializeInflate(int32_t  windowBits, bool  expectRfc1950Header) ;

static inline ::Ionic::Zlib::ZlibCodec* New_ctor() ;

static inline ::Ionic::Zlib::ZlibCodec* New_ctor(::Ionic::Zlib::CompressionMode  mode) ;

/// @brief Method ResetDeflate, addr 0xa79dca4, size 0x58, virtual false, abstract: false, final false
inline void ResetDeflate() ;

/// @brief Method SetDeflateParams, addr 0xa79dcfc, size 0x58, virtual false, abstract: false, final false
inline int32_t SetDeflateParams(::Ionic::Zlib::CompressionLevel  level, ::Ionic::Zlib::CompressionStrategy  strategy) ;

/// @brief Method SetDictionary, addr 0xa79dd54, size 0x6c, virtual false, abstract: false, final false
inline int32_t SetDictionary(::ArrayW<uint8_t>  dictionary) ;

/// @brief Method SyncInflate, addr 0xa79db3c, size 0x58, virtual false, abstract: false, final false
inline int32_t SyncInflate() ;

/// @brief Method _InternalInitializeDeflate, addr 0xa79db94, size 0xe4, virtual false, abstract: false, final false
inline int32_t _InternalInitializeDeflate(bool  wantRfc1950Header) ;

constexpr int32_t const& __cordl_internal_get_AvailableBytesIn() const;

constexpr int32_t& __cordl_internal_get_AvailableBytesIn() ;

constexpr int32_t const& __cordl_internal_get_AvailableBytesOut() const;

constexpr int32_t& __cordl_internal_get_AvailableBytesOut() ;

constexpr ::Ionic::Zlib::CompressionLevel const& __cordl_internal_get_CompressLevel() const;

constexpr ::Ionic::Zlib::CompressionLevel& __cordl_internal_get_CompressLevel() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_InputBuffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_InputBuffer() ;

constexpr ::StringW const& __cordl_internal_get_Message() const;

constexpr ::StringW& __cordl_internal_get_Message() ;

constexpr int32_t const& __cordl_internal_get_NextIn() const;

constexpr int32_t& __cordl_internal_get_NextIn() ;

constexpr int32_t const& __cordl_internal_get_NextOut() const;

constexpr int32_t& __cordl_internal_get_NextOut() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_OutputBuffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_OutputBuffer() ;

constexpr ::Ionic::Zlib::CompressionStrategy const& __cordl_internal_get_Strategy() const;

constexpr ::Ionic::Zlib::CompressionStrategy& __cordl_internal_get_Strategy() ;

constexpr int64_t const& __cordl_internal_get_TotalBytesIn() const;

constexpr int64_t& __cordl_internal_get_TotalBytesIn() ;

constexpr int64_t const& __cordl_internal_get_TotalBytesOut() const;

constexpr int64_t& __cordl_internal_get_TotalBytesOut() ;

constexpr int32_t const& __cordl_internal_get_WindowBits() const;

constexpr int32_t& __cordl_internal_get_WindowBits() ;

constexpr uint32_t const& __cordl_internal_get__Adler32() const;

constexpr uint32_t& __cordl_internal_get__Adler32() ;

constexpr ::Ionic::Zlib::DeflateManager* const& __cordl_internal_get_dstate() const;

constexpr ::Ionic::Zlib::DeflateManager*& __cordl_internal_get_dstate() ;

constexpr ::Ionic::Zlib::InflateManager* const& __cordl_internal_get_istate() const;

constexpr ::Ionic::Zlib::InflateManager*& __cordl_internal_get_istate() ;

constexpr void __cordl_internal_set_AvailableBytesIn(int32_t  value) ;

constexpr void __cordl_internal_set_AvailableBytesOut(int32_t  value) ;

constexpr void __cordl_internal_set_CompressLevel(::Ionic::Zlib::CompressionLevel  value) ;

constexpr void __cordl_internal_set_InputBuffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_Message(::StringW  value) ;

constexpr void __cordl_internal_set_NextIn(int32_t  value) ;

constexpr void __cordl_internal_set_NextOut(int32_t  value) ;

constexpr void __cordl_internal_set_OutputBuffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_Strategy(::Ionic::Zlib::CompressionStrategy  value) ;

constexpr void __cordl_internal_set_TotalBytesIn(int64_t  value) ;

constexpr void __cordl_internal_set_TotalBytesOut(int64_t  value) ;

constexpr void __cordl_internal_set_WindowBits(int32_t  value) ;

constexpr void __cordl_internal_set__Adler32(uint32_t  value) ;

constexpr void __cordl_internal_set_dstate(::Ionic::Zlib::DeflateManager*  value) ;

constexpr void __cordl_internal_set_istate(::Ionic::Zlib::InflateManager*  value) ;

/// @brief Method .ctor, addr 0xa79ba68, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa79d954, size 0xe4, virtual false, abstract: false, final false
inline void _ctor(::Ionic::Zlib::CompressionMode  mode) ;

/// @brief Method flush_pending, addr 0xa79ddc0, size 0x188, virtual false, abstract: false, final false
inline void flush_pending() ;

/// @brief Method get_Adler32, addr 0xa79d94c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Adler32() ;

/// @brief Method read_buf, addr 0xa79df48, size 0xf4, virtual false, abstract: false, final false
inline int32_t read_buf(::ArrayW<uint8_t>  buf, int32_t  start, int32_t  size) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZlibCodec() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZlibCodec", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZlibCodec(ZlibCodec && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZlibCodec", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZlibCodec(ZlibCodec const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19478};

/// @brief Field InputBuffer, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___InputBuffer;

/// @brief Field NextIn, offset: 0x18, size: 0x4, def value: None
 int32_t  ___NextIn;

/// @brief Field AvailableBytesIn, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___AvailableBytesIn;

/// @brief Field TotalBytesIn, offset: 0x20, size: 0x8, def value: None
 int64_t  ___TotalBytesIn;

/// @brief Field OutputBuffer, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___OutputBuffer;

/// @brief Field NextOut, offset: 0x30, size: 0x4, def value: None
 int32_t  ___NextOut;

/// @brief Field AvailableBytesOut, offset: 0x34, size: 0x4, def value: None
 int32_t  ___AvailableBytesOut;

/// @brief Field TotalBytesOut, offset: 0x38, size: 0x8, def value: None
 int64_t  ___TotalBytesOut;

/// @brief Field Message, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___Message;

/// @brief Field dstate, offset: 0x48, size: 0x8, def value: None
 ::Ionic::Zlib::DeflateManager*  ___dstate;

/// @brief Field istate, offset: 0x50, size: 0x8, def value: None
 ::Ionic::Zlib::InflateManager*  ___istate;

/// @brief Field _Adler32, offset: 0x58, size: 0x4, def value: None
 uint32_t  ____Adler32;

/// @brief Field CompressLevel, offset: 0x5c, size: 0x4, def value: None
 ::Ionic::Zlib::CompressionLevel  ___CompressLevel;

/// @brief Field WindowBits, offset: 0x60, size: 0x4, def value: None
 int32_t  ___WindowBits;

/// @brief Field Strategy, offset: 0x64, size: 0x4, def value: None
 ::Ionic::Zlib::CompressionStrategy  ___Strategy;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Ionic::Zlib::ZlibCodec, ___InputBuffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ZlibCodec, ___NextIn) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ZlibCodec, ___AvailableBytesIn) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ZlibCodec, ___TotalBytesIn) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ZlibCodec, ___OutputBuffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ZlibCodec, ___NextOut) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ZlibCodec, ___AvailableBytesOut) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ZlibCodec, ___TotalBytesOut) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ZlibCodec, ___Message) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ZlibCodec, ___dstate) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ZlibCodec, ___istate) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ZlibCodec, ____Adler32) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ZlibCodec, ___CompressLevel) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ZlibCodec, ___WindowBits) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ZlibCodec, ___Strategy) == 0x64, "Offset mismatch!");

static_assert(sizeof(::Ionic::Zlib::ZlibCodec) == 0x68, "Size mismatch!");

} // namespace end def Ionic::Zlib
