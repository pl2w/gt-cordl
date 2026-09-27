#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Encryption/ZipAESTransform.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ICSharpCode/SharpZipLib/Encryption/zzzz__ZipAESTransform_def.hpp"
#include "System/Security/Cryptography/zzzz__ICryptoTransform_def.hpp"
#include "System/Security/Cryptography/zzzz__IncrementalHash_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::*)(::StringW, ::ArrayW<uint8_t>, int32_t, bool)>(&::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::_ctor)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x9ff9670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform.TransformBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::TransformBlock)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x9ff9408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform*>(),
                        {"TransformBlock", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform.get_PwdVerifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::*)()>(&::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::get_PwdVerifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff9970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform*>(),
                        {"get_PwdVerifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform.GetAuthCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::*)()>(&::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::GetAuthCode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9ff93c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform*>(),
                        {"GetAuthCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform.TransformFinalBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::TransformFinalBlock)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9ff9978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform*>(),
                        {"TransformFinalBlock", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform.get_InputBlockSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::*)()>(&::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::get_InputBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff9a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform*>(),
                        {"get_InputBlockSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform.get_OutputBlockSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::*)()>(&::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::get_OutputBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff9a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform*>(),
                        {"get_OutputBlockSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform.get_CanTransformMultipleBlocks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::*)()>(&::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::get_CanTransformMultipleBlocks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff9a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform*>(),
                        {"get_CanTransformMultipleBlocks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform.get_CanReuseTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::*)()>(&::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::get_CanReuseTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff9a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform*>(),
                        {"get_CanReuseTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::*)()>(&::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::Dispose)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9ff9a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::__cordl_internal_get__blockSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blockSize;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::__cordl_internal_get__blockSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blockSize;
}
constexpr void ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::__cordl_internal_set__blockSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____blockSize = value;
}
constexpr ::System::Security::Cryptography::ICryptoTransform*& ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::__cordl_internal_get__encryptor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encryptor;
}
constexpr ::System::Security::Cryptography::ICryptoTransform* const& ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::__cordl_internal_get__encryptor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encryptor;
}
constexpr void ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::__cordl_internal_set__encryptor(::System::Security::Cryptography::ICryptoTransform*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encryptor = value;
}
constexpr ::ArrayW<uint8_t>& ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::__cordl_internal_get__counterNonce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____counterNonce;
}
constexpr ::ArrayW<uint8_t> const& ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::__cordl_internal_get__counterNonce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____counterNonce;
}
constexpr void ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::__cordl_internal_set__counterNonce(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____counterNonce = value;
}
constexpr ::ArrayW<uint8_t>& ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::__cordl_internal_get__encryptBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encryptBuffer;
}
constexpr ::ArrayW<uint8_t> const& ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::__cordl_internal_get__encryptBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encryptBuffer;
}
constexpr void ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::__cordl_internal_set__encryptBuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encryptBuffer = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::__cordl_internal_get__encrPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encrPos;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::__cordl_internal_get__encrPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encrPos;
}
constexpr void ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::__cordl_internal_set__encrPos(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encrPos = value;
}
constexpr ::ArrayW<uint8_t>& ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::__cordl_internal_get__pwdVerifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pwdVerifier;
}
constexpr ::ArrayW<uint8_t> const& ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::__cordl_internal_get__pwdVerifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pwdVerifier;
}
constexpr void ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::__cordl_internal_set__pwdVerifier(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pwdVerifier = value;
}
constexpr ::System::Security::Cryptography::IncrementalHash*& ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::__cordl_internal_get__hmacsha1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hmacsha1;
}
constexpr ::System::Security::Cryptography::IncrementalHash* const& ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::__cordl_internal_get__hmacsha1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hmacsha1;
}
constexpr void ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::__cordl_internal_set__hmacsha1(::System::Security::Cryptography::IncrementalHash*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hmacsha1 = value;
}
constexpr ::ArrayW<uint8_t>& ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::__cordl_internal_get__authCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____authCode;
}
constexpr ::ArrayW<uint8_t> const& ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::__cordl_internal_get__authCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____authCode;
}
constexpr void ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::__cordl_internal_set__authCode(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____authCode = value;
}
constexpr bool& ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::__cordl_internal_get__writeMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writeMode;
}
constexpr bool const& ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::__cordl_internal_get__writeMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writeMode;
}
constexpr void ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::__cordl_internal_set__writeMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____writeMode = value;
}
inline void ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::_ctor(::StringW  key, ::ArrayW<uint8_t>  saltBytes, int32_t  blockSize, bool  writeMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, saltBytes, blockSize, writeMode);
}
inline int32_t ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::TransformBlock(::ArrayW<uint8_t>  inputBuffer, int32_t  inputOffset, int32_t  inputCount, ::ArrayW<uint8_t>  outputBuffer, int32_t  outputOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform*>(),
                        {"TransformBlock", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
}
inline ::ArrayW<uint8_t> ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::get_PwdVerifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform*>(),
                        {"get_PwdVerifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::GetAuthCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform*>(),
                        {"GetAuthCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::TransformFinalBlock(::ArrayW<uint8_t>  inputBuffer, int32_t  inputOffset, int32_t  inputCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform*>(),
                        {"TransformFinalBlock", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, inputBuffer, inputOffset, inputCount);
}
inline int32_t ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::get_InputBlockSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform*>(),
                        {"get_InputBlockSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::get_OutputBlockSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform*>(),
                        {"get_OutputBlockSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::get_CanTransformMultipleBlocks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform*>(),
                        {"get_CanTransformMultipleBlocks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::get_CanReuseTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform*>(),
                        {"get_CanReuseTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform* ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::New_ctor(::StringW  key, ::ArrayW<uint8_t>  saltBytes, int32_t  blockSize, bool  writeMode)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform*>(key, saltBytes, blockSize, writeMode));
}
/// @brief Convert operator to "::System::Security::Cryptography::ICryptoTransform"
constexpr  ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::operator ::System::Security::Cryptography::ICryptoTransform*() noexcept {
return static_cast<::System::Security::Cryptography::ICryptoTransform*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Security::Cryptography::ICryptoTransform"
constexpr ::System::Security::Cryptography::ICryptoTransform* ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::i___System__Security__Cryptography__ICryptoTransform() noexcept {
return static_cast<::System::Security::Cryptography::ICryptoTransform*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Encryption::ZipAESTransform::ZipAESTransform()   {
}
