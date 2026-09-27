#pragma once
// IWYU pragma private; include "PlayFab/PlayFabError.hpp"
#include "PlayFab/zzzz__PlayFabErrorCode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayFab::PlayFabError.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::PlayFab::PlayFabError::*)()>(&::PlayFab::PlayFabError::ToString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa7dbb4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::PlayFabError*>(),
                    {::i2c::class_of<::PlayFab::PlayFabError*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabError.GenerateErrorReport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::PlayFab::PlayFabError::*)()>(&::PlayFab::PlayFabError::GenerateErrorReport)> {
  constexpr static std::size_t size = 0x558;
  constexpr static std::size_t addrs = 0xa7dbb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabError*>(),
                        {"GenerateErrorReport", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabError._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabError::*)()>(&::PlayFab::PlayFabError::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7dc0a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabError*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::PlayFabError::__cordl_internal_get_ApiEndpoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ApiEndpoint;
}
constexpr ::StringW const& PlayFab::PlayFabError::__cordl_internal_get_ApiEndpoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ApiEndpoint;
}
constexpr void PlayFab::PlayFabError::__cordl_internal_set_ApiEndpoint(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ApiEndpoint = value;
}
constexpr int32_t& PlayFab::PlayFabError::__cordl_internal_get_HttpCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HttpCode;
}
constexpr int32_t const& PlayFab::PlayFabError::__cordl_internal_get_HttpCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HttpCode;
}
constexpr void PlayFab::PlayFabError::__cordl_internal_set_HttpCode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HttpCode = value;
}
constexpr ::StringW& PlayFab::PlayFabError::__cordl_internal_get_HttpStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HttpStatus;
}
constexpr ::StringW const& PlayFab::PlayFabError::__cordl_internal_get_HttpStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HttpStatus;
}
constexpr void PlayFab::PlayFabError::__cordl_internal_set_HttpStatus(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HttpStatus = value;
}
constexpr ::PlayFab::PlayFabErrorCode& PlayFab::PlayFabError::__cordl_internal_get_Error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr ::PlayFab::PlayFabErrorCode const& PlayFab::PlayFabError::__cordl_internal_get_Error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr void PlayFab::PlayFabError::__cordl_internal_set_Error(::PlayFab::PlayFabErrorCode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Error = value;
}
constexpr ::StringW& PlayFab::PlayFabError::__cordl_internal_get_ErrorMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ErrorMessage;
}
constexpr ::StringW const& PlayFab::PlayFabError::__cordl_internal_get_ErrorMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ErrorMessage;
}
constexpr void PlayFab::PlayFabError::__cordl_internal_set_ErrorMessage(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ErrorMessage = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::StringW>*>*& PlayFab::PlayFabError::__cordl_internal_get_ErrorDetails()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ErrorDetails;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::StringW>*>* const& PlayFab::PlayFabError::__cordl_internal_get_ErrorDetails() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ErrorDetails;
}
constexpr void PlayFab::PlayFabError::__cordl_internal_set_ErrorDetails(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::StringW>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ErrorDetails = value;
}
constexpr ::System::Object*& PlayFab::PlayFabError::__cordl_internal_get_CustomData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomData;
}
constexpr ::System::Object* const& PlayFab::PlayFabError::__cordl_internal_get_CustomData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomData;
}
constexpr void PlayFab::PlayFabError::__cordl_internal_set_CustomData(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomData = value;
}
inline void PlayFab::PlayFabError::setStaticF__tempSb(::System::Text::StringBuilder*  value)  {
::cordl_internals::setStaticField<::System::Text::StringBuilder*, "_tempSb", ::PlayFab::PlayFabError*>(std::forward<::System::Text::StringBuilder*>(value));
}
inline ::System::Text::StringBuilder* PlayFab::PlayFabError::getStaticF__tempSb()  {
return ::cordl_internals::getStaticField<::System::Text::StringBuilder*, "_tempSb", ::PlayFab::PlayFabError*>();
}
inline ::StringW PlayFab::PlayFabError::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::PlayFabError*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW PlayFab::PlayFabError::GenerateErrorReport()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabError*>(),
                        {"GenerateErrorReport", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void PlayFab::PlayFabError::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabError*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::PlayFabError* PlayFab::PlayFabError::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::PlayFabError*>());
}
// Ctor Parameters []
constexpr ::PlayFab::PlayFabError::PlayFabError()   {
}
