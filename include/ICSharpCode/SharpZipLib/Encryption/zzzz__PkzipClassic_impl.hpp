#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Encryption/PkzipClassic.hpp"
#include "System/Security/Cryptography/zzzz__SymmetricAlgorithm_impl.hpp"
#include "ICSharpCode/SharpZipLib/Encryption/zzzz__PkzipClassic_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::PkzipClassic.GenerateKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::ICSharpCode::SharpZipLib::Encryption::PkzipClassic::GenerateKeys)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x9ff7b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassic*>(),
                        {"GenerateKeys", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Encryption::PkzipClassic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Encryption::PkzipClassic::*)()>(&::ICSharpCode::SharpZipLib::Encryption::PkzipClassic::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ff7f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t> ICSharpCode::SharpZipLib::Encryption::PkzipClassic::GenerateKeys(::ArrayW<uint8_t>  seed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassic*>(),
                        {"GenerateKeys", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, seed);
}
inline void ICSharpCode::SharpZipLib::Encryption::PkzipClassic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Encryption::PkzipClassic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Encryption::PkzipClassic* ICSharpCode::SharpZipLib::Encryption::PkzipClassic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Encryption::PkzipClassic*>());
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Encryption::PkzipClassic::PkzipClassic()   {
}
