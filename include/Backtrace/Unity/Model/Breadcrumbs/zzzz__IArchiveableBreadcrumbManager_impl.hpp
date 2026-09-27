#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Breadcrumbs/IArchiveableBreadcrumbManager.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__IArchiveableBreadcrumbManager_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::IArchiveableBreadcrumbManager.Archive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::Breadcrumbs::IArchiveableBreadcrumbManager::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::IArchiveableBreadcrumbManager::Archive)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::IArchiveableBreadcrumbManager*>(),
                    {::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::IArchiveableBreadcrumbManager*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::StringW Backtrace::Unity::Model::Breadcrumbs::IArchiveableBreadcrumbManager::Archive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::IArchiveableBreadcrumbManager*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
