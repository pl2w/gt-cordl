#pragma once
// IWYU pragma private; include "Mono/Security/X509/X509Store.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/X509/zzzz__X509Store_def.hpp"
#include "Mono/Security/X509/zzzz__X509CertificateCollection_def.hpp"
#include "Mono/Security/X509/zzzz__X509Certificate_def.hpp"
#include "Mono/Security/X509/zzzz__X509Crl_def.hpp"
#include "Mono/Security/X509/zzzz__X509ExtensionCollection_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::X509Store._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Store::*)(::StringW, bool, bool)>(&::Mono::Security::X509::X509Store::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa0f4348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.get_Certificates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509CertificateCollection* (::Mono::Security::X509::X509Store::*)()>(&::Mono::Security::X509::X509Store::get_Certificates)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa0f4394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"get_Certificates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.get_Crls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (::Mono::Security::X509::X509Store::*)()>(&::Mono::Security::X509::X509Store::get_Crls)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa0f45b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"get_Crls", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::X509::X509Store::*)()>(&::Mono::Security::X509::X509Store::get_Name)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa0f4810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Store::*)()>(&::Mono::Security::X509::X509Store::Clear)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa0f48c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.ClearCertificates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Store::*)()>(&::Mono::Security::X509::X509Store::ClearCertificates)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa0f48dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"ClearCertificates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.ClearCrls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Store::*)()>(&::Mono::Security::X509::X509Store::ClearCrls)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa0f4908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"ClearCrls", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.Import
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Store::*)(::Mono::Security::X509::X509Certificate*)>(&::Mono::Security::X509::X509Store::Import)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0xa0f493c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"Import", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.Import
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Store::*)(::Mono::Security::X509::X509Crl*)>(&::Mono::Security::X509::X509Store::Import)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0xa0f52b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"Import", {}, {::i2c::type_of<::Mono::Security::X509::X509Crl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Store::*)(::Mono::Security::X509::X509Certificate*)>(&::Mono::Security::X509::X509Store::Remove)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa0f5584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"Remove", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Store::*)(::Mono::Security::X509::X509Crl*)>(&::Mono::Security::X509::X509Store::Remove)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa0f58c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"Remove", {}, {::i2c::type_of<::Mono::Security::X509::X509Crl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.ImportNewFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Store::*)(::Mono::Security::X509::X509Certificate*)>(&::Mono::Security::X509::X509Store::ImportNewFormat)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0xa0f4e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"ImportNewFormat", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.RemoveNewFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Store::*)(::Mono::Security::X509::X509Certificate*)>(&::Mono::Security::X509::X509Store::RemoveNewFormat)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0xa0f56ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"RemoveNewFormat", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.GetUniqueNameWithSerial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::X509::X509Store::*)(::Mono::Security::X509::X509Certificate*)>(&::Mono::Security::X509::X509Store::GetUniqueNameWithSerial)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa0f5204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"GetUniqueNameWithSerial", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.GetUniqueName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::X509::X509Store::*)(::Mono::Security::X509::X509Certificate*, ::ArrayW<uint8_t>)>(&::Mono::Security::X509::X509Store::GetUniqueName)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa0f515c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"GetUniqueName", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.GetUniqueName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::X509::X509Store::*)(::Mono::Security::X509::X509Crl*)>(&::Mono::Security::X509::X509Store::GetUniqueName)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa0f54e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"GetUniqueName", {}, {::i2c::type_of<::Mono::Security::X509::X509Crl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.GetUniqueName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::X509Store::*)(::Mono::Security::X509::X509ExtensionCollection*, ::ArrayW<uint8_t>)>(&::Mono::Security::X509::X509Store::GetUniqueName)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa0f59b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"GetUniqueName", {}, {::i2c::type_of<::Mono::Security::X509::X509ExtensionCollection*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.GetUniqueName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::X509::X509Store::*)(::StringW, ::ArrayW<uint8_t>, ::StringW)>(&::Mono::Security::X509::X509Store::GetUniqueName)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa0f5b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"GetUniqueName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::X509Store::*)(::StringW)>(&::Mono::Security::X509::X509Store::Load)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xa0f5ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"Load", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.LoadCertificate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Certificate* (::Mono::Security::X509::X509Store::*)(::StringW)>(&::Mono::Security::X509::X509Store::LoadCertificate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa0f5248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"LoadCertificate", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.LoadCrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Crl* (::Mono::Security::X509::X509Store::*)(::StringW)>(&::Mono::Security::X509::X509Store::LoadCrl)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa0f5eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"LoadCrl", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.CheckStore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::X509::X509Store::*)(::StringW, bool)>(&::Mono::Security::X509::X509Store::CheckStore)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa0f4d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"CheckStore", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.BuildCertificatesCollection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509CertificateCollection* (::Mono::Security::X509::X509Store::*)(::StringW)>(&::Mono::Security::X509::X509Store::BuildCertificatesCollection)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xa0f43d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"BuildCertificatesCollection", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.BuildCrlsCollection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (::Mono::Security::X509::X509Store::*)(::StringW)>(&::Mono::Security::X509::X509Store::BuildCrlsCollection)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xa0f464c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"BuildCrlsCollection", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Mono::Security::X509::X509Store::__cordl_internal_get__storePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____storePath;
}
constexpr ::StringW const& Mono::Security::X509::X509Store::__cordl_internal_get__storePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____storePath;
}
constexpr void Mono::Security::X509::X509Store::__cordl_internal_set__storePath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____storePath = value;
}
constexpr ::Mono::Security::X509::X509CertificateCollection*& Mono::Security::X509::X509Store::__cordl_internal_get__certificates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____certificates;
}
constexpr ::Mono::Security::X509::X509CertificateCollection* const& Mono::Security::X509::X509Store::__cordl_internal_get__certificates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____certificates;
}
constexpr void Mono::Security::X509::X509Store::__cordl_internal_set__certificates(::Mono::Security::X509::X509CertificateCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____certificates = value;
}
constexpr ::System::Collections::ArrayList*& Mono::Security::X509::X509Store::__cordl_internal_get__crls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____crls;
}
constexpr ::System::Collections::ArrayList* const& Mono::Security::X509::X509Store::__cordl_internal_get__crls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____crls;
}
constexpr void Mono::Security::X509::X509Store::__cordl_internal_set__crls(::System::Collections::ArrayList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____crls = value;
}
constexpr bool& Mono::Security::X509::X509Store::__cordl_internal_get__crl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____crl;
}
constexpr bool const& Mono::Security::X509::X509Store::__cordl_internal_get__crl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____crl;
}
constexpr void Mono::Security::X509::X509Store::__cordl_internal_set__crl(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____crl = value;
}
constexpr bool& Mono::Security::X509::X509Store::__cordl_internal_get__newFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____newFormat;
}
constexpr bool const& Mono::Security::X509::X509Store::__cordl_internal_get__newFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____newFormat;
}
constexpr void Mono::Security::X509::X509Store::__cordl_internal_set__newFormat(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____newFormat = value;
}
constexpr ::StringW& Mono::Security::X509::X509Store::__cordl_internal_get__name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr ::StringW const& Mono::Security::X509::X509Store::__cordl_internal_get__name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr void Mono::Security::X509::X509Store::__cordl_internal_set__name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____name = value;
}
inline void Mono::Security::X509::X509Store::_ctor(::StringW  path, bool  crl, bool  newFormat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, crl, newFormat);
}
inline ::Mono::Security::X509::X509CertificateCollection* Mono::Security::X509::X509Store::get_Certificates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"get_Certificates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509CertificateCollection*>(this, ___internal_method);
}
inline ::System::Collections::ArrayList* Mono::Security::X509::X509Store::get_Crls()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"get_Crls", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method);
}
inline ::StringW Mono::Security::X509::X509Store::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Mono::Security::X509::X509Store::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Security::X509::X509Store::ClearCertificates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"ClearCertificates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Security::X509::X509Store::ClearCrls()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"ClearCrls", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Security::X509::X509Store::Import(::Mono::Security::X509::X509Certificate*  certificate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"Import", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificate);
}
inline void Mono::Security::X509::X509Store::Import(::Mono::Security::X509::X509Crl*  crl)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"Import", {}, {::i2c::type_of<::Mono::Security::X509::X509Crl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crl);
}
inline void Mono::Security::X509::X509Store::Remove(::Mono::Security::X509::X509Certificate*  certificate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"Remove", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificate);
}
inline void Mono::Security::X509::X509Store::Remove(::Mono::Security::X509::X509Crl*  crl)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"Remove", {}, {::i2c::type_of<::Mono::Security::X509::X509Crl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crl);
}
inline void Mono::Security::X509::X509Store::ImportNewFormat(::Mono::Security::X509::X509Certificate*  certificate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"ImportNewFormat", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificate);
}
inline void Mono::Security::X509::X509Store::RemoveNewFormat(::Mono::Security::X509::X509Certificate*  certificate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"RemoveNewFormat", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certificate);
}
inline ::StringW Mono::Security::X509::X509Store::GetUniqueNameWithSerial(::Mono::Security::X509::X509Certificate*  certificate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"GetUniqueNameWithSerial", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, certificate);
}
inline ::StringW Mono::Security::X509::X509Store::GetUniqueName(::Mono::Security::X509::X509Certificate*  certificate, ::ArrayW<uint8_t>  serial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"GetUniqueName", {}, {::i2c::type_of<::Mono::Security::X509::X509Certificate*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, certificate, serial);
}
inline ::StringW Mono::Security::X509::X509Store::GetUniqueName(::Mono::Security::X509::X509Crl*  crl)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"GetUniqueName", {}, {::i2c::type_of<::Mono::Security::X509::X509Crl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, crl);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X509Store::GetUniqueName(::Mono::Security::X509::X509ExtensionCollection*  extensions, ::ArrayW<uint8_t>  serial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"GetUniqueName", {}, {::i2c::type_of<::Mono::Security::X509::X509ExtensionCollection*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, extensions, serial);
}
inline ::StringW Mono::Security::X509::X509Store::GetUniqueName(::StringW  method, ::ArrayW<uint8_t>  name, ::StringW  fileExtension)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"GetUniqueName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, method, name, fileExtension);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X509Store::Load(::StringW  filename)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"Load", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, filename);
}
inline ::Mono::Security::X509::X509Certificate* Mono::Security::X509::X509Store::LoadCertificate(::StringW  filename)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"LoadCertificate", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Certificate*>(this, ___internal_method, filename);
}
inline ::Mono::Security::X509::X509Crl* Mono::Security::X509::X509Store::LoadCrl(::StringW  filename)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"LoadCrl", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Crl*>(this, ___internal_method, filename);
}
inline bool Mono::Security::X509::X509Store::CheckStore(::StringW  path, bool  throwException)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"CheckStore", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, path, throwException);
}
inline ::Mono::Security::X509::X509CertificateCollection* Mono::Security::X509::X509Store::BuildCertificatesCollection(::StringW  storeName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"BuildCertificatesCollection", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509CertificateCollection*>(this, ___internal_method, storeName);
}
inline ::System::Collections::ArrayList* Mono::Security::X509::X509Store::BuildCrlsCollection(::StringW  storeName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Store*>(),
                        {"BuildCrlsCollection", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method, storeName);
}
inline ::Mono::Security::X509::X509Store* Mono::Security::X509::X509Store::New_ctor(::StringW  path, bool  crl, bool  newFormat)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X509Store*>(path, crl, newFormat));
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X509Store::X509Store()   {
}
