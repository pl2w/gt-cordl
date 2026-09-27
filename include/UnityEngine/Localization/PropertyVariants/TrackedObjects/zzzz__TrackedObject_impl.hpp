#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedObjects/TrackedObject.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__ITrackedProperty_impl.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedObjects/zzzz__TrackedObject_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedObjects/zzzz__TrackedObject_def.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedProperties/zzzz__ITrackedProperty_def.hpp"
#include "UnityEngine/Localization/zzzz__Locale_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject.get_Target
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::get_Target)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0577e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>(),
                        {"get_Target", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject.set_Target
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::*)(::UnityEngine::Object*)>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::set_Target)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0577e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>(),
                        {"set_Target", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject.get_TrackedProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>* (::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::get_TrackedProperties)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb0529c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>(),
                        {"get_TrackedProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject.CanTrackProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::*)(::StringW)>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::CanTrackProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0577f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>(),
                    {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject.AddTrackedProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::*)(::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*)>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::AddTrackedProperty)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0xb053dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>(),
                    {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject.RemoveTrackedProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::*)(::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*)>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::RemoveTrackedProperty)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xb0577f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>(),
                    {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject.GetTrackedProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty* (::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::*)(::StringW)>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::GetTrackedProperty)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb057948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>(),
                    {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject.CreateCustomTrackedProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty* (::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::*)(::StringW)>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::CreateCustomTrackedProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb0579c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>(),
                    {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject.ApplyLocale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::*)(::UnityEngine::Localization::Locale*, ::UnityEngine::Localization::Locale*)>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::ApplyLocale)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>(),
                    {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject.PostApplyTrackedProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::PostApplyTrackedProperties)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb057774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>(),
                    {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject.OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xb0579c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject.OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xb057bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb056530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::__cordl_internal_get_m_Target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Target;
}
constexpr ::UnityW<::UnityEngine::Object> const& UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::__cordl_internal_get_m_Target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Target;
}
constexpr void UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::__cordl_internal_set_m_Target(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Target = value;
}
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject_TrackedPropertiesCollection*& UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::__cordl_internal_get_m_TrackedProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TrackedProperties;
}
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject_TrackedPropertiesCollection* const& UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::__cordl_internal_get_m_TrackedProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TrackedProperties;
}
constexpr void UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::__cordl_internal_set_m_TrackedProperties(::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject_TrackedPropertiesCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TrackedProperties = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>*& UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::__cordl_internal_get_m_PropertiesLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PropertiesLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>* const& UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::__cordl_internal_get_m_PropertiesLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PropertiesLookup;
}
constexpr void UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::__cordl_internal_set_m_PropertiesLookup(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PropertiesLookup = value;
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::get_Target()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>(),
                        {"get_Target", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::set_Target(::UnityEngine::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>(),
                        {"set_Target", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>* UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::get_TrackedProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>(),
                        {"get_TrackedProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>*>(this, ___internal_method);
}
inline bool UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::CanTrackProperty(::StringW  propertyPath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, propertyPath);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*> && ::cordl_internals::default_constructor_constraint<T>)
inline T UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::AddTrackedProperty(::StringW  propertyPath)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>(),
                    {"AddTrackedProperty", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, propertyPath);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::AddTrackedProperty(::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*  trackedProperty)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trackedProperty);
}
inline bool UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::RemoveTrackedProperty(::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*  trackedProperty)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, trackedProperty);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*> && ::cordl_internals::default_constructor_constraint<T>)
inline T UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::GetTrackedProperty(::StringW  propertyPath, bool  create)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>(),
                    {"GetTrackedProperty", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, propertyPath, create);
}
inline ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty* UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::GetTrackedProperty(::StringW  propertyPath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>(this, ___internal_method, propertyPath);
}
inline ::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty* UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::CreateCustomTrackedProperty(::StringW  propertyPath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>(this, ___internal_method, propertyPath);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::ApplyLocale(::UnityEngine::Localization::Locale*  variantLocale, ::UnityEngine::Localization::Locale*  defaultLocale)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(this, ___internal_method, variantLocale, defaultLocale);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::PostApplyTrackedProperties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject* UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject::TrackedObject()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject_TrackedPropertiesCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject_TrackedPropertiesCollection::*)()>(&::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject_TrackedPropertiesCollection::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb057dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject_TrackedPropertiesCollection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>*& UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject_TrackedPropertiesCollection::__cordl_internal_get_items()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___items;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>* const& UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject_TrackedPropertiesCollection::__cordl_internal_get_items() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___items;
}
constexpr void UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject_TrackedPropertiesCollection::__cordl_internal_set_items(::System::Collections::Generic::List_1<::UnityEngine::Localization::PropertyVariants::TrackedProperties::ITrackedProperty*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___items = value;
}
inline void UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject_TrackedPropertiesCollection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject_TrackedPropertiesCollection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject_TrackedPropertiesCollection* UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject_TrackedPropertiesCollection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject_TrackedPropertiesCollection*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::PropertyVariants::TrackedObjects::TrackedObject_TrackedPropertiesCollection::TrackedObject_TrackedPropertiesCollection()   {
}
