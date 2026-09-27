#pragma once
// IWYU pragma private; include "VYaml/Serialization/YamlFormatterResolverExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Serialization/zzzz__YamlFormatterResolverExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatterResolver_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_1_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatter_def.hpp"
//  Writing Method size for method: ::VYaml::Serialization::YamlFormatterResolverExtensions.Throw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::VYaml::Serialization::IYamlFormatterResolver*)>(&::VYaml::Serialization::YamlFormatterResolverExtensions::Throw)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb955580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlFormatterResolverExtensions*>(),
                        {"Throw", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::VYaml::Serialization::IYamlFormatterResolver*>()}}
                    )));
    return ___internal_method;
  }
};
inline void VYaml::Serialization::YamlFormatterResolverExtensions::setStaticF_FormatterGetters(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Func_2<::VYaml::Serialization::IYamlFormatterResolver*,::VYaml::Serialization::IYamlFormatter*>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Func_2<::VYaml::Serialization::IYamlFormatterResolver*,::VYaml::Serialization::IYamlFormatter*>*>*, "FormatterGetters", ::VYaml::Serialization::YamlFormatterResolverExtensions*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Func_2<::VYaml::Serialization::IYamlFormatterResolver*,::VYaml::Serialization::IYamlFormatter*>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Func_2<::VYaml::Serialization::IYamlFormatterResolver*,::VYaml::Serialization::IYamlFormatter*>*>* VYaml::Serialization::YamlFormatterResolverExtensions::getStaticF_FormatterGetters()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Func_2<::VYaml::Serialization::IYamlFormatterResolver*,::VYaml::Serialization::IYamlFormatter*>*>*, "FormatterGetters", ::VYaml::Serialization::YamlFormatterResolverExtensions*>();
}
template<typename T>
inline ::VYaml::Serialization::IYamlFormatter_1<T>* VYaml::Serialization::YamlFormatterResolverExtensions::GetFormatterWithVerify(::VYaml::Serialization::IYamlFormatterResolver*  resolver)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::VYaml::Serialization::YamlFormatterResolverExtensions*>(),
                    {"GetFormatterWithVerify", {::i2c::class_of<T>()}, {::i2c::type_of<::VYaml::Serialization::IYamlFormatterResolver*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::VYaml::Serialization::IYamlFormatter_1<T>*>(nullptr, ___internal_method, resolver);
}
inline void VYaml::Serialization::YamlFormatterResolverExtensions::Throw(::System::Type*  t, ::VYaml::Serialization::IYamlFormatterResolver*  resolver)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::YamlFormatterResolverExtensions*>(),
                        {"Throw", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::VYaml::Serialization::IYamlFormatterResolver*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t, resolver);
}
// Ctor Parameters []
constexpr ::VYaml::Serialization::YamlFormatterResolverExtensions::YamlFormatterResolverExtensions()   {
}
