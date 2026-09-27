#pragma once
// IWYU pragma private; include "Fusion/Versioning.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__Versioning_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::Fusion::Versioning.get_GetCurrentVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Version* (*)()>(&::Fusion::Versioning::get_GetCurrentVersion)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f418f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Versioning*>(),
                        {"get_GetCurrentVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Versioning.ShortVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Version* (*)(::System::Version*)>(&::Fusion::Versioning::ShortVersion)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f419d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Versioning*>(),
                        {"ShortVersion", {}, {::i2c::type_of<::System::Version*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::Versioning::setStaticF_InvalidVersion(::System::Version*  value)  {
::cordl_internals::setStaticField<::System::Version*, "InvalidVersion", ::Fusion::Versioning*>(std::forward<::System::Version*>(value));
}
inline ::System::Version* Fusion::Versioning::getStaticF_InvalidVersion()  {
return ::cordl_internals::getStaticField<::System::Version*, "InvalidVersion", ::Fusion::Versioning*>();
}
inline ::System::Version* Fusion::Versioning::get_GetCurrentVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Versioning*>(),
                        {"get_GetCurrentVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Version*>(nullptr, ___internal_method);
}
inline ::System::Version* Fusion::Versioning::ShortVersion(::System::Version*  version)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Versioning*>(),
                        {"ShortVersion", {}, {::i2c::type_of<::System::Version*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Version*>(nullptr, ___internal_method, version);
}
// Ctor Parameters []
constexpr ::Fusion::Versioning::Versioning()   {
}
