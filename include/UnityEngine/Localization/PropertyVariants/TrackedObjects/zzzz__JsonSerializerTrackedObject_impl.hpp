#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedObjects/JsonSerializerTrackedObject.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedObjects/zzzz__JsonSerializerTrackedObject_ApplyChangesMethod_impl.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedObjects/zzzz__TrackedObject_impl.hpp"
#include "UnityEngine/Localization/zzzz__LocaleIdentifier_impl.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedObjects/zzzz__JsonSerializerTrackedObject_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JContainer_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JObject_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JValue_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedObjects/zzzz__JsonSerializerTrackedObject_ApplyChangesMethod_def.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedObjects/zzzz__JsonSerializerTrackedObject_ArrayResult_def.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedObjects/zzzz__JsonSerializerTrackedObject_def.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__ArraySizeTrackedProperty_def.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__ITrackedProperty_def.hpp"
#include "UnityEngine/Localization/zzzz__LocaleIdentifier_def.hpp"
#include "UnityEngine/Localization/zzzz__Locale_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject.get_UpdateType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::JsonSerializerTrackedObject_ApplyChangesMethod (::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject::get_UpdateType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb053c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject*>(),
                        {"get_UpdateType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject.set_UpdateType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject::*)(::GlobalNamespace::JsonSerializerTrackedObject_ApplyChangesMethod)>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject::set_UpdateType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb053c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject*>(),
                        {"set_UpdateType", {}, {::i2c::type_of<::GlobalNamespace::JsonSerializerTrackedObject_ApplyChangesMethod>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject.AddTrackedProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject::*)(::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*)>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject::AddTrackedProperty)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xb053c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject*>(),
                    {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject.ApplyLocale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject::*)(::UnityEngine::Localization::Locale*, ::UnityEngine::Localization::Locale*)>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject::ApplyLocale)> {
  constexpr static std::size_t size = 0x15e4;
  constexpr static std::size_t addrs = 0xb0540f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject*>(),
                    {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject.ApplyArraySizes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject::*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ArraySizeTrackedProperty*>*, ::Newtonsoft::Json::Linq::JObject*, ::UnityEngine::Localization::LocaleIdentifier, ::UnityEngine::Localization::LocaleIdentifier)>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject::ApplyArraySizes)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0xb055bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject*>(),
                        {"ApplyArraySizes", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ArraySizeTrackedProperty*>*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JObject*>(), ::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>(), ::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject.ApplyJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject::*)(::Newtonsoft::Json::Linq::JObject*)>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject::ApplyJson)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb056060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject*>(),
                        {"ApplyJson", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject.GetNextArrayItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::JsonSerializerTrackedObject_ArrayResult (*)(::StringW, int32_t)>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject::GetNextArrayItem)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xb0560a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject*>(),
                        {"GetNextArrayItem", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject.GetPropertyFromPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Linq::JToken* (*)(::StringW, ::Newtonsoft::Json::Linq::JContainer*)>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject::GetPropertyFromPath)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0xb0556dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject*>(),
                        {"GetPropertyFromPath", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb05652c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::JsonSerializerTrackedObject_ApplyChangesMethod& UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject::__cordl_internal_get_m_UpdateType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdateType;
}
constexpr ::GlobalNamespace::JsonSerializerTrackedObject_ApplyChangesMethod const& UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject::__cordl_internal_get_m_UpdateType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdateType;
}
constexpr void UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject::__cordl_internal_set_m_UpdateType(::GlobalNamespace::JsonSerializerTrackedObject_ApplyChangesMethod  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UpdateType = value;
}
inline ::GlobalNamespace::JsonSerializerTrackedObject_ApplyChangesMethod UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject::get_UpdateType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject*>(),
                        {"get_UpdateType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::JsonSerializerTrackedObject_ApplyChangesMethod>(this, ___internal_method);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject::set_UpdateType(::GlobalNamespace::JsonSerializerTrackedObject_ApplyChangesMethod  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject*>(),
                        {"set_UpdateType", {}, {::i2c::type_of<::GlobalNamespace::JsonSerializerTrackedObject_ApplyChangesMethod>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject::AddTrackedProperty(::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*  trackedProperty)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trackedProperty);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject::ApplyLocale(::UnityEngine::Localization::Locale*  variantLocale, ::UnityEngine::Localization::Locale*  defaultLocale)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(this, ___internal_method, variantLocale, defaultLocale);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject::ApplyArraySizes(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ArraySizeTrackedProperty*>*  arraySizes, ::Newtonsoft::Json::Linq::JObject*  jsonObject, ::UnityEngine::Localization::LocaleIdentifier  variantLocale, ::UnityEngine::Localization::LocaleIdentifier  defaultLocale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject*>(),
                        {"ApplyArraySizes", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ArraySizeTrackedProperty*>*>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JObject*>(), ::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>(), ::i2c::type_of<::UnityEngine::Localization::LocaleIdentifier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arraySizes, jsonObject, variantLocale, defaultLocale);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject::ApplyJson(::Newtonsoft::Json::Linq::JObject*  jsonObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject*>(),
                        {"ApplyJson", {}, {::i2c::type_of<::Newtonsoft::Json::Linq::JObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jsonObject);
}
inline ::GlobalNamespace::JsonSerializerTrackedObject_ArrayResult UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject::GetNextArrayItem(::StringW  path, int32_t  startIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject*>(),
                        {"GetNextArrayItem", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::JsonSerializerTrackedObject_ArrayResult>(nullptr, ___internal_method, path, startIndex);
}
inline ::Newtonsoft::Json::Linq::JToken* UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject::GetPropertyFromPath(::StringW  path, ::Newtonsoft::Json::Linq::JContainer*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject*>(),
                        {"GetPropertyFromPath", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::Linq::JContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::JToken*>(nullptr, ___internal_method, path, obj);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject* UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject::JsonSerializerTrackedObject()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject___c__DisplayClass8_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject___c__DisplayClass8_0::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject___c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0556d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject___c__DisplayClass8_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject___c__DisplayClass8_0._ApplyLocale_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject___c__DisplayClass8_0::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>)>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject___c__DisplayClass8_0::_ApplyLocale_b__0)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0xb056d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject___c__DisplayClass8_0*>(),
                        {"<ApplyLocale>b__0", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject*& UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject___c__DisplayClass8_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject* const& UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject___c__DisplayClass8_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject___c__DisplayClass8_0::__cordl_internal_set___4__this(::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ArraySizeTrackedProperty*>*& UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject___c__DisplayClass8_0::__cordl_internal_get_arraySizes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arraySizes;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ArraySizeTrackedProperty*>* const& UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject___c__DisplayClass8_0::__cordl_internal_get_arraySizes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arraySizes;
}
constexpr void UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject___c__DisplayClass8_0::__cordl_internal_set_arraySizes(::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ArraySizeTrackedProperty*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___arraySizes = value;
}
constexpr ::Newtonsoft::Json::Linq::JObject*& UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject___c__DisplayClass8_0::__cordl_internal_get_jsonObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jsonObject;
}
constexpr ::Newtonsoft::Json::Linq::JObject* const& UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject___c__DisplayClass8_0::__cordl_internal_get_jsonObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jsonObject;
}
constexpr void UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject___c__DisplayClass8_0::__cordl_internal_set_jsonObject(::Newtonsoft::Json::Linq::JObject*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jsonObject = value;
}
constexpr ::UnityW<::UnityEngine::Localization::Locale>& UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject___c__DisplayClass8_0::__cordl_internal_get_variantLocale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___variantLocale;
}
constexpr ::UnityW<::UnityEngine::Localization::Locale> const& UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject___c__DisplayClass8_0::__cordl_internal_get_variantLocale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___variantLocale;
}
constexpr void UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject___c__DisplayClass8_0::__cordl_internal_set_variantLocale(::UnityW<::UnityEngine::Localization::Locale>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___variantLocale = value;
}
constexpr ::UnityEngine::Localization::LocaleIdentifier& UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject___c__DisplayClass8_0::__cordl_internal_get_defaultLocaleIdentifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultLocaleIdentifier;
}
constexpr ::UnityEngine::Localization::LocaleIdentifier const& UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject___c__DisplayClass8_0::__cordl_internal_get_defaultLocaleIdentifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultLocaleIdentifier;
}
constexpr void UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject___c__DisplayClass8_0::__cordl_internal_set_defaultLocaleIdentifier(::UnityEngine::Localization::LocaleIdentifier  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultLocaleIdentifier = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject___c__DisplayClass8_0::__cordl_internal_get_asyncOperations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOperations;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const& UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject___c__DisplayClass8_0::__cordl_internal_get_asyncOperations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOperations;
}
constexpr void UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject___c__DisplayClass8_0::__cordl_internal_set_asyncOperations(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___asyncOperations = value;
}
inline void UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject___c__DisplayClass8_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject___c__DisplayClass8_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject___c__DisplayClass8_0::_ApplyLocale_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  res)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject___c__DisplayClass8_0*>(),
                        {"<ApplyLocale>b__0", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, res);
}
inline ::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject___c__DisplayClass8_0* UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject___c__DisplayClass8_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject___c__DisplayClass8_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject___c__DisplayClass8_0::JsonSerializerTrackedObject___c__DisplayClass8_0()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonObjectOperation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonObjectOperation::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonObjectOperation::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb056950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonObjectOperation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonObjectOperation.OnAssetLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonObjectOperation::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Object>>)>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonObjectOperation::OnAssetLoaded)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xb0569e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonObjectOperation*>(),
                        {"OnAssetLoaded", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Object>>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Linq::JValue*& UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonObjectOperation::__cordl_internal_get_jsonValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jsonValue;
}
constexpr ::Newtonsoft::Json::Linq::JValue* const& UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonObjectOperation::__cordl_internal_get_jsonValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jsonValue;
}
constexpr void UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonObjectOperation::__cordl_internal_set_jsonValue(::Newtonsoft::Json::Linq::JValue*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jsonValue = value;
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Object>>>*& UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonObjectOperation::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Object>>>* const& UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonObjectOperation::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonObjectOperation::__cordl_internal_set_callback(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Object>>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
inline void UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonObjectOperation::setStaticF_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonObjectOperation*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonObjectOperation*>*, "Pool", ::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonObjectOperation*>(std::forward<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonObjectOperation*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonObjectOperation*>* UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonObjectOperation::getStaticF_Pool()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonObjectOperation*>*, "Pool", ::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonObjectOperation*>();
}
inline void UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonObjectOperation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonObjectOperation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonObjectOperation::OnAssetLoaded(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Object>>  asyncOperationHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonObjectOperation*>(),
                        {"OnAssetLoaded", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Object>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asyncOperationHandle);
}
inline ::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonObjectOperation* UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonObjectOperation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonObjectOperation*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonObjectOperation::JsonSerializerTrackedObject_DeferredJsonObjectOperation()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonObjectOperation_JsonSerializerTrackedObject___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonObjectOperation_JsonSerializerTrackedObject___c::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonObjectOperation_JsonSerializerTrackedObject___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb056ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonObjectOperation_JsonSerializerTrackedObject___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonObjectOperation_JsonSerializerTrackedObject___c.__cctor_b__5_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonObjectOperation* (::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonObjectOperation_JsonSerializerTrackedObject___c::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonObjectOperation_JsonSerializerTrackedObject___c::__cctor_b__5_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb056cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonObjectOperation_JsonSerializerTrackedObject___c*>(),
                        {"<.cctor>b__5_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonObjectOperation_JsonSerializerTrackedObject___c::setStaticF___9(::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonObjectOperation_JsonSerializerTrackedObject___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonObjectOperation_JsonSerializerTrackedObject___c*, "<>9", ::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonObjectOperation_JsonSerializerTrackedObject___c*>(std::forward<::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonObjectOperation_JsonSerializerTrackedObject___c*>(value));
}
inline ::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonObjectOperation_JsonSerializerTrackedObject___c* UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonObjectOperation_JsonSerializerTrackedObject___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonObjectOperation_JsonSerializerTrackedObject___c*, "<>9", ::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonObjectOperation_JsonSerializerTrackedObject___c*>();
}
inline void UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonObjectOperation_JsonSerializerTrackedObject___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonObjectOperation_JsonSerializerTrackedObject___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonObjectOperation* UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonObjectOperation_JsonSerializerTrackedObject___c::__cctor_b__5_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonObjectOperation_JsonSerializerTrackedObject___c*>(),
                        {"<.cctor>b__5_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonObjectOperation*>(this, ___internal_method);
}
inline ::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonObjectOperation_JsonSerializerTrackedObject___c* UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonObjectOperation_JsonSerializerTrackedObject___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonObjectOperation_JsonSerializerTrackedObject___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonObjectOperation_JsonSerializerTrackedObject___c::DeferredJsonObjectOperation_JsonSerializerTrackedObject___c()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonStringOperation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonStringOperation::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonStringOperation::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb0565ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonStringOperation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonStringOperation.OnStringLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonStringOperation::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW>)>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonStringOperation::OnStringLoaded)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb05667c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonStringOperation*>(),
                        {"OnStringLoaded", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Linq::JValue*& UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonStringOperation::__cordl_internal_get_jsonValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jsonValue;
}
constexpr ::Newtonsoft::Json::Linq::JValue* const& UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonStringOperation::__cordl_internal_get_jsonValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jsonValue;
}
constexpr void UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonStringOperation::__cordl_internal_set_jsonValue(::Newtonsoft::Json::Linq::JValue*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jsonValue = value;
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW>>*& UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonStringOperation::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW>>* const& UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonStringOperation::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonStringOperation::__cordl_internal_set_callback(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
inline void UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonStringOperation::setStaticF_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonStringOperation*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonStringOperation*>*, "Pool", ::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonStringOperation*>(std::forward<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonStringOperation*>*>(value));
}
inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonStringOperation*>* UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonStringOperation::getStaticF_Pool()  {
return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonStringOperation*>*, "Pool", ::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonStringOperation*>();
}
inline void UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonStringOperation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonStringOperation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonStringOperation::OnStringLoaded(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW>  asyncOperationHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonStringOperation*>(),
                        {"OnStringLoaded", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asyncOperationHandle);
}
inline ::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonStringOperation* UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonStringOperation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonStringOperation*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonStringOperation::JsonSerializerTrackedObject_DeferredJsonStringOperation()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonStringOperation_JsonSerializerTrackedObject___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonStringOperation_JsonSerializerTrackedObject___c::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonStringOperation_JsonSerializerTrackedObject___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0568f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonStringOperation_JsonSerializerTrackedObject___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonStringOperation_JsonSerializerTrackedObject___c.__cctor_b__5_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonStringOperation* (::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonStringOperation_JsonSerializerTrackedObject___c::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonStringOperation_JsonSerializerTrackedObject___c::__cctor_b__5_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb056900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonStringOperation_JsonSerializerTrackedObject___c*>(),
                        {"<.cctor>b__5_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonStringOperation_JsonSerializerTrackedObject___c::setStaticF___9(::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonStringOperation_JsonSerializerTrackedObject___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonStringOperation_JsonSerializerTrackedObject___c*, "<>9", ::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonStringOperation_JsonSerializerTrackedObject___c*>(std::forward<::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonStringOperation_JsonSerializerTrackedObject___c*>(value));
}
inline ::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonStringOperation_JsonSerializerTrackedObject___c* UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonStringOperation_JsonSerializerTrackedObject___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonStringOperation_JsonSerializerTrackedObject___c*, "<>9", ::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonStringOperation_JsonSerializerTrackedObject___c*>();
}
inline void UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonStringOperation_JsonSerializerTrackedObject___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonStringOperation_JsonSerializerTrackedObject___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonStringOperation* UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonStringOperation_JsonSerializerTrackedObject___c::__cctor_b__5_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonStringOperation_JsonSerializerTrackedObject___c*>(),
                        {"<.cctor>b__5_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::PropertyVariants::TrackedObjects::JsonSerializerTrackedObject_DeferredJsonStringOperation*>(this, ___internal_method);
}
inline ::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonStringOperation_JsonSerializerTrackedObject___c* UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonStringOperation_JsonSerializerTrackedObject___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonStringOperation_JsonSerializerTrackedObject___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedObjects::DeferredJsonStringOperation_JsonSerializerTrackedObject___c::DeferredJsonStringOperation_JsonSerializerTrackedObject___c()   {
}
