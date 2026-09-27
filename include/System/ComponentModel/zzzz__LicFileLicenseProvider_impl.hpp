#pragma once
// IWYU pragma private; include "System/ComponentModel/LicFileLicenseProvider.hpp"
#include "System/ComponentModel/zzzz__LicenseProvider_impl.hpp"
#include "System/ComponentModel/zzzz__License_impl.hpp"
#include "System/ComponentModel/zzzz__LicFileLicenseProvider_def.hpp"
#include "System/ComponentModel/zzzz__LicFileLicenseProvider_def.hpp"
#include "System/ComponentModel/zzzz__LicenseContext_def.hpp"
#include "System/ComponentModel/zzzz__License_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::LicFileLicenseProvider.IsKeyValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::LicFileLicenseProvider::*)(::StringW, ::System::Type*)>(&::System::ComponentModel::LicFileLicenseProvider::IsKeyValid)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xad58ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::LicFileLicenseProvider*>(),
                    {::i2c::class_of<::System::ComponentModel::LicFileLicenseProvider*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LicFileLicenseProvider.GetKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::LicFileLicenseProvider::*)(::System::Type*)>(&::System::ComponentModel::LicFileLicenseProvider::GetKey)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xad58f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::LicFileLicenseProvider*>(),
                    {::i2c::class_of<::System::ComponentModel::LicFileLicenseProvider*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LicFileLicenseProvider.GetLicense
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::License* (::System::ComponentModel::LicFileLicenseProvider::*)(::System::ComponentModel::LicenseContext*, ::System::Type*, ::System::Object*, bool)>(&::System::ComponentModel::LicFileLicenseProvider::GetLicense)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0xad58fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::LicFileLicenseProvider*>(),
                    {::i2c::class_of<::System::ComponentModel::LicFileLicenseProvider*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LicFileLicenseProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::LicFileLicenseProvider::*)()>(&::System::ComponentModel::LicFileLicenseProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad593c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicFileLicenseProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool System::ComponentModel::LicFileLicenseProvider::IsKeyValid(::StringW  key, ::System::Type*  type)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::LicFileLicenseProvider*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, type);
}
inline ::StringW System::ComponentModel::LicFileLicenseProvider::GetKey(::System::Type*  type)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::LicFileLicenseProvider*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, type);
}
inline ::System::ComponentModel::License* System::ComponentModel::LicFileLicenseProvider::GetLicense(::System::ComponentModel::LicenseContext*  context, ::System::Type*  type, ::System::Object*  instance, bool  allowExceptions)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::LicFileLicenseProvider*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::License*>(this, ___internal_method, context, type, instance, allowExceptions);
}
inline void System::ComponentModel::LicFileLicenseProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicFileLicenseProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::LicFileLicenseProvider* System::ComponentModel::LicFileLicenseProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::LicFileLicenseProvider*>());
}
// Ctor Parameters []
constexpr ::System::ComponentModel::LicFileLicenseProvider::LicFileLicenseProvider()   {
}
//  Writing Method size for method: ::System::ComponentModel::LicFileLicenseProvider_LicFileLicense._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::LicFileLicenseProvider_LicFileLicense::*)(::System::ComponentModel::LicFileLicenseProvider*, ::StringW)>(&::System::ComponentModel::LicFileLicenseProvider_LicFileLicense::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xad59384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicFileLicenseProvider_LicFileLicense*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::LicFileLicenseProvider*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LicFileLicenseProvider_LicFileLicense.get_LicenseKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::LicFileLicenseProvider_LicFileLicense::*)()>(&::System::ComponentModel::LicFileLicenseProvider_LicFileLicense::get_LicenseKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad593e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::LicFileLicenseProvider_LicFileLicense*>(),
                    {::i2c::class_of<::System::ComponentModel::LicFileLicenseProvider_LicFileLicense*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::LicFileLicenseProvider_LicFileLicense.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::LicFileLicenseProvider_LicFileLicense::*)()>(&::System::ComponentModel::LicFileLicenseProvider_LicFileLicense::Dispose)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xad593e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::LicFileLicenseProvider_LicFileLicense*>(),
                    {::i2c::class_of<::System::ComponentModel::LicFileLicenseProvider_LicFileLicense*>(), 6}
                ));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::LicFileLicenseProvider*& System::ComponentModel::LicFileLicenseProvider_LicFileLicense::__cordl_internal_get__owner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____owner;
}
constexpr ::System::ComponentModel::LicFileLicenseProvider* const& System::ComponentModel::LicFileLicenseProvider_LicFileLicense::__cordl_internal_get__owner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____owner;
}
constexpr void System::ComponentModel::LicFileLicenseProvider_LicFileLicense::__cordl_internal_set__owner(::System::ComponentModel::LicFileLicenseProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____owner = value;
}
constexpr ::StringW& System::ComponentModel::LicFileLicenseProvider_LicFileLicense::__cordl_internal_get__LicenseKey_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LicenseKey_k__BackingField;
}
constexpr ::StringW const& System::ComponentModel::LicFileLicenseProvider_LicFileLicense::__cordl_internal_get__LicenseKey_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LicenseKey_k__BackingField;
}
constexpr void System::ComponentModel::LicFileLicenseProvider_LicFileLicense::__cordl_internal_set__LicenseKey_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LicenseKey_k__BackingField = value;
}
inline void System::ComponentModel::LicFileLicenseProvider_LicFileLicense::_ctor(::System::ComponentModel::LicFileLicenseProvider*  owner, ::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::LicFileLicenseProvider_LicFileLicense*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ComponentModel::LicFileLicenseProvider*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, key);
}
inline ::StringW System::ComponentModel::LicFileLicenseProvider_LicFileLicense::get_LicenseKey()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::LicFileLicenseProvider_LicFileLicense*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::ComponentModel::LicFileLicenseProvider_LicFileLicense::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::LicFileLicenseProvider_LicFileLicense*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::LicFileLicenseProvider_LicFileLicense* System::ComponentModel::LicFileLicenseProvider_LicFileLicense::New_ctor(::System::ComponentModel::LicFileLicenseProvider*  owner, ::StringW  key)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::LicFileLicenseProvider_LicFileLicense*>(owner, key));
}
// Ctor Parameters []
constexpr ::System::ComponentModel::LicFileLicenseProvider_LicFileLicense::LicFileLicenseProvider_LicFileLicense()   {
}
