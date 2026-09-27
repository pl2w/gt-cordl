#pragma once
// IWYU pragma private; include "System/Net/Configuration/SmtpSection.hpp"
#include "System/Configuration/zzzz__ConfigurationSection_impl.hpp"
#include "System/Net/Configuration/zzzz__SmtpSection_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
#include "System/Net/Configuration/zzzz__SmtpNetworkElement_def.hpp"
#include "System/Net/Configuration/zzzz__SmtpSpecifiedPickupDirectoryElement_def.hpp"
#include "System/Net/Mail/zzzz__SmtpDeliveryFormat_def.hpp"
#include "System/Net/Mail/zzzz__SmtpDeliveryMethod_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::SmtpSection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::SmtpSection::*)()>(&::System::Net::Configuration::SmtpSection::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf9780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SmtpSection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SmtpSection.get_DeliveryFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Mail::SmtpDeliveryFormat (::System::Net::Configuration::SmtpSection::*)()>(&::System::Net::Configuration::SmtpSection::get_DeliveryFormat)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf97b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SmtpSection*>(),
                        {"get_DeliveryFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SmtpSection.set_DeliveryFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::SmtpSection::*)(::System::Net::Mail::SmtpDeliveryFormat)>(&::System::Net::Configuration::SmtpSection::set_DeliveryFormat)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SmtpSection*>(),
                        {"set_DeliveryFormat", {}, {::i2c::type_of<::System::Net::Mail::SmtpDeliveryFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SmtpSection.get_DeliveryMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Mail::SmtpDeliveryMethod (::System::Net::Configuration::SmtpSection::*)()>(&::System::Net::Configuration::SmtpSection::get_DeliveryMethod)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf9828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SmtpSection*>(),
                        {"get_DeliveryMethod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SmtpSection.set_DeliveryMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::SmtpSection::*)(::System::Net::Mail::SmtpDeliveryMethod)>(&::System::Net::Configuration::SmtpSection::set_DeliveryMethod)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf9860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SmtpSection*>(),
                        {"set_DeliveryMethod", {}, {::i2c::type_of<::System::Net::Mail::SmtpDeliveryMethod>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SmtpSection.get_From
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Configuration::SmtpSection::*)()>(&::System::Net::Configuration::SmtpSection::get_From)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf9898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SmtpSection*>(),
                        {"get_From", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SmtpSection.set_From
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::SmtpSection::*)(::StringW)>(&::System::Net::Configuration::SmtpSection::set_From)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf98d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SmtpSection*>(),
                        {"set_From", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SmtpSection.get_Network
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Configuration::SmtpNetworkElement* (::System::Net::Configuration::SmtpSection::*)()>(&::System::Net::Configuration::SmtpSection::get_Network)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf9908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SmtpSection*>(),
                        {"get_Network", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SmtpSection.get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (::System::Net::Configuration::SmtpSection::*)()>(&::System::Net::Configuration::SmtpSection::get_Properties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf9940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Configuration::SmtpSection*>(),
                    {::i2c::class_of<::System::Net::Configuration::SmtpSection*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SmtpSection.get_SpecifiedPickupDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement* (::System::Net::Configuration::SmtpSection::*)()>(&::System::Net::Configuration::SmtpSection::get_SpecifiedPickupDirectory)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf9978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SmtpSection*>(),
                        {"get_SpecifiedPickupDirectory", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::Configuration::SmtpSection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SmtpSection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Mail::SmtpDeliveryFormat System::Net::Configuration::SmtpSection::get_DeliveryFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SmtpSection*>(),
                        {"get_DeliveryFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Mail::SmtpDeliveryFormat>(this, ___internal_method);
}
inline void System::Net::Configuration::SmtpSection::set_DeliveryFormat(::System::Net::Mail::SmtpDeliveryFormat  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SmtpSection*>(),
                        {"set_DeliveryFormat", {}, {::i2c::type_of<::System::Net::Mail::SmtpDeliveryFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::Mail::SmtpDeliveryMethod System::Net::Configuration::SmtpSection::get_DeliveryMethod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SmtpSection*>(),
                        {"get_DeliveryMethod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Mail::SmtpDeliveryMethod>(this, ___internal_method);
}
inline void System::Net::Configuration::SmtpSection::set_DeliveryMethod(::System::Net::Mail::SmtpDeliveryMethod  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SmtpSection*>(),
                        {"set_DeliveryMethod", {}, {::i2c::type_of<::System::Net::Mail::SmtpDeliveryMethod>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Net::Configuration::SmtpSection::get_From()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SmtpSection*>(),
                        {"get_From", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::Configuration::SmtpSection::set_From(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SmtpSection*>(),
                        {"set_From", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::Configuration::SmtpNetworkElement* System::Net::Configuration::SmtpSection::get_Network()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SmtpSection*>(),
                        {"get_Network", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::SmtpNetworkElement*>(this, ___internal_method);
}
inline ::System::Configuration::ConfigurationPropertyCollection* System::Net::Configuration::SmtpSection::get_Properties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Configuration::SmtpSection*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationPropertyCollection*>(this, ___internal_method);
}
inline ::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement* System::Net::Configuration::SmtpSection::get_SpecifiedPickupDirectory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SmtpSection*>(),
                        {"get_SpecifiedPickupDirectory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement*>(this, ___internal_method);
}
inline ::System::Net::Configuration::SmtpSection* System::Net::Configuration::SmtpSection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Configuration::SmtpSection*>());
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::SmtpSection::SmtpSection()   {
}
