#pragma once
// IWYU pragma private; include "Modio/Errors/ErrorExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Errors/zzzz__ErrorExtensions_def.hpp"
#include "Modio/Errors/zzzz__ApiErrorCode_def.hpp"
#include "Modio/Errors/zzzz__ArchiveErrorCode_def.hpp"
#include "Modio/Errors/zzzz__ErrorCode_def.hpp"
#include "Modio/Errors/zzzz__FilesystemErrorCode_def.hpp"
#include "Modio/Errors/zzzz__GenericErrorCode_def.hpp"
#include "Modio/Errors/zzzz__HttpErrorCode_def.hpp"
#include "Modio/Errors/zzzz__MetricsErrorCode_def.hpp"
#include "Modio/Errors/zzzz__ModManagementErrorCode_def.hpp"
#include "Modio/Errors/zzzz__ModValidationErrorCode_def.hpp"
#include "Modio/Errors/zzzz__MonetizationErrorCode_def.hpp"
#include "Modio/Errors/zzzz__SystemErrorCode_def.hpp"
#include "Modio/Errors/zzzz__TempModsErrorCode_def.hpp"
#include "Modio/Errors/zzzz__UserAuthErrorCode_def.hpp"
#include "Modio/Errors/zzzz__UserDataErrorCode_def.hpp"
#include "Modio/Errors/zzzz__ZlibErrorCode_def.hpp"
//  Writing Method size for method: ::Modio::Errors::ErrorExtensions.GetMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Modio::Errors::ApiErrorCode, ::StringW)>(&::Modio::Errors::ErrorExtensions::GetMessage)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa05531c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ErrorExtensions*>(),
                        {"GetMessage", {}, {::i2c::type_of<::Modio::Errors::ApiErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Errors::ErrorExtensions.GetMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Modio::Errors::ArchiveErrorCode, ::StringW)>(&::Modio::Errors::ErrorExtensions::GetMessage)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa056460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ErrorExtensions*>(),
                        {"GetMessage", {}, {::i2c::type_of<::Modio::Errors::ArchiveErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Errors::ErrorExtensions.GetMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Modio::Errors::ErrorCode, ::StringW)>(&::Modio::Errors::ErrorExtensions::GetMessage)> {
  constexpr static std::size_t size = 0x1140;
  constexpr static std::size_t addrs = 0xa055320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ErrorExtensions*>(),
                        {"GetMessage", {}, {::i2c::type_of<::Modio::Errors::ErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Errors::ErrorExtensions.GetMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Modio::Errors::FilesystemErrorCode, ::StringW)>(&::Modio::Errors::ErrorExtensions::GetMessage)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa056464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ErrorExtensions*>(),
                        {"GetMessage", {}, {::i2c::type_of<::Modio::Errors::FilesystemErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Errors::ErrorExtensions.GetMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Modio::Errors::GenericErrorCode, ::StringW)>(&::Modio::Errors::ErrorExtensions::GetMessage)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa056468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ErrorExtensions*>(),
                        {"GetMessage", {}, {::i2c::type_of<::Modio::Errors::GenericErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Errors::ErrorExtensions.GetMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Modio::Errors::HttpErrorCode, ::StringW)>(&::Modio::Errors::ErrorExtensions::GetMessage)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa05646c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ErrorExtensions*>(),
                        {"GetMessage", {}, {::i2c::type_of<::Modio::Errors::HttpErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Errors::ErrorExtensions.GetMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Modio::Errors::MetricsErrorCode, ::StringW)>(&::Modio::Errors::ErrorExtensions::GetMessage)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa056470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ErrorExtensions*>(),
                        {"GetMessage", {}, {::i2c::type_of<::Modio::Errors::MetricsErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Errors::ErrorExtensions.GetMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Modio::Errors::ModManagementErrorCode, ::StringW)>(&::Modio::Errors::ErrorExtensions::GetMessage)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa056474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ErrorExtensions*>(),
                        {"GetMessage", {}, {::i2c::type_of<::Modio::Errors::ModManagementErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Errors::ErrorExtensions.GetMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Modio::Errors::ModValidationErrorCode, ::StringW)>(&::Modio::Errors::ErrorExtensions::GetMessage)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa056478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ErrorExtensions*>(),
                        {"GetMessage", {}, {::i2c::type_of<::Modio::Errors::ModValidationErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Errors::ErrorExtensions.GetMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Modio::Errors::MonetizationErrorCode, ::StringW)>(&::Modio::Errors::ErrorExtensions::GetMessage)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa05647c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ErrorExtensions*>(),
                        {"GetMessage", {}, {::i2c::type_of<::Modio::Errors::MonetizationErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Errors::ErrorExtensions.GetMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Modio::Errors::SystemErrorCode, ::StringW)>(&::Modio::Errors::ErrorExtensions::GetMessage)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa056480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ErrorExtensions*>(),
                        {"GetMessage", {}, {::i2c::type_of<::Modio::Errors::SystemErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Errors::ErrorExtensions.GetMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Modio::Errors::TempModsErrorCode, ::StringW)>(&::Modio::Errors::ErrorExtensions::GetMessage)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa056484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ErrorExtensions*>(),
                        {"GetMessage", {}, {::i2c::type_of<::Modio::Errors::TempModsErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Errors::ErrorExtensions.GetMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Modio::Errors::UserAuthErrorCode, ::StringW)>(&::Modio::Errors::ErrorExtensions::GetMessage)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa056488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ErrorExtensions*>(),
                        {"GetMessage", {}, {::i2c::type_of<::Modio::Errors::UserAuthErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Errors::ErrorExtensions.GetMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Modio::Errors::UserDataErrorCode, ::StringW)>(&::Modio::Errors::ErrorExtensions::GetMessage)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa05648c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ErrorExtensions*>(),
                        {"GetMessage", {}, {::i2c::type_of<::Modio::Errors::UserDataErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Errors::ErrorExtensions.GetMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Modio::Errors::ZlibErrorCode, ::StringW)>(&::Modio::Errors::ErrorExtensions::GetMessage)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa056490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ErrorExtensions*>(),
                        {"GetMessage", {}, {::i2c::type_of<::Modio::Errors::ZlibErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Modio::Errors::ErrorExtensions::GetMessage(::Modio::Errors::ApiErrorCode  errorCode, ::StringW  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ErrorExtensions*>(),
                        {"GetMessage", {}, {::i2c::type_of<::Modio::Errors::ApiErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, errorCode, append);
}
inline ::StringW Modio::Errors::ErrorExtensions::GetMessage(::Modio::Errors::ArchiveErrorCode  errorCode, ::StringW  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ErrorExtensions*>(),
                        {"GetMessage", {}, {::i2c::type_of<::Modio::Errors::ArchiveErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, errorCode, append);
}
inline ::StringW Modio::Errors::ErrorExtensions::GetMessage(::Modio::Errors::ErrorCode  errorCode, ::StringW  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ErrorExtensions*>(),
                        {"GetMessage", {}, {::i2c::type_of<::Modio::Errors::ErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, errorCode, append);
}
inline ::StringW Modio::Errors::ErrorExtensions::GetMessage(::Modio::Errors::FilesystemErrorCode  errorCode, ::StringW  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ErrorExtensions*>(),
                        {"GetMessage", {}, {::i2c::type_of<::Modio::Errors::FilesystemErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, errorCode, append);
}
inline ::StringW Modio::Errors::ErrorExtensions::GetMessage(::Modio::Errors::GenericErrorCode  errorCode, ::StringW  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ErrorExtensions*>(),
                        {"GetMessage", {}, {::i2c::type_of<::Modio::Errors::GenericErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, errorCode, append);
}
inline ::StringW Modio::Errors::ErrorExtensions::GetMessage(::Modio::Errors::HttpErrorCode  errorCode, ::StringW  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ErrorExtensions*>(),
                        {"GetMessage", {}, {::i2c::type_of<::Modio::Errors::HttpErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, errorCode, append);
}
inline ::StringW Modio::Errors::ErrorExtensions::GetMessage(::Modio::Errors::MetricsErrorCode  errorCode, ::StringW  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ErrorExtensions*>(),
                        {"GetMessage", {}, {::i2c::type_of<::Modio::Errors::MetricsErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, errorCode, append);
}
inline ::StringW Modio::Errors::ErrorExtensions::GetMessage(::Modio::Errors::ModManagementErrorCode  errorCode, ::StringW  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ErrorExtensions*>(),
                        {"GetMessage", {}, {::i2c::type_of<::Modio::Errors::ModManagementErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, errorCode, append);
}
inline ::StringW Modio::Errors::ErrorExtensions::GetMessage(::Modio::Errors::ModValidationErrorCode  errorCode, ::StringW  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ErrorExtensions*>(),
                        {"GetMessage", {}, {::i2c::type_of<::Modio::Errors::ModValidationErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, errorCode, append);
}
inline ::StringW Modio::Errors::ErrorExtensions::GetMessage(::Modio::Errors::MonetizationErrorCode  errorCode, ::StringW  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ErrorExtensions*>(),
                        {"GetMessage", {}, {::i2c::type_of<::Modio::Errors::MonetizationErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, errorCode, append);
}
inline ::StringW Modio::Errors::ErrorExtensions::GetMessage(::Modio::Errors::SystemErrorCode  errorCode, ::StringW  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ErrorExtensions*>(),
                        {"GetMessage", {}, {::i2c::type_of<::Modio::Errors::SystemErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, errorCode, append);
}
inline ::StringW Modio::Errors::ErrorExtensions::GetMessage(::Modio::Errors::TempModsErrorCode  errorCode, ::StringW  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ErrorExtensions*>(),
                        {"GetMessage", {}, {::i2c::type_of<::Modio::Errors::TempModsErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, errorCode, append);
}
inline ::StringW Modio::Errors::ErrorExtensions::GetMessage(::Modio::Errors::UserAuthErrorCode  errorCode, ::StringW  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ErrorExtensions*>(),
                        {"GetMessage", {}, {::i2c::type_of<::Modio::Errors::UserAuthErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, errorCode, append);
}
inline ::StringW Modio::Errors::ErrorExtensions::GetMessage(::Modio::Errors::UserDataErrorCode  errorCode, ::StringW  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ErrorExtensions*>(),
                        {"GetMessage", {}, {::i2c::type_of<::Modio::Errors::UserDataErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, errorCode, append);
}
inline ::StringW Modio::Errors::ErrorExtensions::GetMessage(::Modio::Errors::ZlibErrorCode  errorCode, ::StringW  append)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Errors::ErrorExtensions*>(),
                        {"GetMessage", {}, {::i2c::type_of<::Modio::Errors::ZlibErrorCode>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, errorCode, append);
}
// Ctor Parameters []
constexpr ::Modio::Errors::ErrorExtensions::ErrorExtensions()   {
}
