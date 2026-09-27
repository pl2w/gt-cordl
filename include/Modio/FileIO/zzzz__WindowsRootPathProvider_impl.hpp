#pragma once
// IWYU pragma private; include "Modio/FileIO/WindowsRootPathProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/FileIO/zzzz__WindowsRootPathProvider_def.hpp"
#include "Modio/FileIO/zzzz__IModioRootPathProvider_def.hpp"
//  Writing Method size for method: ::Modio::FileIO::WindowsRootPathProvider.IsPublicEnvironmentVariableSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Modio::FileIO::WindowsRootPathProvider::IsPublicEnvironmentVariableSet)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa054ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::WindowsRootPathProvider*>(),
                        {"IsPublicEnvironmentVariableSet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::WindowsRootPathProvider.get_Path
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::FileIO::WindowsRootPathProvider::*)()>(&::Modio::FileIO::WindowsRootPathProvider::get_Path)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa054b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::WindowsRootPathProvider*>(),
                        {"get_Path", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::WindowsRootPathProvider.get_UserPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::FileIO::WindowsRootPathProvider::*)()>(&::Modio::FileIO::WindowsRootPathProvider::get_UserPath)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa054b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::WindowsRootPathProvider*>(),
                        {"get_UserPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::WindowsRootPathProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::FileIO::WindowsRootPathProvider::*)()>(&::Modio::FileIO::WindowsRootPathProvider::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa054bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::WindowsRootPathProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Modio::FileIO::WindowsRootPathProvider::__cordl_internal_get_LegacyPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LegacyPath;
}
constexpr ::StringW const& Modio::FileIO::WindowsRootPathProvider::__cordl_internal_get_LegacyPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LegacyPath;
}
constexpr void Modio::FileIO::WindowsRootPathProvider::__cordl_internal_set_LegacyPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LegacyPath = value;
}
inline bool Modio::FileIO::WindowsRootPathProvider::IsPublicEnvironmentVariableSet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::WindowsRootPathProvider*>(),
                        {"IsPublicEnvironmentVariableSet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::StringW Modio::FileIO::WindowsRootPathProvider::get_Path()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::WindowsRootPathProvider*>(),
                        {"get_Path", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Modio::FileIO::WindowsRootPathProvider::get_UserPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::WindowsRootPathProvider*>(),
                        {"get_UserPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::FileIO::WindowsRootPathProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::WindowsRootPathProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::FileIO::WindowsRootPathProvider* Modio::FileIO::WindowsRootPathProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::FileIO::WindowsRootPathProvider*>());
}
/// @brief Convert operator to "::Modio::FileIO::IModioRootPathProvider"
constexpr  Modio::FileIO::WindowsRootPathProvider::operator ::Modio::FileIO::IModioRootPathProvider*() noexcept {
return static_cast<::Modio::FileIO::IModioRootPathProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::FileIO::IModioRootPathProvider"
constexpr ::Modio::FileIO::IModioRootPathProvider* Modio::FileIO::WindowsRootPathProvider::i___Modio__FileIO__IModioRootPathProvider() noexcept {
return static_cast<::Modio::FileIO::IModioRootPathProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::FileIO::WindowsRootPathProvider::WindowsRootPathProvider()   {
}
