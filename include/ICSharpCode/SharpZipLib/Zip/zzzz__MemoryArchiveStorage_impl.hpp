#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/MemoryArchiveStorage.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__BaseArchiveStorage_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__MemoryArchiveStorage_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__FileUpdateMode_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage::*)()>(&::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9f87f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage::*)(::ICSharpCode::SharpZipLib::Zip::FileUpdateMode)>(&::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9f8ee6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage*>(),
                        {".ctor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::FileUpdateMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage.get_FinalStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::MemoryStream* (::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage::*)()>(&::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage::get_FinalStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f8ee94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage*>(),
                        {"get_FinalStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage.GetTemporaryOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage::*)()>(&::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage::GetTemporaryOutput)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9f8ee9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage.ConvertTemporaryToFinal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage::*)()>(&::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage::ConvertTemporaryToFinal)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f8ef04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage.MakeTemporaryCopy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage::*)(::System::IO::Stream*)>(&::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage::MakeTemporaryCopy)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9f8efd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage.OpenForDirectUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage::*)(::System::IO::Stream*)>(&::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage::OpenForDirectUpdate)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9f8f0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage::*)()>(&::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f8f174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage*>(),
                    {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage*>(), 14}
                ));
    return ___internal_method;
  }
};
constexpr ::System::IO::MemoryStream*& ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage::__cordl_internal_get_temporaryStream_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___temporaryStream_;
}
constexpr ::System::IO::MemoryStream* const& ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage::__cordl_internal_get_temporaryStream_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___temporaryStream_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage::__cordl_internal_set_temporaryStream_(::System::IO::MemoryStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___temporaryStream_ = value;
}
constexpr ::System::IO::MemoryStream*& ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage::__cordl_internal_get_finalStream_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finalStream_;
}
constexpr ::System::IO::MemoryStream* const& ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage::__cordl_internal_get_finalStream_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finalStream_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage::__cordl_internal_set_finalStream_(::System::IO::MemoryStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___finalStream_ = value;
}
inline void ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage::_ctor(::ICSharpCode::SharpZipLib::Zip::FileUpdateMode  updateMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage*>(),
                        {".ctor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::FileUpdateMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateMode);
}
inline ::System::IO::MemoryStream* ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage::get_FinalStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage*>(),
                        {"get_FinalStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::MemoryStream*>(this, ___internal_method);
}
inline ::System::IO::Stream* ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage::GetTemporaryOutput()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline ::System::IO::Stream* ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage::ConvertTemporaryToFinal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline ::System::IO::Stream* ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage::MakeTemporaryCopy(::System::IO::Stream*  stream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, stream);
}
inline ::System::IO::Stream* ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage::OpenForDirectUpdate(::System::IO::Stream*  stream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, stream);
}
inline void ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage* ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage*>());
}
inline ::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage* ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage::New_ctor(::ICSharpCode::SharpZipLib::Zip::FileUpdateMode  updateMode)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage*>(updateMode));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::MemoryArchiveStorage::MemoryArchiveStorage()   {
}
