#pragma once
// IWYU pragma private; include "Modio/FileIO/MacDataStorage.hpp"
#include "Modio/FileIO/zzzz__BaseDataStorage_impl.hpp"
#include "Modio/FileIO/zzzz__MacDataStorage_def.hpp"
#include "Modio/FileIO/zzzz__MacDataStorage_UnixStatsFs_def.hpp"
//  Writing Method size for method: ::Modio::FileIO::MacDataStorage.GetAvailableFreeSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::FileIO::MacDataStorage::*)()>(&::Modio::FileIO::MacDataStorage::GetAvailableFreeSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa053b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::FileIO::MacDataStorage*>(),
                    {::i2c::class_of<::Modio::FileIO::MacDataStorage*>(), 79}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::MacDataStorage.statvfs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::StringW, ::by_ref<::GlobalNamespace::MacDataStorage_UnixStatsFs>)>(&::Modio::FileIO::MacDataStorage::statvfs)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa053b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::MacDataStorage*>(),
                        {"statvfs", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MacDataStorage_UnixStatsFs>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::FileIO::MacDataStorage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::FileIO::MacDataStorage::*)()>(&::Modio::FileIO::MacDataStorage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa053c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::MacDataStorage*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int64_t Modio::FileIO::MacDataStorage::GetAvailableFreeSpace()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::FileIO::MacDataStorage*>(), 79}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int16_t Modio::FileIO::MacDataStorage::statvfs(::StringW  directory, ::by_ref<::GlobalNamespace::MacDataStorage_UnixStatsFs>  statsFs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::MacDataStorage*>(),
                        {"statvfs", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MacDataStorage_UnixStatsFs>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, directory, statsFs);
}
inline void Modio::FileIO::MacDataStorage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::FileIO::MacDataStorage*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::FileIO::MacDataStorage* Modio::FileIO::MacDataStorage::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::FileIO::MacDataStorage*>());
}
// Ctor Parameters []
constexpr ::Modio::FileIO::MacDataStorage::MacDataStorage()   {
}
