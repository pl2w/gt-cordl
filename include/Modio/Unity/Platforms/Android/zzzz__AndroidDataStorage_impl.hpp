#pragma once
// IWYU pragma private; include "Modio/Unity/Platforms/Android/AndroidDataStorage.hpp"
#include "Modio/FileIO/zzzz__BaseDataStorage_impl.hpp"
#include "Modio/Unity/Platforms/Android/zzzz__AndroidDataStorage_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::Modio::Unity::Platforms::Android::AndroidDataStorage.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::Platforms::Android::AndroidDataStorage::*)()>(&::Modio::Unity::Platforms::Android::AndroidDataStorage::Finalize)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9f9d3b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::Platforms::Android::AndroidDataStorage*>(),
                    {::i2c::class_of<::Modio::Unity::Platforms::Android::AndroidDataStorage*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::Platforms::Android::AndroidDataStorage.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Unity::Platforms::Android::AndroidDataStorage::*)()>(&::Modio::Unity::Platforms::Android::AndroidDataStorage::Init)> {
  constexpr static std::size_t size = 0x5e8;
  constexpr static std::size_t addrs = 0x9f9d43c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::Platforms::Android::AndroidDataStorage*>(),
                    {::i2c::class_of<::Modio::Unity::Platforms::Android::AndroidDataStorage*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::Platforms::Android::AndroidDataStorage.GetAvailableFreeSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::Unity::Platforms::Android::AndroidDataStorage::*)()>(&::Modio::Unity::Platforms::Android::AndroidDataStorage::GetAvailableFreeSpace)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x9f9da24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::Platforms::Android::AndroidDataStorage*>(),
                    {::i2c::class_of<::Modio::Unity::Platforms::Android::AndroidDataStorage*>(), 79}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::Platforms::Android::AndroidDataStorage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::Platforms::Android::AndroidDataStorage::*)()>(&::Modio::Unity::Platforms::Android::AndroidDataStorage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f9dc08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::Platforms::Android::AndroidDataStorage*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Unity::Platforms::Android::AndroidDataStorage::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::Platforms::Android::AndroidDataStorage*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Unity::Platforms::Android::AndroidDataStorage::Init()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::Platforms::Android::AndroidDataStorage*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline int64_t Modio::Unity::Platforms::Android::AndroidDataStorage::GetAvailableFreeSpace()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::Platforms::Android::AndroidDataStorage*>(), 79}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Modio::Unity::Platforms::Android::AndroidDataStorage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::Platforms::Android::AndroidDataStorage*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::Platforms::Android::AndroidDataStorage* Modio::Unity::Platforms::Android::AndroidDataStorage::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::Platforms::Android::AndroidDataStorage*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::Platforms::Android::AndroidDataStorage::AndroidDataStorage()   {
}
