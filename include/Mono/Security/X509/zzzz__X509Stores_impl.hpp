#pragma once
// IWYU pragma private; include "Mono/Security/X509/X509Stores.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/X509/zzzz__X509Stores_def.hpp"
#include "Mono/Security/X509/zzzz__X509Store_def.hpp"
#include "Mono/Security/X509/zzzz__X509Stores_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::X509Stores._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Stores::*)(::StringW, bool)>(&::Mono::Security::X509::X509Stores::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa0f641c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Stores*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Stores.get_Personal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Store* (::Mono::Security::X509::X509Stores::*)()>(&::Mono::Security::X509::X509Stores::get_Personal)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa0f6be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Stores*>(),
                        {"get_Personal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Stores.get_OtherPeople
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Store* (::Mono::Security::X509::X509Stores::*)()>(&::Mono::Security::X509::X509Stores::get_OtherPeople)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa0f6cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Stores*>(),
                        {"get_OtherPeople", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Stores.get_IntermediateCA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Store* (::Mono::Security::X509::X509Stores::*)()>(&::Mono::Security::X509::X509Stores::get_IntermediateCA)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa0f6718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Stores*>(),
                        {"get_IntermediateCA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Stores.get_TrustedRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Store* (::Mono::Security::X509::X509Stores::*)()>(&::Mono::Security::X509::X509Stores::get_TrustedRoot)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa0f68bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Stores*>(),
                        {"get_TrustedRoot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Stores.get_Untrusted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Store* (::Mono::Security::X509::X509Stores::*)()>(&::Mono::Security::X509::X509Stores::get_Untrusted)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa0f6afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Stores*>(),
                        {"get_Untrusted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Stores.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Stores::*)()>(&::Mono::Security::X509::X509Stores::Clear)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa0f6da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Stores*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Stores.Open
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::X509::X509Store* (::Mono::Security::X509::X509Stores::*)(::StringW, bool)>(&::Mono::Security::X509::X509Stores::Open)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa0f6e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Stores*>(),
                        {"Open", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Mono::Security::X509::X509Stores::__cordl_internal_get__storePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____storePath;
}
constexpr ::StringW const& Mono::Security::X509::X509Stores::__cordl_internal_get__storePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____storePath;
}
constexpr void Mono::Security::X509::X509Stores::__cordl_internal_set__storePath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____storePath = value;
}
constexpr bool& Mono::Security::X509::X509Stores::__cordl_internal_get__newFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____newFormat;
}
constexpr bool const& Mono::Security::X509::X509Stores::__cordl_internal_get__newFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____newFormat;
}
constexpr void Mono::Security::X509::X509Stores::__cordl_internal_set__newFormat(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____newFormat = value;
}
constexpr ::Mono::Security::X509::X509Store*& Mono::Security::X509::X509Stores::__cordl_internal_get__personal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____personal;
}
constexpr ::Mono::Security::X509::X509Store* const& Mono::Security::X509::X509Stores::__cordl_internal_get__personal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____personal;
}
constexpr void Mono::Security::X509::X509Stores::__cordl_internal_set__personal(::Mono::Security::X509::X509Store*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____personal = value;
}
constexpr ::Mono::Security::X509::X509Store*& Mono::Security::X509::X509Stores::__cordl_internal_get__other()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____other;
}
constexpr ::Mono::Security::X509::X509Store* const& Mono::Security::X509::X509Stores::__cordl_internal_get__other() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____other;
}
constexpr void Mono::Security::X509::X509Stores::__cordl_internal_set__other(::Mono::Security::X509::X509Store*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____other = value;
}
constexpr ::Mono::Security::X509::X509Store*& Mono::Security::X509::X509Stores::__cordl_internal_get__intermediate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____intermediate;
}
constexpr ::Mono::Security::X509::X509Store* const& Mono::Security::X509::X509Stores::__cordl_internal_get__intermediate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____intermediate;
}
constexpr void Mono::Security::X509::X509Stores::__cordl_internal_set__intermediate(::Mono::Security::X509::X509Store*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____intermediate = value;
}
constexpr ::Mono::Security::X509::X509Store*& Mono::Security::X509::X509Stores::__cordl_internal_get__trusted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trusted;
}
constexpr ::Mono::Security::X509::X509Store* const& Mono::Security::X509::X509Stores::__cordl_internal_get__trusted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trusted;
}
constexpr void Mono::Security::X509::X509Stores::__cordl_internal_set__trusted(::Mono::Security::X509::X509Store*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____trusted = value;
}
constexpr ::Mono::Security::X509::X509Store*& Mono::Security::X509::X509Stores::__cordl_internal_get__untrusted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____untrusted;
}
constexpr ::Mono::Security::X509::X509Store* const& Mono::Security::X509::X509Stores::__cordl_internal_get__untrusted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____untrusted;
}
constexpr void Mono::Security::X509::X509Stores::__cordl_internal_set__untrusted(::Mono::Security::X509::X509Store*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____untrusted = value;
}
inline void Mono::Security::X509::X509Stores::_ctor(::StringW  path, bool  newFormat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Stores*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, newFormat);
}
inline ::Mono::Security::X509::X509Store* Mono::Security::X509::X509Stores::get_Personal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Stores*>(),
                        {"get_Personal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Store*>(this, ___internal_method);
}
inline ::Mono::Security::X509::X509Store* Mono::Security::X509::X509Stores::get_OtherPeople()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Stores*>(),
                        {"get_OtherPeople", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Store*>(this, ___internal_method);
}
inline ::Mono::Security::X509::X509Store* Mono::Security::X509::X509Stores::get_IntermediateCA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Stores*>(),
                        {"get_IntermediateCA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Store*>(this, ___internal_method);
}
inline ::Mono::Security::X509::X509Store* Mono::Security::X509::X509Stores::get_TrustedRoot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Stores*>(),
                        {"get_TrustedRoot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Store*>(this, ___internal_method);
}
inline ::Mono::Security::X509::X509Store* Mono::Security::X509::X509Stores::get_Untrusted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Stores*>(),
                        {"get_Untrusted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Store*>(this, ___internal_method);
}
inline void Mono::Security::X509::X509Stores::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Stores*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Security::X509::X509Store* Mono::Security::X509::X509Stores::Open(::StringW  storeName, bool  create)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Stores*>(),
                        {"Open", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Store*>(this, ___internal_method, storeName, create);
}
inline ::Mono::Security::X509::X509Stores* Mono::Security::X509::X509Stores::New_ctor(::StringW  path, bool  newFormat)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X509Stores*>(path, newFormat));
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X509Stores::X509Stores()   {
}
//  Writing Method size for method: ::Mono::Security::X509::X509Stores_Names._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::X509::X509Stores_Names::*)()>(&::Mono::Security::X509::X509Stores_Names::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0f6fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Stores_Names*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mono::Security::X509::X509Stores_Names::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mono::Security::X509::X509Stores_Names*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mono::Security::X509::X509Stores_Names* Mono::Security::X509::X509Stores_Names::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::X509::X509Stores_Names*>());
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X509Stores_Names::X509Stores_Names()   {
}
