#pragma once
// IWYU pragma private; include "Meta/XR/Acoustics/IMaterialDataProvider.hpp"
#include "Meta/XR/Acoustics/zzzz__IMaterialDataProvider_def.hpp"
#include "Meta/XR/Acoustics/zzzz__MaterialData_def.hpp"
//  Writing Method size for method: ::Meta::XR::Acoustics::IMaterialDataProvider.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::Acoustics::MaterialData* (::Meta::XR::Acoustics::IMaterialDataProvider::*)()>(&::Meta::XR::Acoustics::IMaterialDataProvider::get_Data)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::Acoustics::IMaterialDataProvider*>(),
                    {::i2c::class_of<::Meta::XR::Acoustics::IMaterialDataProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::Acoustics::IMaterialDataProvider.get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::XR::Acoustics::IMaterialDataProvider::*)()>(&::Meta::XR::Acoustics::IMaterialDataProvider::get_name)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::Acoustics::IMaterialDataProvider*>(),
                    {::i2c::class_of<::Meta::XR::Acoustics::IMaterialDataProvider*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::Meta::XR::Acoustics::MaterialData* Meta::XR::Acoustics::IMaterialDataProvider::get_Data()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::Acoustics::IMaterialDataProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::XR::Acoustics::MaterialData*>(this, ___internal_method);
}
inline ::StringW Meta::XR::Acoustics::IMaterialDataProvider::get_name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::Acoustics::IMaterialDataProvider*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
