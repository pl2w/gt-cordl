#pragma once
// IWYU pragma private; include "Backtrace/Unity/Common/ClientPathHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Common/zzzz__ClientPathHelper_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Common::ClientPathHelper.GetFullPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Backtrace::Unity::Common::ClientPathHelper::GetFullPath)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5f26324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::ClientPathHelper*>(),
                        {"GetFullPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Common::ClientPathHelper.ParseInterpolatedString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Backtrace::Unity::Common::ClientPathHelper::ParseInterpolatedString)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5f26364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::ClientPathHelper*>(),
                        {"ParseInterpolatedString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Common::ClientPathHelper.GenerateFullPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Backtrace::Unity::Common::ClientPathHelper::GenerateFullPath)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5f264dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::ClientPathHelper*>(),
                        {"GenerateFullPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Common::ClientPathHelper.IsFileInDatabaseDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW)>(&::Backtrace::Unity::Common::ClientPathHelper::IsFileInDatabaseDirectory)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5f26638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::ClientPathHelper*>(),
                        {"IsFileInDatabaseDirectory", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Backtrace::Unity::Common::ClientPathHelper::GetFullPath(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::ClientPathHelper*>(),
                        {"GetFullPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::StringW Backtrace::Unity::Common::ClientPathHelper::ParseInterpolatedString(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::ClientPathHelper*>(),
                        {"ParseInterpolatedString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline ::StringW Backtrace::Unity::Common::ClientPathHelper::GenerateFullPath(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::ClientPathHelper*>(),
                        {"GenerateFullPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline bool Backtrace::Unity::Common::ClientPathHelper::IsFileInDatabaseDirectory(::StringW  databasePath, ::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::ClientPathHelper*>(),
                        {"IsFileInDatabaseDirectory", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, databasePath, filePath);
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Common::ClientPathHelper::ClientPathHelper()   {
}
