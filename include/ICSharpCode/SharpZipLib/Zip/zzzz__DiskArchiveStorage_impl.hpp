#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/DiskArchiveStorage.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__BaseArchiveStorage_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__DiskArchiveStorage_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__FileUpdateMode_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipFile_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage::*)(::ICSharpCode::SharpZipLib::Zip::ZipFile*, ::ICSharpCode::SharpZipLib::Zip::FileUpdateMode)>(&::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9f8ea90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage*>(),
                        {".ctor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::FileUpdateMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage::*)(::ICSharpCode::SharpZipLib::Zip::ZipFile*)>(&::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f87f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage*>(),
                        {".ctor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage.GetTemporaryOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage::*)()>(&::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage::GetTemporaryOutput)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9f8eb18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage.ConvertTemporaryToFinal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage::*)()>(&::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage::ConvertTemporaryToFinal)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x9f8eb7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage.MakeTemporaryCopy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage::*)(::System::IO::Stream*)>(&::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage::MakeTemporaryCopy)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9f8ed04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage.OpenForDirectUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage::*)(::System::IO::Stream*)>(&::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage::OpenForDirectUpdate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9f8edc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage::*)()>(&::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f8ee58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage*>(), 14}
                ));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage::__cordl_internal_get_temporaryStream_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___temporaryStream_;
}
constexpr ::System::IO::Stream* const& ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage::__cordl_internal_get_temporaryStream_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___temporaryStream_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage::__cordl_internal_set_temporaryStream_(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___temporaryStream_ = value;
}
constexpr ::StringW& ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage::__cordl_internal_get_fileName_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileName_;
}
constexpr ::StringW const& ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage::__cordl_internal_get_fileName_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileName_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage::__cordl_internal_set_fileName_(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fileName_ = value;
}
constexpr ::StringW& ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage::__cordl_internal_get_temporaryName_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___temporaryName_;
}
constexpr ::StringW const& ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage::__cordl_internal_get_temporaryName_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___temporaryName_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage::__cordl_internal_set_temporaryName_(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___temporaryName_ = value;
}
inline void ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage::_ctor(::ICSharpCode::SharpZipLib::Zip::ZipFile*  file, ::ICSharpCode::SharpZipLib::Zip::FileUpdateMode  updateMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage*>(),
                        {".ctor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::FileUpdateMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, file, updateMode);
}
inline void ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage::_ctor(::ICSharpCode::SharpZipLib::Zip::ZipFile*  file)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage*>(),
                        {".ctor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::ZipFile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, file);
}
inline ::System::IO::Stream* ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage::GetTemporaryOutput()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline ::System::IO::Stream* ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage::ConvertTemporaryToFinal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline ::System::IO::Stream* ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage::MakeTemporaryCopy(::System::IO::Stream*  stream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, stream);
}
inline ::System::IO::Stream* ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage::OpenForDirectUpdate(::System::IO::Stream*  stream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, stream);
}
inline void ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage* ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage::New_ctor(::ICSharpCode::SharpZipLib::Zip::ZipFile*  file, ::ICSharpCode::SharpZipLib::Zip::FileUpdateMode  updateMode)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage*>(file, updateMode));
}
inline ::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage* ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage::New_ctor(::ICSharpCode::SharpZipLib::Zip::ZipFile*  file)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage*>(file));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::DiskArchiveStorage::DiskArchiveStorage()   {
}
