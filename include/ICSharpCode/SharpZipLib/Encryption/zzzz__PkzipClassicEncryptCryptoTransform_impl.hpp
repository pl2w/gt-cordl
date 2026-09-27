#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Encryption/PkzipClassicEncryptCryptoTransform.hpp"
#include "ICSharpCode/SharpZipLib/Encryption/zzzz__PkzipClassicCryptoBase_impl.hpp"
#include "ICSharpCode/SharpZipLib/Encryption/zzzz__PkzipClassicEncryptCryptoTransform_def.hpp"
#include "System/Security/Cryptography/zzzz__ICryptoTransform_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform::*)(::ArrayW<uint8_t>)>(&::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9ff82a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform.TransformFinalBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform::TransformFinalBlock)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9ff82cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform*>(),
                        {"TransformFinalBlock", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform.TransformBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform::TransformBlock)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9ff8358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform*>(),
                        {"TransformBlock", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform.get_CanReuseTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform::*)()>(&::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform::get_CanReuseTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff841c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform*>(),
                        {"get_CanReuseTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform.get_InputBlockSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform::*)()>(&::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform::get_InputBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff8424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform*>(),
                        {"get_InputBlockSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform.get_OutputBlockSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform::*)()>(&::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform::get_OutputBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff842c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform*>(),
                        {"get_OutputBlockSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform.get_CanTransformMultipleBlocks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform::*)()>(&::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform::get_CanTransformMultipleBlocks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff8434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform*>(),
                        {"get_CanTransformMultipleBlocks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform::*)()>(&::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9ff843c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform::_ctor(::ArrayW<uint8_t>  keyBlock)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyBlock);
}
inline ::ArrayW<uint8_t> ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform::TransformFinalBlock(::ArrayW<uint8_t>  inputBuffer, int32_t  inputOffset, int32_t  inputCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform*>(),
                        {"TransformFinalBlock", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, inputBuffer, inputOffset, inputCount);
}
inline int32_t ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform::TransformBlock(::ArrayW<uint8_t>  inputBuffer, int32_t  inputOffset, int32_t  inputCount, ::ArrayW<uint8_t>  outputBuffer, int32_t  outputOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform*>(),
                        {"TransformBlock", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
}
inline bool ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform::get_CanReuseTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform*>(),
                        {"get_CanReuseTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform::get_InputBlockSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform*>(),
                        {"get_InputBlockSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform::get_OutputBlockSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform*>(),
                        {"get_OutputBlockSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform::get_CanTransformMultipleBlocks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform*>(),
                        {"get_CanTransformMultipleBlocks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform* ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform::New_ctor(::ArrayW<uint8_t>  keyBlock)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform*>(keyBlock));
}
/// @brief Convert operator to "::System::Security::Cryptography::ICryptoTransform"
constexpr  ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform::operator ::System::Security::Cryptography::ICryptoTransform*() noexcept {
return static_cast<::System::Security::Cryptography::ICryptoTransform*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Security::Cryptography::ICryptoTransform"
constexpr ::System::Security::Cryptography::ICryptoTransform* ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform::i___System__Security__Cryptography__ICryptoTransform() noexcept {
return static_cast<::System::Security::Cryptography::ICryptoTransform*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Encryption::PkzipClassicEncryptCryptoTransform::PkzipClassicEncryptCryptoTransform()   {
}
