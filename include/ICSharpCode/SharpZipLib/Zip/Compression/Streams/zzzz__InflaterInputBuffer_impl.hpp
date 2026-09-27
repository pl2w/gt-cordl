#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/Compression/Streams/InflaterInputBuffer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/Streams/zzzz__InflaterInputBuffer_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/zzzz__Inflater_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Security/Cryptography/zzzz__ICryptoTransform_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::*)(::System::IO::Stream*)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fd9d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::*)(::System::IO::Stream*, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9fd9d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer.get_RawLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::get_RawLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fd9e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(),
                        {"get_RawLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer.get_RawData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::get_RawData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fd9e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(),
                        {"get_RawData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer.get_ClearTextLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::get_ClearTextLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fd9e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(),
                        {"get_ClearTextLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer.get_ClearText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::get_ClearText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fd9e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(),
                        {"get_ClearText", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer.get_Available
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::get_Available)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fd9e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(),
                        {"get_Available", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer.set_Available
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::*)(int32_t)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::set_Available)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fd9e3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(),
                        {"set_Available", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer.SetInflaterInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::*)(::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::SetInflaterInput)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9fcd128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(),
                        {"SetInflaterInput", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer.Fill
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::Fill)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x9fd9e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(),
                        {"Fill", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer.ReadRawBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::*)(::ArrayW<uint8_t>)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::ReadRawBuffer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9fcc214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(),
                        {"ReadRawBuffer", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer.ReadRawBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::ReadRawBuffer)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x9fd9f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(),
                        {"ReadRawBuffer", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer.ReadClearTextBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::ReadClearTextBuffer)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x9fccfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(),
                        {"ReadClearTextBuffer", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer.ReadLeByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::ReadLeByte)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9fda0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(),
                        {"ReadLeByte", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer.ReadLeShort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::ReadLeShort)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9fcc1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(),
                        {"ReadLeShort", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer.ReadLeInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::ReadLeInt)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9fcc18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(),
                        {"ReadLeInt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer.ReadLeLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::ReadLeLong)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9fcc3ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(),
                        {"ReadLeLong", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer.set_CryptoTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::*)(::System::Security::Cryptography::ICryptoTransform*)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::set_CryptoTransform)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x9fcce54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(),
                        {"set_CryptoTransform", {}, {::i2c::type_of<::System::Security::Cryptography::ICryptoTransform*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::__cordl_internal_get_rawLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rawLength;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::__cordl_internal_get_rawLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rawLength;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::__cordl_internal_set_rawLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rawLength = value;
}
constexpr ::ArrayW<uint8_t>& ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::__cordl_internal_get_rawData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rawData;
}
constexpr ::ArrayW<uint8_t> const& ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::__cordl_internal_get_rawData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rawData;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::__cordl_internal_set_rawData(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rawData = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::__cordl_internal_get_clearTextLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearTextLength;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::__cordl_internal_get_clearTextLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearTextLength;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::__cordl_internal_set_clearTextLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clearTextLength = value;
}
constexpr ::ArrayW<uint8_t>& ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::__cordl_internal_get_clearText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearText;
}
constexpr ::ArrayW<uint8_t> const& ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::__cordl_internal_get_clearText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clearText;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::__cordl_internal_set_clearText(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clearText = value;
}
constexpr ::ArrayW<uint8_t>& ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::__cordl_internal_get_internalClearText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___internalClearText;
}
constexpr ::ArrayW<uint8_t> const& ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::__cordl_internal_get_internalClearText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___internalClearText;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::__cordl_internal_set_internalClearText(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___internalClearText = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::__cordl_internal_get_available()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___available;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::__cordl_internal_get_available() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___available;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::__cordl_internal_set_available(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___available = value;
}
constexpr ::System::Security::Cryptography::ICryptoTransform*& ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::__cordl_internal_get_cryptoTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cryptoTransform;
}
constexpr ::System::Security::Cryptography::ICryptoTransform* const& ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::__cordl_internal_get_cryptoTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cryptoTransform;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::__cordl_internal_set_cryptoTransform(::System::Security::Cryptography::ICryptoTransform*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cryptoTransform = value;
}
constexpr ::System::IO::Stream*& ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::__cordl_internal_get_inputStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputStream;
}
constexpr ::System::IO::Stream* const& ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::__cordl_internal_get_inputStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputStream;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::__cordl_internal_set_inputStream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputStream = value;
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::_ctor(::System::IO::Stream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::_ctor(::System::IO::Stream*  stream, int32_t  bufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, bufferSize);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::get_RawLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(),
                        {"get_RawLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::get_RawData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(),
                        {"get_RawData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::get_ClearTextLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(),
                        {"get_ClearTextLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::get_ClearText()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(),
                        {"get_ClearText", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::get_Available()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(),
                        {"get_Available", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::set_Available(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(),
                        {"set_Available", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::SetInflaterInput(::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*  inflater)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(),
                        {"SetInflaterInput", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inflater);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::Fill()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(),
                        {"Fill", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::ReadRawBuffer(::ArrayW<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(),
                        {"ReadRawBuffer", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::ReadRawBuffer(::ArrayW<uint8_t>  outBuffer, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(),
                        {"ReadRawBuffer", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, outBuffer, offset, length);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::ReadClearTextBuffer(::ArrayW<uint8_t>  outBuffer, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(),
                        {"ReadClearTextBuffer", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, outBuffer, offset, length);
}
inline uint8_t ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::ReadLeByte()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(),
                        {"ReadLeByte", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::ReadLeShort()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(),
                        {"ReadLeShort", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::ReadLeInt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(),
                        {"ReadLeInt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::ReadLeLong()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(),
                        {"ReadLeLong", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::set_CryptoTransform(::System::Security::Cryptography::ICryptoTransform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(),
                        {"set_CryptoTransform", {}, {::i2c::type_of<::System::Security::Cryptography::ICryptoTransform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer* ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::New_ctor(::System::IO::Stream*  stream)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(stream));
}
inline ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer* ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::New_ctor(::System::IO::Stream*  stream, int32_t  bufferSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer*>(stream, bufferSize));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer::InflaterInputBuffer()   {
}
