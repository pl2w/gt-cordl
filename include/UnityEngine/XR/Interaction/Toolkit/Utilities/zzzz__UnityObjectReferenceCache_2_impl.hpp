#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/UnityObjectReferenceCache_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__UnityObjectReferenceCache_2_def.hpp"
template<typename TInterface,typename TObject>
constexpr TObject& UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<TInterface,TObject>::__cordl_internal_get_m_CapturedObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CapturedObject;
}
template<typename TInterface,typename TObject>
constexpr TObject const& UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<TInterface,TObject>::__cordl_internal_get_m_CapturedObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CapturedObject;
}
template<typename TInterface,typename TObject>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<TInterface,TObject>::__cordl_internal_set_m_CapturedObject(TObject  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CapturedObject = value;
}
template<typename TInterface,typename TObject>
constexpr TInterface& UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<TInterface,TObject>::__cordl_internal_get_m_Interface()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Interface;
}
template<typename TInterface,typename TObject>
constexpr TInterface const& UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<TInterface,TObject>::__cordl_internal_get_m_Interface() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Interface;
}
template<typename TInterface,typename TObject>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<TInterface,TObject>::__cordl_internal_set_m_Interface(TInterface  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Interface = value;
}
template<typename TInterface,typename TObject>
inline TInterface UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<TInterface,TObject>::Get(TObject  field)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<TInterface,TObject>*>(),
                        {"Get", {}, {::i2c::type_of<TObject>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TInterface>(this, ___internal_method, field);
}
template<typename TInterface,typename TObject>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<TInterface,TObject>::Set(::by_ref<TObject>  field, TInterface  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<TInterface,TObject>*>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<TObject>>(), ::i2c::type_of<TInterface>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, field, value);
}
template<typename TInterface,typename TObject>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<TInterface,TObject>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<TInterface,TObject>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInterface,typename TObject>
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<TInterface,TObject>* UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<TInterface,TObject>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<TInterface,TObject>*>());
}
// Ctor Parameters []
template<typename TInterface,typename TObject>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<TInterface,TObject>::UnityObjectReferenceCache_2()   {
}
