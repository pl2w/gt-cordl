#pragma once
// IWYU pragma private; include "Mono/Security/X509/X509Extension.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/X509/zzzz__X509Extension_def.hpp"
#include "Mono/Security/zzzz__ASN1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::X509Extension._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Extension::*)()>(&::Mono::Security::X509::X509Extension::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa0f2ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Extension*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Extension._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Extension::*)(::Mono::Security::ASN1*)>(&::Mono::Security::X509::X509Extension::_ctor)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0xa0f300c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Extension*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Security::ASN1*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Extension._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Extension::*)(::Mono::Security::X509::X509Extension*)>(&::Mono::Security::X509::X509Extension::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa0f32e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Extension*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Security::X509::X509Extension*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Extension.Decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Extension::*)()>(&::Mono::Security::X509::X509Extension::Decode)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa0f3458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Security::X509::X509Extension*>(),
                    {::i2c::class_of<::Mono::Security::X509::X509Extension*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Extension.Encode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Extension::*)()>(&::Mono::Security::X509::X509Extension::Encode)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa0f345c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Security::X509::X509Extension*>(),
                    {::i2c::class_of<::Mono::Security::X509::X509Extension*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Extension.get_ASN1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::ASN1* (::Mono::Security::X509::X509Extension::*)()>(&::Mono::Security::X509::X509Extension::get_ASN1)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa0f3460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Extension*>(),
                        {"get_ASN1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Extension.get_Oid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::X509::X509Extension::*)()>(&::Mono::Security::X509::X509Extension::get_Oid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0f3578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Extension*>(),
                        {"get_Oid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Extension.get_Critical
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::X509::X509Extension::*)()>(&::Mono::Security::X509::X509Extension::get_Critical)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0f3580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Extension*>(),
                        {"get_Critical", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Extension.set_Critical
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Extension::*)(bool)>(&::Mono::Security::X509::X509Extension::set_Critical)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0f3588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Extension*>(),
                        {"set_Critical", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Extension.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::X509::X509Extension::*)()>(&::Mono::Security::X509::X509Extension::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0f3590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Security::X509::X509Extension*>(),
                    {::i2c::class_of<::Mono::Security::X509::X509Extension*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Extension.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::ASN1* (::Mono::Security::X509::X509Extension::*)()>(&::Mono::Security::X509::X509Extension::get_Value)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa0f342c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Extension*>(),
                        {"get_Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Extension.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::X509::X509Extension::*)(::System::Object*)>(&::Mono::Security::X509::X509Extension::Equals)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xa0f3598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Security::X509::X509Extension*>(),
                    {::i2c::class_of<::Mono::Security::X509::X509Extension*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Extension.GetBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::X509Extension::*)()>(&::Mono::Security::X509::X509Extension::GetBytes)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa0f36d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Extension*>(),
                        {"GetBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Extension.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Security::X509::X509Extension::*)()>(&::Mono::Security::X509::X509Extension::GetHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa0f36f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Security::X509::X509Extension*>(),
                    {::i2c::class_of<::Mono::Security::X509::X509Extension*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Extension.WriteLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Extension::*)(::System::Text::StringBuilder*, int32_t, int32_t)>(&::Mono::Security::X509::X509Extension::WriteLine)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0xa0f3714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Extension*>(),
                        {"WriteLine", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Extension.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::X509::X509Extension::*)()>(&::Mono::Security::X509::X509Extension::ToString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa0f3940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mono::Security::X509::X509Extension*>(),
                    {::i2c::class_of<::Mono::Security::X509::X509Extension*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& Mono::Security::X509::X509Extension::__cordl_internal_get_extnOid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extnOid;
}
constexpr ::StringW const& Mono::Security::X509::X509Extension::__cordl_internal_get_extnOid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extnOid;
}
constexpr void Mono::Security::X509::X509Extension::__cordl_internal_set_extnOid(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extnOid = value;
}
constexpr bool& Mono::Security::X509::X509Extension::__cordl_internal_get_extnCritical()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extnCritical;
}
constexpr bool const& Mono::Security::X509::X509Extension::__cordl_internal_get_extnCritical() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extnCritical;
}
constexpr void Mono::Security::X509::X509Extension::__cordl_internal_set_extnCritical(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extnCritical = value;
}
constexpr ::Mono::Security::ASN1*& Mono::Security::X509::X509Extension::__cordl_internal_get_extnValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extnValue;
}
constexpr ::Mono::Security::ASN1* const& Mono::Security::X509::X509Extension::__cordl_internal_get_extnValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___extnValue;
}
constexpr void Mono::Security::X509::X509Extension::__cordl_internal_set_extnValue(::Mono::Security::ASN1*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___extnValue = value;
}
inline void Mono::Security::X509::X509Extension::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Extension*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Security::X509::X509Extension::_ctor(::Mono::Security::ASN1*  asn1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Extension*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Security::ASN1*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asn1);
}
inline void Mono::Security::X509::X509Extension::_ctor(::Mono::Security::X509::X509Extension*  extension)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Extension*>(),
                        {".ctor", {}, {::i2c::type_of<::Mono::Security::X509::X509Extension*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, extension);
}
inline void Mono::Security::X509::X509Extension::Decode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Security::X509::X509Extension*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Security::X509::X509Extension::Encode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Security::X509::X509Extension*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Security::ASN1* Mono::Security::X509::X509Extension::get_ASN1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Extension*>(),
                        {"get_ASN1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::ASN1*>(this, ___internal_method);
}
inline ::StringW Mono::Security::X509::X509Extension::get_Oid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Extension*>(),
                        {"get_Oid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Mono::Security::X509::X509Extension::get_Critical()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Extension*>(),
                        {"get_Critical", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mono::Security::X509::X509Extension::set_Critical(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Extension*>(),
                        {"set_Critical", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Mono::Security::X509::X509Extension::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Security::X509::X509Extension*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Mono::Security::ASN1* Mono::Security::X509::X509Extension::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Extension*>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::ASN1*>(this, ___internal_method);
}
inline bool Mono::Security::X509::X509Extension::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Security::X509::X509Extension*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline ::ArrayW<uint8_t> Mono::Security::X509::X509Extension::GetBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Extension*>(),
                        {"GetBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline int32_t Mono::Security::X509::X509Extension::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Security::X509::X509Extension*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Mono::Security::X509::X509Extension::WriteLine(::System::Text::StringBuilder*  sb, int32_t  n, int32_t  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Extension*>(),
                        {"WriteLine", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sb, n, pos);
}
inline ::StringW Mono::Security::X509::X509Extension::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mono::Security::X509::X509Extension*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Mono::Security::X509::X509Extension* Mono::Security::X509::X509Extension::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X509Extension*>());
}
inline ::Mono::Security::X509::X509Extension* Mono::Security::X509::X509Extension::New_ctor(::Mono::Security::ASN1*  asn1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X509Extension*>(asn1));
}
inline ::Mono::Security::X509::X509Extension* Mono::Security::X509::X509Extension::New_ctor(::Mono::Security::X509::X509Extension*  extension)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X509Extension*>(extension));
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X509Extension::X509Extension()   {
}
