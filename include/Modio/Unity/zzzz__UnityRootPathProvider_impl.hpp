#pragma once
// IWYU pragma private; include "Modio/Unity/UnityRootPathProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Unity/zzzz__UnityRootPathProvider_def.hpp"
#include "Modio/FileIO/zzzz__IModioRootPathProvider_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UnityRootPathProvider.get_Path
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Unity::UnityRootPathProvider::*)()>(&::Modio::Unity::UnityRootPathProvider::get_Path)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9f97060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UnityRootPathProvider*>(),
                        {"get_Path", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UnityRootPathProvider.get_UserPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Unity::UnityRootPathProvider::*)()>(&::Modio::Unity::UnityRootPathProvider::get_UserPath)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9f970b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UnityRootPathProvider*>(),
                        {"get_UserPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UnityRootPathProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UnityRootPathProvider::*)()>(&::Modio::Unity::UnityRootPathProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f97150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UnityRootPathProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Modio::Unity::UnityRootPathProvider::get_Path()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UnityRootPathProvider*>(),
                        {"get_Path", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Modio::Unity::UnityRootPathProvider::get_UserPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UnityRootPathProvider*>(),
                        {"get_UserPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::Unity::UnityRootPathProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UnityRootPathProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UnityRootPathProvider* Modio::Unity::UnityRootPathProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UnityRootPathProvider*>());
}
/// @brief Convert operator to "::Modio::FileIO::IModioRootPathProvider"
constexpr  Modio::Unity::UnityRootPathProvider::operator ::Modio::FileIO::IModioRootPathProvider*() noexcept {
return static_cast<::Modio::FileIO::IModioRootPathProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::FileIO::IModioRootPathProvider"
constexpr ::Modio::FileIO::IModioRootPathProvider* Modio::Unity::UnityRootPathProvider::i___Modio__FileIO__IModioRootPathProvider() noexcept {
return static_cast<::Modio::FileIO::IModioRootPathProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::UnityRootPathProvider::UnityRootPathProvider()   {
}
