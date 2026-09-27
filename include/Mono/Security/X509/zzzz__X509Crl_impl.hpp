#pragma once
// IWYU pragma private; include "Mono/Security/X509/X509Crl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/X509/zzzz__X509Crl_def.hpp"
#include "Mono/Security/X509/zzzz__X509Certificate_def.hpp"
#include "Mono/Security/X509/zzzz__X509Crl_def.hpp"
#include "Mono/Security/X509/zzzz__X509ExtensionCollection_def.hpp"
#include "Mono/Security/zzzz__ASN1_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__DSA_def.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::X509Crl._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Crl::*)(::ArrayW<uint8_t>)>(&::Mono::Security::X509::X509Crl::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa0ed044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.Parse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Crl::*)(::ArrayW<uint8_t>)>(&::Mono::Security::X509::X509Crl::Parse)> {
  constexpr static std::size_t size = 0x6e8;
  constexpr static std::size_t addrs = 0xa0ed160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"Parse", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.get_Entries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (::Mono::Security::X509::X509Crl::*)()>(&::Mono::Security::X509::X509Crl::get_Entries)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa0ed93c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"get_Entries", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Crl_X509CrlEntry* (::Mono::Security::X509::X509Crl::*)(int32_t)>(&::Mono::Security::X509::X509Crl::get_Item)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa0ed948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Crl_X509CrlEntry* (::Mono::Security::X509::X509Crl::*)(::ArrayW<uint8_t>)>(&::Mono::Security::X509::X509Crl::get_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa0ed9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"get_Item", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.get_Extensions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509ExtensionCollection* (::Mono::Security::X509::X509Crl::*)()>(&::Mono::Security::X509::X509Crl::get_Extensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0edb28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"get_Extensions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.get_Hash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::X509Crl::*)()>(&::Mono::Security::X509::X509Crl::get_Hash)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0xa0edb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"get_Hash", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.get_IssuerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::X509::X509Crl::*)()>(&::Mono::Security::X509::X509Crl::get_IssuerName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0edd08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"get_IssuerName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.get_NextUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Mono::Security::X509::X509Crl::*)()>(&::Mono::Security::X509::X509Crl::get_NextUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0edd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"get_NextUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.get_ThisUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Mono::Security::X509::X509Crl::*)()>(&::Mono::Security::X509::X509Crl::get_ThisUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0edd18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"get_ThisUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.get_SignatureAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::X509::X509Crl::*)()>(&::Mono::Security::X509::X509Crl::get_SignatureAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0edd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"get_SignatureAlgorithm", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.get_Signature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::X509Crl::*)()>(&::Mono::Security::X509::X509Crl::get_Signature)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa0edd28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"get_Signature", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.get_RawData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::X509Crl::*)()>(&::Mono::Security::X509::X509Crl::get_RawData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa0edd9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"get_RawData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.get_Version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Mono::Security::X509::X509Crl::*)()>(&::Mono::Security::X509::X509Crl::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0ede14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"get_Version", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.get_IsCurrent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::X509::X509Crl::*)()>(&::Mono::Security::X509::X509Crl::get_IsCurrent)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa0ede1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"get_IsCurrent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.WasCurrent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::X509::X509Crl::*)(::System::DateTime)>(&::Mono::Security::X509::X509Crl::WasCurrent)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa0ede7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"WasCurrent", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.GetBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::X509Crl::*)()>(&::Mono::Security::X509::X509Crl::GetBytes)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa0edf7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"GetBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::X509::X509Crl::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Mono::Security::X509::X509Crl::Compare)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa0edff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"Compare", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.GetCrlEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Crl_X509CrlEntry* (::Mono::Security::X509::X509Crl::*)(::Mono::Security::X509::X509Certificate*)>(&::Mono::Security::X509::X509Crl::GetCrlEntry)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa0ee05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"GetCrlEntry", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.GetCrlEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Crl_X509CrlEntry* (::Mono::Security::X509::X509Crl::*)(::ArrayW<uint8_t>)>(&::Mono::Security::X509::X509Crl::GetCrlEntry)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa0ed9e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"GetCrlEntry", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.VerifySignature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::X509::X509Crl::*)(::Mono::Security::X509::X509Certificate*)>(&::Mono::Security::X509::X509Crl::VerifySignature)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0xa0ee150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"VerifySignature", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.VerifySignature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::X509::X509Crl::*)(::System::Security::Cryptography::DSA*)>(&::Mono::Security::X509::X509Crl::VerifySignature)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0xa0ee378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"VerifySignature", {}, {::i2c::type_of<::System::Security::Cryptography::DSA*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.VerifySignature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::X509::X509Crl::*)(::System::Security::Cryptography::RSA*)>(&::Mono::Security::X509::X509Crl::VerifySignature)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa0ee63c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"VerifySignature", {}, {::i2c::type_of<::System::Security::Cryptography::RSA*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.VerifySignature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::X509::X509Crl::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&::Mono::Security::X509::X509Crl::VerifySignature)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xa0ee710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"VerifySignature", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.CreateFromFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Crl* (*)(::StringW)>(&::Mono::Security::X509::X509Crl::CreateFromFile)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xa0ee890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"CreateFromFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Mono::Security::X509::X509Crl::__cordl_internal_get_issuer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___issuer;
}
constexpr ::StringW const& Mono::Security::X509::X509Crl::__cordl_internal_get_issuer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___issuer;
}
constexpr void Mono::Security::X509::X509Crl::__cordl_internal_set_issuer(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___issuer = value;
}
constexpr uint8_t& Mono::Security::X509::X509Crl::__cordl_internal_get_version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr uint8_t const& Mono::Security::X509::X509Crl::__cordl_internal_get_version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr void Mono::Security::X509::X509Crl::__cordl_internal_set_version(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___version = value;
}
constexpr ::System::DateTime& Mono::Security::X509::X509Crl::__cordl_internal_get_thisUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thisUpdate;
}
constexpr ::System::DateTime const& Mono::Security::X509::X509Crl::__cordl_internal_get_thisUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thisUpdate;
}
constexpr void Mono::Security::X509::X509Crl::__cordl_internal_set_thisUpdate(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thisUpdate = value;
}
constexpr ::System::DateTime& Mono::Security::X509::X509Crl::__cordl_internal_get_nextUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextUpdate;
}
constexpr ::System::DateTime const& Mono::Security::X509::X509Crl::__cordl_internal_get_nextUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextUpdate;
}
constexpr void Mono::Security::X509::X509Crl::__cordl_internal_set_nextUpdate(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextUpdate = value;
}
constexpr ::System::Collections::ArrayList*& Mono::Security::X509::X509Crl::__cordl_internal_get_entries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entries;
}
constexpr ::System::Collections::ArrayList* const& Mono::Security::X509::X509Crl::__cordl_internal_get_entries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entries;
}
constexpr void Mono::Security::X509::X509Crl::__cordl_internal_set_entries(::System::Collections::ArrayList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entries = value;
}
constexpr ::StringW& Mono::Security::X509::X509Crl::__cordl_internal_get_signatureOID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___signatureOID;
}
constexpr ::StringW const& Mono::Security::X509::X509Crl::__cordl_internal_get_signatureOID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___signatureOID;
}
constexpr void Mono::Security::X509::X509Crl::__cordl_internal_set_signatureOID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___signatureOID = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::X509::X509Crl::__cordl_internal_get_signature()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___signature;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::X509::X509Crl::__cordl_internal_get_signature() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___signature;
}
constexpr void Mono::Security::X509::X509Crl::__cordl_internal_set_signature(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___signature = value;
}
constexpr ::Mono::Security::X509::X509ExtensionCollection*& Mono::Security::X509::X509Crl::__cordl_internal_get_extensions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extensions;
}
constexpr ::Mono::Security::X509::X509ExtensionCollection* const& Mono::Security::X509::X509Crl::__cordl_internal_get_extensions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extensions;
}
constexpr void Mono::Security::X509::X509Crl::__cordl_internal_set_extensions(::Mono::Security::X509::X509ExtensionCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extensions = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::X509::X509Crl::__cordl_internal_get_encoded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encoded;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::X509::X509Crl::__cordl_internal_get_encoded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encoded;
}
constexpr void Mono::Security::X509::X509Crl::__cordl_internal_set_encoded(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___encoded = value;
}
constexpr ::ArrayW<uint8_t>& Mono::Security::X509::X509Crl::__cordl_internal_get_hash_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hash_value;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::X509::X509Crl::__cordl_internal_get_hash_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hash_value;
}
constexpr void Mono::Security::X509::X509Crl::__cordl_internal_set_hash_value(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hash_value = value;
}
inline void Mono::Security::X509::X509Crl::_ctor(::ArrayW<uint8_t>  crl)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crl);
}
inline void Mono::Security::X509::X509Crl::Parse(::ArrayW<uint8_t>  crl)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"Parse", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crl);
}
inline ::System::Collections::ArrayList* Mono::Security::X509::X509Crl::get_Entries()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"get_Entries", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method);
}
inline ::Mono::Security::X509::X509Crl_X509CrlEntry* Mono::Security::X509::X509Crl::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Crl_X509CrlEntry*>(this, ___internal_method, index);
}
inline ::Mono::Security::X509::X509Crl_X509CrlEntry* Mono::Security::X509::X509Crl::get_Item(::ArrayW<uint8_t>  serialNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"get_Item", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Crl_X509CrlEntry*>(this, ___internal_method, serialNumber);
}
inline ::Mono::Security::X509::X509ExtensionCollection* Mono::Security::X509::X509Crl::get_Extensions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"get_Extensions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509ExtensionCollection*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X509Crl::get_Hash()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"get_Hash", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::StringW Mono::Security::X509::X509Crl::get_IssuerName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"get_IssuerName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::DateTime Mono::Security::X509::X509Crl::get_NextUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"get_NextUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::DateTime Mono::Security::X509::X509Crl::get_ThisUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"get_ThisUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::StringW Mono::Security::X509::X509Crl::get_SignatureAlgorithm()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"get_SignatureAlgorithm", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X509Crl::get_Signature()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"get_Signature", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X509Crl::get_RawData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"get_RawData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline uint8_t Mono::Security::X509::X509Crl::get_Version()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"get_Version", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline bool Mono::Security::X509::X509Crl::get_IsCurrent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"get_IsCurrent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Mono::Security::X509::X509Crl::WasCurrent(::System::DateTime  instant)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"WasCurrent", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, instant);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X509Crl::GetBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"GetBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline bool Mono::Security::X509::X509Crl::Compare(::ArrayW<uint8_t>  array1, ::ArrayW<uint8_t>  array2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"Compare", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, array1, array2);
}
inline ::Mono::Security::X509::X509Crl_X509CrlEntry* Mono::Security::X509::X509Crl::GetCrlEntry(::Mono::Security::X509::X509Certificate*  x509)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"GetCrlEntry", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Crl_X509CrlEntry*>(this, ___internal_method, x509);
}
inline ::Mono::Security::X509::X509Crl_X509CrlEntry* Mono::Security::X509::X509Crl::GetCrlEntry(::ArrayW<uint8_t>  serialNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"GetCrlEntry", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Crl_X509CrlEntry*>(this, ___internal_method, serialNumber);
}
inline bool Mono::Security::X509::X509Crl::VerifySignature(::Mono::Security::X509::X509Certificate*  x509)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"VerifySignature", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x509);
}
inline bool Mono::Security::X509::X509Crl::VerifySignature(::System::Security::Cryptography::DSA*  dsa)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"VerifySignature", {}, {::i2c::type_of<::System::Security::Cryptography::DSA*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, dsa);
}
inline bool Mono::Security::X509::X509Crl::VerifySignature(::System::Security::Cryptography::RSA*  rsa)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"VerifySignature", {}, {::i2c::type_of<::System::Security::Cryptography::RSA*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rsa);
}
inline bool Mono::Security::X509::X509Crl::VerifySignature(::System::Security::Cryptography::AsymmetricAlgorithm*  aa)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"VerifySignature", {}, {::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, aa);
}
inline ::Mono::Security::X509::X509Crl* Mono::Security::X509::X509Crl::CreateFromFile(::StringW  filename)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl*>(),
                        {"CreateFromFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Crl*>(nullptr, ___internal_method, filename);
}
inline ::Mono::Security::X509::X509Crl* Mono::Security::X509::X509Crl::New_ctor(::ArrayW<uint8_t>  crl)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X509Crl*>(crl));
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X509Crl::X509Crl()   {
}
//  Writing Method size for method: ::Mono::Security::X509::X509Crl_X509CrlEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Crl_X509CrlEntry::*)(::ArrayW<uint8_t>, ::System::DateTime, ::Mono::Security::X509::X509ExtensionCollection*)>(&::Mono::Security::X509::X509Crl_X509CrlEntry::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa0eea88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl_X509CrlEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Mono::Security::X509::X509ExtensionCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl_X509CrlEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Crl_X509CrlEntry::*)(::Mono::Security::ASN1*)>(&::Mono::Security::X509::X509Crl_X509CrlEntry::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa0ed848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl_X509CrlEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Security::ASN1*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl_X509CrlEntry.get_SerialNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::X509Crl_X509CrlEntry::*)()>(&::Mono::Security::X509::X509Crl_X509CrlEntry::get_SerialNumber)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa0ee0d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl_X509CrlEntry*>(),
                        {"get_SerialNumber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl_X509CrlEntry.get_RevocationDate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Mono::Security::X509::X509Crl_X509CrlEntry::*)()>(&::Mono::Security::X509::X509Crl_X509CrlEntry::get_RevocationDate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0eeb24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl_X509CrlEntry*>(),
                        {"get_RevocationDate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl_X509CrlEntry.get_Extensions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509ExtensionCollection* (::Mono::Security::X509::X509Crl_X509CrlEntry::*)()>(&::Mono::Security::X509::X509Crl_X509CrlEntry::get_Extensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0eeb2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl_X509CrlEntry*>(),
                        {"get_Extensions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl_X509CrlEntry.GetBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::X509Crl_X509CrlEntry::*)()>(&::Mono::Security::X509::X509Crl_X509CrlEntry::GetBytes)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa0eeb34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl_X509CrlEntry*>(),
                        {"GetBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Mono::Security::X509::X509Crl_X509CrlEntry::__cordl_internal_get_sn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sn;
}
constexpr ::ArrayW<uint8_t> const& Mono::Security::X509::X509Crl_X509CrlEntry::__cordl_internal_get_sn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sn;
}
constexpr void Mono::Security::X509::X509Crl_X509CrlEntry::__cordl_internal_set_sn(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sn = value;
}
constexpr ::System::DateTime& Mono::Security::X509::X509Crl_X509CrlEntry::__cordl_internal_get_revocationDate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___revocationDate;
}
constexpr ::System::DateTime const& Mono::Security::X509::X509Crl_X509CrlEntry::__cordl_internal_get_revocationDate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___revocationDate;
}
constexpr void Mono::Security::X509::X509Crl_X509CrlEntry::__cordl_internal_set_revocationDate(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___revocationDate = value;
}
constexpr ::Mono::Security::X509::X509ExtensionCollection*& Mono::Security::X509::X509Crl_X509CrlEntry::__cordl_internal_get_extensions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extensions;
}
constexpr ::Mono::Security::X509::X509ExtensionCollection* const& Mono::Security::X509::X509Crl_X509CrlEntry::__cordl_internal_get_extensions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extensions;
}
constexpr void Mono::Security::X509::X509Crl_X509CrlEntry::__cordl_internal_set_extensions(::Mono::Security::X509::X509ExtensionCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extensions = value;
}
inline void Mono::Security::X509::X509Crl_X509CrlEntry::_ctor(::ArrayW<uint8_t>  serialNumber, ::System::DateTime  revocationDate, ::Mono::Security::X509::X509ExtensionCollection*  extensions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl_X509CrlEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Mono::Security::X509::X509ExtensionCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serialNumber, revocationDate, extensions);
}
inline void Mono::Security::X509::X509Crl_X509CrlEntry::_ctor(::Mono::Security::ASN1*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl_X509CrlEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Security::ASN1*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entry);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X509Crl_X509CrlEntry::get_SerialNumber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl_X509CrlEntry*>(),
                        {"get_SerialNumber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::System::DateTime Mono::Security::X509::X509Crl_X509CrlEntry::get_RevocationDate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl_X509CrlEntry*>(),
                        {"get_RevocationDate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::Mono::Security::X509::X509ExtensionCollection* Mono::Security::X509::X509Crl_X509CrlEntry::get_Extensions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl_X509CrlEntry*>(),
                        {"get_Extensions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509ExtensionCollection*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X509Crl_X509CrlEntry::GetBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Crl_X509CrlEntry*>(),
                        {"GetBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Mono::Security::X509::X509Crl_X509CrlEntry* Mono::Security::X509::X509Crl_X509CrlEntry::New_ctor(::ArrayW<uint8_t>  serialNumber, ::System::DateTime  revocationDate, ::Mono::Security::X509::X509ExtensionCollection*  extensions)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X509Crl_X509CrlEntry*>(serialNumber, revocationDate, extensions));
}
inline ::Mono::Security::X509::X509Crl_X509CrlEntry* Mono::Security::X509::X509Crl_X509CrlEntry::New_ctor(::Mono::Security::ASN1*  entry)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X509Crl_X509CrlEntry*>(entry));
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X509Crl_X509CrlEntry::X509Crl_X509CrlEntry()   {
}
