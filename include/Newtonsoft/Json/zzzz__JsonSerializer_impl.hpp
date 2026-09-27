#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonSerializer.hpp"
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
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ErrorEventArgs_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__IContractResolver_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__IReferenceResolver_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ISerializationBinder_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ITraceWriter_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__TraceJsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__ConstructorHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DateParseHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DateTimeZoneHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DefaultValueHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__FloatParseHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__Formatting_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverterCollection_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializerSettings_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
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
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.add_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*)>(&::Newtonsoft::Json::JsonSerializer::add_Error)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa375ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.remove_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*)>(&::Newtonsoft::Json::JsonSerializer::remove_Error)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa375f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_ReferenceResolver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::Serialization::IReferenceResolver*)>(&::Newtonsoft::Json::JsonSerializer::set_ReferenceResolver)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa376038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_SerializationBinder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::Serialization::ISerializationBinder*)>(&::Newtonsoft::Json::JsonSerializer::set_SerializationBinder)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa3760a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_TraceWriter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::ITraceWriter* (::Newtonsoft::Json::JsonSerializer::*)()>(&::Newtonsoft::Json::JsonSerializer::get_TraceWriter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa376118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_TraceWriter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::Serialization::ITraceWriter*)>(&::Newtonsoft::Json::JsonSerializer::set_TraceWriter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa376120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_EqualityComparer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::System::Collections::IEqualityComparer*)>(&::Newtonsoft::Json::JsonSerializer::set_EqualityComparer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa376128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_TypeNameHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::TypeNameHandling)>(&::Newtonsoft::Json::JsonSerializer::set_TypeNameHandling)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa376130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_TypeNameAssemblyFormatHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::TypeNameAssemblyFormatHandling)>(&::Newtonsoft::Json::JsonSerializer::set_TypeNameAssemblyFormatHandling)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa37618c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_PreserveReferencesHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::PreserveReferencesHandling)>(&::Newtonsoft::Json::JsonSerializer::set_PreserveReferencesHandling)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa3761e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_ReferenceLoopHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::ReferenceLoopHandling)>(&::Newtonsoft::Json::JsonSerializer::set_ReferenceLoopHandling)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa376244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_MissingMemberHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::MissingMemberHandling)>(&::Newtonsoft::Json::JsonSerializer::set_MissingMemberHandling)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa3762a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_NullValueHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::NullValueHandling (::Newtonsoft::Json::JsonSerializer::*)()>(&::Newtonsoft::Json::JsonSerializer::get_NullValueHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3762fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_NullValueHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::NullValueHandling)>(&::Newtonsoft::Json::JsonSerializer::set_NullValueHandling)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa376304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_DefaultValueHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::DefaultValueHandling)>(&::Newtonsoft::Json::JsonSerializer::set_DefaultValueHandling)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa376360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_ObjectCreationHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::ObjectCreationHandling)>(&::Newtonsoft::Json::JsonSerializer::set_ObjectCreationHandling)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa3763bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_ConstructorHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::ConstructorHandling)>(&::Newtonsoft::Json::JsonSerializer::set_ConstructorHandling)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa376418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_MetadataPropertyHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::MetadataPropertyHandling (::Newtonsoft::Json::JsonSerializer::*)()>(&::Newtonsoft::Json::JsonSerializer::get_MetadataPropertyHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa376474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_MetadataPropertyHandling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::MetadataPropertyHandling)>(&::Newtonsoft::Json::JsonSerializer::set_MetadataPropertyHandling)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa37647c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_Converters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonConverterCollection* (::Newtonsoft::Json::JsonSerializer::*)()>(&::Newtonsoft::Json::JsonSerializer::get_Converters)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa3764d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_ContractResolver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::IContractResolver* (::Newtonsoft::Json::JsonSerializer::*)()>(&::Newtonsoft::Json::JsonSerializer::get_ContractResolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa376544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_ContractResolver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::Serialization::IContractResolver*)>(&::Newtonsoft::Json::JsonSerializer::set_ContractResolver)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa37654c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_Context
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::StreamingContext (::Newtonsoft::Json::JsonSerializer::*)()>(&::Newtonsoft::Json::JsonSerializer::get_Context)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa3765fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_Context
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::System::Runtime::Serialization::StreamingContext)>(&::Newtonsoft::Json::JsonSerializer::set_Context)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa376608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_Formatting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Formatting (::Newtonsoft::Json::JsonSerializer::*)()>(&::Newtonsoft::Json::JsonSerializer::get_Formatting)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa376614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_Formatting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::Formatting)>(&::Newtonsoft::Json::JsonSerializer::set_Formatting)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa376650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_MaxDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int32_t> (::Newtonsoft::Json::JsonSerializer::*)()>(&::Newtonsoft::Json::JsonSerializer::get_MaxDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3766b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_CheckAdditionalContent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonSerializer::*)()>(&::Newtonsoft::Json::JsonSerializer::get_CheckAdditionalContent)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa3766c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_CheckAdditionalContent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(bool)>(&::Newtonsoft::Json::JsonSerializer::set_CheckAdditionalContent)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa3766fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.IsCheckAdditionalContentSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonSerializer::*)()>(&::Newtonsoft::Json::JsonSerializer::IsCheckAdditionalContentSet)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa36f9d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                        {"IsCheckAdditionalContentSet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)()>(&::Newtonsoft::Json::JsonSerializer::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa376764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonSerializer* (*)()>(&::Newtonsoft::Json::JsonSerializer::Create)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa3768b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                        {"Create", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonSerializer* (*)(::Newtonsoft::Json::JsonSerializerSettings*)>(&::Newtonsoft::Json::JsonSerializer::Create)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa376900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                        {"Create", {}, {::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.CreateDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonSerializer* (*)()>(&::Newtonsoft::Json::JsonSerializer::CreateDefault)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa37706c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                        {"CreateDefault", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.CreateDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonSerializer* (*)(::Newtonsoft::Json::JsonSerializerSettings*)>(&::Newtonsoft::Json::JsonSerializer::CreateDefault)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa36f498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                        {"CreateDefault", {}, {::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.ApplySerializerSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonSerializerSettings*)>(&::Newtonsoft::Json::JsonSerializer::ApplySerializerSettings)> {
  constexpr static std::size_t size = 0x738;
  constexpr static std::size_t addrs = 0xa376934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                        {"ApplySerializerSettings", {}, {::i2c::type_of<::Newtonsoft::Json::JsonSerializer*>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.Populate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::JsonReader*, ::System::Object*)>(&::Newtonsoft::Json::JsonSerializer::Populate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa3773f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                        {"Populate", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.PopulateInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::JsonReader*, ::System::Object*)>(&::Newtonsoft::Json::JsonSerializer::PopulateInternal)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0xa377408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.Deserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::JsonReader*, ::System::Type*)>(&::Newtonsoft::Json::JsonSerializer::Deserialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa36fb14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                        {"Deserialize", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.DeserializeInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::JsonReader*, ::System::Type*)>(&::Newtonsoft::Json::JsonSerializer::DeserializeInternal)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0xa377cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.SetupReader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::JsonReader*, ::by_ref<::System::Globalization::CultureInfo*>, ::by_ref<::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>>, ::by_ref<::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>>, ::by_ref<::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>>, ::by_ref<::System::Nullable_1<int32_t>>, ::by_ref<::StringW>)>(&::Newtonsoft::Json::JsonSerializer::SetupReader)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0xa377680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                        {"SetupReader", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::by_ref<::System::Globalization::CultureInfo*>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<int32_t>>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.ResetReader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::JsonReader*, ::System::Globalization::CultureInfo*, ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>, ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>, ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>, ::System::Nullable_1<int32_t>, ::StringW)>(&::Newtonsoft::Json::JsonSerializer::ResetReader)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xa377adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                        {"ResetReader", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>>(), ::i2c::type_of<::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>>(), ::i2c::type_of<::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::System::Type*)>(&::Newtonsoft::Json::JsonSerializer::Serialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa36f7b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                        {"Serialize", {}, {::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*)>(&::Newtonsoft::Json::JsonSerializer::Serialize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa377f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                        {"Serialize", {}, {::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.CreateTraceJsonReader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::TraceJsonReader* (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::JsonReader*)>(&::Newtonsoft::Json::JsonSerializer::CreateTraceJsonReader)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa377a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                        {"CreateTraceJsonReader", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.SerializeInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::System::Type*)>(&::Newtonsoft::Json::JsonSerializer::SerializeInternal)> {
  constexpr static std::size_t size = 0x5dc;
  constexpr static std::size_t addrs = 0xa377f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                    {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.GetReferenceResolver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::IReferenceResolver* (::Newtonsoft::Json::JsonSerializer::*)()>(&::Newtonsoft::Json::JsonSerializer::GetReferenceResolver)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa37855c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                        {"GetReferenceResolver", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.GetMatchingConverter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonConverter* (::Newtonsoft::Json::JsonSerializer::*)(::System::Type*)>(&::Newtonsoft::Json::JsonSerializer::GetMatchingConverter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3785cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                        {"GetMatchingConverter", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.GetMatchingConverter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonConverter* (*)(::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>*, ::System::Type*)>(&::Newtonsoft::Json::JsonSerializer::GetMatchingConverter)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xa3785d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                        {"GetMatchingConverter", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.OnError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::Serialization::ErrorEventArgs*)>(&::Newtonsoft::Json::JsonSerializer::OnError)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa378730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                        {"OnError", {}, {::i2c::type_of<::Newtonsoft::Json::Serialization::ErrorEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::TypeNameHandling& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__typeNameHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____typeNameHandling;
}
constexpr ::Newtonsoft::Json::TypeNameHandling const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__typeNameHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____typeNameHandling;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__typeNameHandling(::Newtonsoft::Json::TypeNameHandling  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____typeNameHandling = value;
}
constexpr ::Newtonsoft::Json::TypeNameAssemblyFormatHandling& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__typeNameAssemblyFormatHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____typeNameAssemblyFormatHandling;
}
constexpr ::Newtonsoft::Json::TypeNameAssemblyFormatHandling const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__typeNameAssemblyFormatHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____typeNameAssemblyFormatHandling;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__typeNameAssemblyFormatHandling(::Newtonsoft::Json::TypeNameAssemblyFormatHandling  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____typeNameAssemblyFormatHandling = value;
}
constexpr ::Newtonsoft::Json::PreserveReferencesHandling& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__preserveReferencesHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____preserveReferencesHandling;
}
constexpr ::Newtonsoft::Json::PreserveReferencesHandling const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__preserveReferencesHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____preserveReferencesHandling;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__preserveReferencesHandling(::Newtonsoft::Json::PreserveReferencesHandling  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____preserveReferencesHandling = value;
}
constexpr ::Newtonsoft::Json::ReferenceLoopHandling& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__referenceLoopHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____referenceLoopHandling;
}
constexpr ::Newtonsoft::Json::ReferenceLoopHandling const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__referenceLoopHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____referenceLoopHandling;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__referenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____referenceLoopHandling = value;
}
constexpr ::Newtonsoft::Json::MissingMemberHandling& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__missingMemberHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____missingMemberHandling;
}
constexpr ::Newtonsoft::Json::MissingMemberHandling const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__missingMemberHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____missingMemberHandling;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__missingMemberHandling(::Newtonsoft::Json::MissingMemberHandling  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____missingMemberHandling = value;
}
constexpr ::Newtonsoft::Json::ObjectCreationHandling& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__objectCreationHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objectCreationHandling;
}
constexpr ::Newtonsoft::Json::ObjectCreationHandling const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__objectCreationHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objectCreationHandling;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__objectCreationHandling(::Newtonsoft::Json::ObjectCreationHandling  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____objectCreationHandling = value;
}
constexpr ::Newtonsoft::Json::NullValueHandling& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__nullValueHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nullValueHandling;
}
constexpr ::Newtonsoft::Json::NullValueHandling const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__nullValueHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nullValueHandling;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__nullValueHandling(::Newtonsoft::Json::NullValueHandling  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nullValueHandling = value;
}
constexpr ::Newtonsoft::Json::DefaultValueHandling& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__defaultValueHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultValueHandling;
}
constexpr ::Newtonsoft::Json::DefaultValueHandling const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__defaultValueHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultValueHandling;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__defaultValueHandling(::Newtonsoft::Json::DefaultValueHandling  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultValueHandling = value;
}
constexpr ::Newtonsoft::Json::ConstructorHandling& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__constructorHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____constructorHandling;
}
constexpr ::Newtonsoft::Json::ConstructorHandling const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__constructorHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____constructorHandling;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__constructorHandling(::Newtonsoft::Json::ConstructorHandling  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____constructorHandling = value;
}
constexpr ::Newtonsoft::Json::MetadataPropertyHandling& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__metadataPropertyHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metadataPropertyHandling;
}
constexpr ::Newtonsoft::Json::MetadataPropertyHandling const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__metadataPropertyHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____metadataPropertyHandling;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__metadataPropertyHandling(::Newtonsoft::Json::MetadataPropertyHandling  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____metadataPropertyHandling = value;
}
constexpr ::Newtonsoft::Json::JsonConverterCollection*& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__converters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____converters;
}
constexpr ::Newtonsoft::Json::JsonConverterCollection* const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__converters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____converters;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__converters(::Newtonsoft::Json::JsonConverterCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____converters = value;
}
constexpr ::Newtonsoft::Json::Serialization::IContractResolver*& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__contractResolver()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____contractResolver;
}
constexpr ::Newtonsoft::Json::Serialization::IContractResolver* const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__contractResolver() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____contractResolver;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__contractResolver(::Newtonsoft::Json::Serialization::IContractResolver*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____contractResolver = value;
}
constexpr ::Newtonsoft::Json::Serialization::ITraceWriter*& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__traceWriter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____traceWriter;
}
constexpr ::Newtonsoft::Json::Serialization::ITraceWriter* const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__traceWriter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____traceWriter;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__traceWriter(::Newtonsoft::Json::Serialization::ITraceWriter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____traceWriter = value;
}
constexpr ::System::Collections::IEqualityComparer*& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__equalityComparer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____equalityComparer;
}
constexpr ::System::Collections::IEqualityComparer* const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__equalityComparer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____equalityComparer;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__equalityComparer(::System::Collections::IEqualityComparer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____equalityComparer = value;
}
constexpr ::Newtonsoft::Json::Serialization::ISerializationBinder*& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__serializationBinder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serializationBinder;
}
constexpr ::Newtonsoft::Json::Serialization::ISerializationBinder* const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__serializationBinder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serializationBinder;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__serializationBinder(::Newtonsoft::Json::Serialization::ISerializationBinder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____serializationBinder = value;
}
constexpr ::System::Runtime::Serialization::StreamingContext& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__context()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____context;
}
constexpr ::System::Runtime::Serialization::StreamingContext const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__context() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____context;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__context(::System::Runtime::Serialization::StreamingContext  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____context = value;
}
constexpr ::Newtonsoft::Json::Serialization::IReferenceResolver*& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__referenceResolver()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____referenceResolver;
}
constexpr ::Newtonsoft::Json::Serialization::IReferenceResolver* const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__referenceResolver() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____referenceResolver;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__referenceResolver(::Newtonsoft::Json::Serialization::IReferenceResolver*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____referenceResolver = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::Formatting>& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__formatting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____formatting;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::Formatting> const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__formatting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____formatting;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__formatting(::System::Nullable_1<::Newtonsoft::Json::Formatting>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____formatting = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling>& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__dateFormatHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dateFormatHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling> const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__dateFormatHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dateFormatHandling;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__dateFormatHandling(::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dateFormatHandling = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__dateTimeZoneHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dateTimeZoneHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling> const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__dateTimeZoneHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dateTimeZoneHandling;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__dateTimeZoneHandling(::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dateTimeZoneHandling = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__dateParseHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dateParseHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling> const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__dateParseHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dateParseHandling;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__dateParseHandling(::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dateParseHandling = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling>& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__floatFormatHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____floatFormatHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling> const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__floatFormatHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____floatFormatHandling;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__floatFormatHandling(::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____floatFormatHandling = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__floatParseHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____floatParseHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling> const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__floatParseHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____floatParseHandling;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__floatParseHandling(::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____floatParseHandling = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling>& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__stringEscapeHandling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stringEscapeHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling> const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__stringEscapeHandling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stringEscapeHandling;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__stringEscapeHandling(::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stringEscapeHandling = value;
}
constexpr ::System::Globalization::CultureInfo*& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__culture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____culture;
}
constexpr ::System::Globalization::CultureInfo* const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__culture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____culture;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__culture(::System::Globalization::CultureInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____culture = value;
}
constexpr ::System::Nullable_1<int32_t>& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__maxDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDepth;
}
constexpr ::System::Nullable_1<int32_t> const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__maxDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDepth;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__maxDepth(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxDepth = value;
}
constexpr bool& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__maxDepthSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDepthSet;
}
constexpr bool const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__maxDepthSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDepthSet;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__maxDepthSet(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxDepthSet = value;
}
constexpr ::System::Nullable_1<bool>& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__checkAdditionalContent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____checkAdditionalContent;
}
constexpr ::System::Nullable_1<bool> const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__checkAdditionalContent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____checkAdditionalContent;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__checkAdditionalContent(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____checkAdditionalContent = value;
}
constexpr ::StringW& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__dateFormatString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dateFormatString;
}
constexpr ::StringW const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__dateFormatString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dateFormatString;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__dateFormatString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dateFormatString = value;
}
constexpr bool& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__dateFormatStringSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dateFormatStringSet;
}
constexpr bool const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__dateFormatStringSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dateFormatStringSet;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__dateFormatStringSet(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dateFormatStringSet = value;
}
constexpr ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*& Newtonsoft::Json::JsonSerializer::__cordl_internal_get_Error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get_Error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set_Error(::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Error = value;
}
inline void Newtonsoft::Json::JsonSerializer::add_Error(/* [Nullable(new[] { 2, 1 })] */ ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonSerializer::remove_Error(/* [Nullable(new[] { 2, 1 })] */ ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonSerializer::set_ReferenceResolver(::Newtonsoft::Json::Serialization::IReferenceResolver*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonSerializer::set_SerializationBinder(::Newtonsoft::Json::Serialization::ISerializationBinder*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Serialization::ITraceWriter* Newtonsoft::Json::JsonSerializer::get_TraceWriter()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::ITraceWriter*>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::set_TraceWriter(::Newtonsoft::Json::Serialization::ITraceWriter*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonSerializer::set_EqualityComparer(::System::Collections::IEqualityComparer*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonSerializer::set_TypeNameHandling(::Newtonsoft::Json::TypeNameHandling  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonSerializer::set_TypeNameAssemblyFormatHandling(::Newtonsoft::Json::TypeNameAssemblyFormatHandling  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonSerializer::set_PreserveReferencesHandling(::Newtonsoft::Json::PreserveReferencesHandling  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonSerializer::set_ReferenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonSerializer::set_MissingMemberHandling(::Newtonsoft::Json::MissingMemberHandling  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::NullValueHandling Newtonsoft::Json::JsonSerializer::get_NullValueHandling()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::NullValueHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::set_NullValueHandling(::Newtonsoft::Json::NullValueHandling  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonSerializer::set_DefaultValueHandling(::Newtonsoft::Json::DefaultValueHandling  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonSerializer::set_ObjectCreationHandling(::Newtonsoft::Json::ObjectCreationHandling  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonSerializer::set_ConstructorHandling(::Newtonsoft::Json::ConstructorHandling  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::MetadataPropertyHandling Newtonsoft::Json::JsonSerializer::get_MetadataPropertyHandling()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::MetadataPropertyHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::set_MetadataPropertyHandling(::Newtonsoft::Json::MetadataPropertyHandling  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::JsonConverterCollection* Newtonsoft::Json::JsonSerializer::get_Converters()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonConverterCollection*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Serialization::IContractResolver* Newtonsoft::Json::JsonSerializer::get_ContractResolver()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::IContractResolver*>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::set_ContractResolver(::Newtonsoft::Json::Serialization::IContractResolver*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::Serialization::StreamingContext Newtonsoft::Json::JsonSerializer::get_Context()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::StreamingContext>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::set_Context(::System::Runtime::Serialization::StreamingContext  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Formatting Newtonsoft::Json::JsonSerializer::get_Formatting()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Formatting>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::set_Formatting(::Newtonsoft::Json::Formatting  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<int32_t> Newtonsoft::Json::JsonSerializer::get_MaxDepth()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(this, ___internal_method);
}
inline bool Newtonsoft::Json::JsonSerializer::get_CheckAdditionalContent()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::set_CheckAdditionalContent(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Newtonsoft::Json::JsonSerializer::IsCheckAdditionalContentSet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                        {"IsCheckAdditionalContentSet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::JsonSerializer* Newtonsoft::Json::JsonSerializer::Create()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                        {"Create", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonSerializer*>(nullptr, ___internal_method);
}
inline ::Newtonsoft::Json::JsonSerializer* Newtonsoft::Json::JsonSerializer::Create(/* [Nullable(2)] */ ::Newtonsoft::Json::JsonSerializerSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                        {"Create", {}, {::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonSerializer*>(nullptr, ___internal_method, settings);
}
inline ::Newtonsoft::Json::JsonSerializer* Newtonsoft::Json::JsonSerializer::CreateDefault()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                        {"CreateDefault", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonSerializer*>(nullptr, ___internal_method);
}
inline ::Newtonsoft::Json::JsonSerializer* Newtonsoft::Json::JsonSerializer::CreateDefault(/* [Nullable(2)] */ ::Newtonsoft::Json::JsonSerializerSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                        {"CreateDefault", {}, {::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonSerializer*>(nullptr, ___internal_method, settings);
}
inline void Newtonsoft::Json::JsonSerializer::ApplySerializerSettings(::Newtonsoft::Json::JsonSerializer*  serializer, ::Newtonsoft::Json::JsonSerializerSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                        {"ApplySerializerSettings", {}, {::i2c::type_of<::Newtonsoft::Json::JsonSerializer*>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, serializer, settings);
}
inline void Newtonsoft::Json::JsonSerializer::Populate(::Newtonsoft::Json::JsonReader*  reader, ::System::Object*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                        {"Populate", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, target);
}
inline void Newtonsoft::Json::JsonSerializer::PopulateInternal(::Newtonsoft::Json::JsonReader*  reader, ::System::Object*  target)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, target);
}
template<typename T>
inline T Newtonsoft::Json::JsonSerializer::Deserialize(/* [Nullable(1)] */ ::Newtonsoft::Json::JsonReader*  reader)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                    {"Deserialize", {::i2c::class_of<T>()}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, reader);
}
inline ::System::Object* Newtonsoft::Json::JsonSerializer::Deserialize(/* [Nullable(1)] */ ::Newtonsoft::Json::JsonReader*  reader, ::System::Type*  objectType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                        {"Deserialize", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, objectType);
}
inline ::System::Object* Newtonsoft::Json::JsonSerializer::DeserializeInternal(/* [Nullable(1)] */ ::Newtonsoft::Json::JsonReader*  reader, ::System::Type*  objectType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, objectType);
}
inline void Newtonsoft::Json::JsonSerializer::SetupReader(/* [Nullable(1)] */ ::Newtonsoft::Json::JsonReader*  reader, ::by_ref<::System::Globalization::CultureInfo*>  previousCulture, ::by_ref<::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>>  previousDateTimeZoneHandling, ::by_ref<::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>>  previousDateParseHandling, ::by_ref<::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>>  previousFloatParseHandling, ::by_ref<::System::Nullable_1<int32_t>>  previousMaxDepth, ::by_ref<::StringW>  previousDateFormatString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                        {"SetupReader", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::by_ref<::System::Globalization::CultureInfo*>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<int32_t>>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, previousCulture, previousDateTimeZoneHandling, previousDateParseHandling, previousFloatParseHandling, previousMaxDepth, previousDateFormatString);
}
inline void Newtonsoft::Json::JsonSerializer::ResetReader(/* [Nullable(1)] */ ::Newtonsoft::Json::JsonReader*  reader, ::System::Globalization::CultureInfo*  previousCulture, ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>  previousDateTimeZoneHandling, ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>  previousDateParseHandling, ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>  previousFloatParseHandling, ::System::Nullable_1<int32_t>  previousMaxDepth, ::StringW  previousDateFormatString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                        {"ResetReader", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>>(), ::i2c::type_of<::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>>(), ::i2c::type_of<::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, previousCulture, previousDateTimeZoneHandling, previousDateParseHandling, previousFloatParseHandling, previousMaxDepth, previousDateFormatString);
}
inline void Newtonsoft::Json::JsonSerializer::Serialize(/* [Nullable(1)] */ ::Newtonsoft::Json::JsonWriter*  jsonWriter, ::System::Object*  value, ::System::Type*  objectType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                        {"Serialize", {}, {::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jsonWriter, value, objectType);
}
inline void Newtonsoft::Json::JsonSerializer::Serialize(::Newtonsoft::Json::JsonWriter*  jsonWriter, /* [Nullable(2)] */ ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                        {"Serialize", {}, {::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jsonWriter, value);
}
inline ::Newtonsoft::Json::Serialization::TraceJsonReader* Newtonsoft::Json::JsonSerializer::CreateTraceJsonReader(::Newtonsoft::Json::JsonReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                        {"CreateTraceJsonReader", {}, {::i2c::type_of<::Newtonsoft::Json::JsonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::TraceJsonReader*>(this, ___internal_method, reader);
}
inline void Newtonsoft::Json::JsonSerializer::SerializeInternal(/* [Nullable(1)] */ ::Newtonsoft::Json::JsonWriter*  jsonWriter, ::System::Object*  value, ::System::Type*  objectType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jsonWriter, value, objectType);
}
inline ::Newtonsoft::Json::Serialization::IReferenceResolver* Newtonsoft::Json::JsonSerializer::GetReferenceResolver()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                        {"GetReferenceResolver", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::IReferenceResolver*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::JsonConverter* Newtonsoft::Json::JsonSerializer::GetMatchingConverter(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                        {"GetMatchingConverter", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonConverter*>(this, ___internal_method, type);
}
inline ::Newtonsoft::Json::JsonConverter* Newtonsoft::Json::JsonSerializer::GetMatchingConverter(/* [Nullable(new[] { 2, 1 })] */ ::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>*  converters, ::System::Type*  objectType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                        {"GetMatchingConverter", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonConverter*>(nullptr, ___internal_method, converters, objectType);
}
inline void Newtonsoft::Json::JsonSerializer::OnError(::Newtonsoft::Json::Serialization::ErrorEventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                        {"OnError", {}, {::i2c::type_of<::Newtonsoft::Json::Serialization::ErrorEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline ::Newtonsoft::Json::JsonSerializer* Newtonsoft::Json::JsonSerializer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::JsonSerializer*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonSerializer::JsonSerializer()   {
}
