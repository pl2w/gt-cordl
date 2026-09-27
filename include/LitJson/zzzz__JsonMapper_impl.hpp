#pragma once
// IWYU pragma private; include "LitJson/JsonMapper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LitJson/zzzz__JsonMapper_def.hpp"
#include "LitJson/zzzz__ArrayMetadata_def.hpp"
#include "LitJson/zzzz__ExporterFunc_1_def.hpp"
#include "LitJson/zzzz__ExporterFunc_def.hpp"
#include "LitJson/zzzz__IJsonWrapper_def.hpp"
#include "LitJson/zzzz__ImporterFunc_2_def.hpp"
#include "LitJson/zzzz__ImporterFunc_def.hpp"
#include "LitJson/zzzz__JsonData_def.hpp"
#include "LitJson/zzzz__JsonMapper_def.hpp"
#include "LitJson/zzzz__JsonReader_def.hpp"
#include "LitJson/zzzz__JsonWriter_def.hpp"
#include "LitJson/zzzz__ObjectMetadata_def.hpp"
#include "LitJson/zzzz__PropertyMetadata_def.hpp"
#include "LitJson/zzzz__WrapperFactory_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::LitJson::JsonMapper.AddArrayMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*)>(&::LitJson::JsonMapper::AddArrayMetadata)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x5b61a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"AddArrayMetadata", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper.AddObjectMetadata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*)>(&::LitJson::JsonMapper::AddObjectMetadata)> {
  constexpr static std::size_t size = 0x720;
  constexpr static std::size_t addrs = 0x5b61f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"AddObjectMetadata", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper.AddTypeProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*)>(&::LitJson::JsonMapper::AddTypeProperties)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x5b62630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"AddTypeProperties", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper.GetConvOp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (*)(::System::Type*, ::System::Type*)>(&::LitJson::JsonMapper::GetConvOp)> {
  constexpr static std::size_t size = 0x7f4;
  constexpr static std::size_t addrs = 0x5b62b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"GetConvOp", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper.ReadValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*, ::LitJson::JsonReader*)>(&::LitJson::JsonMapper::ReadValue)> {
  constexpr static std::size_t size = 0xe14;
  constexpr static std::size_t addrs = 0x5b6336c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"ReadValue", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::LitJson::JsonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper.ReadValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LitJson::IJsonWrapper* (*)(::LitJson::WrapperFactory*, ::LitJson::JsonReader*)>(&::LitJson::JsonMapper::ReadValue)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x5b645e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"ReadValue", {}, {::i2c::type_of<::LitJson::WrapperFactory*>(), ::i2c::type_of<::LitJson::JsonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper.RegisterBaseExporters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::LitJson::JsonMapper::RegisterBaseExporters)> {
  constexpr static std::size_t size = 0xcc0;
  constexpr static std::size_t addrs = 0x5b6017c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"RegisterBaseExporters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper.RegisterBaseImporters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::LitJson::JsonMapper::RegisterBaseImporters)> {
  constexpr static std::size_t size = 0xc60;
  constexpr static std::size_t addrs = 0x5b60e3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"RegisterBaseImporters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper.RegisterImporter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ImporterFunc*>*>*, ::System::Type*, ::System::Type*, ::LitJson::ImporterFunc*)>(&::LitJson::JsonMapper::RegisterImporter)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5b64b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"RegisterImporter", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ImporterFunc*>*>*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::LitJson::ImporterFunc*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper.WriteValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::LitJson::JsonWriter*, bool, int32_t)>(&::LitJson::JsonMapper::WriteValue)> {
  constexpr static std::size_t size = 0xdac;
  constexpr static std::size_t addrs = 0x5b64d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"WriteValue", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::LitJson::JsonWriter*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*)>(&::LitJson::JsonMapper::ToJson)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5b664dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"ToJson", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::LitJson::JsonWriter*)>(&::LitJson::JsonMapper::ToJson)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b66744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"ToJson", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::LitJson::JsonWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper.ToObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LitJson::JsonData* (*)(::LitJson::JsonReader*)>(&::LitJson::JsonMapper::ToObject)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5b667b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"ToObject", {}, {::i2c::type_of<::LitJson::JsonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper.ToObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LitJson::JsonData* (*)(::System::IO::TextReader*)>(&::LitJson::JsonMapper::ToObject)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5b66960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"ToObject", {}, {::i2c::type_of<::System::IO::TextReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper.ToObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LitJson::JsonData* (*)(::StringW)>(&::LitJson::JsonMapper::ToObject)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5b66ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"ToObject", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper.ToWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LitJson::IJsonWrapper* (*)(::LitJson::WrapperFactory*, ::LitJson::JsonReader*)>(&::LitJson::JsonMapper::ToWrapper)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b668fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"ToWrapper", {}, {::i2c::type_of<::LitJson::WrapperFactory*>(), ::i2c::type_of<::LitJson::JsonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper.ToWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LitJson::IJsonWrapper* (*)(::LitJson::WrapperFactory*, ::StringW)>(&::LitJson::JsonMapper::ToWrapper)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5b66c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"ToWrapper", {}, {::i2c::type_of<::LitJson::WrapperFactory*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper.UnregisterExporters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::LitJson::JsonMapper::UnregisterExporters)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5b66d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"UnregisterExporters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper.UnregisterImporters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::LitJson::JsonMapper::UnregisterImporters)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5b66df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"UnregisterImporters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonMapper::*)()>(&::LitJson::JsonMapper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b66ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void LitJson::JsonMapper::setStaticF_max_nesting_depth(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "max_nesting_depth", ::LitJson::JsonMapper*>(std::forward<int32_t>(value));
}
inline int32_t LitJson::JsonMapper::getStaticF_max_nesting_depth()  {
return ::cordl_internals::getStaticField<int32_t, "max_nesting_depth", ::LitJson::JsonMapper*>();
}
inline void LitJson::JsonMapper::setStaticF_datetime_format(::System::IFormatProvider*  value)  {
::cordl_internals::setStaticField<::System::IFormatProvider*, "datetime_format", ::LitJson::JsonMapper*>(std::forward<::System::IFormatProvider*>(value));
}
inline ::System::IFormatProvider* LitJson::JsonMapper::getStaticF_datetime_format()  {
return ::cordl_internals::getStaticField<::System::IFormatProvider*, "datetime_format", ::LitJson::JsonMapper*>();
}
inline void LitJson::JsonMapper::setStaticF_base_exporters_table(::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ExporterFunc*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ExporterFunc*>*, "base_exporters_table", ::LitJson::JsonMapper*>(std::forward<::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ExporterFunc*>*>(value));
}
inline ::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ExporterFunc*>* LitJson::JsonMapper::getStaticF_base_exporters_table()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ExporterFunc*>*, "base_exporters_table", ::LitJson::JsonMapper*>();
}
inline void LitJson::JsonMapper::setStaticF_custom_exporters_table(::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ExporterFunc*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ExporterFunc*>*, "custom_exporters_table", ::LitJson::JsonMapper*>(std::forward<::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ExporterFunc*>*>(value));
}
inline ::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ExporterFunc*>* LitJson::JsonMapper::getStaticF_custom_exporters_table()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ExporterFunc*>*, "custom_exporters_table", ::LitJson::JsonMapper*>();
}
inline void LitJson::JsonMapper::setStaticF_base_importers_table(::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ImporterFunc*>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ImporterFunc*>*>*, "base_importers_table", ::LitJson::JsonMapper*>(std::forward<::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ImporterFunc*>*>*>(value));
}
inline ::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ImporterFunc*>*>* LitJson::JsonMapper::getStaticF_base_importers_table()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ImporterFunc*>*>*, "base_importers_table", ::LitJson::JsonMapper*>();
}
inline void LitJson::JsonMapper::setStaticF_custom_importers_table(::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ImporterFunc*>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ImporterFunc*>*>*, "custom_importers_table", ::LitJson::JsonMapper*>(std::forward<::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ImporterFunc*>*>*>(value));
}
inline ::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ImporterFunc*>*>* LitJson::JsonMapper::getStaticF_custom_importers_table()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ImporterFunc*>*>*, "custom_importers_table", ::LitJson::JsonMapper*>();
}
inline void LitJson::JsonMapper::setStaticF_array_metadata(::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ArrayMetadata>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ArrayMetadata>*, "array_metadata", ::LitJson::JsonMapper*>(std::forward<::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ArrayMetadata>*>(value));
}
inline ::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ArrayMetadata>* LitJson::JsonMapper::getStaticF_array_metadata()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ArrayMetadata>*, "array_metadata", ::LitJson::JsonMapper*>();
}
inline void LitJson::JsonMapper::setStaticF_array_metadata_lock(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "array_metadata_lock", ::LitJson::JsonMapper*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* LitJson::JsonMapper::getStaticF_array_metadata_lock()  {
return ::cordl_internals::getStaticField<::System::Object*, "array_metadata_lock", ::LitJson::JsonMapper*>();
}
inline void LitJson::JsonMapper::setStaticF_conv_ops(::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Reflection::MethodInfo*>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Reflection::MethodInfo*>*>*, "conv_ops", ::LitJson::JsonMapper*>(std::forward<::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Reflection::MethodInfo*>*>*>(value));
}
inline ::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Reflection::MethodInfo*>*>* LitJson::JsonMapper::getStaticF_conv_ops()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Reflection::MethodInfo*>*>*, "conv_ops", ::LitJson::JsonMapper*>();
}
inline void LitJson::JsonMapper::setStaticF_conv_ops_lock(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "conv_ops_lock", ::LitJson::JsonMapper*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* LitJson::JsonMapper::getStaticF_conv_ops_lock()  {
return ::cordl_internals::getStaticField<::System::Object*, "conv_ops_lock", ::LitJson::JsonMapper*>();
}
inline void LitJson::JsonMapper::setStaticF_object_metadata(::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ObjectMetadata>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ObjectMetadata>*, "object_metadata", ::LitJson::JsonMapper*>(std::forward<::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ObjectMetadata>*>(value));
}
inline ::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ObjectMetadata>* LitJson::JsonMapper::getStaticF_object_metadata()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ObjectMetadata>*, "object_metadata", ::LitJson::JsonMapper*>();
}
inline void LitJson::JsonMapper::setStaticF_object_metadata_lock(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "object_metadata_lock", ::LitJson::JsonMapper*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* LitJson::JsonMapper::getStaticF_object_metadata_lock()  {
return ::cordl_internals::getStaticField<::System::Object*, "object_metadata_lock", ::LitJson::JsonMapper*>();
}
inline void LitJson::JsonMapper::setStaticF_type_properties(::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IList_1<::LitJson::PropertyMetadata>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IList_1<::LitJson::PropertyMetadata>*>*, "type_properties", ::LitJson::JsonMapper*>(std::forward<::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IList_1<::LitJson::PropertyMetadata>*>*>(value));
}
inline ::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IList_1<::LitJson::PropertyMetadata>*>* LitJson::JsonMapper::getStaticF_type_properties()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IList_1<::LitJson::PropertyMetadata>*>*, "type_properties", ::LitJson::JsonMapper*>();
}
inline void LitJson::JsonMapper::setStaticF_type_properties_lock(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "type_properties_lock", ::LitJson::JsonMapper*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* LitJson::JsonMapper::getStaticF_type_properties_lock()  {
return ::cordl_internals::getStaticField<::System::Object*, "type_properties_lock", ::LitJson::JsonMapper*>();
}
inline void LitJson::JsonMapper::setStaticF_static_writer(::LitJson::JsonWriter*  value)  {
::cordl_internals::setStaticField<::LitJson::JsonWriter*, "static_writer", ::LitJson::JsonMapper*>(std::forward<::LitJson::JsonWriter*>(value));
}
inline ::LitJson::JsonWriter* LitJson::JsonMapper::getStaticF_static_writer()  {
return ::cordl_internals::getStaticField<::LitJson::JsonWriter*, "static_writer", ::LitJson::JsonMapper*>();
}
inline void LitJson::JsonMapper::setStaticF_static_writer_lock(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "static_writer_lock", ::LitJson::JsonMapper*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* LitJson::JsonMapper::getStaticF_static_writer_lock()  {
return ::cordl_internals::getStaticField<::System::Object*, "static_writer_lock", ::LitJson::JsonMapper*>();
}
inline void LitJson::JsonMapper::AddArrayMetadata(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"AddArrayMetadata", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type);
}
inline void LitJson::JsonMapper::AddObjectMetadata(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"AddObjectMetadata", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type);
}
inline void LitJson::JsonMapper::AddTypeProperties(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"AddTypeProperties", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type);
}
inline ::System::Reflection::MethodInfo* LitJson::JsonMapper::GetConvOp(::System::Type*  t1, ::System::Type*  t2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"GetConvOp", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(nullptr, ___internal_method, t1, t2);
}
inline ::System::Object* LitJson::JsonMapper::ReadValue(::System::Type*  inst_type, ::LitJson::JsonReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"ReadValue", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::LitJson::JsonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, inst_type, reader);
}
inline ::LitJson::IJsonWrapper* LitJson::JsonMapper::ReadValue(::LitJson::WrapperFactory*  factory, ::LitJson::JsonReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"ReadValue", {}, {::i2c::type_of<::LitJson::WrapperFactory*>(), ::i2c::type_of<::LitJson::JsonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::LitJson::IJsonWrapper*>(nullptr, ___internal_method, factory, reader);
}
inline void LitJson::JsonMapper::RegisterBaseExporters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"RegisterBaseExporters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void LitJson::JsonMapper::RegisterBaseImporters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"RegisterBaseImporters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void LitJson::JsonMapper::RegisterImporter(::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ImporterFunc*>*>*  table, ::System::Type*  json_type, ::System::Type*  value_type, ::LitJson::ImporterFunc*  importer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"RegisterImporter", {}, {::i2c::type_of<::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::System::Type*,::LitJson::ImporterFunc*>*>*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::LitJson::ImporterFunc*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, table, json_type, value_type, importer);
}
inline void LitJson::JsonMapper::WriteValue(::System::Object*  obj, ::LitJson::JsonWriter*  writer, bool  writer_is_private, int32_t  depth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"WriteValue", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::LitJson::JsonWriter*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, writer, writer_is_private, depth);
}
inline ::StringW LitJson::JsonMapper::ToJson(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"ToJson", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, obj);
}
inline void LitJson::JsonMapper::ToJson(::System::Object*  obj, ::LitJson::JsonWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"ToJson", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::LitJson::JsonWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, writer);
}
inline ::LitJson::JsonData* LitJson::JsonMapper::ToObject(::LitJson::JsonReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"ToObject", {}, {::i2c::type_of<::LitJson::JsonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::LitJson::JsonData*>(nullptr, ___internal_method, reader);
}
inline ::LitJson::JsonData* LitJson::JsonMapper::ToObject(::System::IO::TextReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"ToObject", {}, {::i2c::type_of<::System::IO::TextReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::LitJson::JsonData*>(nullptr, ___internal_method, reader);
}
inline ::LitJson::JsonData* LitJson::JsonMapper::ToObject(::StringW  json)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"ToObject", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::LitJson::JsonData*>(nullptr, ___internal_method, json);
}
template<typename T>
inline T LitJson::JsonMapper::ToObject(::LitJson::JsonReader*  reader)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::LitJson::JsonMapper*>(),
                    {"ToObject", {::i2c::class_of<T>()}, {::i2c::type_of<::LitJson::JsonReader*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, reader);
}
template<typename T>
inline T LitJson::JsonMapper::ToObject(::System::IO::TextReader*  reader)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::LitJson::JsonMapper*>(),
                    {"ToObject", {::i2c::class_of<T>()}, {::i2c::type_of<::System::IO::TextReader*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, reader);
}
template<typename T>
inline T LitJson::JsonMapper::ToObject(::StringW  json)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::LitJson::JsonMapper*>(),
                    {"ToObject", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, json);
}
inline ::LitJson::IJsonWrapper* LitJson::JsonMapper::ToWrapper(::LitJson::WrapperFactory*  factory, ::LitJson::JsonReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"ToWrapper", {}, {::i2c::type_of<::LitJson::WrapperFactory*>(), ::i2c::type_of<::LitJson::JsonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::LitJson::IJsonWrapper*>(nullptr, ___internal_method, factory, reader);
}
inline ::LitJson::IJsonWrapper* LitJson::JsonMapper::ToWrapper(::LitJson::WrapperFactory*  factory, ::StringW  json)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"ToWrapper", {}, {::i2c::type_of<::LitJson::WrapperFactory*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::LitJson::IJsonWrapper*>(nullptr, ___internal_method, factory, json);
}
template<typename T>
inline void LitJson::JsonMapper::RegisterExporter(::LitJson::ExporterFunc_1<T>*  exporter)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::LitJson::JsonMapper*>(),
                    {"RegisterExporter", {::i2c::class_of<T>()}, {::i2c::type_of<::LitJson::ExporterFunc_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, exporter);
}
template<typename TJson,typename TValue>
inline void LitJson::JsonMapper::RegisterImporter(::LitJson::ImporterFunc_2<TJson,TValue>*  importer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::LitJson::JsonMapper*>(),
                    {"RegisterImporter", {::i2c::class_of<TJson>(), ::i2c::class_of<TValue>()}, {::i2c::type_of<::LitJson::ImporterFunc_2<TJson,TValue>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TJson>(), ::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, importer);
}
inline void LitJson::JsonMapper::UnregisterExporters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"UnregisterExporters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void LitJson::JsonMapper::UnregisterImporters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {"UnregisterImporters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void LitJson::JsonMapper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::LitJson::JsonMapper* LitJson::JsonMapper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LitJson::JsonMapper*>());
}
// Ctor Parameters []
constexpr ::LitJson::JsonMapper::JsonMapper()   {
}
template<typename TJson,typename TValue>
constexpr ::LitJson::ImporterFunc_2<TJson,TValue>*& LitJson::JsonMapper___c__DisplayClass38_0_2<TJson,TValue>::__cordl_internal_get_importer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___importer;
}
template<typename TJson,typename TValue>
constexpr ::LitJson::ImporterFunc_2<TJson,TValue>* const& LitJson::JsonMapper___c__DisplayClass38_0_2<TJson,TValue>::__cordl_internal_get_importer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___importer;
}
template<typename TJson,typename TValue>
constexpr void LitJson::JsonMapper___c__DisplayClass38_0_2<TJson,TValue>::__cordl_internal_set_importer(::LitJson::ImporterFunc_2<TJson,TValue>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___importer = value;
}
template<typename TJson,typename TValue>
inline void LitJson::JsonMapper___c__DisplayClass38_0_2<TJson,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c__DisplayClass38_0_2<TJson,TValue>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TJson,typename TValue>
inline ::System::Object* LitJson::JsonMapper___c__DisplayClass38_0_2<TJson,TValue>::_RegisterImporter_b__0(::System::Object*  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c__DisplayClass38_0_2<TJson,TValue>*>(),
                        {"<RegisterImporter>b__0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, input);
}
template<typename TJson,typename TValue>
inline ::LitJson::JsonMapper___c__DisplayClass38_0_2<TJson,TValue>* LitJson::JsonMapper___c__DisplayClass38_0_2<TJson,TValue>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LitJson::JsonMapper___c__DisplayClass38_0_2<TJson,TValue>*>());
}
// Ctor Parameters []
template<typename TJson,typename TValue>
constexpr ::LitJson::JsonMapper___c__DisplayClass38_0_2<TJson,TValue>::JsonMapper___c__DisplayClass38_0_2()   {
}
template<typename T>
constexpr ::LitJson::ExporterFunc_1<T>*& LitJson::JsonMapper___c__DisplayClass37_0_1<T>::__cordl_internal_get_exporter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exporter;
}
template<typename T>
constexpr ::LitJson::ExporterFunc_1<T>* const& LitJson::JsonMapper___c__DisplayClass37_0_1<T>::__cordl_internal_get_exporter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exporter;
}
template<typename T>
constexpr void LitJson::JsonMapper___c__DisplayClass37_0_1<T>::__cordl_internal_set_exporter(::LitJson::ExporterFunc_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exporter = value;
}
template<typename T>
inline void LitJson::JsonMapper___c__DisplayClass37_0_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c__DisplayClass37_0_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void LitJson::JsonMapper___c__DisplayClass37_0_1<T>::_RegisterExporter_b__0(::System::Object*  obj, ::LitJson::JsonWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c__DisplayClass37_0_1<T>*>(),
                        {"<RegisterExporter>b__0", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::LitJson::JsonWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, writer);
}
template<typename T>
inline ::LitJson::JsonMapper___c__DisplayClass37_0_1<T>* LitJson::JsonMapper___c__DisplayClass37_0_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LitJson::JsonMapper___c__DisplayClass37_0_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::LitJson::JsonMapper___c__DisplayClass37_0_1<T>::JsonMapper___c__DisplayClass37_0_1()   {
}
//  Writing Method size for method: ::LitJson::JsonMapper___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonMapper___c::*)()>(&::LitJson::JsonMapper___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b66f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper___c._RegisterBaseExporters_b__23_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonMapper___c::*)(::System::Object*, ::LitJson::JsonWriter*)>(&::LitJson::JsonMapper___c::_RegisterBaseExporters_b__23_0)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b66f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseExporters>b__23_0", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::LitJson::JsonWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper___c._RegisterBaseExporters_b__23_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonMapper___c::*)(::System::Object*, ::LitJson::JsonWriter*)>(&::LitJson::JsonMapper___c::_RegisterBaseExporters_b__23_1)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b66fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseExporters>b__23_1", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::LitJson::JsonWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper___c._RegisterBaseExporters_b__23_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonMapper___c::*)(::System::Object*, ::LitJson::JsonWriter*)>(&::LitJson::JsonMapper___c::_RegisterBaseExporters_b__23_2)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5b67088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseExporters>b__23_2", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::LitJson::JsonWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper___c._RegisterBaseExporters_b__23_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonMapper___c::*)(::System::Object*, ::LitJson::JsonWriter*)>(&::LitJson::JsonMapper___c::_RegisterBaseExporters_b__23_3)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b67174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseExporters>b__23_3", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::LitJson::JsonWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper___c._RegisterBaseExporters_b__23_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonMapper___c::*)(::System::Object*, ::LitJson::JsonWriter*)>(&::LitJson::JsonMapper___c::_RegisterBaseExporters_b__23_4)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b672d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseExporters>b__23_4", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::LitJson::JsonWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper___c._RegisterBaseExporters_b__23_5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonMapper___c::*)(::System::Object*, ::LitJson::JsonWriter*)>(&::LitJson::JsonMapper___c::_RegisterBaseExporters_b__23_5)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b67378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseExporters>b__23_5", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::LitJson::JsonWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper___c._RegisterBaseExporters_b__23_6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonMapper___c::*)(::System::Object*, ::LitJson::JsonWriter*)>(&::LitJson::JsonMapper___c::_RegisterBaseExporters_b__23_6)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b67420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseExporters>b__23_6", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::LitJson::JsonWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper___c._RegisterBaseExporters_b__23_7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonMapper___c::*)(::System::Object*, ::LitJson::JsonWriter*)>(&::LitJson::JsonMapper___c::_RegisterBaseExporters_b__23_7)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b674c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseExporters>b__23_7", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::LitJson::JsonWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper___c._RegisterBaseExporters_b__23_8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonMapper___c::*)(::System::Object*, ::LitJson::JsonWriter*)>(&::LitJson::JsonMapper___c::_RegisterBaseExporters_b__23_8)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b67570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseExporters>b__23_8", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::LitJson::JsonWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper___c._RegisterBaseExporters_b__23_9
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonMapper___c::*)(::System::Object*, ::LitJson::JsonWriter*)>(&::LitJson::JsonMapper___c::_RegisterBaseExporters_b__23_9)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b675cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseExporters>b__23_9", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::LitJson::JsonWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper___c._RegisterBaseImporters_b__24_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::LitJson::JsonMapper___c::*)(::System::Object*)>(&::LitJson::JsonMapper___c::_RegisterBaseImporters_b__24_0)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5b6762c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseImporters>b__24_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper___c._RegisterBaseImporters_b__24_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::LitJson::JsonMapper___c::*)(::System::Object*)>(&::LitJson::JsonMapper___c::_RegisterBaseImporters_b__24_1)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5b676d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseImporters>b__24_1", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper___c._RegisterBaseImporters_b__24_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::LitJson::JsonMapper___c::*)(::System::Object*)>(&::LitJson::JsonMapper___c::_RegisterBaseImporters_b__24_2)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5b67784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseImporters>b__24_2", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper___c._RegisterBaseImporters_b__24_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::LitJson::JsonMapper___c::*)(::System::Object*)>(&::LitJson::JsonMapper___c::_RegisterBaseImporters_b__24_3)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5b67830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseImporters>b__24_3", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper___c._RegisterBaseImporters_b__24_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::LitJson::JsonMapper___c::*)(::System::Object*)>(&::LitJson::JsonMapper___c::_RegisterBaseImporters_b__24_4)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5b678dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseImporters>b__24_4", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper___c._RegisterBaseImporters_b__24_5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::LitJson::JsonMapper___c::*)(::System::Object*)>(&::LitJson::JsonMapper___c::_RegisterBaseImporters_b__24_5)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5b67988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseImporters>b__24_5", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper___c._RegisterBaseImporters_b__24_6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::LitJson::JsonMapper___c::*)(::System::Object*)>(&::LitJson::JsonMapper___c::_RegisterBaseImporters_b__24_6)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b67a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseImporters>b__24_6", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper___c._RegisterBaseImporters_b__24_7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::LitJson::JsonMapper___c::*)(::System::Object*)>(&::LitJson::JsonMapper___c::_RegisterBaseImporters_b__24_7)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5b67adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseImporters>b__24_7", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper___c._RegisterBaseImporters_b__24_8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::LitJson::JsonMapper___c::*)(::System::Object*)>(&::LitJson::JsonMapper___c::_RegisterBaseImporters_b__24_8)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b67b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseImporters>b__24_8", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper___c._RegisterBaseImporters_b__24_9
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::LitJson::JsonMapper___c::*)(::System::Object*)>(&::LitJson::JsonMapper___c::_RegisterBaseImporters_b__24_9)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5b67c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseImporters>b__24_9", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper___c._RegisterBaseImporters_b__24_10
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::LitJson::JsonMapper___c::*)(::System::Object*)>(&::LitJson::JsonMapper___c::_RegisterBaseImporters_b__24_10)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5b67d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseImporters>b__24_10", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper___c._RegisterBaseImporters_b__24_11
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::LitJson::JsonMapper___c::*)(::System::Object*)>(&::LitJson::JsonMapper___c::_RegisterBaseImporters_b__24_11)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5b67de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseImporters>b__24_11", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper___c._RegisterBaseImporters_b__24_12
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::LitJson::JsonMapper___c::*)(::System::Object*)>(&::LitJson::JsonMapper___c::_RegisterBaseImporters_b__24_12)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5b67e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseImporters>b__24_12", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper___c._ToObject_b__29_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LitJson::IJsonWrapper* (::LitJson::JsonMapper___c::*)()>(&::LitJson::JsonMapper___c::_ToObject_b__29_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5b67f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<ToObject>b__29_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper___c._ToObject_b__30_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LitJson::IJsonWrapper* (::LitJson::JsonMapper___c::*)()>(&::LitJson::JsonMapper___c::_ToObject_b__30_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5b67fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<ToObject>b__30_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonMapper___c._ToObject_b__31_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LitJson::IJsonWrapper* (::LitJson::JsonMapper___c::*)()>(&::LitJson::JsonMapper___c::_ToObject_b__31_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5b6801c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<ToObject>b__31_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void LitJson::JsonMapper___c::setStaticF___9(::LitJson::JsonMapper___c*  value)  {
::cordl_internals::setStaticField<::LitJson::JsonMapper___c*, "<>9", ::LitJson::JsonMapper___c*>(std::forward<::LitJson::JsonMapper___c*>(value));
}
inline ::LitJson::JsonMapper___c* LitJson::JsonMapper___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::LitJson::JsonMapper___c*, "<>9", ::LitJson::JsonMapper___c*>();
}
inline void LitJson::JsonMapper___c::setStaticF___9__23_0(::LitJson::ExporterFunc*  value)  {
::cordl_internals::setStaticField<::LitJson::ExporterFunc*, "<>9__23_0", ::LitJson::JsonMapper___c*>(std::forward<::LitJson::ExporterFunc*>(value));
}
inline ::LitJson::ExporterFunc* LitJson::JsonMapper___c::getStaticF___9__23_0()  {
return ::cordl_internals::getStaticField<::LitJson::ExporterFunc*, "<>9__23_0", ::LitJson::JsonMapper___c*>();
}
inline void LitJson::JsonMapper___c::setStaticF___9__23_1(::LitJson::ExporterFunc*  value)  {
::cordl_internals::setStaticField<::LitJson::ExporterFunc*, "<>9__23_1", ::LitJson::JsonMapper___c*>(std::forward<::LitJson::ExporterFunc*>(value));
}
inline ::LitJson::ExporterFunc* LitJson::JsonMapper___c::getStaticF___9__23_1()  {
return ::cordl_internals::getStaticField<::LitJson::ExporterFunc*, "<>9__23_1", ::LitJson::JsonMapper___c*>();
}
inline void LitJson::JsonMapper___c::setStaticF___9__23_2(::LitJson::ExporterFunc*  value)  {
::cordl_internals::setStaticField<::LitJson::ExporterFunc*, "<>9__23_2", ::LitJson::JsonMapper___c*>(std::forward<::LitJson::ExporterFunc*>(value));
}
inline ::LitJson::ExporterFunc* LitJson::JsonMapper___c::getStaticF___9__23_2()  {
return ::cordl_internals::getStaticField<::LitJson::ExporterFunc*, "<>9__23_2", ::LitJson::JsonMapper___c*>();
}
inline void LitJson::JsonMapper___c::setStaticF___9__23_3(::LitJson::ExporterFunc*  value)  {
::cordl_internals::setStaticField<::LitJson::ExporterFunc*, "<>9__23_3", ::LitJson::JsonMapper___c*>(std::forward<::LitJson::ExporterFunc*>(value));
}
inline ::LitJson::ExporterFunc* LitJson::JsonMapper___c::getStaticF___9__23_3()  {
return ::cordl_internals::getStaticField<::LitJson::ExporterFunc*, "<>9__23_3", ::LitJson::JsonMapper___c*>();
}
inline void LitJson::JsonMapper___c::setStaticF___9__23_4(::LitJson::ExporterFunc*  value)  {
::cordl_internals::setStaticField<::LitJson::ExporterFunc*, "<>9__23_4", ::LitJson::JsonMapper___c*>(std::forward<::LitJson::ExporterFunc*>(value));
}
inline ::LitJson::ExporterFunc* LitJson::JsonMapper___c::getStaticF___9__23_4()  {
return ::cordl_internals::getStaticField<::LitJson::ExporterFunc*, "<>9__23_4", ::LitJson::JsonMapper___c*>();
}
inline void LitJson::JsonMapper___c::setStaticF___9__23_5(::LitJson::ExporterFunc*  value)  {
::cordl_internals::setStaticField<::LitJson::ExporterFunc*, "<>9__23_5", ::LitJson::JsonMapper___c*>(std::forward<::LitJson::ExporterFunc*>(value));
}
inline ::LitJson::ExporterFunc* LitJson::JsonMapper___c::getStaticF___9__23_5()  {
return ::cordl_internals::getStaticField<::LitJson::ExporterFunc*, "<>9__23_5", ::LitJson::JsonMapper___c*>();
}
inline void LitJson::JsonMapper___c::setStaticF___9__23_6(::LitJson::ExporterFunc*  value)  {
::cordl_internals::setStaticField<::LitJson::ExporterFunc*, "<>9__23_6", ::LitJson::JsonMapper___c*>(std::forward<::LitJson::ExporterFunc*>(value));
}
inline ::LitJson::ExporterFunc* LitJson::JsonMapper___c::getStaticF___9__23_6()  {
return ::cordl_internals::getStaticField<::LitJson::ExporterFunc*, "<>9__23_6", ::LitJson::JsonMapper___c*>();
}
inline void LitJson::JsonMapper___c::setStaticF___9__23_7(::LitJson::ExporterFunc*  value)  {
::cordl_internals::setStaticField<::LitJson::ExporterFunc*, "<>9__23_7", ::LitJson::JsonMapper___c*>(std::forward<::LitJson::ExporterFunc*>(value));
}
inline ::LitJson::ExporterFunc* LitJson::JsonMapper___c::getStaticF___9__23_7()  {
return ::cordl_internals::getStaticField<::LitJson::ExporterFunc*, "<>9__23_7", ::LitJson::JsonMapper___c*>();
}
inline void LitJson::JsonMapper___c::setStaticF___9__23_8(::LitJson::ExporterFunc*  value)  {
::cordl_internals::setStaticField<::LitJson::ExporterFunc*, "<>9__23_8", ::LitJson::JsonMapper___c*>(std::forward<::LitJson::ExporterFunc*>(value));
}
inline ::LitJson::ExporterFunc* LitJson::JsonMapper___c::getStaticF___9__23_8()  {
return ::cordl_internals::getStaticField<::LitJson::ExporterFunc*, "<>9__23_8", ::LitJson::JsonMapper___c*>();
}
inline void LitJson::JsonMapper___c::setStaticF___9__23_9(::LitJson::ExporterFunc*  value)  {
::cordl_internals::setStaticField<::LitJson::ExporterFunc*, "<>9__23_9", ::LitJson::JsonMapper___c*>(std::forward<::LitJson::ExporterFunc*>(value));
}
inline ::LitJson::ExporterFunc* LitJson::JsonMapper___c::getStaticF___9__23_9()  {
return ::cordl_internals::getStaticField<::LitJson::ExporterFunc*, "<>9__23_9", ::LitJson::JsonMapper___c*>();
}
inline void LitJson::JsonMapper___c::setStaticF___9__24_0(::LitJson::ImporterFunc*  value)  {
::cordl_internals::setStaticField<::LitJson::ImporterFunc*, "<>9__24_0", ::LitJson::JsonMapper___c*>(std::forward<::LitJson::ImporterFunc*>(value));
}
inline ::LitJson::ImporterFunc* LitJson::JsonMapper___c::getStaticF___9__24_0()  {
return ::cordl_internals::getStaticField<::LitJson::ImporterFunc*, "<>9__24_0", ::LitJson::JsonMapper___c*>();
}
inline void LitJson::JsonMapper___c::setStaticF___9__24_1(::LitJson::ImporterFunc*  value)  {
::cordl_internals::setStaticField<::LitJson::ImporterFunc*, "<>9__24_1", ::LitJson::JsonMapper___c*>(std::forward<::LitJson::ImporterFunc*>(value));
}
inline ::LitJson::ImporterFunc* LitJson::JsonMapper___c::getStaticF___9__24_1()  {
return ::cordl_internals::getStaticField<::LitJson::ImporterFunc*, "<>9__24_1", ::LitJson::JsonMapper___c*>();
}
inline void LitJson::JsonMapper___c::setStaticF___9__24_2(::LitJson::ImporterFunc*  value)  {
::cordl_internals::setStaticField<::LitJson::ImporterFunc*, "<>9__24_2", ::LitJson::JsonMapper___c*>(std::forward<::LitJson::ImporterFunc*>(value));
}
inline ::LitJson::ImporterFunc* LitJson::JsonMapper___c::getStaticF___9__24_2()  {
return ::cordl_internals::getStaticField<::LitJson::ImporterFunc*, "<>9__24_2", ::LitJson::JsonMapper___c*>();
}
inline void LitJson::JsonMapper___c::setStaticF___9__24_3(::LitJson::ImporterFunc*  value)  {
::cordl_internals::setStaticField<::LitJson::ImporterFunc*, "<>9__24_3", ::LitJson::JsonMapper___c*>(std::forward<::LitJson::ImporterFunc*>(value));
}
inline ::LitJson::ImporterFunc* LitJson::JsonMapper___c::getStaticF___9__24_3()  {
return ::cordl_internals::getStaticField<::LitJson::ImporterFunc*, "<>9__24_3", ::LitJson::JsonMapper___c*>();
}
inline void LitJson::JsonMapper___c::setStaticF___9__24_4(::LitJson::ImporterFunc*  value)  {
::cordl_internals::setStaticField<::LitJson::ImporterFunc*, "<>9__24_4", ::LitJson::JsonMapper___c*>(std::forward<::LitJson::ImporterFunc*>(value));
}
inline ::LitJson::ImporterFunc* LitJson::JsonMapper___c::getStaticF___9__24_4()  {
return ::cordl_internals::getStaticField<::LitJson::ImporterFunc*, "<>9__24_4", ::LitJson::JsonMapper___c*>();
}
inline void LitJson::JsonMapper___c::setStaticF___9__24_5(::LitJson::ImporterFunc*  value)  {
::cordl_internals::setStaticField<::LitJson::ImporterFunc*, "<>9__24_5", ::LitJson::JsonMapper___c*>(std::forward<::LitJson::ImporterFunc*>(value));
}
inline ::LitJson::ImporterFunc* LitJson::JsonMapper___c::getStaticF___9__24_5()  {
return ::cordl_internals::getStaticField<::LitJson::ImporterFunc*, "<>9__24_5", ::LitJson::JsonMapper___c*>();
}
inline void LitJson::JsonMapper___c::setStaticF___9__24_6(::LitJson::ImporterFunc*  value)  {
::cordl_internals::setStaticField<::LitJson::ImporterFunc*, "<>9__24_6", ::LitJson::JsonMapper___c*>(std::forward<::LitJson::ImporterFunc*>(value));
}
inline ::LitJson::ImporterFunc* LitJson::JsonMapper___c::getStaticF___9__24_6()  {
return ::cordl_internals::getStaticField<::LitJson::ImporterFunc*, "<>9__24_6", ::LitJson::JsonMapper___c*>();
}
inline void LitJson::JsonMapper___c::setStaticF___9__24_7(::LitJson::ImporterFunc*  value)  {
::cordl_internals::setStaticField<::LitJson::ImporterFunc*, "<>9__24_7", ::LitJson::JsonMapper___c*>(std::forward<::LitJson::ImporterFunc*>(value));
}
inline ::LitJson::ImporterFunc* LitJson::JsonMapper___c::getStaticF___9__24_7()  {
return ::cordl_internals::getStaticField<::LitJson::ImporterFunc*, "<>9__24_7", ::LitJson::JsonMapper___c*>();
}
inline void LitJson::JsonMapper___c::setStaticF___9__24_8(::LitJson::ImporterFunc*  value)  {
::cordl_internals::setStaticField<::LitJson::ImporterFunc*, "<>9__24_8", ::LitJson::JsonMapper___c*>(std::forward<::LitJson::ImporterFunc*>(value));
}
inline ::LitJson::ImporterFunc* LitJson::JsonMapper___c::getStaticF___9__24_8()  {
return ::cordl_internals::getStaticField<::LitJson::ImporterFunc*, "<>9__24_8", ::LitJson::JsonMapper___c*>();
}
inline void LitJson::JsonMapper___c::setStaticF___9__24_9(::LitJson::ImporterFunc*  value)  {
::cordl_internals::setStaticField<::LitJson::ImporterFunc*, "<>9__24_9", ::LitJson::JsonMapper___c*>(std::forward<::LitJson::ImporterFunc*>(value));
}
inline ::LitJson::ImporterFunc* LitJson::JsonMapper___c::getStaticF___9__24_9()  {
return ::cordl_internals::getStaticField<::LitJson::ImporterFunc*, "<>9__24_9", ::LitJson::JsonMapper___c*>();
}
inline void LitJson::JsonMapper___c::setStaticF___9__24_10(::LitJson::ImporterFunc*  value)  {
::cordl_internals::setStaticField<::LitJson::ImporterFunc*, "<>9__24_10", ::LitJson::JsonMapper___c*>(std::forward<::LitJson::ImporterFunc*>(value));
}
inline ::LitJson::ImporterFunc* LitJson::JsonMapper___c::getStaticF___9__24_10()  {
return ::cordl_internals::getStaticField<::LitJson::ImporterFunc*, "<>9__24_10", ::LitJson::JsonMapper___c*>();
}
inline void LitJson::JsonMapper___c::setStaticF___9__24_11(::LitJson::ImporterFunc*  value)  {
::cordl_internals::setStaticField<::LitJson::ImporterFunc*, "<>9__24_11", ::LitJson::JsonMapper___c*>(std::forward<::LitJson::ImporterFunc*>(value));
}
inline ::LitJson::ImporterFunc* LitJson::JsonMapper___c::getStaticF___9__24_11()  {
return ::cordl_internals::getStaticField<::LitJson::ImporterFunc*, "<>9__24_11", ::LitJson::JsonMapper___c*>();
}
inline void LitJson::JsonMapper___c::setStaticF___9__24_12(::LitJson::ImporterFunc*  value)  {
::cordl_internals::setStaticField<::LitJson::ImporterFunc*, "<>9__24_12", ::LitJson::JsonMapper___c*>(std::forward<::LitJson::ImporterFunc*>(value));
}
inline ::LitJson::ImporterFunc* LitJson::JsonMapper___c::getStaticF___9__24_12()  {
return ::cordl_internals::getStaticField<::LitJson::ImporterFunc*, "<>9__24_12", ::LitJson::JsonMapper___c*>();
}
inline void LitJson::JsonMapper___c::setStaticF___9__29_0(::LitJson::WrapperFactory*  value)  {
::cordl_internals::setStaticField<::LitJson::WrapperFactory*, "<>9__29_0", ::LitJson::JsonMapper___c*>(std::forward<::LitJson::WrapperFactory*>(value));
}
inline ::LitJson::WrapperFactory* LitJson::JsonMapper___c::getStaticF___9__29_0()  {
return ::cordl_internals::getStaticField<::LitJson::WrapperFactory*, "<>9__29_0", ::LitJson::JsonMapper___c*>();
}
inline void LitJson::JsonMapper___c::setStaticF___9__30_0(::LitJson::WrapperFactory*  value)  {
::cordl_internals::setStaticField<::LitJson::WrapperFactory*, "<>9__30_0", ::LitJson::JsonMapper___c*>(std::forward<::LitJson::WrapperFactory*>(value));
}
inline ::LitJson::WrapperFactory* LitJson::JsonMapper___c::getStaticF___9__30_0()  {
return ::cordl_internals::getStaticField<::LitJson::WrapperFactory*, "<>9__30_0", ::LitJson::JsonMapper___c*>();
}
inline void LitJson::JsonMapper___c::setStaticF___9__31_0(::LitJson::WrapperFactory*  value)  {
::cordl_internals::setStaticField<::LitJson::WrapperFactory*, "<>9__31_0", ::LitJson::JsonMapper___c*>(std::forward<::LitJson::WrapperFactory*>(value));
}
inline ::LitJson::WrapperFactory* LitJson::JsonMapper___c::getStaticF___9__31_0()  {
return ::cordl_internals::getStaticField<::LitJson::WrapperFactory*, "<>9__31_0", ::LitJson::JsonMapper___c*>();
}
inline void LitJson::JsonMapper___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LitJson::JsonMapper___c::_RegisterBaseExporters_b__23_0(::System::Object*  obj, ::LitJson::JsonWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseExporters>b__23_0", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::LitJson::JsonWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, writer);
}
inline void LitJson::JsonMapper___c::_RegisterBaseExporters_b__23_1(::System::Object*  obj, ::LitJson::JsonWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseExporters>b__23_1", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::LitJson::JsonWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, writer);
}
inline void LitJson::JsonMapper___c::_RegisterBaseExporters_b__23_2(::System::Object*  obj, ::LitJson::JsonWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseExporters>b__23_2", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::LitJson::JsonWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, writer);
}
inline void LitJson::JsonMapper___c::_RegisterBaseExporters_b__23_3(::System::Object*  obj, ::LitJson::JsonWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseExporters>b__23_3", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::LitJson::JsonWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, writer);
}
inline void LitJson::JsonMapper___c::_RegisterBaseExporters_b__23_4(::System::Object*  obj, ::LitJson::JsonWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseExporters>b__23_4", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::LitJson::JsonWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, writer);
}
inline void LitJson::JsonMapper___c::_RegisterBaseExporters_b__23_5(::System::Object*  obj, ::LitJson::JsonWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseExporters>b__23_5", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::LitJson::JsonWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, writer);
}
inline void LitJson::JsonMapper___c::_RegisterBaseExporters_b__23_6(::System::Object*  obj, ::LitJson::JsonWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseExporters>b__23_6", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::LitJson::JsonWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, writer);
}
inline void LitJson::JsonMapper___c::_RegisterBaseExporters_b__23_7(::System::Object*  obj, ::LitJson::JsonWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseExporters>b__23_7", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::LitJson::JsonWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, writer);
}
inline void LitJson::JsonMapper___c::_RegisterBaseExporters_b__23_8(::System::Object*  obj, ::LitJson::JsonWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseExporters>b__23_8", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::LitJson::JsonWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, writer);
}
inline void LitJson::JsonMapper___c::_RegisterBaseExporters_b__23_9(::System::Object*  obj, ::LitJson::JsonWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseExporters>b__23_9", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::LitJson::JsonWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, writer);
}
inline ::System::Object* LitJson::JsonMapper___c::_RegisterBaseImporters_b__24_0(::System::Object*  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseImporters>b__24_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, input);
}
inline ::System::Object* LitJson::JsonMapper___c::_RegisterBaseImporters_b__24_1(::System::Object*  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseImporters>b__24_1", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, input);
}
inline ::System::Object* LitJson::JsonMapper___c::_RegisterBaseImporters_b__24_2(::System::Object*  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseImporters>b__24_2", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, input);
}
inline ::System::Object* LitJson::JsonMapper___c::_RegisterBaseImporters_b__24_3(::System::Object*  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseImporters>b__24_3", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, input);
}
inline ::System::Object* LitJson::JsonMapper___c::_RegisterBaseImporters_b__24_4(::System::Object*  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseImporters>b__24_4", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, input);
}
inline ::System::Object* LitJson::JsonMapper___c::_RegisterBaseImporters_b__24_5(::System::Object*  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseImporters>b__24_5", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, input);
}
inline ::System::Object* LitJson::JsonMapper___c::_RegisterBaseImporters_b__24_6(::System::Object*  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseImporters>b__24_6", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, input);
}
inline ::System::Object* LitJson::JsonMapper___c::_RegisterBaseImporters_b__24_7(::System::Object*  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseImporters>b__24_7", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, input);
}
inline ::System::Object* LitJson::JsonMapper___c::_RegisterBaseImporters_b__24_8(::System::Object*  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseImporters>b__24_8", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, input);
}
inline ::System::Object* LitJson::JsonMapper___c::_RegisterBaseImporters_b__24_9(::System::Object*  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseImporters>b__24_9", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, input);
}
inline ::System::Object* LitJson::JsonMapper___c::_RegisterBaseImporters_b__24_10(::System::Object*  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseImporters>b__24_10", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, input);
}
inline ::System::Object* LitJson::JsonMapper___c::_RegisterBaseImporters_b__24_11(::System::Object*  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseImporters>b__24_11", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, input);
}
inline ::System::Object* LitJson::JsonMapper___c::_RegisterBaseImporters_b__24_12(::System::Object*  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<RegisterBaseImporters>b__24_12", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, input);
}
inline ::LitJson::IJsonWrapper* LitJson::JsonMapper___c::_ToObject_b__29_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<ToObject>b__29_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::LitJson::IJsonWrapper*>(this, ___internal_method);
}
inline ::LitJson::IJsonWrapper* LitJson::JsonMapper___c::_ToObject_b__30_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<ToObject>b__30_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::LitJson::IJsonWrapper*>(this, ___internal_method);
}
inline ::LitJson::IJsonWrapper* LitJson::JsonMapper___c::_ToObject_b__31_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonMapper___c*>(),
                        {"<ToObject>b__31_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::LitJson::IJsonWrapper*>(this, ___internal_method);
}
inline ::LitJson::JsonMapper___c* LitJson::JsonMapper___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LitJson::JsonMapper___c*>());
}
// Ctor Parameters []
constexpr ::LitJson::JsonMapper___c::JsonMapper___c()   {
}
