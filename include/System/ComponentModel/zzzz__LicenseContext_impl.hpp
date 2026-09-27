#pragma once
// IWYU pragma private; include "System/ComponentModel/LicenseContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__LicenseContext_def.hpp"
#include "System/ComponentModel/zzzz__LicenseUsageMode_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/zzzz__IServiceProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::LicenseContext.get_UsageMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::LicenseUsageMode (::System::ComponentModel::LicenseContext::*)()>(&::System::ComponentModel::LicenseContext::get_UsageMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad59440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::LicenseContext*>(),
                    {::i2c::class_of<::System::ComponentModel::LicenseContext*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LicenseContext.GetSavedLicenseKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::LicenseContext::*)(::System::Type*, ::System::Reflection::Assembly*)>(&::System::ComponentModel::LicenseContext::GetSavedLicenseKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad59448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::LicenseContext*>(),
                    {::i2c::class_of<::System::ComponentModel::LicenseContext*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LicenseContext.GetService
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::ComponentModel::LicenseContext::*)(::System::Type*)>(&::System::ComponentModel::LicenseContext::GetService)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad59450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::LicenseContext*>(),
                    {::i2c::class_of<::System::ComponentModel::LicenseContext*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LicenseContext.SetSavedLicenseKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::LicenseContext::*)(::System::Type*, ::StringW)>(&::System::ComponentModel::LicenseContext::SetSavedLicenseKey)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xad59458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::LicenseContext*>(),
                    {::i2c::class_of<::System::ComponentModel::LicenseContext*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LicenseContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::LicenseContext::*)()>(&::System::ComponentModel::LicenseContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad5945c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseContext*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::ComponentModel::LicenseUsageMode System::ComponentModel::LicenseContext::get_UsageMode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::LicenseContext*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::LicenseUsageMode>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::LicenseContext::GetSavedLicenseKey(::System::Type*  type, ::System::Reflection::Assembly*  resourceAssembly)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::LicenseContext*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, type, resourceAssembly);
}
inline ::System::Object* System::ComponentModel::LicenseContext::GetService(::System::Type*  type)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::LicenseContext*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, type);
}
inline void System::ComponentModel::LicenseContext::SetSavedLicenseKey(::System::Type*  type, ::StringW  key)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::LicenseContext*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, key);
}
inline void System::ComponentModel::LicenseContext::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicenseContext*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::LicenseContext* System::ComponentModel::LicenseContext::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::LicenseContext*>());
}
/// @brief Convert operator to "::System::IServiceProvider"
constexpr  System::ComponentModel::LicenseContext::operator ::System::IServiceProvider*() noexcept {
return static_cast<::System::IServiceProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IServiceProvider"
constexpr ::System::IServiceProvider* System::ComponentModel::LicenseContext::i___System__IServiceProvider() noexcept {
return static_cast<::System::IServiceProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::LicenseContext::LicenseContext()   {
}
