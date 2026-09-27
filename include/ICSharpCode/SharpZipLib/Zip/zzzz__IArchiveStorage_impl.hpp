#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/IArchiveStorage.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__IArchiveStorage_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__FileUpdateMode_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::IArchiveStorage.get_UpdateMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Zip::FileUpdateMode (::ICSharpCode::SharpZipLib::Zip::IArchiveStorage::*)()>(&::ICSharpCode::SharpZipLib::Zip::IArchiveStorage::get_UpdateMode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::IArchiveStorage.GetTemporaryOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::ICSharpCode::SharpZipLib::Zip::IArchiveStorage::*)()>(&::ICSharpCode::SharpZipLib::Zip::IArchiveStorage::GetTemporaryOutput)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::IArchiveStorage.ConvertTemporaryToFinal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::ICSharpCode::SharpZipLib::Zip::IArchiveStorage::*)()>(&::ICSharpCode::SharpZipLib::Zip::IArchiveStorage::ConvertTemporaryToFinal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::IArchiveStorage.MakeTemporaryCopy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::ICSharpCode::SharpZipLib::Zip::IArchiveStorage::*)(::System::IO::Stream*)>(&::ICSharpCode::SharpZipLib::Zip::IArchiveStorage::MakeTemporaryCopy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::IArchiveStorage.OpenForDirectUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::ICSharpCode::SharpZipLib::Zip::IArchiveStorage::*)(::System::IO::Stream*)>(&::ICSharpCode::SharpZipLib::Zip::IArchiveStorage::OpenForDirectUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::IArchiveStorage.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::IArchiveStorage::*)()>(&::ICSharpCode::SharpZipLib::Zip::IArchiveStorage::Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*>(), 5}
                ));
    return ___internal_method;
  }
};
inline ::ICSharpCode::SharpZipLib::Zip::FileUpdateMode ICSharpCode::SharpZipLib::Zip::IArchiveStorage::get_UpdateMode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Zip::FileUpdateMode>(this, ___internal_method);
}
inline ::System::IO::Stream* ICSharpCode::SharpZipLib::Zip::IArchiveStorage::GetTemporaryOutput()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline ::System::IO::Stream* ICSharpCode::SharpZipLib::Zip::IArchiveStorage::ConvertTemporaryToFinal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline ::System::IO::Stream* ICSharpCode::SharpZipLib::Zip::IArchiveStorage::MakeTemporaryCopy(::System::IO::Stream*  stream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, stream);
}
inline ::System::IO::Stream* ICSharpCode::SharpZipLib::Zip::IArchiveStorage::OpenForDirectUpdate(::System::IO::Stream*  stream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, stream);
}
inline void ICSharpCode::SharpZipLib::Zip::IArchiveStorage::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::IArchiveStorage*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
