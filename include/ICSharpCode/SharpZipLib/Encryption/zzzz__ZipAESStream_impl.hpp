#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Encryption/ZipAESStream.hpp"
#include "System/Security/Cryptography/zzzz__CryptoStream_impl.hpp"
#include "ICSharpCode/SharpZipLib/Encryption/zzzz__ZipAESStream_def.hpp"
#include "ICSharpCode/SharpZipLib/Encryption/zzzz__ZipAESTransform_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Security/Cryptography/zzzz__CryptoStreamMode_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::ZipAESStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Encryption::ZipAESStream::*)(::System::IO::Stream*, ::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform*, ::System::Security::Cryptography::CryptoStreamMode)>(&::ICSharpCode::SharpZipLib::Encryption::ZipAESStream::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x9ff8c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform*>(), ::i2c::type_of<::System::Security::Cryptography::CryptoStreamMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::ZipAESStream.get_HasBufferedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Encryption::ZipAESStream::*)()>(&::ICSharpCode::SharpZipLib::Encryption::ZipAESStream::get_HasBufferedData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9ff8d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESStream*>(),
                        {"get_HasBufferedData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::ZipAESStream.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Encryption::ZipAESStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Encryption::ZipAESStream::Read)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9ff8d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESStream*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::ZipAESStream.ReadAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::ICSharpCode::SharpZipLib::Encryption::ZipAESStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::ICSharpCode::SharpZipLib::Encryption::ZipAESStream::ReadAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9ff90bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESStream*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::ZipAESStream.ReadAndTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Encryption::ZipAESStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Encryption::ZipAESStream::ReadAndTransform)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x9ff8e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESStream*>(),
                        {"ReadAndTransform", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::ZipAESStream.ReadBufferedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Encryption::ZipAESStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Encryption::ZipAESStream::ReadBufferedData)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9ff8ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESStream*>(),
                        {"ReadBufferedData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::ZipAESStream.TransformAndBufferBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Encryption::ZipAESStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Encryption::ZipAESStream::TransformAndBufferBlock)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x9ff92c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESStream*>(),
                        {"TransformAndBufferBlock", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::ZipAESStream.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Encryption::ZipAESStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Encryption::ZipAESStream::Write)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9ff9638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESStream*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESStream*>(), 38}
                ));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& ICSharpCode::SharpZipLib::Encryption::ZipAESStream::__cordl_internal_get__stream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stream;
}
constexpr ::System::IO::Stream* const& ICSharpCode::SharpZipLib::Encryption::ZipAESStream::__cordl_internal_get__stream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stream;
}
constexpr void ICSharpCode::SharpZipLib::Encryption::ZipAESStream::__cordl_internal_set__stream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stream = value;
}
constexpr ::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform*& ICSharpCode::SharpZipLib::Encryption::ZipAESStream::__cordl_internal_get__transform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transform;
}
constexpr ::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform* const& ICSharpCode::SharpZipLib::Encryption::ZipAESStream::__cordl_internal_get__transform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transform;
}
constexpr void ICSharpCode::SharpZipLib::Encryption::ZipAESStream::__cordl_internal_set__transform(::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transform = value;
}
constexpr ::ArrayW<uint8_t>& ICSharpCode::SharpZipLib::Encryption::ZipAESStream::__cordl_internal_get__slideBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slideBuffer;
}
constexpr ::ArrayW<uint8_t> const& ICSharpCode::SharpZipLib::Encryption::ZipAESStream::__cordl_internal_get__slideBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slideBuffer;
}
constexpr void ICSharpCode::SharpZipLib::Encryption::ZipAESStream::__cordl_internal_set__slideBuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____slideBuffer = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Encryption::ZipAESStream::__cordl_internal_get__slideBufStartPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slideBufStartPos;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Encryption::ZipAESStream::__cordl_internal_get__slideBufStartPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slideBufStartPos;
}
constexpr void ICSharpCode::SharpZipLib::Encryption::ZipAESStream::__cordl_internal_set__slideBufStartPos(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____slideBufStartPos = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Encryption::ZipAESStream::__cordl_internal_get__slideBufFreePos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slideBufFreePos;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Encryption::ZipAESStream::__cordl_internal_get__slideBufFreePos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slideBufFreePos;
}
constexpr void ICSharpCode::SharpZipLib::Encryption::ZipAESStream::__cordl_internal_set__slideBufFreePos(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____slideBufFreePos = value;
}
constexpr ::ArrayW<uint8_t>& ICSharpCode::SharpZipLib::Encryption::ZipAESStream::__cordl_internal_get__transformBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformBuffer;
}
constexpr ::ArrayW<uint8_t> const& ICSharpCode::SharpZipLib::Encryption::ZipAESStream::__cordl_internal_get__transformBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformBuffer;
}
constexpr void ICSharpCode::SharpZipLib::Encryption::ZipAESStream::__cordl_internal_set__transformBuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transformBuffer = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Encryption::ZipAESStream::__cordl_internal_get__transformBufferFreePos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformBufferFreePos;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Encryption::ZipAESStream::__cordl_internal_get__transformBufferFreePos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformBufferFreePos;
}
constexpr void ICSharpCode::SharpZipLib::Encryption::ZipAESStream::__cordl_internal_set__transformBufferFreePos(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transformBufferFreePos = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Encryption::ZipAESStream::__cordl_internal_get__transformBufferStartPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformBufferStartPos;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Encryption::ZipAESStream::__cordl_internal_get__transformBufferStartPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformBufferStartPos;
}
constexpr void ICSharpCode::SharpZipLib::Encryption::ZipAESStream::__cordl_internal_set__transformBufferStartPos(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transformBufferStartPos = value;
}
inline void ICSharpCode::SharpZipLib::Encryption::ZipAESStream::_ctor(::System::IO::Stream*  stream, ::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform*  transform, ::System::Security::Cryptography::CryptoStreamMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform*>(), ::i2c::type_of<::System::Security::Cryptography::CryptoStreamMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, transform, mode);
}
inline bool ICSharpCode::SharpZipLib::Encryption::ZipAESStream::get_HasBufferedData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESStream*>(),
                        {"get_HasBufferedData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Encryption::ZipAESStream::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESStream*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* ICSharpCode::SharpZipLib::Encryption::ZipAESStream::ReadAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESStream*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline int32_t ICSharpCode::SharpZipLib::Encryption::ZipAESStream::ReadAndTransform(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESStream*>(),
                        {"ReadAndTransform", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline int32_t ICSharpCode::SharpZipLib::Encryption::ZipAESStream::ReadBufferedData(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESStream*>(),
                        {"ReadBufferedData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline int32_t ICSharpCode::SharpZipLib::Encryption::ZipAESStream::TransformAndBufferBlock(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, int32_t  blockSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESStream*>(),
                        {"TransformAndBufferBlock", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count, blockSize);
}
inline void ICSharpCode::SharpZipLib::Encryption::ZipAESStream::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESStream*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline ::ICSharpCode::SharpZipLib::Encryption::ZipAESStream* ICSharpCode::SharpZipLib::Encryption::ZipAESStream::New_ctor(::System::IO::Stream*  stream, ::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform*  transform, ::System::Security::Cryptography::CryptoStreamMode  mode)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Encryption::ZipAESStream*>(stream, transform, mode));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Encryption::ZipAESStream::ZipAESStream()   {
}
