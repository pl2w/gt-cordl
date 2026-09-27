#pragma once
// IWYU pragma private; include "CSCore/Codecs/WAV/WaveWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WaveWriter)
namespace CSCore {
class IWaveSource;
}
namespace CSCore {
class IWriteable;
}
namespace CSCore {
class WaveFormat;
}
namespace System::IO {
class BinaryWriter;
}
namespace System::IO {
class Stream;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace CSCore::Codecs::WAV {
class WaveWriter;
}
// Write type traits
MARK_REF_T(::CSCore::Codecs::WAV::WaveWriter*);
DEFINE_IL2CPP_CLASS(::CSCore::Codecs::WAV::WaveWriter*, "CSCore.Codecs.WAV", "WaveWriter");
// Dependencies System.Object
namespace CSCore::Codecs::WAV {
// Is value type: false
// CS Name: CSCore.Codecs.WAV.WaveWriter
class CORDL_TYPE WaveWriter : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsDisposed)) bool  IsDisposed;

 __declspec(property(get=get_IsDisposing)) bool  IsDisposing;

/// @brief Field _closeStream, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get__closeStream, put=__cordl_internal_set__closeStream)) bool  _closeStream;

/// @brief Field _dataLength, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__dataLength, put=__cordl_internal_set__dataLength)) int32_t  _dataLength;

/// @brief Field _isDisposed, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDisposed, put=__cordl_internal_set__isDisposed)) bool  _isDisposed;

/// @brief Field _isDisposing, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDisposing, put=__cordl_internal_set__isDisposing)) bool  _isDisposing;

/// @brief Field _stream, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__stream, put=__cordl_internal_set__stream)) ::System::IO::Stream*  _stream;

/// @brief Field _waveFormat, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__waveFormat, put=__cordl_internal_set__waveFormat)) ::CSCore::WaveFormat*  _waveFormat;

/// @brief Field _waveStartPosition, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__waveStartPosition, put=__cordl_internal_set__waveStartPosition)) int64_t  _waveStartPosition;

/// @brief Field _writer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__writer, put=__cordl_internal_set__writer)) ::System::IO::BinaryWriter*  _writer;

/// @brief Convert operator to "::CSCore::IWriteable"
constexpr operator  ::CSCore::IWriteable*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method CheckObjectDisposed, addr 0xa765128, size 0x58, virtual false, abstract: false, final false
inline void CheckObjectDisposed() ;

/// @brief Method Dispose, addr 0xa764968, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0xa76572c, size 0x194, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0xa7658c0, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::CSCore::Codecs::WAV::WaveWriter* New_ctor(::StringW  fileName, ::CSCore::WaveFormat*  waveFormat) ;

static inline ::CSCore::Codecs::WAV::WaveWriter* New_ctor(::System::IO::Stream*  stream, ::CSCore::WaveFormat*  waveFormat) ;

/// @brief Method Write, addr 0xa764d44, size 0x64, virtual true, abstract: false, final true
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Write, addr 0xa765260, size 0x4c, virtual false, abstract: false, final false
inline void Write(float_t  value) ;

/// @brief Method Write, addr 0xa7651c8, size 0x4c, virtual false, abstract: false, final false
inline void Write(int16_t  value) ;

/// @brief Method Write, addr 0xa765214, size 0x4c, virtual false, abstract: false, final false
inline void Write(int32_t  value) ;

/// @brief Method Write, addr 0xa765180, size 0x48, virtual false, abstract: false, final false
inline void Write(uint8_t  value) ;

/// @brief Method WriteDataChunk, addr 0xa765694, size 0x98, virtual false, abstract: false, final false
inline void WriteDataChunk() ;

/// @brief Method WriteFmtChunk, addr 0xa765428, size 0x26c, virtual false, abstract: false, final false
inline void WriteFmtChunk() ;

/// @brief Method WriteHeader, addr 0xa7648b8, size 0xb0, virtual false, abstract: false, final false
inline void WriteHeader() ;

/// @brief Method WriteRiffHeader, addr 0xa765328, size 0x100, virtual false, abstract: false, final false
inline void WriteRiffHeader() ;

/// @brief Method WriteSample, addr 0xa764da8, size 0x380, virtual false, abstract: false, final false
inline void WriteSample(float_t  sample) ;

/// @brief Method WriteSamples, addr 0xa7652ac, size 0x7c, virtual false, abstract: false, final false
inline void WriteSamples(::ArrayW<float_t>  samples, int32_t  offset, int32_t  count) ;

/// [Obsolete("Use the Extensions.WriteToWaveStream extension instead.")]
/// @brief Method WriteToFile, addr 0xa7649d4, size 0x370, virtual false, abstract: false, final false
static inline void WriteToFile(::StringW  filename, ::CSCore::IWaveSource*  source, bool  deleteFileIfAlreadyExists, int32_t  maxlength) ;

constexpr bool const& __cordl_internal_get__closeStream() const;

constexpr bool& __cordl_internal_get__closeStream() ;

constexpr int32_t const& __cordl_internal_get__dataLength() const;

constexpr int32_t& __cordl_internal_get__dataLength() ;

constexpr bool const& __cordl_internal_get__isDisposed() const;

constexpr bool& __cordl_internal_get__isDisposed() ;

constexpr bool const& __cordl_internal_get__isDisposing() const;

constexpr bool& __cordl_internal_get__isDisposing() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__stream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__stream() ;

constexpr ::CSCore::WaveFormat* const& __cordl_internal_get__waveFormat() const;

constexpr ::CSCore::WaveFormat*& __cordl_internal_get__waveFormat() ;

constexpr int64_t const& __cordl_internal_get__waveStartPosition() const;

constexpr int64_t& __cordl_internal_get__waveStartPosition() ;

constexpr ::System::IO::BinaryWriter* const& __cordl_internal_get__writer() const;

constexpr ::System::IO::BinaryWriter*& __cordl_internal_get__writer() ;

constexpr void __cordl_internal_set__closeStream(bool  value) ;

constexpr void __cordl_internal_set__dataLength(int32_t  value) ;

constexpr void __cordl_internal_set__isDisposed(bool  value) ;

constexpr void __cordl_internal_set__isDisposing(bool  value) ;

constexpr void __cordl_internal_set__stream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set__waveFormat(::CSCore::WaveFormat*  value) ;

constexpr void __cordl_internal_set__waveStartPosition(int64_t  value) ;

constexpr void __cordl_internal_set__writer(::System::IO::BinaryWriter*  value) ;

/// @brief Method .ctor, addr 0xa76469c, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::StringW  fileName, ::CSCore::WaveFormat*  waveFormat) ;

/// @brief Method .ctor, addr 0xa7646dc, size 0x1dc, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, ::CSCore::WaveFormat*  waveFormat) ;

/// @brief Method get_IsDisposed, addr 0xa76468c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsDisposed() ;

/// @brief Method get_IsDisposing, addr 0xa764694, size 0x8, virtual false, abstract: false, final false
inline bool get_IsDisposing() ;

/// @brief Convert to "::CSCore::IWriteable"
constexpr ::CSCore::IWriteable* i___CSCore__IWriteable() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaveWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaveWriter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WaveWriter(WaveWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaveWriter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaveWriter(WaveWriter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28870};

/// @brief Field _waveFormat, offset: 0x10, size: 0x8, def value: None
 ::CSCore::WaveFormat*  ____waveFormat;

/// @brief Field _waveStartPosition, offset: 0x18, size: 0x8, def value: None
 int64_t  ____waveStartPosition;

/// @brief Field _dataLength, offset: 0x20, size: 0x4, def value: None
 int32_t  ____dataLength;

/// @brief Field _isDisposed, offset: 0x24, size: 0x1, def value: None
 bool  ____isDisposed;

/// @brief Field _stream, offset: 0x28, size: 0x8, def value: None
 ::System::IO::Stream*  ____stream;

/// @brief Field _writer, offset: 0x30, size: 0x8, def value: None
 ::System::IO::BinaryWriter*  ____writer;

/// @brief Field _isDisposing, offset: 0x38, size: 0x1, def value: None
 bool  ____isDisposing;

/// @brief Field _closeStream, offset: 0x39, size: 0x1, def value: None
 bool  ____closeStream;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::CSCore::Codecs::WAV::WaveWriter, ____waveFormat) == 0x10, "Offset mismatch!");

static_assert(offsetof(::CSCore::Codecs::WAV::WaveWriter, ____waveStartPosition) == 0x18, "Offset mismatch!");

static_assert(offsetof(::CSCore::Codecs::WAV::WaveWriter, ____dataLength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::CSCore::Codecs::WAV::WaveWriter, ____isDisposed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::CSCore::Codecs::WAV::WaveWriter, ____stream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::CSCore::Codecs::WAV::WaveWriter, ____writer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::CSCore::Codecs::WAV::WaveWriter, ____isDisposing) == 0x38, "Offset mismatch!");

static_assert(offsetof(::CSCore::Codecs::WAV::WaveWriter, ____closeStream) == 0x39, "Offset mismatch!");

static_assert(sizeof(::CSCore::Codecs::WAV::WaveWriter) == 0x40, "Size mismatch!");

} // namespace end def CSCore::Codecs::WAV
