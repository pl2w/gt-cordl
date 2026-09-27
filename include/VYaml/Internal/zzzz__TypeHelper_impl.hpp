#pragma once
// IWYU pragma private; include "VYaml/Internal/TypeHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Internal/zzzz__TypeHelper_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::VYaml::Internal::TypeHelper.IsAnonymous
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::VYaml::Internal::TypeHelper::IsAnonymous)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xb96b5ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::TypeHelper*>(),
                        {"IsAnonymous", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool VYaml::Internal::TypeHelper::IsAnonymous(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Internal::TypeHelper*>(),
                        {"IsAnonymous", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::VYaml::Internal::TypeHelper::TypeHelper()   {
}
