#pragma once
// IWYU pragma private; include "Modio/Users/UserSaveObject.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Users/zzzz__UserSaveObject_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Modio::Users::UserSaveObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::UserSaveObject::*)()>(&::Modio::Users::UserSaveObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0252b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserSaveObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Modio::Users::UserSaveObject::__cordl_internal_get_LocalUserId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalUserId;
}
constexpr ::StringW const& Modio::Users::UserSaveObject::__cordl_internal_get_LocalUserId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalUserId;
}
constexpr void Modio::Users::UserSaveObject::__cordl_internal_set_LocalUserId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LocalUserId = value;
}
constexpr ::StringW& Modio::Users::UserSaveObject::__cordl_internal_get_Username()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Username;
}
constexpr ::StringW const& Modio::Users::UserSaveObject::__cordl_internal_get_Username() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Username;
}
constexpr void Modio::Users::UserSaveObject::__cordl_internal_set_Username(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Username = value;
}
constexpr int64_t& Modio::Users::UserSaveObject::__cordl_internal_get_UserId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserId;
}
constexpr int64_t const& Modio::Users::UserSaveObject::__cordl_internal_get_UserId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserId;
}
constexpr void Modio::Users::UserSaveObject::__cordl_internal_set_UserId(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UserId = value;
}
constexpr ::StringW& Modio::Users::UserSaveObject::__cordl_internal_get_AuthToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AuthToken;
}
constexpr ::StringW const& Modio::Users::UserSaveObject::__cordl_internal_get_AuthToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AuthToken;
}
constexpr void Modio::Users::UserSaveObject::__cordl_internal_set_AuthToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AuthToken = value;
}
constexpr int64_t& Modio::Users::UserSaveObject::__cordl_internal_get_AuthExpiration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AuthExpiration;
}
constexpr int64_t const& Modio::Users::UserSaveObject::__cordl_internal_get_AuthExpiration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AuthExpiration;
}
constexpr void Modio::Users::UserSaveObject::__cordl_internal_set_AuthExpiration(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AuthExpiration = value;
}
constexpr ::System::Collections::Generic::List_1<int64_t>*& Modio::Users::UserSaveObject::__cordl_internal_get_SubscribedMods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubscribedMods;
}
constexpr ::System::Collections::Generic::List_1<int64_t>* const& Modio::Users::UserSaveObject::__cordl_internal_get_SubscribedMods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubscribedMods;
}
constexpr void Modio::Users::UserSaveObject::__cordl_internal_set_SubscribedMods(::System::Collections::Generic::List_1<int64_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SubscribedMods = value;
}
constexpr ::System::Collections::Generic::List_1<int64_t>*& Modio::Users::UserSaveObject::__cordl_internal_get_DisabledMods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisabledMods;
}
constexpr ::System::Collections::Generic::List_1<int64_t>* const& Modio::Users::UserSaveObject::__cordl_internal_get_DisabledMods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisabledMods;
}
constexpr void Modio::Users::UserSaveObject::__cordl_internal_set_DisabledMods(::System::Collections::Generic::List_1<int64_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisabledMods = value;
}
constexpr ::System::Collections::Generic::List_1<int64_t>*& Modio::Users::UserSaveObject::__cordl_internal_get_PurchasedMods()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchasedMods;
}
constexpr ::System::Collections::Generic::List_1<int64_t>* const& Modio::Users::UserSaveObject::__cordl_internal_get_PurchasedMods() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchasedMods;
}
constexpr void Modio::Users::UserSaveObject::__cordl_internal_set_PurchasedMods(::System::Collections::Generic::List_1<int64_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PurchasedMods = value;
}
inline void Modio::Users::UserSaveObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::UserSaveObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Users::UserSaveObject* Modio::Users::UserSaveObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Users::UserSaveObject*>());
}
// Ctor Parameters []
constexpr ::Modio::Users::UserSaveObject::UserSaveObject()   {
}
