#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/ExposedRegistrationList_1.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__SmallRegistrationList_1_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__ExposedRegistrationList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__IXRFilterList_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
template<typename T>
inline int32_t UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>::get_count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>*>(),
                        {"get_count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>::Add(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>*>(),
                        {"Add", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename T>
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>::Remove(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>*>(),
                        {"Remove", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>::MoveTo(T  item, int32_t  newIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>*>(),
                        {"MoveTo", {}, {::i2c::type_of<T>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item, newIndex);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>::GetAll(::System::Collections::Generic::List_1<T>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>*>(),
                        {"GetAll", {}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, results);
}
template<typename T>
inline T UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>::GetAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>*>(),
                        {"GetAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, index);
}
template<typename T>
template<typename TObject>
requires(::cordl_internals::type_constraint<TObject, ::UnityEngine::Object*>)
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>::RegisterReferences(::System::Collections::Generic::List_1<TObject>*  references, ::UnityEngine::Object*  context)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>*>(),
                    {"RegisterReferences", {::i2c::class_of<TObject>()}, {::i2c::type_of<::System::Collections::Generic::List_1<TObject>*>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TObject>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, references, context);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>* UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<T>"
template<typename T>
constexpr  UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>::operator ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<T>*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<T>"
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<T>* UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>::i___UnityEngine__XR__Interaction__Toolkit__Filtering__IXRFilterList_1_T_() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<T>::ExposedRegistrationList_1()   {
}
