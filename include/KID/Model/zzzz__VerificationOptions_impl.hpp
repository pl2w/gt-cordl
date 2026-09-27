#pragma once
// IWYU pragma private; include "KID/Model/VerificationOptions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__VerificationOptions_def.hpp"
//  Writing Method size for method: ::KID::Model::VerificationOptions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::VerificationOptions::*)(bool)>(&::KID::Model::VerificationOptions::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9cdaf54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::VerificationOptions*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::VerificationOptions.get_SendEmail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::KID::Model::VerificationOptions::*)()>(&::KID::Model::VerificationOptions::get_SendEmail)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cdaf7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::VerificationOptions*>(),
                        {"get_SendEmail", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::VerificationOptions.set_SendEmail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::VerificationOptions::*)(bool)>(&::KID::Model::VerificationOptions::set_SendEmail)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cdaf84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::VerificationOptions*>(),
                        {"set_SendEmail", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::VerificationOptions.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::VerificationOptions::*)()>(&::KID::Model::VerificationOptions::ToString)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9cdaf8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::VerificationOptions*>(),
                    {::i2c::class_of<::KID::Model::VerificationOptions*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::VerificationOptions.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::VerificationOptions::*)()>(&::KID::Model::VerificationOptions::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cdb094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::VerificationOptions*>(),
                    {::i2c::class_of<::KID::Model::VerificationOptions*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr bool& KID::Model::VerificationOptions::__cordl_internal_get__SendEmail_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SendEmail_k__BackingField;
}
constexpr bool const& KID::Model::VerificationOptions::__cordl_internal_get__SendEmail_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SendEmail_k__BackingField;
}
constexpr void KID::Model::VerificationOptions::__cordl_internal_set__SendEmail_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SendEmail_k__BackingField = value;
}
inline void KID::Model::VerificationOptions::_ctor(bool  sendEmail)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::VerificationOptions*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sendEmail);
}
inline bool KID::Model::VerificationOptions::get_SendEmail()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::VerificationOptions*>(),
                        {"get_SendEmail", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void KID::Model::VerificationOptions::set_SendEmail(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::VerificationOptions*>(),
                        {"set_SendEmail", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::VerificationOptions::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::VerificationOptions*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::VerificationOptions::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::VerificationOptions*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::KID::Model::VerificationOptions* KID::Model::VerificationOptions::New_ctor(bool  sendEmail)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::VerificationOptions*>(sendEmail));
}
// Ctor Parameters []
constexpr ::KID::Model::VerificationOptions::VerificationOptions()   {
}
