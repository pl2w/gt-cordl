#pragma once
// IWYU pragma private; include "Modio/Version.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/zzzz__Version_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::Modio::Version.AddEnvironmentDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Modio::Version::AddEnvironmentDetails)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa01c770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Version*>(),
                        {"AddEnvironmentDetails", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Version.GetCurrent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Modio::Version::GetCurrent)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa01c844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Version*>(),
                        {"GetCurrent", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Version::setStaticF_Current(::System::Version*  value)  {
::cordl_internals::setStaticField<::System::Version*, "Current", ::Modio::Version*>(std::forward<::System::Version*>(value));
}
inline ::System::Version* Modio::Version::getStaticF_Current()  {
return ::cordl_internals::getStaticField<::System::Version*, "Current", ::Modio::Version*>();
}
inline void Modio::Version::setStaticF_EnvironmentDetails(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::StringW>*, "EnvironmentDetails", ::Modio::Version*>(std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::List_1<::StringW>* Modio::Version::getStaticF_EnvironmentDetails()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::StringW>*, "EnvironmentDetails", ::Modio::Version*>();
}
inline void Modio::Version::AddEnvironmentDetails(::StringW  details)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Version*>(),
                        {"AddEnvironmentDetails", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, details);
}
inline ::StringW Modio::Version::GetCurrent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Version*>(),
                        {"GetCurrent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Modio::Version::Version()   {
}
