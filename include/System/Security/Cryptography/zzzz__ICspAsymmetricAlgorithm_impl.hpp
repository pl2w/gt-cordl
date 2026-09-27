#pragma once
// IWYU pragma private; include "System/Security/Cryptography/ICspAsymmetricAlgorithm.hpp"
#include "System/Security/Cryptography/zzzz__ICspAsymmetricAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__CspKeyContainerInfo_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::ICspAsymmetricAlgorithm.get_CspKeyContainerInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::CspKeyContainerInfo* (::System::Security::Cryptography::ICspAsymmetricAlgorithm::*)()>(&::System::Security::Cryptography::ICspAsymmetricAlgorithm::get_CspKeyContainerInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::ICspAsymmetricAlgorithm*>(),
                    {::i2c::class_of<::System::Security::Cryptography::ICspAsymmetricAlgorithm*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::ICspAsymmetricAlgorithm.ExportCspBlob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::ICspAsymmetricAlgorithm::*)(bool)>(&::System::Security::Cryptography::ICspAsymmetricAlgorithm::ExportCspBlob)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::ICspAsymmetricAlgorithm*>(),
                    {::i2c::class_of<::System::Security::Cryptography::ICspAsymmetricAlgorithm*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::ICspAsymmetricAlgorithm.ImportCspBlob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::ICspAsymmetricAlgorithm::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::ICspAsymmetricAlgorithm::ImportCspBlob)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::ICspAsymmetricAlgorithm*>(),
                    {::i2c::class_of<::System::Security::Cryptography::ICspAsymmetricAlgorithm*>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::System::Security::Cryptography::CspKeyContainerInfo* System::Security::Cryptography::ICspAsymmetricAlgorithm::get_CspKeyContainerInfo()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::ICspAsymmetricAlgorithm*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::CspKeyContainerInfo*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::ICspAsymmetricAlgorithm::ExportCspBlob(bool  includePrivateParameters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::ICspAsymmetricAlgorithm*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, includePrivateParameters);
}
inline void System::Security::Cryptography::ICspAsymmetricAlgorithm::ImportCspBlob(::ArrayW<uint8_t>  rawData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::ICspAsymmetricAlgorithm*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawData);
}
