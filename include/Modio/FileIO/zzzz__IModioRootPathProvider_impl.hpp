#pragma once
// IWYU pragma private; include "Modio/FileIO/IModioRootPathProvider.hpp"
#include "Modio/FileIO/zzzz__IModioRootPathProvider_def.hpp"
//  Writing Method size for method: ::Modio::FileIO::IModioRootPathProvider.get_Path
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::FileIO::IModioRootPathProvider::*)()>(&::Modio::FileIO::IModioRootPathProvider::get_Path)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioRootPathProvider*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioRootPathProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::IModioRootPathProvider.get_UserPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::FileIO::IModioRootPathProvider::*)()>(&::Modio::FileIO::IModioRootPathProvider::get_UserPath)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::IModioRootPathProvider*>(),
                    {::i2c::class_of<::Modio::FileIO::IModioRootPathProvider*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::StringW Modio::FileIO::IModioRootPathProvider::get_Path()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioRootPathProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Modio::FileIO::IModioRootPathProvider::get_UserPath()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::IModioRootPathProvider*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
