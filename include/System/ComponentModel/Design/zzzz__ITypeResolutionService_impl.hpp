#pragma once
// IWYU pragma private; include "System/ComponentModel/Design/ITypeResolutionService.hpp"
#include "System/ComponentModel/Design/zzzz__ITypeResolutionService_def.hpp"
#include "System/Reflection/zzzz__AssemblyName_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::Design::ITypeResolutionService.GetType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::ComponentModel::Design::ITypeResolutionService::*)(::StringW)>(&::System::ComponentModel::Design::ITypeResolutionService::GetType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::Design::ITypeResolutionService*>(),
                    {::i2c::class_of<::System::ComponentModel::Design::ITypeResolutionService*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Design::ITypeResolutionService.GetPathOfAssembly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::Design::ITypeResolutionService::*)(::System::Reflection::AssemblyName*)>(&::System::ComponentModel::Design::ITypeResolutionService::GetPathOfAssembly)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::Design::ITypeResolutionService*>(),
                    {::i2c::class_of<::System::ComponentModel::Design::ITypeResolutionService*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::System::Type* System::ComponentModel::Design::ITypeResolutionService::GetType(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::Design::ITypeResolutionService*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, name);
}
inline ::StringW System::ComponentModel::Design::ITypeResolutionService::GetPathOfAssembly(::System::Reflection::AssemblyName*  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::Design::ITypeResolutionService*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name);
}
