#pragma once
// IWYU pragma private; include "System/ComponentModel/IntSecurity.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__IntSecurity_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::IntSecurity.UnsafeGetFullPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::ComponentModel::IntSecurity::UnsafeGetFullPath)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xad73224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::IntSecurity*>(),
                        {"UnsafeGetFullPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW System::ComponentModel::IntSecurity::UnsafeGetFullPath(::StringW  fileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::IntSecurity*>(),
                        {"UnsafeGetFullPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, fileName);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::IntSecurity::IntSecurity()   {
}
