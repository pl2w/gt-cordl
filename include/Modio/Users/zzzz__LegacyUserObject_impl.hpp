#pragma once
// IWYU pragma private; include "Modio/Users/LegacyUserObject.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Users/zzzz__LegacyUserObject_def.hpp"
//  Writing Method size for method: ::Modio::Users::LegacyUserObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::LegacyUserObject::*)()>(&::Modio::Users::LegacyUserObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0252bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::LegacyUserObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& Modio::Users::LegacyUserObject::__cordl_internal_get_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr int64_t const& Modio::Users::LegacyUserObject::__cordl_internal_get_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr void Modio::Users::LegacyUserObject::__cordl_internal_set_id(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___id = value;
}
constexpr ::StringW& Modio::Users::LegacyUserObject::__cordl_internal_get_name_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name_id;
}
constexpr ::StringW const& Modio::Users::LegacyUserObject::__cordl_internal_get_name_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name_id;
}
constexpr void Modio::Users::LegacyUserObject::__cordl_internal_set_name_id(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name_id = value;
}
constexpr ::StringW& Modio::Users::LegacyUserObject::__cordl_internal_get_username()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___username;
}
constexpr ::StringW const& Modio::Users::LegacyUserObject::__cordl_internal_get_username() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___username;
}
constexpr void Modio::Users::LegacyUserObject::__cordl_internal_set_username(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___username = value;
}
constexpr ::StringW& Modio::Users::LegacyUserObject::__cordl_internal_get_display_name_portal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___display_name_portal;
}
constexpr ::StringW const& Modio::Users::LegacyUserObject::__cordl_internal_get_display_name_portal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___display_name_portal;
}
constexpr void Modio::Users::LegacyUserObject::__cordl_internal_set_display_name_portal(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___display_name_portal = value;
}
constexpr int64_t& Modio::Users::LegacyUserObject::__cordl_internal_get_date_online()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___date_online;
}
constexpr int64_t const& Modio::Users::LegacyUserObject::__cordl_internal_get_date_online() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___date_online;
}
constexpr void Modio::Users::LegacyUserObject::__cordl_internal_set_date_online(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___date_online = value;
}
constexpr ::StringW& Modio::Users::LegacyUserObject::__cordl_internal_get_timezone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timezone;
}
constexpr ::StringW const& Modio::Users::LegacyUserObject::__cordl_internal_get_timezone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timezone;
}
constexpr void Modio::Users::LegacyUserObject::__cordl_internal_set_timezone(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timezone = value;
}
constexpr ::StringW& Modio::Users::LegacyUserObject::__cordl_internal_get_language()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___language;
}
constexpr ::StringW const& Modio::Users::LegacyUserObject::__cordl_internal_get_language() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___language;
}
constexpr void Modio::Users::LegacyUserObject::__cordl_internal_set_language(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___language = value;
}
constexpr ::StringW& Modio::Users::LegacyUserObject::__cordl_internal_get_profile_url()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___profile_url;
}
constexpr ::StringW const& Modio::Users::LegacyUserObject::__cordl_internal_get_profile_url() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___profile_url;
}
constexpr void Modio::Users::LegacyUserObject::__cordl_internal_set_profile_url(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___profile_url = value;
}
inline void Modio::Users::LegacyUserObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::LegacyUserObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Users::LegacyUserObject* Modio::Users::LegacyUserObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Users::LegacyUserObject*>());
}
// Ctor Parameters []
constexpr ::Modio::Users::LegacyUserObject::LegacyUserObject()   {
}
