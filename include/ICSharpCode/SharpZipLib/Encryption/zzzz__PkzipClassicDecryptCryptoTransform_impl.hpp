#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Encryption/PkzipClassicDecryptCryptoTransform.hpp"
#include "ICSharpCode/SharpZipLib/Encryption/zzzz__PkzipClassicCryptoBase_impl.hpp"
#include "ICSharpCode/SharpZipLib/Encryption/zzzz__PkzipClassicDecryptCryptoTransform_def.hpp"
#include "System/Security/Cryptography/zzzz__ICryptoTransform_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform::*)(::ArrayW<uint8_t>)>(&::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9ff8440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform.TransformFinalBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform::TransformFinalBlock)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9ff846c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform*>(),
                        {"TransformFinalBlock", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform.TransformBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform::TransformBlock)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9ff84f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform*>(),
                        {"TransformBlock", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform.get_CanReuseTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform::*)()>(&::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform::get_CanReuseTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff85b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform*>(),
                        {"get_CanReuseTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform.get_InputBlockSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform::*)()>(&::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform::get_InputBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff85c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform*>(),
                        {"get_InputBlockSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform.get_OutputBlockSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform::*)()>(&::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform::get_OutputBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff85c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform*>(),
                        {"get_OutputBlockSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform.get_CanTransformMultipleBlocks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform::*)()>(&::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform::get_CanTransformMultipleBlocks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff85d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform*>(),
                        {"get_CanTransformMultipleBlocks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform::*)()>(&::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9ff85d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform::_ctor(::ArrayW<uint8_t>  keyBlock)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyBlock);
}
inline ::ArrayW<uint8_t> ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform::TransformFinalBlock(::ArrayW<uint8_t>  inputBuffer, int32_t  inputOffset, int32_t  inputCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform*>(),
                        {"TransformFinalBlock", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, inputBuffer, inputOffset, inputCount);
}
inline int32_t ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform::TransformBlock(::ArrayW<uint8_t>  inputBuffer, int32_t  inputOffset, int32_t  inputCount, ::ArrayW<uint8_t>  outputBuffer, int32_t  outputOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform*>(),
                        {"TransformBlock", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
}
inline bool ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform::get_CanReuseTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform*>(),
                        {"get_CanReuseTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform::get_InputBlockSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform*>(),
                        {"get_InputBlockSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform::get_OutputBlockSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform*>(),
                        {"get_OutputBlockSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform::get_CanTransformMultipleBlocks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform*>(),
                        {"get_CanTransformMultipleBlocks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform* ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform::New_ctor(::ArrayW<uint8_t>  keyBlock)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform*>(keyBlock));
}
/// @brief Convert operator to "::System::Security::Cryptography::ICryptoTransform"
constexpr  ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform::operator ::System::Security::Cryptography::ICryptoTransform*() noexcept {
return static_cast<::System::Security::Cryptography::ICryptoTransform*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Security::Cryptography::ICryptoTransform"
constexpr ::System::Security::Cryptography::ICryptoTransform* ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform::i___System__Security__Cryptography__ICryptoTransform() noexcept {
return static_cast<::System::Security::Cryptography::ICryptoTransform*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicDecryptCryptoTransform::PkzipClassicDecryptCryptoTransform()   {
}
