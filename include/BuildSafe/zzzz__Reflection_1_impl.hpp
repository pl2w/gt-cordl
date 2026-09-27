#pragma once
// IWYU pragma private; include "BuildSafe/Reflection_1.hpp"
#include "System/Reflection/zzzz__EventInfo_impl.hpp"
#include "System/Reflection/zzzz__FieldInfo_impl.hpp"
#include "System/Reflection/zzzz__MethodInfo_impl.hpp"
#include "System/Reflection/zzzz__PropertyInfo_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BuildSafe/zzzz__Reflection_1_def.hpp"
#include "System/Reflection/zzzz__EventInfo_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
template<typename T>
inline void BuildSafe::Reflection_1<T>::setStaticF_gCachedType(::System::Type*  value)  {
::cordl_internals::setStaticField<::System::Type*, "gCachedType", ::BuildSafe::Reflection_1<T>*>(std::forward<::System::Type*>(value));
}
template<typename T>
inline ::System::Type* BuildSafe::Reflection_1<T>::getStaticF_gCachedType()  {
return ::cordl_internals::getStaticField<::System::Type*, "gCachedType", ::BuildSafe::Reflection_1<T>*>();
}
template<typename T>
inline void BuildSafe::Reflection_1<T>::setStaticF_gMethodsCache(::ArrayW<::System::Reflection::MethodInfo*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Reflection::MethodInfo*>, "gMethodsCache", ::BuildSafe::Reflection_1<T>*>(std::forward<::ArrayW<::System::Reflection::MethodInfo*>>(value));
}
template<typename T>
inline ::ArrayW<::System::Reflection::MethodInfo*> BuildSafe::Reflection_1<T>::getStaticF_gMethodsCache()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Reflection::MethodInfo*>, "gMethodsCache", ::BuildSafe::Reflection_1<T>*>();
}
template<typename T>
inline void BuildSafe::Reflection_1<T>::setStaticF_gFieldsCache(::ArrayW<::System::Reflection::FieldInfo*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Reflection::FieldInfo*>, "gFieldsCache", ::BuildSafe::Reflection_1<T>*>(std::forward<::ArrayW<::System::Reflection::FieldInfo*>>(value));
}
template<typename T>
inline ::ArrayW<::System::Reflection::FieldInfo*> BuildSafe::Reflection_1<T>::getStaticF_gFieldsCache()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Reflection::FieldInfo*>, "gFieldsCache", ::BuildSafe::Reflection_1<T>*>();
}
template<typename T>
inline void BuildSafe::Reflection_1<T>::setStaticF_gPropertiesCache(::ArrayW<::System::Reflection::PropertyInfo*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Reflection::PropertyInfo*>, "gPropertiesCache", ::BuildSafe::Reflection_1<T>*>(std::forward<::ArrayW<::System::Reflection::PropertyInfo*>>(value));
}
template<typename T>
inline ::ArrayW<::System::Reflection::PropertyInfo*> BuildSafe::Reflection_1<T>::getStaticF_gPropertiesCache()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Reflection::PropertyInfo*>, "gPropertiesCache", ::BuildSafe::Reflection_1<T>*>();
}
template<typename T>
inline void BuildSafe::Reflection_1<T>::setStaticF_gEventsCache(::ArrayW<::System::Reflection::EventInfo*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Reflection::EventInfo*>, "gEventsCache", ::BuildSafe::Reflection_1<T>*>(std::forward<::ArrayW<::System::Reflection::EventInfo*>>(value));
}
template<typename T>
inline ::ArrayW<::System::Reflection::EventInfo*> BuildSafe::Reflection_1<T>::getStaticF_gEventsCache()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Reflection::EventInfo*>, "gEventsCache", ::BuildSafe::Reflection_1<T>*>();
}
template<typename T>
inline void BuildSafe::Reflection_1<T>::setStaticF__Type_k__BackingField(::System::Type*  value)  {
::cordl_internals::setStaticField<::System::Type*, "<Type>k__BackingField", ::BuildSafe::Reflection_1<T>*>(std::forward<::System::Type*>(value));
}
template<typename T>
inline ::System::Type* BuildSafe::Reflection_1<T>::getStaticF__Type_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Type*, "<Type>k__BackingField", ::BuildSafe::Reflection_1<T>*>();
}
template<typename T>
inline ::System::Type* BuildSafe::Reflection_1<T>::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::Reflection_1<T>*>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method);
}
template<typename T>
inline ::ArrayW<::System::Reflection::EventInfo*> BuildSafe::Reflection_1<T>::get_Events()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::Reflection_1<T>*>(),
                        {"get_Events", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::EventInfo*>>(nullptr, ___internal_method);
}
template<typename T>
inline ::ArrayW<::System::Reflection::MethodInfo*> BuildSafe::Reflection_1<T>::get_Methods()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::Reflection_1<T>*>(),
                        {"get_Methods", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MethodInfo*>>(nullptr, ___internal_method);
}
template<typename T>
inline ::ArrayW<::System::Reflection::FieldInfo*> BuildSafe::Reflection_1<T>::get_Fields()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::Reflection_1<T>*>(),
                        {"get_Fields", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::FieldInfo*>>(nullptr, ___internal_method);
}
template<typename T>
inline ::ArrayW<::System::Reflection::PropertyInfo*> BuildSafe::Reflection_1<T>::get_Properties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::Reflection_1<T>*>(),
                        {"get_Properties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::PropertyInfo*>>(nullptr, ___internal_method);
}
template<typename T>
inline ::ArrayW<::System::Reflection::EventInfo*> BuildSafe::Reflection_1<T>::PreFetchEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::Reflection_1<T>*>(),
                        {"PreFetchEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::EventInfo*>>(nullptr, ___internal_method);
}
template<typename T>
inline ::ArrayW<::System::Reflection::PropertyInfo*> BuildSafe::Reflection_1<T>::PreFetchProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::Reflection_1<T>*>(),
                        {"PreFetchProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::PropertyInfo*>>(nullptr, ___internal_method);
}
template<typename T>
inline ::ArrayW<::System::Reflection::MethodInfo*> BuildSafe::Reflection_1<T>::PreFetchMethods()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::Reflection_1<T>*>(),
                        {"PreFetchMethods", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MethodInfo*>>(nullptr, ___internal_method);
}
template<typename T>
inline ::ArrayW<::System::Reflection::FieldInfo*> BuildSafe::Reflection_1<T>::PreFetchFields()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BuildSafe::Reflection_1<T>*>(),
                        {"PreFetchFields", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::FieldInfo*>>(nullptr, ___internal_method);
}
// Ctor Parameters []
template<typename T>
constexpr ::BuildSafe::Reflection_1<T>::Reflection_1()   {
}
