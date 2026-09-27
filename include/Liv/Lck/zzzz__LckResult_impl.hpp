#pragma once
// IWYU pragma private; include "Liv/Lck/LckResult.hpp"
#include "Liv/Lck/zzzz__LckError_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/zzzz__LckResult_def.hpp"
#include "Liv/Lck/zzzz__ILckResult_def.hpp"
#include "Liv/Lck/zzzz__LckError_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckResult.get_Success
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::LckResult::*)()>(&::Liv::Lck::LckResult::get_Success)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cf3a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckResult*>(),
                        {"get_Success", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckResult.get_Message
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Liv::Lck::LckResult::*)()>(&::Liv::Lck::LckResult::get_Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cf3a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckResult*>(),
                        {"get_Message", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckResult.get_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Liv::Lck::LckError> (::Liv::Lck::LckResult::*)()>(&::Liv::Lck::LckResult::get_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cf3a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckResult*>(),
                        {"get_Error", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckResult::*)(bool, ::StringW, ::System::Nullable_1<::Liv::Lck::LckError>)>(&::Liv::Lck::LckResult::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9cf3a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckResult*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Nullable_1<::Liv::Lck::LckError>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckResult.NewSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (*)()>(&::Liv::Lck::LckResult::NewSuccess)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9cdfcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckResult*>(),
                        {"NewSuccess", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckResult.NewError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (*)(::Liv::Lck::LckError, ::StringW)>(&::Liv::Lck::LckResult::NewError)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9cdfc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckResult*>(),
                        {"NewError", {}, {::i2c::type_of<::Liv::Lck::LckError>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Liv::Lck::LckResult::__cordl_internal_get__success()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____success;
}
constexpr bool const& Liv::Lck::LckResult::__cordl_internal_get__success() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____success;
}
constexpr void Liv::Lck::LckResult::__cordl_internal_set__success(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____success = value;
}
constexpr ::StringW& Liv::Lck::LckResult::__cordl_internal_get__message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____message;
}
constexpr ::StringW const& Liv::Lck::LckResult::__cordl_internal_get__message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____message;
}
constexpr void Liv::Lck::LckResult::__cordl_internal_set__message(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____message = value;
}
constexpr ::System::Nullable_1<::Liv::Lck::LckError>& Liv::Lck::LckResult::__cordl_internal_get__error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____error;
}
constexpr ::System::Nullable_1<::Liv::Lck::LckError> const& Liv::Lck::LckResult::__cordl_internal_get__error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____error;
}
constexpr void Liv::Lck::LckResult::__cordl_internal_set__error(::System::Nullable_1<::Liv::Lck::LckError>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____error = value;
}
inline bool Liv::Lck::LckResult::get_Success()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckResult*>(),
                        {"get_Success", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Liv::Lck::LckResult::get_Message()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckResult*>(),
                        {"get_Message", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Nullable_1<::Liv::Lck::LckError> Liv::Lck::LckResult::get_Error()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckResult*>(),
                        {"get_Error", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Liv::Lck::LckError>>(this, ___internal_method);
}
inline void Liv::Lck::LckResult::_ctor(bool  success, ::StringW  message, ::System::Nullable_1<::Liv::Lck::LckError>  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckResult*>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Nullable_1<::Liv::Lck::LckError>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success, message, error);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckResult::NewSuccess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckResult*>(),
                        {"NewSuccess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(nullptr, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckResult::NewError(::Liv::Lck::LckError  error, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckResult*>(),
                        {"NewError", {}, {::i2c::type_of<::Liv::Lck::LckError>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(nullptr, ___internal_method, error, message);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckResult::New_ctor(bool  success, ::StringW  message, ::System::Nullable_1<::Liv::Lck::LckError>  error)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckResult*>(success, message, error));
}
/// @brief Convert operator to "::Liv::Lck::ILckResult"
constexpr  Liv::Lck::LckResult::operator ::Liv::Lck::ILckResult*() noexcept {
return static_cast<::Liv::Lck::ILckResult*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::ILckResult"
constexpr ::Liv::Lck::ILckResult* Liv::Lck::LckResult::i___Liv__Lck__ILckResult() noexcept {
return static_cast<::Liv::Lck::ILckResult*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckResult::LckResult()   {
}
