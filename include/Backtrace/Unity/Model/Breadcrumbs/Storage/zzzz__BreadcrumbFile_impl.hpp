#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Breadcrumbs/Storage/BreadcrumbFile.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/Storage/zzzz__BreadcrumbFile_def.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/Storage/zzzz__IBreadcrumbFile_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile::*)(::StringW)>(&::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f1e588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile.Delete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile::Delete)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f1fd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile*>(),
                        {"Delete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile.Exists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile::Exists)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f1fd9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile*>(),
                        {"Exists", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile.GetCreateStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile::GetCreateStream)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f1fda8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile*>(),
                        {"GetCreateStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile.GetIOStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile::GetIOStream)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f1fe10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile*>(),
                        {"GetIOStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile.GetWriteStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile::GetWriteStream)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f1fe78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile*>(),
                        {"GetWriteStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile::__cordl_internal_get__path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____path;
}
constexpr ::StringW const& Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile::__cordl_internal_get__path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____path;
}
constexpr void Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile::__cordl_internal_set__path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____path = value;
}
inline void Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile::_ctor(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline void Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile::Delete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile*>(),
                        {"Delete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile::Exists()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile*>(),
                        {"Exists", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::IO::Stream* Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile::GetCreateStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile*>(),
                        {"GetCreateStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline ::System::IO::Stream* Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile::GetIOStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile*>(),
                        {"GetIOStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline ::System::IO::Stream* Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile::GetWriteStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile*>(),
                        {"GetWriteStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile* Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile::New_ctor(::StringW  path)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile*>(path));
}
/// @brief Convert operator to "::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile"
constexpr  Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile::operator ::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*() noexcept {
return static_cast<::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*>(static_cast<void*>(this));
}
/// @brief Convert to "::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile"
constexpr ::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile* Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile::i___Backtrace__Unity__Model__Breadcrumbs__Storage__IBreadcrumbFile() noexcept {
return static_cast<::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::Breadcrumbs::Storage::BreadcrumbFile::BreadcrumbFile()   {
}
