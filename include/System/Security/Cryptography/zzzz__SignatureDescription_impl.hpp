#pragma once
// IWYU pragma private; include "System/Security/Cryptography/SignatureDescription.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__SignatureDescription_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricSignatureDeformatter_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricSignatureFormatter_def.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
#include "System/Security/zzzz__SecurityElement_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::SignatureDescription._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::SignatureDescription::*)()>(&::System::Security::Cryptography::SignatureDescription::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa17bac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::SignatureDescription*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SignatureDescription._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::SignatureDescription::*)(::System::Security::SecurityElement*)>(&::System::Security::Cryptography::SignatureDescription::_ctor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xa17bac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::SignatureDescription*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::SecurityElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SignatureDescription.get_KeyAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::SignatureDescription::*)()>(&::System::Security::Cryptography::SignatureDescription::get_KeyAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa17bc24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::SignatureDescription*>(),
                        {"get_KeyAlgorithm", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SignatureDescription.set_KeyAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::SignatureDescription::*)(::StringW)>(&::System::Security::Cryptography::SignatureDescription::set_KeyAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa17bc2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::SignatureDescription*>(),
                        {"set_KeyAlgorithm", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SignatureDescription.get_DigestAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::SignatureDescription::*)()>(&::System::Security::Cryptography::SignatureDescription::get_DigestAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa17bc34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::SignatureDescription*>(),
                        {"get_DigestAlgorithm", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SignatureDescription.set_DigestAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::SignatureDescription::*)(::StringW)>(&::System::Security::Cryptography::SignatureDescription::set_DigestAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa17bc3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::SignatureDescription*>(),
                        {"set_DigestAlgorithm", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SignatureDescription.get_FormatterAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::SignatureDescription::*)()>(&::System::Security::Cryptography::SignatureDescription::get_FormatterAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa17bc44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::SignatureDescription*>(),
                        {"get_FormatterAlgorithm", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SignatureDescription.set_FormatterAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::SignatureDescription::*)(::StringW)>(&::System::Security::Cryptography::SignatureDescription::set_FormatterAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa17bc4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::SignatureDescription*>(),
                        {"set_FormatterAlgorithm", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SignatureDescription.get_DeformatterAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::SignatureDescription::*)()>(&::System::Security::Cryptography::SignatureDescription::get_DeformatterAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa17bc54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::SignatureDescription*>(),
                        {"get_DeformatterAlgorithm", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SignatureDescription.set_DeformatterAlgorithm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::SignatureDescription::*)(::StringW)>(&::System::Security::Cryptography::SignatureDescription::set_DeformatterAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa17bc5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::SignatureDescription*>(),
                        {"set_DeformatterAlgorithm", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SignatureDescription.CreateDeformatter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::AsymmetricSignatureDeformatter* (::System::Security::Cryptography::SignatureDescription::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&::System::Security::Cryptography::SignatureDescription::CreateDeformatter)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa17bc64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::SignatureDescription*>(),
                    {::i2c::class_of<::System::Security::Cryptography::SignatureDescription*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SignatureDescription.CreateFormatter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::AsymmetricSignatureFormatter* (::System::Security::Cryptography::SignatureDescription::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&::System::Security::Cryptography::SignatureDescription::CreateFormatter)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa17bd34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::SignatureDescription*>(),
                    {::i2c::class_of<::System::Security::Cryptography::SignatureDescription*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::SignatureDescription.CreateDigest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::HashAlgorithm* (::System::Security::Cryptography::SignatureDescription::*)()>(&::System::Security::Cryptography::SignatureDescription::CreateDigest)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa17be04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::SignatureDescription*>(),
                    {::i2c::class_of<::System::Security::Cryptography::SignatureDescription*>(), 6}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Security::Cryptography::SignatureDescription::__cordl_internal_get__strKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____strKey;
}
constexpr ::StringW const& System::Security::Cryptography::SignatureDescription::__cordl_internal_get__strKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____strKey;
}
constexpr void System::Security::Cryptography::SignatureDescription::__cordl_internal_set__strKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____strKey = value;
}
constexpr ::StringW& System::Security::Cryptography::SignatureDescription::__cordl_internal_get__strDigest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____strDigest;
}
constexpr ::StringW const& System::Security::Cryptography::SignatureDescription::__cordl_internal_get__strDigest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____strDigest;
}
constexpr void System::Security::Cryptography::SignatureDescription::__cordl_internal_set__strDigest(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____strDigest = value;
}
constexpr ::StringW& System::Security::Cryptography::SignatureDescription::__cordl_internal_get__strFormatter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____strFormatter;
}
constexpr ::StringW const& System::Security::Cryptography::SignatureDescription::__cordl_internal_get__strFormatter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____strFormatter;
}
constexpr void System::Security::Cryptography::SignatureDescription::__cordl_internal_set__strFormatter(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____strFormatter = value;
}
constexpr ::StringW& System::Security::Cryptography::SignatureDescription::__cordl_internal_get__strDeformatter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____strDeformatter;
}
constexpr ::StringW const& System::Security::Cryptography::SignatureDescription::__cordl_internal_get__strDeformatter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____strDeformatter;
}
constexpr void System::Security::Cryptography::SignatureDescription::__cordl_internal_set__strDeformatter(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____strDeformatter = value;
}
inline void System::Security::Cryptography::SignatureDescription::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::SignatureDescription*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::SignatureDescription::_ctor(::System::Security::SecurityElement*  el)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::SignatureDescription*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::SecurityElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, el);
}
inline ::StringW System::Security::Cryptography::SignatureDescription::get_KeyAlgorithm()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::SignatureDescription*>(),
                        {"get_KeyAlgorithm", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Security::Cryptography::SignatureDescription::set_KeyAlgorithm(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::SignatureDescription*>(),
                        {"set_KeyAlgorithm", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Security::Cryptography::SignatureDescription::get_DigestAlgorithm()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::SignatureDescription*>(),
                        {"get_DigestAlgorithm", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Security::Cryptography::SignatureDescription::set_DigestAlgorithm(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::SignatureDescription*>(),
                        {"set_DigestAlgorithm", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Security::Cryptography::SignatureDescription::get_FormatterAlgorithm()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::SignatureDescription*>(),
                        {"get_FormatterAlgorithm", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Security::Cryptography::SignatureDescription::set_FormatterAlgorithm(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::SignatureDescription*>(),
                        {"set_FormatterAlgorithm", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Security::Cryptography::SignatureDescription::get_DeformatterAlgorithm()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::SignatureDescription*>(),
                        {"get_DeformatterAlgorithm", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Security::Cryptography::SignatureDescription::set_DeformatterAlgorithm(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::SignatureDescription*>(),
                        {"set_DeformatterAlgorithm", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Security::Cryptography::AsymmetricSignatureDeformatter* System::Security::Cryptography::SignatureDescription::CreateDeformatter(::System::Security::Cryptography::AsymmetricAlgorithm*  key)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::SignatureDescription*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::AsymmetricSignatureDeformatter*>(this, ___internal_method, key);
}
inline ::System::Security::Cryptography::AsymmetricSignatureFormatter* System::Security::Cryptography::SignatureDescription::CreateFormatter(::System::Security::Cryptography::AsymmetricAlgorithm*  key)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::SignatureDescription*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::AsymmetricSignatureFormatter*>(this, ___internal_method, key);
}
inline ::System::Security::Cryptography::HashAlgorithm* System::Security::Cryptography::SignatureDescription::CreateDigest()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::SignatureDescription*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::HashAlgorithm*>(this, ___internal_method);
}
inline ::System::Security::Cryptography::SignatureDescription* System::Security::Cryptography::SignatureDescription::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::SignatureDescription*>());
}
inline ::System::Security::Cryptography::SignatureDescription* System::Security::Cryptography::SignatureDescription::New_ctor(::System::Security::SecurityElement*  el)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::SignatureDescription*>(el));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::SignatureDescription::SignatureDescription()   {
}
