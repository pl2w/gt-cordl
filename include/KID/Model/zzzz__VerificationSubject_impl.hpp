#pragma once
// IWYU pragma private; include "KID/Model/VerificationSubject.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__VerificationSubject_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::KID::Model::VerificationSubject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::VerificationSubject::*)(::StringW, int32_t, ::System::DateTime)>(&::KID::Model::VerificationSubject::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9cdb0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::VerificationSubject*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::VerificationSubject.get_Email
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::VerificationSubject::*)()>(&::KID::Model::VerificationSubject::get_Email)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cdb13c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::VerificationSubject*>(),
                        {"get_Email", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::VerificationSubject.set_Email
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::VerificationSubject::*)(::StringW)>(&::KID::Model::VerificationSubject::set_Email)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cdb144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::VerificationSubject*>(),
                        {"set_Email", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::VerificationSubject.get_ClaimedAge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::KID::Model::VerificationSubject::*)()>(&::KID::Model::VerificationSubject::get_ClaimedAge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cdb14c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::VerificationSubject*>(),
                        {"get_ClaimedAge", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::VerificationSubject.set_ClaimedAge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::VerificationSubject::*)(int32_t)>(&::KID::Model::VerificationSubject::set_ClaimedAge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cdb154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::VerificationSubject*>(),
                        {"set_ClaimedAge", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::VerificationSubject.get_ClaimedDateOfBirth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::KID::Model::VerificationSubject::*)()>(&::KID::Model::VerificationSubject::get_ClaimedDateOfBirth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cdb15c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::VerificationSubject*>(),
                        {"get_ClaimedDateOfBirth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::VerificationSubject.set_ClaimedDateOfBirth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::VerificationSubject::*)(::System::DateTime)>(&::KID::Model::VerificationSubject::set_ClaimedDateOfBirth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cdb164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::VerificationSubject*>(),
                        {"set_ClaimedDateOfBirth", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::VerificationSubject.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::VerificationSubject::*)()>(&::KID::Model::VerificationSubject::ToString)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x9cdb16c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::VerificationSubject*>(),
                    {::i2c::class_of<::KID::Model::VerificationSubject*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::VerificationSubject.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::VerificationSubject::*)()>(&::KID::Model::VerificationSubject::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cdb340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::VerificationSubject*>(),
                    {::i2c::class_of<::KID::Model::VerificationSubject*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& KID::Model::VerificationSubject::__cordl_internal_get__Email_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Email_k__BackingField;
}
constexpr ::StringW const& KID::Model::VerificationSubject::__cordl_internal_get__Email_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Email_k__BackingField;
}
constexpr void KID::Model::VerificationSubject::__cordl_internal_set__Email_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Email_k__BackingField = value;
}
constexpr int32_t& KID::Model::VerificationSubject::__cordl_internal_get__ClaimedAge_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClaimedAge_k__BackingField;
}
constexpr int32_t const& KID::Model::VerificationSubject::__cordl_internal_get__ClaimedAge_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClaimedAge_k__BackingField;
}
constexpr void KID::Model::VerificationSubject::__cordl_internal_set__ClaimedAge_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ClaimedAge_k__BackingField = value;
}
constexpr ::System::DateTime& KID::Model::VerificationSubject::__cordl_internal_get__ClaimedDateOfBirth_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClaimedDateOfBirth_k__BackingField;
}
constexpr ::System::DateTime const& KID::Model::VerificationSubject::__cordl_internal_get__ClaimedDateOfBirth_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClaimedDateOfBirth_k__BackingField;
}
constexpr void KID::Model::VerificationSubject::__cordl_internal_set__ClaimedDateOfBirth_k__BackingField(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ClaimedDateOfBirth_k__BackingField = value;
}
inline void KID::Model::VerificationSubject::_ctor(::StringW  email, int32_t  claimedAge, ::System::DateTime  claimedDateOfBirth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::VerificationSubject*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, email, claimedAge, claimedDateOfBirth);
}
inline ::StringW KID::Model::VerificationSubject::get_Email()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::VerificationSubject*>(),
                        {"get_Email", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::VerificationSubject::set_Email(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::VerificationSubject*>(),
                        {"set_Email", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t KID::Model::VerificationSubject::get_ClaimedAge()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::VerificationSubject*>(),
                        {"get_ClaimedAge", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void KID::Model::VerificationSubject::set_ClaimedAge(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::VerificationSubject*>(),
                        {"set_ClaimedAge", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::DateTime KID::Model::VerificationSubject::get_ClaimedDateOfBirth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::VerificationSubject*>(),
                        {"get_ClaimedDateOfBirth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void KID::Model::VerificationSubject::set_ClaimedDateOfBirth(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::VerificationSubject*>(),
                        {"set_ClaimedDateOfBirth", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::VerificationSubject::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::VerificationSubject*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::VerificationSubject::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::VerificationSubject*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::KID::Model::VerificationSubject* KID::Model::VerificationSubject::New_ctor(::StringW  email, int32_t  claimedAge, ::System::DateTime  claimedDateOfBirth)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::VerificationSubject*>(email, claimedAge, claimedDateOfBirth));
}
// Ctor Parameters []
constexpr ::KID::Model::VerificationSubject::VerificationSubject()   {
}
