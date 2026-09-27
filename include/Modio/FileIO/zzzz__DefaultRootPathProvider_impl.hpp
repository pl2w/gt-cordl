#pragma once
// IWYU pragma private; include "Modio/FileIO/DefaultRootPathProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/FileIO/zzzz__DefaultRootPathProvider_def.hpp"
#include "Modio/FileIO/zzzz__IModioRootPathProvider_def.hpp"
//  Writing Method size for method: ::Modio::FileIO::DefaultRootPathProvider.get_Path
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::FileIO::DefaultRootPathProvider::*)()>(&::Modio::FileIO::DefaultRootPathProvider::get_Path)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa0539b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::DefaultRootPathProvider*>(),
                    {::i2c::class_of<::Modio::FileIO::DefaultRootPathProvider*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::DefaultRootPathProvider.get_UserPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::FileIO::DefaultRootPathProvider::*)()>(&::Modio::FileIO::DefaultRootPathProvider::get_UserPath)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa053a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::DefaultRootPathProvider*>(),
                        {"get_UserPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::DefaultRootPathProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::FileIO::DefaultRootPathProvider::*)()>(&::Modio::FileIO::DefaultRootPathProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa053a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::DefaultRootPathProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Modio::FileIO::DefaultRootPathProvider::get_Path()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::DefaultRootPathProvider*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Modio::FileIO::DefaultRootPathProvider::get_UserPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::DefaultRootPathProvider*>(),
                        {"get_UserPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::FileIO::DefaultRootPathProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::DefaultRootPathProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::FileIO::DefaultRootPathProvider* Modio::FileIO::DefaultRootPathProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::FileIO::DefaultRootPathProvider*>());
}
/// @brief Convert operator to "::Modio::FileIO::IModioRootPathProvider"
constexpr  Modio::FileIO::DefaultRootPathProvider::operator ::Modio::FileIO::IModioRootPathProvider*() noexcept {
return static_cast<::Modio::FileIO::IModioRootPathProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::FileIO::IModioRootPathProvider"
constexpr ::Modio::FileIO::IModioRootPathProvider* Modio::FileIO::DefaultRootPathProvider::i___Modio__FileIO__IModioRootPathProvider() noexcept {
return static_cast<::Modio::FileIO::IModioRootPathProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::FileIO::DefaultRootPathProvider::DefaultRootPathProvider()   {
}
