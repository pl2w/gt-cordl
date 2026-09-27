#pragma once
// IWYU pragma private; include "Meta/WitAi/Json/JsonConvert.hpp"
#include "Meta/WitAi/Json/zzzz__JsonConverter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/Json/zzzz__JsonConvert_def.hpp"
#include "Meta/WitAi/Json/zzzz__IJsonVariableInfo_def.hpp"
#include "Meta/WitAi/Json/zzzz__JsonConvert__DeserializeObjectAsync_d__8_1_def.hpp"
#include "Meta/WitAi/Json/zzzz__JsonConvert_def.hpp"
#include "Meta/WitAi/Json/zzzz__JsonConverter_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseClass_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Json::JsonConvert.get_DefaultConverters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Meta::WitAi::Json::JsonConverter*> (*)()>(&::Meta::WitAi::Json::JsonConvert::get_DefaultConverters)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9e3feec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonConvert*>(),
                        {"get_DefaultConverters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::JsonConvert.EnsureExists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*, ::System::Object*)>(&::Meta::WitAi::Json::JsonConvert::EnsureExists)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x9e3ff44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonConvert*>(),
                        {"EnsureExists", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::JsonConvert.DeserializeToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Json::WitResponseNode* (*)(::StringW)>(&::Meta::WitAi::Json::JsonConvert::DeserializeToken)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x9e400b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonConvert*>(),
                        {"DeserializeToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::JsonConvert.DeserializeToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*, ::System::Object*, ::Meta::WitAi::Json::WitResponseNode*, ::System::Text::StringBuilder*, ::ArrayW<::Meta::WitAi::Json::JsonConverter*>)>(&::Meta::WitAi::Json::JsonConvert::DeserializeToken)> {
  constexpr static std::size_t size = 0xcb0;
  constexpr static std::size_t addrs = 0x9e4099c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonConvert*>(),
                        {"DeserializeToken", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::ArrayW<::Meta::WitAi::Json::JsonConverter*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::JsonConvert.DeserializeEnum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*, ::System::Object*, ::StringW, ::System::Text::StringBuilder*)>(&::Meta::WitAi::Json::JsonConvert::DeserializeEnum)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x9e4164c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonConvert*>(),
                        {"DeserializeEnum", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::JsonConvert.DeserializeClass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*, ::System::Object*, ::Meta::WitAi::Json::WitResponseClass*, ::System::Text::StringBuilder*, ::ArrayW<::Meta::WitAi::Json::JsonConverter*>)>(&::Meta::WitAi::Json::JsonConvert::DeserializeClass)> {
  constexpr static std::size_t size = 0x82c;
  constexpr static std::size_t addrs = 0x9e41c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonConvert*>(),
                        {"DeserializeClass", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Meta::WitAi::Json::WitResponseClass*>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::ArrayW<::Meta::WitAi::Json::JsonConverter*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::JsonConvert.DeserializeDictionary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Type*, ::System::Object*, ::Meta::WitAi::Json::WitResponseClass*, ::System::Text::StringBuilder*, ::ArrayW<::Meta::WitAi::Json::JsonConverter*>)>(&::Meta::WitAi::Json::JsonConvert::DeserializeDictionary)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x9e41a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonConvert*>(),
                        {"DeserializeDictionary", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Meta::WitAi::Json::WitResponseClass*>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::ArrayW<::Meta::WitAi::Json::JsonConverter*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::JsonConvert.SerializeToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Json::WitResponseNode* (*)(::System::Type*, ::System::Object*, ::System::Text::StringBuilder*, ::ArrayW<::Meta::WitAi::Json::JsonConverter*>)>(&::Meta::WitAi::Json::JsonConvert::SerializeToken)> {
  constexpr static std::size_t size = 0xb64;
  constexpr static std::size_t addrs = 0x9e429b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonConvert*>(),
                        {"SerializeToken", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::ArrayW<::Meta::WitAi::Json::JsonConverter*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::JsonConvert.SerializeClass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Json::WitResponseClass* (*)(::System::Type*, ::System::Object*, ::System::Text::StringBuilder*, ::ArrayW<::Meta::WitAi::Json::JsonConverter*>)>(&::Meta::WitAi::Json::JsonConvert::SerializeClass)> {
  constexpr static std::size_t size = 0x5e8;
  constexpr static std::size_t addrs = 0x9e4370c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonConvert*>(),
                        {"SerializeClass", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::ArrayW<::Meta::WitAi::Json::JsonConverter*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::JsonConvert.GetVarInfos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Meta::WitAi::Json::IJsonVariableInfo*>* (*)(::System::Type*)>(&::Meta::WitAi::Json::JsonConvert::GetVarInfos)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x9e43cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonConvert*>(),
                        {"GetVarInfos", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::JsonConvert.GetVarDictionary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::Meta::WitAi::Json::IJsonVariableInfo*>* (*)(::System::Type*, ::System::Text::StringBuilder*)>(&::Meta::WitAi::Json::JsonConvert::GetVarDictionary)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x9e42538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonConvert*>(),
                        {"GetVarDictionary", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::WitAi::Json::JsonConvert::setStaticF__defaultConverters(::ArrayW<::Meta::WitAi::Json::JsonConverter*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Meta::WitAi::Json::JsonConverter*>, "_defaultConverters", ::Meta::WitAi::Json::JsonConvert*>(std::forward<::ArrayW<::Meta::WitAi::Json::JsonConverter*>>(value));
}
inline ::ArrayW<::Meta::WitAi::Json::JsonConverter*> Meta::WitAi::Json::JsonConvert::getStaticF__defaultConverters()  {
return ::cordl_internals::getStaticField<::ArrayW<::Meta::WitAi::Json::JsonConverter*>, "_defaultConverters", ::Meta::WitAi::Json::JsonConvert*>();
}
inline void Meta::WitAi::Json::JsonConvert::setStaticF__enumParseMethod(::System::Reflection::MethodInfo*  value)  {
::cordl_internals::setStaticField<::System::Reflection::MethodInfo*, "_enumParseMethod", ::Meta::WitAi::Json::JsonConvert*>(std::forward<::System::Reflection::MethodInfo*>(value));
}
inline ::System::Reflection::MethodInfo* Meta::WitAi::Json::JsonConvert::getStaticF__enumParseMethod()  {
return ::cordl_internals::getStaticField<::System::Reflection::MethodInfo*, "_enumParseMethod", ::Meta::WitAi::Json::JsonConvert*>();
}
inline ::ArrayW<::Meta::WitAi::Json::JsonConverter*> Meta::WitAi::Json::JsonConvert::get_DefaultConverters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonConvert*>(),
                        {"get_DefaultConverters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Meta::WitAi::Json::JsonConverter*>>(nullptr, ___internal_method);
}
inline ::System::Object* Meta::WitAi::Json::JsonConvert::EnsureExists(::System::Type*  objType, ::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonConvert*>(),
                        {"EnsureExists", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, objType, obj);
}
inline ::Meta::WitAi::Json::WitResponseNode* Meta::WitAi::Json::JsonConvert::DeserializeToken(::StringW  jsonString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonConvert*>(),
                        {"DeserializeToken", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Json::WitResponseNode*>(nullptr, ___internal_method, jsonString);
}
template<typename IN_TYPE>
inline IN_TYPE Meta::WitAi::Json::JsonConvert::DeserializeObject(::StringW  jsonString, ::ArrayW<::Meta::WitAi::Json::JsonConverter*>  customConverters, bool  suppressWarnings)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::JsonConvert*>(),
                    {"DeserializeObject", {::i2c::class_of<IN_TYPE>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::Meta::WitAi::Json::JsonConverter*>>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<IN_TYPE>()}
                )));
return ::cordl_internals::RunMethodRethrow<IN_TYPE>(nullptr, ___internal_method, jsonString, customConverters, suppressWarnings);
}
template<typename IN_TYPE>
inline ::System::Threading::Tasks::Task_1<IN_TYPE>* Meta::WitAi::Json::JsonConvert::DeserializeObjectAsync(::StringW  jsonString, ::ArrayW<::Meta::WitAi::Json::JsonConverter*>  customConverters, bool  suppressWarnings)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::JsonConvert*>(),
                    {"DeserializeObjectAsync", {::i2c::class_of<IN_TYPE>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::Meta::WitAi::Json::JsonConverter*>>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<IN_TYPE>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<IN_TYPE>*>(nullptr, ___internal_method, jsonString, customConverters, suppressWarnings);
}
template<typename IN_TYPE>
inline IN_TYPE Meta::WitAi::Json::JsonConvert::DeserializeObject(::Meta::WitAi::Json::WitResponseNode*  jsonToken, ::ArrayW<::Meta::WitAi::Json::JsonConverter*>  customConverters, bool  suppressWarnings)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::JsonConvert*>(),
                    {"DeserializeObject", {::i2c::class_of<IN_TYPE>()}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::ArrayW<::Meta::WitAi::Json::JsonConverter*>>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<IN_TYPE>()}
                )));
return ::cordl_internals::RunMethodRethrow<IN_TYPE>(nullptr, ___internal_method, jsonToken, customConverters, suppressWarnings);
}
template<typename IN_TYPE>
inline IN_TYPE Meta::WitAi::Json::JsonConvert::DeserializeIntoObject(IN_TYPE  instance, ::StringW  jsonString, ::ArrayW<::Meta::WitAi::Json::JsonConverter*>  customConverters, bool  suppressWarnings)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::JsonConvert*>(),
                    {"DeserializeIntoObject", {::i2c::class_of<IN_TYPE>()}, {::i2c::type_of<IN_TYPE>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::Meta::WitAi::Json::JsonConverter*>>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<IN_TYPE>()}
                )));
return ::cordl_internals::RunMethodRethrow<IN_TYPE>(nullptr, ___internal_method, instance, jsonString, customConverters, suppressWarnings);
}
template<typename IN_TYPE>
inline IN_TYPE Meta::WitAi::Json::JsonConvert::DeserializeIntoObject(IN_TYPE  instance, ::Meta::WitAi::Json::WitResponseNode*  jsonToken, ::ArrayW<::Meta::WitAi::Json::JsonConverter*>  customConverters, bool  suppressWarnings)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::JsonConvert*>(),
                    {"DeserializeIntoObject", {::i2c::class_of<IN_TYPE>()}, {::i2c::type_of<IN_TYPE>(), ::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::ArrayW<::Meta::WitAi::Json::JsonConverter*>>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<IN_TYPE>()}
                )));
return ::cordl_internals::RunMethodRethrow<IN_TYPE>(nullptr, ___internal_method, instance, jsonToken, customConverters, suppressWarnings);
}
inline ::System::Object* Meta::WitAi::Json::JsonConvert::DeserializeToken(::System::Type*  toType, ::System::Object*  oldValue, ::Meta::WitAi::Json::WitResponseNode*  jsonToken, ::System::Text::StringBuilder*  log, ::ArrayW<::Meta::WitAi::Json::JsonConverter*>  customConverters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonConvert*>(),
                        {"DeserializeToken", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::ArrayW<::Meta::WitAi::Json::JsonConverter*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, toType, oldValue, jsonToken, log, customConverters);
}
inline ::System::Object* Meta::WitAi::Json::JsonConvert::DeserializeEnum(::System::Type*  toType, ::System::Object*  oldValue, ::StringW  enumString, ::System::Text::StringBuilder*  log)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonConvert*>(),
                        {"DeserializeEnum", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, toType, oldValue, enumString, log);
}
template<typename ITEM_TYPE>
inline ::ArrayW<ITEM_TYPE> Meta::WitAi::Json::JsonConvert::DeserializeArray(::System::Object*  oldArray, ::Meta::WitAi::Json::WitResponseNode*  jsonToken, ::System::Text::StringBuilder*  log, ::ArrayW<::Meta::WitAi::Json::JsonConverter*>  customConverters)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::JsonConvert*>(),
                    {"DeserializeArray", {::i2c::class_of<ITEM_TYPE>()}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::ArrayW<::Meta::WitAi::Json::JsonConverter*>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<ITEM_TYPE>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<ITEM_TYPE>>(nullptr, ___internal_method, oldArray, jsonToken, log, customConverters);
}
inline ::System::Object* Meta::WitAi::Json::JsonConvert::DeserializeClass(::System::Type*  toType, ::System::Object*  oldObject, ::Meta::WitAi::Json::WitResponseClass*  jsonClass, ::System::Text::StringBuilder*  log, ::ArrayW<::Meta::WitAi::Json::JsonConverter*>  customConverters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonConvert*>(),
                        {"DeserializeClass", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Meta::WitAi::Json::WitResponseClass*>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::ArrayW<::Meta::WitAi::Json::JsonConverter*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, toType, oldObject, jsonClass, log, customConverters);
}
inline ::System::Object* Meta::WitAi::Json::JsonConvert::DeserializeDictionary(::System::Type*  toType, ::System::Object*  oldObject, ::Meta::WitAi::Json::WitResponseClass*  jsonClass, ::System::Text::StringBuilder*  log, ::ArrayW<::Meta::WitAi::Json::JsonConverter*>  customConverters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonConvert*>(),
                        {"DeserializeDictionary", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Meta::WitAi::Json::WitResponseClass*>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::ArrayW<::Meta::WitAi::Json::JsonConverter*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, toType, oldObject, jsonClass, log, customConverters);
}
template<typename TFromType>
inline ::StringW Meta::WitAi::Json::JsonConvert::SerializeObject(TFromType  inObject, ::ArrayW<::Meta::WitAi::Json::JsonConverter*>  customConverters, bool  suppressWarnings)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::JsonConvert*>(),
                    {"SerializeObject", {::i2c::class_of<TFromType>()}, {::i2c::type_of<TFromType>(), ::i2c::type_of<::ArrayW<::Meta::WitAi::Json::JsonConverter*>>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TFromType>()}
                )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, inObject, customConverters, suppressWarnings);
}
template<typename TFromType>
inline ::Meta::WitAi::Json::WitResponseNode* Meta::WitAi::Json::JsonConvert::SerializeToken(TFromType  inObject, ::ArrayW<::Meta::WitAi::Json::JsonConverter*>  customConverters, bool  suppressWarnings)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Json::JsonConvert*>(),
                    {"SerializeToken", {::i2c::class_of<TFromType>()}, {::i2c::type_of<TFromType>(), ::i2c::type_of<::ArrayW<::Meta::WitAi::Json::JsonConverter*>>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TFromType>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Json::WitResponseNode*>(nullptr, ___internal_method, inObject, customConverters, suppressWarnings);
}
inline ::Meta::WitAi::Json::WitResponseNode* Meta::WitAi::Json::JsonConvert::SerializeToken(::System::Type*  inType, ::System::Object*  inObject, ::System::Text::StringBuilder*  log, ::ArrayW<::Meta::WitAi::Json::JsonConverter*>  customConverters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonConvert*>(),
                        {"SerializeToken", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::ArrayW<::Meta::WitAi::Json::JsonConverter*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Json::WitResponseNode*>(nullptr, ___internal_method, inType, inObject, log, customConverters);
}
inline ::Meta::WitAi::Json::WitResponseClass* Meta::WitAi::Json::JsonConvert::SerializeClass(::System::Type*  inType, ::System::Object*  inObject, ::System::Text::StringBuilder*  log, ::ArrayW<::Meta::WitAi::Json::JsonConverter*>  customConverters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonConvert*>(),
                        {"SerializeClass", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::ArrayW<::Meta::WitAi::Json::JsonConverter*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Json::WitResponseClass*>(nullptr, ___internal_method, inType, inObject, log, customConverters);
}
inline ::System::Collections::Generic::List_1<::Meta::WitAi::Json::IJsonVariableInfo*>* Meta::WitAi::Json::JsonConvert::GetVarInfos(::System::Type*  forType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonConvert*>(),
                        {"GetVarInfos", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Meta::WitAi::Json::IJsonVariableInfo*>*>(nullptr, ___internal_method, forType);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::Meta::WitAi::Json::IJsonVariableInfo*>* Meta::WitAi::Json::JsonConvert::GetVarDictionary(::System::Type*  forType, ::System::Text::StringBuilder*  log)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonConvert*>(),
                        {"GetVarDictionary", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::Meta::WitAi::Json::IJsonVariableInfo*>*>(nullptr, ___internal_method, forType, log);
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Json::JsonConvert::JsonConvert()   {
}
template<typename IN_TYPE>
constexpr IN_TYPE& Meta::WitAi::Json::JsonConvert___c__DisplayClass8_0_1<IN_TYPE>::__cordl_internal_get_result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
template<typename IN_TYPE>
constexpr IN_TYPE const& Meta::WitAi::Json::JsonConvert___c__DisplayClass8_0_1<IN_TYPE>::__cordl_internal_get_result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
template<typename IN_TYPE>
constexpr void Meta::WitAi::Json::JsonConvert___c__DisplayClass8_0_1<IN_TYPE>::__cordl_internal_set_result(IN_TYPE  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___result = value;
}
template<typename IN_TYPE>
constexpr ::StringW& Meta::WitAi::Json::JsonConvert___c__DisplayClass8_0_1<IN_TYPE>::__cordl_internal_get_jsonString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jsonString;
}
template<typename IN_TYPE>
constexpr ::StringW const& Meta::WitAi::Json::JsonConvert___c__DisplayClass8_0_1<IN_TYPE>::__cordl_internal_get_jsonString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jsonString;
}
template<typename IN_TYPE>
constexpr void Meta::WitAi::Json::JsonConvert___c__DisplayClass8_0_1<IN_TYPE>::__cordl_internal_set_jsonString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jsonString = value;
}
template<typename IN_TYPE>
constexpr ::ArrayW<::Meta::WitAi::Json::JsonConverter*>& Meta::WitAi::Json::JsonConvert___c__DisplayClass8_0_1<IN_TYPE>::__cordl_internal_get_customConverters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customConverters;
}
template<typename IN_TYPE>
constexpr ::ArrayW<::Meta::WitAi::Json::JsonConverter*> const& Meta::WitAi::Json::JsonConvert___c__DisplayClass8_0_1<IN_TYPE>::__cordl_internal_get_customConverters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customConverters;
}
template<typename IN_TYPE>
constexpr void Meta::WitAi::Json::JsonConvert___c__DisplayClass8_0_1<IN_TYPE>::__cordl_internal_set_customConverters(::ArrayW<::Meta::WitAi::Json::JsonConverter*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customConverters = value;
}
template<typename IN_TYPE>
constexpr bool& Meta::WitAi::Json::JsonConvert___c__DisplayClass8_0_1<IN_TYPE>::__cordl_internal_get_suppressWarnings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___suppressWarnings;
}
template<typename IN_TYPE>
constexpr bool const& Meta::WitAi::Json::JsonConvert___c__DisplayClass8_0_1<IN_TYPE>::__cordl_internal_get_suppressWarnings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___suppressWarnings;
}
template<typename IN_TYPE>
constexpr void Meta::WitAi::Json::JsonConvert___c__DisplayClass8_0_1<IN_TYPE>::__cordl_internal_set_suppressWarnings(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___suppressWarnings = value;
}
template<typename IN_TYPE>
inline void Meta::WitAi::Json::JsonConvert___c__DisplayClass8_0_1<IN_TYPE>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonConvert___c__DisplayClass8_0_1<IN_TYPE>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename IN_TYPE>
inline IN_TYPE Meta::WitAi::Json::JsonConvert___c__DisplayClass8_0_1<IN_TYPE>::_DeserializeObjectAsync_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonConvert___c__DisplayClass8_0_1<IN_TYPE>*>(),
                        {"<DeserializeObjectAsync>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<IN_TYPE>(this, ___internal_method);
}
template<typename IN_TYPE>
inline ::Meta::WitAi::Json::JsonConvert___c__DisplayClass8_0_1<IN_TYPE>* Meta::WitAi::Json::JsonConvert___c__DisplayClass8_0_1<IN_TYPE>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Json::JsonConvert___c__DisplayClass8_0_1<IN_TYPE>*>());
}
// Ctor Parameters []
template<typename IN_TYPE>
constexpr ::Meta::WitAi::Json::JsonConvert___c__DisplayClass8_0_1<IN_TYPE>::JsonConvert___c__DisplayClass8_0_1()   {
}
//  Writing Method size for method: ::Meta::WitAi::Json::JsonConvert___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Json::JsonConvert___c::*)()>(&::Meta::WitAi::Json::JsonConvert___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e441e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonConvert___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Json::JsonConvert___c._DeserializeEnum_b__17_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Json::JsonConvert___c::*)(::System::Reflection::MethodInfo*)>(&::Meta::WitAi::Json::JsonConvert___c::_DeserializeEnum_b__17_0)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9e441e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonConvert___c*>(),
                        {"<DeserializeEnum>b__17_0", {}, {::i2c::type_of<::System::Reflection::MethodInfo*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::WitAi::Json::JsonConvert___c::setStaticF___9(::Meta::WitAi::Json::JsonConvert___c*  value)  {
::cordl_internals::setStaticField<::Meta::WitAi::Json::JsonConvert___c*, "<>9", ::Meta::WitAi::Json::JsonConvert___c*>(std::forward<::Meta::WitAi::Json::JsonConvert___c*>(value));
}
inline ::Meta::WitAi::Json::JsonConvert___c* Meta::WitAi::Json::JsonConvert___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Meta::WitAi::Json::JsonConvert___c*, "<>9", ::Meta::WitAi::Json::JsonConvert___c*>();
}
inline void Meta::WitAi::Json::JsonConvert___c::setStaticF___9__17_0(::System::Predicate_1<::System::Reflection::MethodInfo*>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::System::Reflection::MethodInfo*>*, "<>9__17_0", ::Meta::WitAi::Json::JsonConvert___c*>(std::forward<::System::Predicate_1<::System::Reflection::MethodInfo*>*>(value));
}
inline ::System::Predicate_1<::System::Reflection::MethodInfo*>* Meta::WitAi::Json::JsonConvert___c::getStaticF___9__17_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::System::Reflection::MethodInfo*>*, "<>9__17_0", ::Meta::WitAi::Json::JsonConvert___c*>();
}
inline void Meta::WitAi::Json::JsonConvert___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonConvert___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::WitAi::Json::JsonConvert___c::_DeserializeEnum_b__17_0(::System::Reflection::MethodInfo*  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Json::JsonConvert___c*>(),
                        {"<DeserializeEnum>b__17_0", {}, {::i2c::type_of<::System::Reflection::MethodInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, method);
}
inline ::Meta::WitAi::Json::JsonConvert___c* Meta::WitAi::Json::JsonConvert___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Json::JsonConvert___c*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Json::JsonConvert___c::JsonConvert___c()   {
}
