#pragma once
// IWYU pragma private; include "Plugins/Modio/Unity/Examples/Android/AndroidRootPathProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Plugins/Modio/Unity/Examples/Android/zzzz__AndroidRootPathProvider_def.hpp"
#include "Modio/FileIO/zzzz__IModioRootPathProvider_def.hpp"
//  Writing Method size for method: ::Plugins::Modio::Unity::Examples::Android::AndroidRootPathProvider.get_Path
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Plugins::Modio::Unity::Examples::Android::AndroidRootPathProvider::*)()>(&::Plugins::Modio::Unity::Examples::Android::AndroidRootPathProvider::get_Path)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9f9d178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Plugins::Modio::Unity::Examples::Android::AndroidRootPathProvider*>(),
                        {"get_Path", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Plugins::Modio::Unity::Examples::Android::AndroidRootPathProvider.get_UserPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Plugins::Modio::Unity::Examples::Android::AndroidRootPathProvider::*)()>(&::Plugins::Modio::Unity::Examples::Android::AndroidRootPathProvider::get_UserPath)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9f9d1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Plugins::Modio::Unity::Examples::Android::AndroidRootPathProvider*>(),
                        {"get_UserPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Plugins::Modio::Unity::Examples::Android::AndroidRootPathProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Plugins::Modio::Unity::Examples::Android::AndroidRootPathProvider::*)()>(&::Plugins::Modio::Unity::Examples::Android::AndroidRootPathProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f9d1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Plugins::Modio::Unity::Examples::Android::AndroidRootPathProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Plugins::Modio::Unity::Examples::Android::AndroidRootPathProvider::get_Path()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Plugins::Modio::Unity::Examples::Android::AndroidRootPathProvider*>(),
                        {"get_Path", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Plugins::Modio::Unity::Examples::Android::AndroidRootPathProvider::get_UserPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Plugins::Modio::Unity::Examples::Android::AndroidRootPathProvider*>(),
                        {"get_UserPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Plugins::Modio::Unity::Examples::Android::AndroidRootPathProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Plugins::Modio::Unity::Examples::Android::AndroidRootPathProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Plugins::Modio::Unity::Examples::Android::AndroidRootPathProvider* Plugins::Modio::Unity::Examples::Android::AndroidRootPathProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Plugins::Modio::Unity::Examples::Android::AndroidRootPathProvider*>());
}
/// @brief Convert operator to "::Modio::FileIO::IModioRootPathProvider"
constexpr  Plugins::Modio::Unity::Examples::Android::AndroidRootPathProvider::operator ::Modio::FileIO::IModioRootPathProvider*() noexcept {
return static_cast<::Modio::FileIO::IModioRootPathProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::FileIO::IModioRootPathProvider"
constexpr ::Modio::FileIO::IModioRootPathProvider* Plugins::Modio::Unity::Examples::Android::AndroidRootPathProvider::i___Modio__FileIO__IModioRootPathProvider() noexcept {
return static_cast<::Modio::FileIO::IModioRootPathProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Plugins::Modio::Unity::Examples::Android::AndroidRootPathProvider::AndroidRootPathProvider()   {
}
