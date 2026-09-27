#pragma once
// IWYU pragma private; include "KID/Model/ClientErrorResponse.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "KID/Model/zzzz__ClientErrorResponse_def.hpp"
//  Writing Method size for method: ::KID::Model::ClientErrorResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::ClientErrorResponse::*)()>(&::KID::Model::ClientErrorResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd4744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::ClientErrorResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::ClientErrorResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::ClientErrorResponse::*)(::StringW, ::StringW)>(&::KID::Model::ClientErrorResponse::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9cd474c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::ClientErrorResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::ClientErrorResponse.get_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::ClientErrorResponse::*)()>(&::KID::Model::ClientErrorResponse::get_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd47dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::ClientErrorResponse*>(),
                        {"get_Error", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::ClientErrorResponse.set_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::ClientErrorResponse::*)(::StringW)>(&::KID::Model::ClientErrorResponse::set_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd47e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::ClientErrorResponse*>(),
                        {"set_Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::ClientErrorResponse.get_ErrorMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::ClientErrorResponse::*)()>(&::KID::Model::ClientErrorResponse::get_ErrorMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd47ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::ClientErrorResponse*>(),
                        {"get_ErrorMessage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::ClientErrorResponse.set_ErrorMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::KID::Model::ClientErrorResponse::*)(::StringW)>(&::KID::Model::ClientErrorResponse::set_ErrorMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cd47f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::ClientErrorResponse*>(),
                        {"set_ErrorMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::ClientErrorResponse.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::ClientErrorResponse::*)()>(&::KID::Model::ClientErrorResponse::ToString)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x9cd47fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::ClientErrorResponse*>(),
                    {::i2c::class_of<::KID::Model::ClientErrorResponse*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::KID::Model::ClientErrorResponse.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::KID::Model::ClientErrorResponse::*)()>(&::KID::Model::ClientErrorResponse::ToJson)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9cd4950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::KID::Model::ClientErrorResponse*>(),
                    {::i2c::class_of<::KID::Model::ClientErrorResponse*>(), 4}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& KID::Model::ClientErrorResponse::__cordl_internal_get__Error_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
constexpr ::StringW const& KID::Model::ClientErrorResponse::__cordl_internal_get__Error_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
constexpr void KID::Model::ClientErrorResponse::__cordl_internal_set__Error_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Error_k__BackingField = value;
}
constexpr ::StringW& KID::Model::ClientErrorResponse::__cordl_internal_get__ErrorMessage_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ErrorMessage_k__BackingField;
}
constexpr ::StringW const& KID::Model::ClientErrorResponse::__cordl_internal_get__ErrorMessage_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ErrorMessage_k__BackingField;
}
constexpr void KID::Model::ClientErrorResponse::__cordl_internal_set__ErrorMessage_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ErrorMessage_k__BackingField = value;
}
inline void KID::Model::ClientErrorResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::ClientErrorResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void KID::Model::ClientErrorResponse::_ctor(::StringW  error, ::StringW  errorMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::ClientErrorResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, errorMessage);
}
inline ::StringW KID::Model::ClientErrorResponse::get_Error()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::ClientErrorResponse*>(),
                        {"get_Error", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::ClientErrorResponse::set_Error(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::ClientErrorResponse*>(),
                        {"set_Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::ClientErrorResponse::get_ErrorMessage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::ClientErrorResponse*>(),
                        {"get_ErrorMessage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void KID::Model::ClientErrorResponse::set_ErrorMessage(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::KID::Model::ClientErrorResponse*>(),
                        {"set_ErrorMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW KID::Model::ClientErrorResponse::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::ClientErrorResponse*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW KID::Model::ClientErrorResponse::ToJson()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::KID::Model::ClientErrorResponse*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::KID::Model::ClientErrorResponse* KID::Model::ClientErrorResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::ClientErrorResponse*>());
}
inline ::KID::Model::ClientErrorResponse* KID::Model::ClientErrorResponse::New_ctor(::StringW  error, ::StringW  errorMessage)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::KID::Model::ClientErrorResponse*>(error, errorMessage));
}
// Ctor Parameters []
constexpr ::KID::Model::ClientErrorResponse::ClientErrorResponse()   {
}
