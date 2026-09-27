#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Breadcrumbs/Storage/IBreadcrumbFile.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/Storage/zzzz__IBreadcrumbFile_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile.Exists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile::Exists)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*>(),
                    {::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile.Delete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile::Delete)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*>(),
                    {::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile.GetCreateStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile::GetCreateStream)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*>(),
                    {::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile.GetIOStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile::GetIOStream)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*>(),
                    {::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile.GetWriteStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile::GetWriteStream)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*>(),
                    {::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*>(), 4}
                ));
    return ___internal_method;
  }
};
inline bool Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile::Exists()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile::Delete()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IO::Stream* Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile::GetCreateStream()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline ::System::IO::Stream* Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile::GetIOStream()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline ::System::IO::Stream* Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile::GetWriteStream()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::Storage::IBreadcrumbFile*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
