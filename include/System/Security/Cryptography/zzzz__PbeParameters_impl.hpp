#pragma once
// IWYU pragma private; include "System/Security/Cryptography/PbeParameters.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithmName_impl.hpp"
#include "System/Security/Cryptography/zzzz__PbeEncryptionAlgorithm_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__PbeParameters_def.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithmName_def.hpp"
#include "System/Security/Cryptography/zzzz__PbeEncryptionAlgorithm_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::PbeParameters.get_EncryptionAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::PbeEncryptionAlgorithm (::System::Security::Cryptography::PbeParameters::*)()>(&::System::Security::Cryptography::PbeParameters::get_EncryptionAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa188da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::PbeParameters*>(),
                        {"get_EncryptionAlgorithm", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::PbeParameters.get_HashAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::HashAlgorithmName (::System::Security::Cryptography::PbeParameters::*)()>(&::System::Security::Cryptography::PbeParameters::get_HashAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa188da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::PbeParameters*>(),
                        {"get_HashAlgorithm", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::PbeParameters.get_IterationCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::PbeParameters::*)()>(&::System::Security::Cryptography::PbeParameters::get_IterationCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa188db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::PbeParameters*>(),
                        {"get_IterationCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::PbeParameters._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::PbeParameters::*)(::System::Security::Cryptography::PbeEncryptionAlgorithm, ::System::Security::Cryptography::HashAlgorithmName, int32_t)>(&::System::Security::Cryptography::PbeParameters::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa188db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::PbeParameters*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::PbeEncryptionAlgorithm>(), ::i2c::type_of<::System::Security::Cryptography::HashAlgorithmName>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::PbeEncryptionAlgorithm& System::Security::Cryptography::PbeParameters::__cordl_internal_get__EncryptionAlgorithm_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EncryptionAlgorithm_k__BackingField;
}
constexpr ::System::Security::Cryptography::PbeEncryptionAlgorithm const& System::Security::Cryptography::PbeParameters::__cordl_internal_get__EncryptionAlgorithm_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EncryptionAlgorithm_k__BackingField;
}
constexpr void System::Security::Cryptography::PbeParameters::__cordl_internal_set__EncryptionAlgorithm_k__BackingField(::System::Security::Cryptography::PbeEncryptionAlgorithm  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EncryptionAlgorithm_k__BackingField = value;
}
constexpr ::System::Security::Cryptography::HashAlgorithmName& System::Security::Cryptography::PbeParameters::__cordl_internal_get__HashAlgorithm_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HashAlgorithm_k__BackingField;
}
constexpr ::System::Security::Cryptography::HashAlgorithmName const& System::Security::Cryptography::PbeParameters::__cordl_internal_get__HashAlgorithm_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HashAlgorithm_k__BackingField;
}
constexpr void System::Security::Cryptography::PbeParameters::__cordl_internal_set__HashAlgorithm_k__BackingField(::System::Security::Cryptography::HashAlgorithmName  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HashAlgorithm_k__BackingField = value;
}
constexpr int32_t& System::Security::Cryptography::PbeParameters::__cordl_internal_get__IterationCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IterationCount_k__BackingField;
}
constexpr int32_t const& System::Security::Cryptography::PbeParameters::__cordl_internal_get__IterationCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IterationCount_k__BackingField;
}
constexpr void System::Security::Cryptography::PbeParameters::__cordl_internal_set__IterationCount_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IterationCount_k__BackingField = value;
}
inline ::System::Security::Cryptography::PbeEncryptionAlgorithm System::Security::Cryptography::PbeParameters::get_EncryptionAlgorithm()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::PbeParameters*>(),
                        {"get_EncryptionAlgorithm", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::PbeEncryptionAlgorithm>(this, ___internal_method);
}
inline ::System::Security::Cryptography::HashAlgorithmName System::Security::Cryptography::PbeParameters::get_HashAlgorithm()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::PbeParameters*>(),
                        {"get_HashAlgorithm", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::HashAlgorithmName>(this, ___internal_method);
}
inline int32_t System::Security::Cryptography::PbeParameters::get_IterationCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::PbeParameters*>(),
                        {"get_IterationCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Security::Cryptography::PbeParameters::_ctor(::System::Security::Cryptography::PbeEncryptionAlgorithm  encryptionAlgorithm, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, int32_t  iterationCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::PbeParameters*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::PbeEncryptionAlgorithm>(), ::i2c::type_of<::System::Security::Cryptography::HashAlgorithmName>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encryptionAlgorithm, hashAlgorithm, iterationCount);
}
inline ::System::Security::Cryptography::PbeParameters* System::Security::Cryptography::PbeParameters::New_ctor(::System::Security::Cryptography::PbeEncryptionAlgorithm  encryptionAlgorithm, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, int32_t  iterationCount)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::PbeParameters*>(encryptionAlgorithm, hashAlgorithm, iterationCount));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::PbeParameters::PbeParameters()   {
}
