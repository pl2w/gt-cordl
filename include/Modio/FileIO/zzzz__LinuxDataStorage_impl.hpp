#pragma once
// IWYU pragma private; include "Modio/FileIO/LinuxDataStorage.hpp"
#include "Modio/FileIO/zzzz__BaseDataStorage_impl.hpp"
#include "Modio/FileIO/zzzz__LinuxDataStorage_def.hpp"
#include "Modio/FileIO/zzzz__LinuxDataStorage_UnixStatsFs_def.hpp"
//  Writing Method size for method: ::Modio::FileIO::LinuxDataStorage.GetAvailableFreeSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::FileIO::LinuxDataStorage::*)()>(&::Modio::FileIO::LinuxDataStorage::GetAvailableFreeSpace)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa053a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::LinuxDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::LinuxDataStorage*>(), 79}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::LinuxDataStorage.statvfs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::StringW, ::by_ref<::GlobalNamespace::LinuxDataStorage_UnixStatsFs>)>(&::Modio::FileIO::LinuxDataStorage::statvfs)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa053af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::LinuxDataStorage*>(),
                        {"statvfs", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LinuxDataStorage_UnixStatsFs>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::LinuxDataStorage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::FileIO::LinuxDataStorage::*)()>(&::Modio::FileIO::LinuxDataStorage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa053b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::LinuxDataStorage*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int64_t Modio::FileIO::LinuxDataStorage::GetAvailableFreeSpace()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::LinuxDataStorage*>(), 79}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int16_t Modio::FileIO::LinuxDataStorage::statvfs(::StringW  directory, ::by_ref<::GlobalNamespace::LinuxDataStorage_UnixStatsFs>  statsFs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::LinuxDataStorage*>(),
                        {"statvfs", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::LinuxDataStorage_UnixStatsFs>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, directory, statsFs);
}
inline void Modio::FileIO::LinuxDataStorage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::LinuxDataStorage*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::FileIO::LinuxDataStorage* Modio::FileIO::LinuxDataStorage::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::FileIO::LinuxDataStorage*>());
}
// Ctor Parameters []
constexpr ::Modio::FileIO::LinuxDataStorage::LinuxDataStorage()   {
}
