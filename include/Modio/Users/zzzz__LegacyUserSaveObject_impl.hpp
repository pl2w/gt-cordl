#pragma once
// IWYU pragma private; include "Modio/Users/LegacyUserSaveObject.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Users/zzzz__LegacyUserSaveObject_def.hpp"
#include "Modio/Users/zzzz__LegacyUserObject_def.hpp"
//  Writing Method size for method: ::Modio::Users::LegacyUserSaveObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::LegacyUserSaveObject::*)()>(&::Modio::Users::LegacyUserSaveObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0252c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::LegacyUserSaveObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Modio::Users::LegacyUserSaveObject::__cordl_internal_get_oAuthToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oAuthToken;
}
constexpr ::StringW const& Modio::Users::LegacyUserSaveObject::__cordl_internal_get_oAuthToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oAuthToken;
}
constexpr void Modio::Users::LegacyUserSaveObject::__cordl_internal_set_oAuthToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oAuthToken = value;
}
constexpr int64_t& Modio::Users::LegacyUserSaveObject::__cordl_internal_get_oAuthExpiryDate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oAuthExpiryDate;
}
constexpr int64_t const& Modio::Users::LegacyUserSaveObject::__cordl_internal_get_oAuthExpiryDate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oAuthExpiryDate;
}
constexpr void Modio::Users::LegacyUserSaveObject::__cordl_internal_set_oAuthExpiryDate(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oAuthExpiryDate = value;
}
constexpr bool& Modio::Users::LegacyUserSaveObject::__cordl_internal_get_oAuthTokenWasRejected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oAuthTokenWasRejected;
}
constexpr bool const& Modio::Users::LegacyUserSaveObject::__cordl_internal_get_oAuthTokenWasRejected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oAuthTokenWasRejected;
}
constexpr void Modio::Users::LegacyUserSaveObject::__cordl_internal_set_oAuthTokenWasRejected(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oAuthTokenWasRejected = value;
}
constexpr ::Modio::Users::LegacyUserObject*& Modio::Users::LegacyUserSaveObject::__cordl_internal_get_userObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userObject;
}
constexpr ::Modio::Users::LegacyUserObject* const& Modio::Users::LegacyUserSaveObject::__cordl_internal_get_userObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___userObject;
}
constexpr void Modio::Users::LegacyUserSaveObject::__cordl_internal_set_userObject(::Modio::Users::LegacyUserObject*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___userObject = value;
}
inline void Modio::Users::LegacyUserSaveObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::LegacyUserSaveObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Users::LegacyUserSaveObject* Modio::Users::LegacyUserSaveObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Users::LegacyUserSaveObject*>());
}
// Ctor Parameters []
constexpr ::Modio::Users::LegacyUserSaveObject::LegacyUserSaveObject()   {
}
