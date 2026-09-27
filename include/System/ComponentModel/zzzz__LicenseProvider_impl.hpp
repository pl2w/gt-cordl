#pragma once
// IWYU pragma private; include "System/ComponentModel/LicenseProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__LicenseProvider_def.hpp"
#include "System/ComponentModel/zzzz__LicenseContext_def.hpp"
#include "System/ComponentModel/zzzz__License_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::LicenseProvider.GetLicense
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::License* (::System::ComponentModel::LicenseProvider::*)(::System::ComponentModel::LicenseContext*, ::System::Type*, ::System::Object*, bool)>(&::System::ComponentModel::LicenseProvider::GetLicense)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::LicenseProvider*>(),
                    {::i2c::class_of<::System::ComponentModel::LicenseProvider*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LicenseProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::LicenseProvider::*)()>(&::System::ComponentModel::LicenseProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad593d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::ComponentModel::License* System::ComponentModel::LicenseProvider::GetLicense(::System::ComponentModel::LicenseContext*  context, ::System::Type*  type, ::System::Object*  instance, bool  allowExceptions)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::LicenseProvider*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::License*>(this, ___internal_method, context, type, instance, allowExceptions);
}
inline void System::ComponentModel::LicenseProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::LicenseProvider* System::ComponentModel::LicenseProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::LicenseProvider*>());
}
// Ctor Parameters []
constexpr ::System::ComponentModel::LicenseProvider::LicenseProvider()   {
}
