#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonSerializerSettings.hpp"
#include "Newtonsoft/Json/zzzz__ConstructorHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__DateFormatHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__DateParseHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__DateTimeZoneHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__DefaultValueHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__FloatFormatHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__FloatParseHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__Formatting_impl.hpp"
#include "Newtonsoft/Json/zzzz__MetadataPropertyHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__MissingMemberHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__NullValueHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__ObjectCreationHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__PreserveReferencesHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__ReferenceLoopHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__StringEscapeHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__TypeNameAssemblyFormatHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__TypeNameHandling_impl.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializerSettings_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ErrorEventArgs_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__IContractResolver_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__IReferenceResolver_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ISerializationBinder_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ITraceWriter_def.hpp"
#include "Newtonsoft/Json/zzzz__ConstructorHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DefaultValueHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__Formatting_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "Newtonsoft/Json/zzzz__MetadataPropertyHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__MissingMemberHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__NullValueHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__ObjectCreationHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__PreserveReferencesHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__ReferenceLoopHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__TypeNameAssemblyFormatHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__TypeNameHandling_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_ReferenceLoopHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::ReferenceLoopHandling (::Newtonsoft::Json::JsonSerializerSettings::*)()>(&::Newtonsoft::Json::JsonSerializerSettings::get_ReferenceLoopHandling)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa377200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"get_ReferenceLoopHandling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_ReferenceLoopHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(::Newtonsoft::Json::ReferenceLoopHandling)>(&::Newtonsoft::Json::JsonSerializerSettings::set_ReferenceLoopHandling)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa378758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"set_ReferenceLoopHandling", {}, {::i2c::type_of<::Newtonsoft::Json::ReferenceLoopHandling>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_MissingMemberHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::MissingMemberHandling (::Newtonsoft::Json::JsonSerializerSettings::*)()>(&::Newtonsoft::Json::JsonSerializerSettings::get_MissingMemberHandling)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa37723c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"get_MissingMemberHandling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_MissingMemberHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(::Newtonsoft::Json::MissingMemberHandling)>(&::Newtonsoft::Json::JsonSerializerSettings::set_MissingMemberHandling)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa3787c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"set_MissingMemberHandling", {}, {::i2c::type_of<::Newtonsoft::Json::MissingMemberHandling>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_ObjectCreationHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::ObjectCreationHandling (::Newtonsoft::Json::JsonSerializerSettings::*)()>(&::Newtonsoft::Json::JsonSerializerSettings::get_ObjectCreationHandling)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa377278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"get_ObjectCreationHandling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_ObjectCreationHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(::Newtonsoft::Json::ObjectCreationHandling)>(&::Newtonsoft::Json::JsonSerializerSettings::set_ObjectCreationHandling)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa378828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"set_ObjectCreationHandling", {}, {::i2c::type_of<::Newtonsoft::Json::ObjectCreationHandling>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_NullValueHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::NullValueHandling (::Newtonsoft::Json::JsonSerializerSettings::*)()>(&::Newtonsoft::Json::JsonSerializerSettings::get_NullValueHandling)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa3772b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"get_NullValueHandling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_NullValueHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(::Newtonsoft::Json::NullValueHandling)>(&::Newtonsoft::Json::JsonSerializerSettings::set_NullValueHandling)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa378890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"set_NullValueHandling", {}, {::i2c::type_of<::Newtonsoft::Json::NullValueHandling>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_DefaultValueHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::DefaultValueHandling (::Newtonsoft::Json::JsonSerializerSettings::*)()>(&::Newtonsoft::Json::JsonSerializerSettings::get_DefaultValueHandling)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa3772f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"get_DefaultValueHandling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_DefaultValueHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(::Newtonsoft::Json::DefaultValueHandling)>(&::Newtonsoft::Json::JsonSerializerSettings::set_DefaultValueHandling)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa3788f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"set_DefaultValueHandling", {}, {::i2c::type_of<::Newtonsoft::Json::DefaultValueHandling>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_Converters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>* (::Newtonsoft::Json::JsonSerializerSettings::*)()>(&::Newtonsoft::Json::JsonSerializerSettings::get_Converters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa378960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"get_Converters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_Converters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>*)>(&::Newtonsoft::Json::JsonSerializerSettings::set_Converters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa378968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"set_Converters", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_PreserveReferencesHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::PreserveReferencesHandling (::Newtonsoft::Json::JsonSerializerSettings::*)()>(&::Newtonsoft::Json::JsonSerializerSettings::get_PreserveReferencesHandling)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa3771c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"get_PreserveReferencesHandling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_TypeNameHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::TypeNameHandling (::Newtonsoft::Json::JsonSerializerSettings::*)()>(&::Newtonsoft::Json::JsonSerializerSettings::get_TypeNameHandling)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa377110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"get_TypeNameHandling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_TypeNameHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(::Newtonsoft::Json::TypeNameHandling)>(&::Newtonsoft::Json::JsonSerializerSettings::set_TypeNameHandling)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa378970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"set_TypeNameHandling", {}, {::i2c::type_of<::Newtonsoft::Json::TypeNameHandling>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_MetadataPropertyHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::MetadataPropertyHandling (::Newtonsoft::Json::JsonSerializerSettings::*)()>(&::Newtonsoft::Json::JsonSerializerSettings::get_MetadataPropertyHandling)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa37714c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"get_MetadataPropertyHandling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_TypeNameAssemblyFormatHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::TypeNameAssemblyFormatHandling (::Newtonsoft::Json::JsonSerializerSettings::*)()>(&::Newtonsoft::Json::JsonSerializerSettings::get_TypeNameAssemblyFormatHandling)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa377188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"get_TypeNameAssemblyFormatHandling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_ConstructorHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::ConstructorHandling (::Newtonsoft::Json::JsonSerializerSettings::*)()>(&::Newtonsoft::Json::JsonSerializerSettings::get_ConstructorHandling)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa37732c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"get_ConstructorHandling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_ConstructorHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(::Newtonsoft::Json::ConstructorHandling)>(&::Newtonsoft::Json::JsonSerializerSettings::set_ConstructorHandling)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa3789d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"set_ConstructorHandling", {}, {::i2c::type_of<::Newtonsoft::Json::ConstructorHandling>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_ContractResolver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::IContractResolver* (::Newtonsoft::Json::JsonSerializerSettings::*)()>(&::Newtonsoft::Json::JsonSerializerSettings::get_ContractResolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa378a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"get_ContractResolver", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_ContractResolver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(::Newtonsoft::Json::Serialization::IContractResolver*)>(&::Newtonsoft::Json::JsonSerializerSettings::set_ContractResolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa378a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"set_ContractResolver", {}, {::i2c::type_of<::Newtonsoft::Json::Serialization::IContractResolver*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_EqualityComparer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEqualityComparer* (::Newtonsoft::Json::JsonSerializerSettings::*)()>(&::Newtonsoft::Json::JsonSerializerSettings::get_EqualityComparer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa378a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"get_EqualityComparer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_ReferenceResolverProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>* (::Newtonsoft::Json::JsonSerializerSettings::*)()>(&::Newtonsoft::Json::JsonSerializerSettings::get_ReferenceResolverProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa378a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"get_ReferenceResolverProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_TraceWriter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::ITraceWriter* (::Newtonsoft::Json::JsonSerializerSettings::*)()>(&::Newtonsoft::Json::JsonSerializerSettings::get_TraceWriter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa378a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"get_TraceWriter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_SerializationBinder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::ISerializationBinder* (::Newtonsoft::Json::JsonSerializerSettings::*)()>(&::Newtonsoft::Json::JsonSerializerSettings::get_SerializationBinder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa378a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"get_SerializationBinder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* (::Newtonsoft::Json::JsonSerializerSettings::*)()>(&::Newtonsoft::Json::JsonSerializerSettings::get_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa378a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"get_Error", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.get_Context
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::StreamingContext (::Newtonsoft::Json::JsonSerializerSettings::*)()>(&::Newtonsoft::Json::JsonSerializerSettings::get_Context)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa377368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"get_Context", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_Formatting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(::Newtonsoft::Json::Formatting)>(&::Newtonsoft::Json::JsonSerializerSettings::set_Formatting)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa378a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"set_Formatting", {}, {::i2c::type_of<::Newtonsoft::Json::Formatting>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings.set_CheckAdditionalContent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)(bool)>(&::Newtonsoft::Json::JsonSerializerSettings::set_CheckAdditionalContent)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa378ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"set_CheckAdditionalContent", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializerSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializerSettings::*)()>(&::Newtonsoft::Json::JsonSerializerSettings::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa378bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<::Newtonsoft::Json::Formatting>& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__formatting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____formatting;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::Formatting> const& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__formatting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____formatting;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_set__formatting(::System::Nullable_1<::Newtonsoft::Json::Formatting>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____formatting = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling>& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__dateFormatHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dateFormatHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling> const& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__dateFormatHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dateFormatHandling;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_set__dateFormatHandling(::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dateFormatHandling = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__dateTimeZoneHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dateTimeZoneHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling> const& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__dateTimeZoneHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dateTimeZoneHandling;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_set__dateTimeZoneHandling(::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dateTimeZoneHandling = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__dateParseHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dateParseHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling> const& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__dateParseHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dateParseHandling;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_set__dateParseHandling(::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dateParseHandling = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling>& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__floatFormatHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____floatFormatHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling> const& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__floatFormatHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____floatFormatHandling;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_set__floatFormatHandling(::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____floatFormatHandling = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__floatParseHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____floatParseHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling> const& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__floatParseHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____floatParseHandling;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_set__floatParseHandling(::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____floatParseHandling = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling>& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__stringEscapeHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stringEscapeHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling> const& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__stringEscapeHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stringEscapeHandling;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_set__stringEscapeHandling(::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stringEscapeHandling = value;
}
constexpr ::System::Globalization::CultureInfo*& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__culture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____culture;
}
constexpr ::System::Globalization::CultureInfo* const& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__culture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____culture;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_set__culture(::System::Globalization::CultureInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____culture = value;
}
constexpr ::System::Nullable_1<bool>& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__checkAdditionalContent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____checkAdditionalContent;
}
constexpr ::System::Nullable_1<bool> const& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__checkAdditionalContent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____checkAdditionalContent;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_set__checkAdditionalContent(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____checkAdditionalContent = value;
}
constexpr ::System::Nullable_1<int32_t>& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__maxDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDepth;
}
constexpr ::System::Nullable_1<int32_t> const& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__maxDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDepth;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_set__maxDepth(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxDepth = value;
}
constexpr bool& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__maxDepthSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDepthSet;
}
constexpr bool const& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__maxDepthSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDepthSet;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_set__maxDepthSet(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxDepthSet = value;
}
constexpr ::StringW& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__dateFormatString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dateFormatString;
}
constexpr ::StringW const& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__dateFormatString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dateFormatString;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_set__dateFormatString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dateFormatString = value;
}
constexpr bool& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__dateFormatStringSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dateFormatStringSet;
}
constexpr bool const& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__dateFormatStringSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dateFormatStringSet;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_set__dateFormatStringSet(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dateFormatStringSet = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameAssemblyFormatHandling>& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__typeNameAssemblyFormatHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____typeNameAssemblyFormatHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameAssemblyFormatHandling> const& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__typeNameAssemblyFormatHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____typeNameAssemblyFormatHandling;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_set__typeNameAssemblyFormatHandling(::System::Nullable_1<::Newtonsoft::Json::TypeNameAssemblyFormatHandling>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____typeNameAssemblyFormatHandling = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling>& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__defaultValueHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultValueHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling> const& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__defaultValueHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultValueHandling;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_set__defaultValueHandling(::System::Nullable_1<::Newtonsoft::Json::DefaultValueHandling>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultValueHandling = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::PreserveReferencesHandling>& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__preserveReferencesHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____preserveReferencesHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::PreserveReferencesHandling> const& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__preserveReferencesHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____preserveReferencesHandling;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_set__preserveReferencesHandling(::System::Nullable_1<::Newtonsoft::Json::PreserveReferencesHandling>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____preserveReferencesHandling = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling>& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__nullValueHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nullValueHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::NullValueHandling> const& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__nullValueHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nullValueHandling;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_set__nullValueHandling(::System::Nullable_1<::Newtonsoft::Json::NullValueHandling>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nullValueHandling = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling>& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__objectCreationHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objectCreationHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling> const& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__objectCreationHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objectCreationHandling;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_set__objectCreationHandling(::System::Nullable_1<::Newtonsoft::Json::ObjectCreationHandling>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____objectCreationHandling = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling>& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__missingMemberHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____missingMemberHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling> const& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__missingMemberHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____missingMemberHandling;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_set__missingMemberHandling(::System::Nullable_1<::Newtonsoft::Json::MissingMemberHandling>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____missingMemberHandling = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__referenceLoopHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____referenceLoopHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> const& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__referenceLoopHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____referenceLoopHandling;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_set__referenceLoopHandling(::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____referenceLoopHandling = value;
}
constexpr ::System::Nullable_1<::System::Runtime::Serialization::StreamingContext>& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__context()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____context;
}
constexpr ::System::Nullable_1<::System::Runtime::Serialization::StreamingContext> const& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__context() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____context;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_set__context(::System::Nullable_1<::System::Runtime::Serialization::StreamingContext>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____context = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::ConstructorHandling>& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__constructorHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____constructorHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::ConstructorHandling> const& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__constructorHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____constructorHandling;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_set__constructorHandling(::System::Nullable_1<::Newtonsoft::Json::ConstructorHandling>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____constructorHandling = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__typeNameHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____typeNameHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> const& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__typeNameHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____typeNameHandling;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_set__typeNameHandling(::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____typeNameHandling = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::MetadataPropertyHandling>& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__metadataPropertyHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metadataPropertyHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::MetadataPropertyHandling> const& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__metadataPropertyHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metadataPropertyHandling;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_set__metadataPropertyHandling(::System::Nullable_1<::Newtonsoft::Json::MetadataPropertyHandling>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____metadataPropertyHandling = value;
}
constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>*& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__Converters_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Converters_k__BackingField;
}
constexpr ::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>* const& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__Converters_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Converters_k__BackingField;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_set__Converters_k__BackingField(::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Converters_k__BackingField = value;
}
constexpr ::Newtonsoft::Json::Serialization::IContractResolver*& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__ContractResolver_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ContractResolver_k__BackingField;
}
constexpr ::Newtonsoft::Json::Serialization::IContractResolver* const& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__ContractResolver_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ContractResolver_k__BackingField;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_set__ContractResolver_k__BackingField(::Newtonsoft::Json::Serialization::IContractResolver*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ContractResolver_k__BackingField = value;
}
constexpr ::System::Collections::IEqualityComparer*& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__EqualityComparer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EqualityComparer_k__BackingField;
}
constexpr ::System::Collections::IEqualityComparer* const& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__EqualityComparer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EqualityComparer_k__BackingField;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_set__EqualityComparer_k__BackingField(::System::Collections::IEqualityComparer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EqualityComparer_k__BackingField = value;
}
constexpr ::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>*& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__ReferenceResolverProvider_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReferenceResolverProvider_k__BackingField;
}
constexpr ::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>* const& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__ReferenceResolverProvider_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReferenceResolverProvider_k__BackingField;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_set__ReferenceResolverProvider_k__BackingField(::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ReferenceResolverProvider_k__BackingField = value;
}
constexpr ::Newtonsoft::Json::Serialization::ITraceWriter*& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__TraceWriter_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TraceWriter_k__BackingField;
}
constexpr ::Newtonsoft::Json::Serialization::ITraceWriter* const& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__TraceWriter_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TraceWriter_k__BackingField;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_set__TraceWriter_k__BackingField(::Newtonsoft::Json::Serialization::ITraceWriter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TraceWriter_k__BackingField = value;
}
constexpr ::Newtonsoft::Json::Serialization::ISerializationBinder*& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__SerializationBinder_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SerializationBinder_k__BackingField;
}
constexpr ::Newtonsoft::Json::Serialization::ISerializationBinder* const& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__SerializationBinder_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SerializationBinder_k__BackingField;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_set__SerializationBinder_k__BackingField(::Newtonsoft::Json::Serialization::ISerializationBinder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SerializationBinder_k__BackingField = value;
}
constexpr ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__Error_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
constexpr ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* const& Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_get__Error_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
constexpr void Newtonsoft::Json::JsonSerializerSettings::__cordl_internal_set__Error_k__BackingField(::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Error_k__BackingField = value;
}
inline void Newtonsoft::Json::JsonSerializerSettings::setStaticF_DefaultContext(::System::Runtime::Serialization::StreamingContext  value)  {
::cordl_internals::setStaticField<::System::Runtime::Serialization::StreamingContext, "DefaultContext", ::Newtonsoft::Json::JsonSerializerSettings*>(std::forward<::System::Runtime::Serialization::StreamingContext>(value));
}
inline ::System::Runtime::Serialization::StreamingContext Newtonsoft::Json::JsonSerializerSettings::getStaticF_DefaultContext()  {
return ::cordl_internals::getStaticField<::System::Runtime::Serialization::StreamingContext, "DefaultContext", ::Newtonsoft::Json::JsonSerializerSettings*>();
}
inline void Newtonsoft::Json::JsonSerializerSettings::setStaticF_DefaultCulture(::System::Globalization::CultureInfo*  value)  {
::cordl_internals::setStaticField<::System::Globalization::CultureInfo*, "DefaultCulture", ::Newtonsoft::Json::JsonSerializerSettings*>(std::forward<::System::Globalization::CultureInfo*>(value));
}
inline ::System::Globalization::CultureInfo* Newtonsoft::Json::JsonSerializerSettings::getStaticF_DefaultCulture()  {
return ::cordl_internals::getStaticField<::System::Globalization::CultureInfo*, "DefaultCulture", ::Newtonsoft::Json::JsonSerializerSettings*>();
}
inline ::Newtonsoft::Json::ReferenceLoopHandling Newtonsoft::Json::JsonSerializerSettings::get_ReferenceLoopHandling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"get_ReferenceLoopHandling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::ReferenceLoopHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_ReferenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"set_ReferenceLoopHandling", {}, {::i2c::type_of<::Newtonsoft::Json::ReferenceLoopHandling>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::MissingMemberHandling Newtonsoft::Json::JsonSerializerSettings::get_MissingMemberHandling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"get_MissingMemberHandling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::MissingMemberHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_MissingMemberHandling(::Newtonsoft::Json::MissingMemberHandling  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"set_MissingMemberHandling", {}, {::i2c::type_of<::Newtonsoft::Json::MissingMemberHandling>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::ObjectCreationHandling Newtonsoft::Json::JsonSerializerSettings::get_ObjectCreationHandling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"get_ObjectCreationHandling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::ObjectCreationHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_ObjectCreationHandling(::Newtonsoft::Json::ObjectCreationHandling  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"set_ObjectCreationHandling", {}, {::i2c::type_of<::Newtonsoft::Json::ObjectCreationHandling>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::NullValueHandling Newtonsoft::Json::JsonSerializerSettings::get_NullValueHandling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"get_NullValueHandling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::NullValueHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_NullValueHandling(::Newtonsoft::Json::NullValueHandling  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"set_NullValueHandling", {}, {::i2c::type_of<::Newtonsoft::Json::NullValueHandling>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::DefaultValueHandling Newtonsoft::Json::JsonSerializerSettings::get_DefaultValueHandling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"get_DefaultValueHandling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::DefaultValueHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_DefaultValueHandling(::Newtonsoft::Json::DefaultValueHandling  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"set_DefaultValueHandling", {}, {::i2c::type_of<::Newtonsoft::Json::DefaultValueHandling>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>* Newtonsoft::Json::JsonSerializerSettings::get_Converters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"get_Converters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>*>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_Converters(::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"set_Converters", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::PreserveReferencesHandling Newtonsoft::Json::JsonSerializerSettings::get_PreserveReferencesHandling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"get_PreserveReferencesHandling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::PreserveReferencesHandling>(this, ___internal_method);
}
inline ::Newtonsoft::Json::TypeNameHandling Newtonsoft::Json::JsonSerializerSettings::get_TypeNameHandling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"get_TypeNameHandling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::TypeNameHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_TypeNameHandling(::Newtonsoft::Json::TypeNameHandling  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"set_TypeNameHandling", {}, {::i2c::type_of<::Newtonsoft::Json::TypeNameHandling>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::MetadataPropertyHandling Newtonsoft::Json::JsonSerializerSettings::get_MetadataPropertyHandling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"get_MetadataPropertyHandling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::MetadataPropertyHandling>(this, ___internal_method);
}
inline ::Newtonsoft::Json::TypeNameAssemblyFormatHandling Newtonsoft::Json::JsonSerializerSettings::get_TypeNameAssemblyFormatHandling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"get_TypeNameAssemblyFormatHandling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::TypeNameAssemblyFormatHandling>(this, ___internal_method);
}
inline ::Newtonsoft::Json::ConstructorHandling Newtonsoft::Json::JsonSerializerSettings::get_ConstructorHandling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"get_ConstructorHandling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::ConstructorHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_ConstructorHandling(::Newtonsoft::Json::ConstructorHandling  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"set_ConstructorHandling", {}, {::i2c::type_of<::Newtonsoft::Json::ConstructorHandling>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Serialization::IContractResolver* Newtonsoft::Json::JsonSerializerSettings::get_ContractResolver()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"get_ContractResolver", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::IContractResolver*>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_ContractResolver(::Newtonsoft::Json::Serialization::IContractResolver*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"set_ContractResolver", {}, {::i2c::type_of<::Newtonsoft::Json::Serialization::IContractResolver*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::IEqualityComparer* Newtonsoft::Json::JsonSerializerSettings::get_EqualityComparer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"get_EqualityComparer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEqualityComparer*>(this, ___internal_method);
}
inline ::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>* Newtonsoft::Json::JsonSerializerSettings::get_ReferenceResolverProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"get_ReferenceResolverProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_1<::Newtonsoft::Json::Serialization::IReferenceResolver*>*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Serialization::ITraceWriter* Newtonsoft::Json::JsonSerializerSettings::get_TraceWriter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"get_TraceWriter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::ITraceWriter*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Serialization::ISerializationBinder* Newtonsoft::Json::JsonSerializerSettings::get_SerializationBinder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"get_SerializationBinder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::ISerializationBinder*>(this, ___internal_method);
}
inline ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* Newtonsoft::Json::JsonSerializerSettings::get_Error()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"get_Error", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::StreamingContext Newtonsoft::Json::JsonSerializerSettings::get_Context()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"get_Context", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::StreamingContext>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_Formatting(::Newtonsoft::Json::Formatting  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"set_Formatting", {}, {::i2c::type_of<::Newtonsoft::Json::Formatting>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonSerializerSettings::set_CheckAdditionalContent(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {"set_CheckAdditionalContent", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonSerializerSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief [DebuggerStepThrough]
inline ::Newtonsoft::Json::JsonSerializerSettings* Newtonsoft::Json::JsonSerializerSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::JsonSerializerSettings*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonSerializerSettings::JsonSerializerSettings()   {
}
constexpr ::Newtonsoft::Json::ReferenceLoopHandling  Newtonsoft::Json::JsonSerializerSettings::DefaultReferenceLoopHandling{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::MissingMemberHandling  Newtonsoft::Json::JsonSerializerSettings::DefaultMissingMemberHandling{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::NullValueHandling  Newtonsoft::Json::JsonSerializerSettings::DefaultNullValueHandling{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::DefaultValueHandling  Newtonsoft::Json::JsonSerializerSettings::DefaultDefaultValueHandling{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::ObjectCreationHandling  Newtonsoft::Json::JsonSerializerSettings::DefaultObjectCreationHandling{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::PreserveReferencesHandling  Newtonsoft::Json::JsonSerializerSettings::DefaultPreserveReferencesHandling{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::ConstructorHandling  Newtonsoft::Json::JsonSerializerSettings::DefaultConstructorHandling{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::TypeNameHandling  Newtonsoft::Json::JsonSerializerSettings::DefaultTypeNameHandling{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::MetadataPropertyHandling  Newtonsoft::Json::JsonSerializerSettings::DefaultMetadataPropertyHandling{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::Formatting  Newtonsoft::Json::JsonSerializerSettings::DefaultFormatting{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::DateFormatHandling  Newtonsoft::Json::JsonSerializerSettings::DefaultDateFormatHandling{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::DateTimeZoneHandling  Newtonsoft::Json::JsonSerializerSettings::DefaultDateTimeZoneHandling{static_cast<int32_t>(0x3)};
constexpr ::Newtonsoft::Json::DateParseHandling  Newtonsoft::Json::JsonSerializerSettings::DefaultDateParseHandling{static_cast<int32_t>(0x1)};
constexpr ::Newtonsoft::Json::FloatParseHandling  Newtonsoft::Json::JsonSerializerSettings::DefaultFloatParseHandling{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::FloatFormatHandling  Newtonsoft::Json::JsonSerializerSettings::DefaultFloatFormatHandling{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::StringEscapeHandling  Newtonsoft::Json::JsonSerializerSettings::DefaultStringEscapeHandling{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::TypeNameAssemblyFormatHandling  Newtonsoft::Json::JsonSerializerSettings::DefaultTypeNameAssemblyFormatHandling{static_cast<int32_t>(0x0)};
