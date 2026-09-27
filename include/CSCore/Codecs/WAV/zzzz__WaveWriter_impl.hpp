#pragma once
// IWYU pragma private; include "CSCore/Codecs/WAV/WaveWriter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "CSCore/Codecs/WAV/zzzz__WaveWriter_def.hpp"
#include "CSCore/zzzz__IWaveSource_def.hpp"
#include "CSCore/zzzz__IWriteable_def.hpp"
#include "CSCore/zzzz__WaveFormat_def.hpp"
#include "System/IO/zzzz__BinaryWriter_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::CSCore::Codecs::WAV::WaveWriter.get_IsDisposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::CSCore::Codecs::WAV::WaveWriter::*)()>(&::CSCore::Codecs::WAV::WaveWriter::get_IsDisposed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa76468c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                        {"get_IsDisposed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::Codecs::WAV::WaveWriter.get_IsDisposing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::CSCore::Codecs::WAV::WaveWriter::*)()>(&::CSCore::Codecs::WAV::WaveWriter::get_IsDisposing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa764694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                        {"get_IsDisposing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::Codecs::WAV::WaveWriter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::Codecs::WAV::WaveWriter::*)(::StringW, ::CSCore::WaveFormat*)>(&::CSCore::Codecs::WAV::WaveWriter::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa76469c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::CSCore::WaveFormat*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::Codecs::WAV::WaveWriter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::Codecs::WAV::WaveWriter::*)(::System::IO::Stream*, ::CSCore::WaveFormat*)>(&::CSCore::Codecs::WAV::WaveWriter::_ctor)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xa7646dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::CSCore::WaveFormat*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::Codecs::WAV::WaveWriter.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::Codecs::WAV::WaveWriter::*)()>(&::CSCore::Codecs::WAV::WaveWriter::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa764968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::Codecs::WAV::WaveWriter.WriteToFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::CSCore::IWaveSource*, bool, int32_t)>(&::CSCore::Codecs::WAV::WaveWriter::WriteToFile)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0xa7649d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                        {"WriteToFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::CSCore::IWaveSource*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::Codecs::WAV::WaveWriter.WriteSample
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::Codecs::WAV::WaveWriter::*)(float_t)>(&::CSCore::Codecs::WAV::WaveWriter::WriteSample)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0xa764da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                        {"WriteSample", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::Codecs::WAV::WaveWriter.WriteSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::Codecs::WAV::WaveWriter::*)(::ArrayW<float_t>, int32_t, int32_t)>(&::CSCore::Codecs::WAV::WaveWriter::WriteSamples)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa7652ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                        {"WriteSamples", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::Codecs::WAV::WaveWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::Codecs::WAV::WaveWriter::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::CSCore::Codecs::WAV::WaveWriter::Write)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa764d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                        {"Write", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::Codecs::WAV::WaveWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::Codecs::WAV::WaveWriter::*)(uint8_t)>(&::CSCore::Codecs::WAV::WaveWriter::Write)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa765180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                        {"Write", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::Codecs::WAV::WaveWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::Codecs::WAV::WaveWriter::*)(int16_t)>(&::CSCore::Codecs::WAV::WaveWriter::Write)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa7651c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                        {"Write", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::Codecs::WAV::WaveWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::Codecs::WAV::WaveWriter::*)(int32_t)>(&::CSCore::Codecs::WAV::WaveWriter::Write)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa765214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                        {"Write", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::Codecs::WAV::WaveWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::Codecs::WAV::WaveWriter::*)(float_t)>(&::CSCore::Codecs::WAV::WaveWriter::Write)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa765260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                        {"Write", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::Codecs::WAV::WaveWriter.WriteHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::Codecs::WAV::WaveWriter::*)()>(&::CSCore::Codecs::WAV::WaveWriter::WriteHeader)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa7648b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                        {"WriteHeader", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::Codecs::WAV::WaveWriter.WriteRiffHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::Codecs::WAV::WaveWriter::*)()>(&::CSCore::Codecs::WAV::WaveWriter::WriteRiffHeader)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa765328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                        {"WriteRiffHeader", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::Codecs::WAV::WaveWriter.WriteFmtChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::Codecs::WAV::WaveWriter::*)()>(&::CSCore::Codecs::WAV::WaveWriter::WriteFmtChunk)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0xa765428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                        {"WriteFmtChunk", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::Codecs::WAV::WaveWriter.WriteDataChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::Codecs::WAV::WaveWriter::*)()>(&::CSCore::Codecs::WAV::WaveWriter::WriteDataChunk)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa765694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                        {"WriteDataChunk", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::Codecs::WAV::WaveWriter.CheckObjectDisposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::Codecs::WAV::WaveWriter::*)()>(&::CSCore::Codecs::WAV::WaveWriter::CheckObjectDisposed)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa765128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                        {"CheckObjectDisposed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::Codecs::WAV::WaveWriter.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::Codecs::WAV::WaveWriter::*)(bool)>(&::CSCore::Codecs::WAV::WaveWriter::Dispose)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa76572c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                    {::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::Codecs::WAV::WaveWriter.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::Codecs::WAV::WaveWriter::*)()>(&::CSCore::Codecs::WAV::WaveWriter::Finalize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa7658c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                    {::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(), 1}
                ));
    return ___internal_method;
  }
};
constexpr ::CSCore::WaveFormat*& CSCore::Codecs::WAV::WaveWriter::__cordl_internal_get__waveFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waveFormat;
}
constexpr ::CSCore::WaveFormat* const& CSCore::Codecs::WAV::WaveWriter::__cordl_internal_get__waveFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waveFormat;
}
constexpr void CSCore::Codecs::WAV::WaveWriter::__cordl_internal_set__waveFormat(::CSCore::WaveFormat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____waveFormat = value;
}
constexpr int64_t& CSCore::Codecs::WAV::WaveWriter::__cordl_internal_get__waveStartPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waveStartPosition;
}
constexpr int64_t const& CSCore::Codecs::WAV::WaveWriter::__cordl_internal_get__waveStartPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waveStartPosition;
}
constexpr void CSCore::Codecs::WAV::WaveWriter::__cordl_internal_set__waveStartPosition(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____waveStartPosition = value;
}
constexpr int32_t& CSCore::Codecs::WAV::WaveWriter::__cordl_internal_get__dataLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataLength;
}
constexpr int32_t const& CSCore::Codecs::WAV::WaveWriter::__cordl_internal_get__dataLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataLength;
}
constexpr void CSCore::Codecs::WAV::WaveWriter::__cordl_internal_set__dataLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dataLength = value;
}
constexpr bool& CSCore::Codecs::WAV::WaveWriter::__cordl_internal_get__isDisposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDisposed;
}
constexpr bool const& CSCore::Codecs::WAV::WaveWriter::__cordl_internal_get__isDisposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDisposed;
}
constexpr void CSCore::Codecs::WAV::WaveWriter::__cordl_internal_set__isDisposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isDisposed = value;
}
constexpr ::System::IO::Stream*& CSCore::Codecs::WAV::WaveWriter::__cordl_internal_get__stream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stream;
}
constexpr ::System::IO::Stream* const& CSCore::Codecs::WAV::WaveWriter::__cordl_internal_get__stream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stream;
}
constexpr void CSCore::Codecs::WAV::WaveWriter::__cordl_internal_set__stream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stream = value;
}
constexpr ::System::IO::BinaryWriter*& CSCore::Codecs::WAV::WaveWriter::__cordl_internal_get__writer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writer;
}
constexpr ::System::IO::BinaryWriter* const& CSCore::Codecs::WAV::WaveWriter::__cordl_internal_get__writer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writer;
}
constexpr void CSCore::Codecs::WAV::WaveWriter::__cordl_internal_set__writer(::System::IO::BinaryWriter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____writer = value;
}
constexpr bool& CSCore::Codecs::WAV::WaveWriter::__cordl_internal_get__isDisposing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDisposing;
}
constexpr bool const& CSCore::Codecs::WAV::WaveWriter::__cordl_internal_get__isDisposing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDisposing;
}
constexpr void CSCore::Codecs::WAV::WaveWriter::__cordl_internal_set__isDisposing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isDisposing = value;
}
constexpr bool& CSCore::Codecs::WAV::WaveWriter::__cordl_internal_get__closeStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closeStream;
}
constexpr bool const& CSCore::Codecs::WAV::WaveWriter::__cordl_internal_get__closeStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closeStream;
}
constexpr void CSCore::Codecs::WAV::WaveWriter::__cordl_internal_set__closeStream(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____closeStream = value;
}
inline bool CSCore::Codecs::WAV::WaveWriter::get_IsDisposed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                        {"get_IsDisposed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool CSCore::Codecs::WAV::WaveWriter::get_IsDisposing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                        {"get_IsDisposing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void CSCore::Codecs::WAV::WaveWriter::_ctor(::StringW  fileName, ::CSCore::WaveFormat*  waveFormat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::CSCore::WaveFormat*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fileName, waveFormat);
}
inline void CSCore::Codecs::WAV::WaveWriter::_ctor(::System::IO::Stream*  stream, ::CSCore::WaveFormat*  waveFormat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::CSCore::WaveFormat*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, waveFormat);
}
inline void CSCore::Codecs::WAV::WaveWriter::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void CSCore::Codecs::WAV::WaveWriter::WriteToFile(::StringW  filename, ::CSCore::IWaveSource*  source, bool  deleteFileIfAlreadyExists, int32_t  maxlength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                        {"WriteToFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::CSCore::IWaveSource*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, filename, source, deleteFileIfAlreadyExists, maxlength);
}
inline void CSCore::Codecs::WAV::WaveWriter::WriteSample(float_t  sample)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                        {"WriteSample", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sample);
}
inline void CSCore::Codecs::WAV::WaveWriter::WriteSamples(::ArrayW<float_t>  samples, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                        {"WriteSamples", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, samples, offset, count);
}
inline void CSCore::Codecs::WAV::WaveWriter::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                        {"Write", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline void CSCore::Codecs::WAV::WaveWriter::Write(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                        {"Write", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void CSCore::Codecs::WAV::WaveWriter::Write(int16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                        {"Write", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void CSCore::Codecs::WAV::WaveWriter::Write(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                        {"Write", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void CSCore::Codecs::WAV::WaveWriter::Write(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                        {"Write", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void CSCore::Codecs::WAV::WaveWriter::WriteHeader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                        {"WriteHeader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void CSCore::Codecs::WAV::WaveWriter::WriteRiffHeader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                        {"WriteRiffHeader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void CSCore::Codecs::WAV::WaveWriter::WriteFmtChunk()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                        {"WriteFmtChunk", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void CSCore::Codecs::WAV::WaveWriter::WriteDataChunk()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                        {"WriteDataChunk", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void CSCore::Codecs::WAV::WaveWriter::CheckObjectDisposed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(),
                        {"CheckObjectDisposed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void CSCore::Codecs::WAV::WaveWriter::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void CSCore::Codecs::WAV::WaveWriter::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CSCore::Codecs::WAV::WaveWriter*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::CSCore::Codecs::WAV::WaveWriter* CSCore::Codecs::WAV::WaveWriter::New_ctor(::StringW  fileName, ::CSCore::WaveFormat*  waveFormat)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::CSCore::Codecs::WAV::WaveWriter*>(fileName, waveFormat));
}
inline ::CSCore::Codecs::WAV::WaveWriter* CSCore::Codecs::WAV::WaveWriter::New_ctor(::System::IO::Stream*  stream, ::CSCore::WaveFormat*  waveFormat)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::CSCore::Codecs::WAV::WaveWriter*>(stream, waveFormat));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  CSCore::Codecs::WAV::WaveWriter::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* CSCore::Codecs::WAV::WaveWriter::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::CSCore::IWriteable"
constexpr  CSCore::Codecs::WAV::WaveWriter::operator ::CSCore::IWriteable*() noexcept {
return static_cast<::CSCore::IWriteable*>(static_cast<void*>(this));
}
/// @brief Convert to "::CSCore::IWriteable"
constexpr ::CSCore::IWriteable* CSCore::Codecs::WAV::WaveWriter::i___CSCore__IWriteable() noexcept {
return static_cast<::CSCore::IWriteable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::CSCore::Codecs::WAV::WaveWriter::WaveWriter()   {
}
