#pragma once
// IWYU pragma private; include "System/Security/Cryptography/DSA.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_impl.hpp"
#include "System/Security/Cryptography/zzzz__DSA_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Security/Cryptography/zzzz__DSAParameters_def.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithmName_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::DSA._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DSA::*)()>(&::System::Security::Cryptography::DSA::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa165064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSA*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSA.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::DSA* (*)()>(&::System::Security::Cryptography::DSA::Create)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa16506c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSA*>(),
                        {"Create", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSA.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::DSA* (*)(::StringW)>(&::System::Security::Cryptography::DSA::Create)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa1650c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSA*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSA.CreateSignature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::DSA::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::DSA::CreateSignature)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::DSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::DSA*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSA.VerifySignature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::DSA::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::DSA::VerifySignature)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::DSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::DSA*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSA.HashData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::DSA::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Security::Cryptography::HashAlgorithmName)>(&::System::Security::Cryptography::DSA::HashData)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa165164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::DSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::DSA*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSA.HashData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::DSA::*)(::System::IO::Stream*, ::System::Security::Cryptography::HashAlgorithmName)>(&::System::Security::Cryptography::DSA::HashData)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa165208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::DSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::DSA*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSA.SignData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::DSA::*)(::ArrayW<uint8_t>, ::System::Security::Cryptography::HashAlgorithmName)>(&::System::Security::Cryptography::DSA::SignData)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa16522c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSA*>(),
                        {"SignData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Security::Cryptography::HashAlgorithmName>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSA.SignData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::DSA::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Security::Cryptography::HashAlgorithmName)>(&::System::Security::Cryptography::DSA::SignData)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xa165298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::DSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::DSA*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSA.SignData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::DSA::*)(::System::IO::Stream*, ::System::Security::Cryptography::HashAlgorithmName)>(&::System::Security::Cryptography::DSA::SignData)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa165478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::DSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::DSA*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSA.VerifyData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::DSA::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::System::Security::Cryptography::HashAlgorithmName)>(&::System::Security::Cryptography::DSA::VerifyData)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa165530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSA*>(),
                        {"VerifyData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Security::Cryptography::HashAlgorithmName>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSA.VerifyData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::DSA::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, ::System::Security::Cryptography::HashAlgorithmName)>(&::System::Security::Cryptography::DSA::VerifyData)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xa1655a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::DSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::DSA*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSA.VerifyData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::DSA::*)(::System::IO::Stream*, ::ArrayW<uint8_t>, ::System::Security::Cryptography::HashAlgorithmName)>(&::System::Security::Cryptography::DSA::VerifyData)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa165714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::DSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::DSA*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSA.FromXmlString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DSA::*)(::StringW)>(&::System::Security::Cryptography::DSA::FromXmlString)> {
  constexpr static std::size_t size = 0x76c;
  constexpr static std::size_t addrs = 0xa165800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::DSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::DSA*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSA.ToXmlString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::DSA::*)(bool)>(&::System::Security::Cryptography::DSA::ToXmlString)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0xa165f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::DSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::DSA*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSA.ExportParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::DSAParameters (::System::Security::Cryptography::DSA::*)(bool)>(&::System::Security::Cryptography::DSA::ExportParameters)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::DSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::DSA*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSA.ImportParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DSA::*)(::System::Security::Cryptography::DSAParameters)>(&::System::Security::Cryptography::DSA::ImportParameters)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::DSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::DSA*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSA.DerivedClassMustOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Security::Cryptography::DSA::DerivedClassMustOverride)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa165188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSA*>(),
                        {"DerivedClassMustOverride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSA.HashAlgorithmNameNullOrEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::Security::Cryptography::DSA::HashAlgorithmNameNullOrEmpty)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa1653d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSA*>(),
                        {"HashAlgorithmNameNullOrEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSA.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::DSA* (*)(int32_t)>(&::System::Security::Cryptography::DSA::Create)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa1663fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSA*>(),
                        {"Create", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSA.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::DSA* (*)(::System::Security::Cryptography::DSAParameters)>(&::System::Security::Cryptography::DSA::Create)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa1664c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSA*>(),
                        {"Create", {}, {::i2c::type_of<::System::Security::Cryptography::DSAParameters>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSA.TryCreateSignature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::DSA::*)(::System::ReadOnlySpan_1<uint8_t>, ::System::Span_1<uint8_t>, ::by_ref<int32_t>)>(&::System::Security::Cryptography::DSA::TryCreateSignature)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa1665c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::DSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::DSA*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSA.TryHashData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::DSA::*)(::System::ReadOnlySpan_1<uint8_t>, ::System::Span_1<uint8_t>, ::System::Security::Cryptography::HashAlgorithmName, ::by_ref<int32_t>)>(&::System::Security::Cryptography::DSA::TryHashData)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0xa1666d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::DSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::DSA*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSA.TrySignData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::DSA::*)(::System::ReadOnlySpan_1<uint8_t>, ::System::Span_1<uint8_t>, ::System::Security::Cryptography::HashAlgorithmName, ::by_ref<int32_t>)>(&::System::Security::Cryptography::DSA::TrySignData)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xa16694c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::DSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::DSA*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSA.VerifyData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::DSA::*)(::System::ReadOnlySpan_1<uint8_t>, ::System::ReadOnlySpan_1<uint8_t>, ::System::Security::Cryptography::HashAlgorithmName)>(&::System::Security::Cryptography::DSA::VerifyData)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0xa166ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::DSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::DSA*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSA.VerifySignature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::DSA::*)(::System::ReadOnlySpan_1<uint8_t>, ::System::ReadOnlySpan_1<uint8_t>)>(&::System::Security::Cryptography::DSA::VerifySignature)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa166d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::DSA*>(),
                    {::i2c::class_of<::System::Security::Cryptography::DSA*>(), 39}
                ));
    return ___internal_method;
  }
};
inline void System::Security::Cryptography::DSA::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSA*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::DSA* System::Security::Cryptography::DSA::Create()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSA*>(),
                        {"Create", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::DSA*>(nullptr, ___internal_method);
}
inline ::System::Security::Cryptography::DSA* System::Security::Cryptography::DSA::Create(::StringW  algName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSA*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::DSA*>(nullptr, ___internal_method, algName);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::DSA::CreateSignature(::ArrayW<uint8_t>  rgbHash)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::DSA*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, rgbHash);
}
inline bool System::Security::Cryptography::DSA::VerifySignature(::ArrayW<uint8_t>  rgbHash, ::ArrayW<uint8_t>  rgbSignature)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::DSA*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rgbHash, rgbSignature);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::DSA::HashData(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  count, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::DSA*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, data, offset, count, hashAlgorithm);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::DSA::HashData(::System::IO::Stream*  data, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::DSA*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, data, hashAlgorithm);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::DSA::SignData(::ArrayW<uint8_t>  data, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSA*>(),
                        {"SignData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Security::Cryptography::HashAlgorithmName>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, data, hashAlgorithm);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::DSA::SignData(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  count, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::DSA*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, data, offset, count, hashAlgorithm);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::DSA::SignData(::System::IO::Stream*  data, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::DSA*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, data, hashAlgorithm);
}
inline bool System::Security::Cryptography::DSA::VerifyData(::ArrayW<uint8_t>  data, ::ArrayW<uint8_t>  signature, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSA*>(),
                        {"VerifyData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Security::Cryptography::HashAlgorithmName>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, signature, hashAlgorithm);
}
inline bool System::Security::Cryptography::DSA::VerifyData(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  count, ::ArrayW<uint8_t>  signature, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::DSA*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, offset, count, signature, hashAlgorithm);
}
inline bool System::Security::Cryptography::DSA::VerifyData(::System::IO::Stream*  data, ::ArrayW<uint8_t>  signature, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::DSA*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, signature, hashAlgorithm);
}
inline void System::Security::Cryptography::DSA::FromXmlString(::StringW  xmlString)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::DSA*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlString);
}
inline ::StringW System::Security::Cryptography::DSA::ToXmlString(bool  includePrivateParameters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::DSA*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, includePrivateParameters);
}
inline ::System::Security::Cryptography::DSAParameters System::Security::Cryptography::DSA::ExportParameters(bool  includePrivateParameters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::DSA*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::DSAParameters>(this, ___internal_method, includePrivateParameters);
}
inline void System::Security::Cryptography::DSA::ImportParameters(::System::Security::Cryptography::DSAParameters  parameters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::DSA*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline ::System::Exception* System::Security::Cryptography::DSA::DerivedClassMustOverride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSA*>(),
                        {"DerivedClassMustOverride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::Security::Cryptography::DSA::HashAlgorithmNameNullOrEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSA*>(),
                        {"HashAlgorithmNameNullOrEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Security::Cryptography::DSA* System::Security::Cryptography::DSA::Create(int32_t  keySizeInBits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSA*>(),
                        {"Create", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::DSA*>(nullptr, ___internal_method, keySizeInBits);
}
inline ::System::Security::Cryptography::DSA* System::Security::Cryptography::DSA::Create(::System::Security::Cryptography::DSAParameters  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::DSA*>(),
                        {"Create", {}, {::i2c::type_of<::System::Security::Cryptography::DSAParameters>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::DSA*>(nullptr, ___internal_method, parameters);
}
inline bool System::Security::Cryptography::DSA::TryCreateSignature(::System::ReadOnlySpan_1<uint8_t>  hash, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::DSA*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hash, destination, bytesWritten);
}
inline bool System::Security::Cryptography::DSA::TryHashData(::System::ReadOnlySpan_1<uint8_t>  data, ::System::Span_1<uint8_t>  destination, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::by_ref<int32_t>  bytesWritten)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::DSA*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, destination, hashAlgorithm, bytesWritten);
}
inline bool System::Security::Cryptography::DSA::TrySignData(::System::ReadOnlySpan_1<uint8_t>  data, ::System::Span_1<uint8_t>  destination, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::by_ref<int32_t>  bytesWritten)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::DSA*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, destination, hashAlgorithm, bytesWritten);
}
inline bool System::Security::Cryptography::DSA::VerifyData(::System::ReadOnlySpan_1<uint8_t>  data, ::System::ReadOnlySpan_1<uint8_t>  signature, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::DSA*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, signature, hashAlgorithm);
}
inline bool System::Security::Cryptography::DSA::VerifySignature(::System::ReadOnlySpan_1<uint8_t>  hash, ::System::ReadOnlySpan_1<uint8_t>  signature)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::DSA*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hash, signature);
}
inline ::System::Security::Cryptography::DSA* System::Security::Cryptography::DSA::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::DSA*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::DSA::DSA()   {
}
