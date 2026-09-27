#pragma once
// IWYU pragma private; include "System/ComponentModel/Design/RuntimeLicenseContext.hpp"
#include "System/ComponentModel/zzzz__LicenseContext_impl.hpp"
#include "System/ComponentModel/Design/zzzz__RuntimeLicenseContext_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Diagnostics/zzzz__TraceSwitch_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::Design::RuntimeLicenseContext.GetLocalPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::Design::RuntimeLicenseContext::*)(::StringW)>(&::System::ComponentModel::Design::RuntimeLicenseContext::GetLocalPath)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xad98c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Design::RuntimeLicenseContext*>(),
                        {"GetLocalPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Design::RuntimeLicenseContext.GetSavedLicenseKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ComponentModel::Design::RuntimeLicenseContext::*)(::System::Type*, ::System::Reflection::Assembly*)>(&::System::ComponentModel::Design::RuntimeLicenseContext::GetSavedLicenseKey)> {
  constexpr static std::size_t size = 0x544;
  constexpr static std::size_t addrs = 0xad98d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::Design::RuntimeLicenseContext*>(),
                    {::i2c::class_of<::System::ComponentModel::Design::RuntimeLicenseContext*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Design::RuntimeLicenseContext.CaseInsensitiveManifestResourceStreamLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::ComponentModel::Design::RuntimeLicenseContext::*)(::System::Reflection::Assembly*, ::StringW)>(&::System::ComponentModel::Design::RuntimeLicenseContext::CaseInsensitiveManifestResourceStreamLookup)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xad99248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Design::RuntimeLicenseContext*>(),
                        {"CaseInsensitiveManifestResourceStreamLookup", {}, {::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Design::RuntimeLicenseContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::Design::RuntimeLicenseContext::*)()>(&::System::ComponentModel::Design::RuntimeLicenseContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad99618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Design::RuntimeLicenseContext*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Hashtable*& System::ComponentModel::Design::RuntimeLicenseContext::__cordl_internal_get_savedLicenseKeys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___savedLicenseKeys;
}
constexpr ::System::Collections::Hashtable* const& System::ComponentModel::Design::RuntimeLicenseContext::__cordl_internal_get_savedLicenseKeys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___savedLicenseKeys;
}
constexpr void System::ComponentModel::Design::RuntimeLicenseContext::__cordl_internal_set_savedLicenseKeys(::System::Collections::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___savedLicenseKeys = value;
}
inline void System::ComponentModel::Design::RuntimeLicenseContext::setStaticF_s_runtimeLicenseContextSwitch(::System::Diagnostics::TraceSwitch*  value)  {
::cordl_internals::setStaticField<::System::Diagnostics::TraceSwitch*, "s_runtimeLicenseContextSwitch", ::System::ComponentModel::Design::RuntimeLicenseContext*>(std::forward<::System::Diagnostics::TraceSwitch*>(value));
}
inline ::System::Diagnostics::TraceSwitch* System::ComponentModel::Design::RuntimeLicenseContext::getStaticF_s_runtimeLicenseContextSwitch()  {
return ::cordl_internals::getStaticField<::System::Diagnostics::TraceSwitch*, "s_runtimeLicenseContextSwitch", ::System::ComponentModel::Design::RuntimeLicenseContext*>();
}
inline ::StringW System::ComponentModel::Design::RuntimeLicenseContext::GetLocalPath(::StringW  fileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Design::RuntimeLicenseContext*>(),
                        {"GetLocalPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, fileName);
}
inline ::StringW System::ComponentModel::Design::RuntimeLicenseContext::GetSavedLicenseKey(::System::Type*  type, ::System::Reflection::Assembly*  resourceAssembly)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::Design::RuntimeLicenseContext*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, type, resourceAssembly);
}
inline ::System::IO::Stream* System::ComponentModel::Design::RuntimeLicenseContext::CaseInsensitiveManifestResourceStreamLookup(::System::Reflection::Assembly*  satellite, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Design::RuntimeLicenseContext*>(),
                        {"CaseInsensitiveManifestResourceStreamLookup", {}, {::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, satellite, name);
}
inline void System::ComponentModel::Design::RuntimeLicenseContext::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::Design::RuntimeLicenseContext*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::Design::RuntimeLicenseContext* System::ComponentModel::Design::RuntimeLicenseContext::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::Design::RuntimeLicenseContext*>());
}
// Ctor Parameters []
constexpr ::System::ComponentModel::Design::RuntimeLicenseContext::RuntimeLicenseContext()   {
}
