#pragma once
// IWYU pragma private; include "GorillaTag/GTDirectAssetRef_1.hpp"
#include "GorillaTag/zzzz__GTDirectAssetRef_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
inline T GorillaTag::GTDirectAssetRef_1<T>::get_obj()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTDirectAssetRef_1<T>>(),
                        {"get_obj", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template<typename T>
inline void GorillaTag::GTDirectAssetRef_1<T>::set_obj(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTDirectAssetRef_1<T>>(),
                        {"set_obj", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename T>
inline void GorillaTag::GTDirectAssetRef_1<T>::_ctor(T  theObj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTDirectAssetRef_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, theObj);
}
template<typename T>
inline T GorillaTag::GTDirectAssetRef_1<T>::op_Implicit_T(::GorillaTag::GTDirectAssetRef_1<T>  refObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTDirectAssetRef_1<T>>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GorillaTag::GTDirectAssetRef_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, refObject);
}
template<typename T>
inline ::GorillaTag::GTDirectAssetRef_1<T> GorillaTag::GTDirectAssetRef_1<T>::op_Implicit___GorillaTag__GTDirectAssetRef_1_T_(T  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTDirectAssetRef_1<T>>(),
                        {"op_Implicit", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::GTDirectAssetRef_1<T>>(nullptr, ___internal_method, other);
}
template<typename T>
inline bool GorillaTag::GTDirectAssetRef_1<T>::Equals(T  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTDirectAssetRef_1<T>>(),
                        {"Equals", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template<typename T>
inline bool GorillaTag::GTDirectAssetRef_1<T>::Equals(::System::Object*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::GTDirectAssetRef_1<T>>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template<typename T>
inline int32_t GorillaTag::GTDirectAssetRef_1<T>::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::GTDirectAssetRef_1<T>>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline bool GorillaTag::GTDirectAssetRef_1<T>::op_Equality(::GorillaTag::GTDirectAssetRef_1<T>  left, T  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTDirectAssetRef_1<T>>(),
                        {"op_Equality", {}, {::i2c::type_of<::GorillaTag::GTDirectAssetRef_1<T>>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
template<typename T>
inline bool GorillaTag::GTDirectAssetRef_1<T>::op_Inequality(::GorillaTag::GTDirectAssetRef_1<T>  left, T  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTDirectAssetRef_1<T>>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GorillaTag::GTDirectAssetRef_1<T>>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
/// @brief Convert operator to "::System::IEquatable_1<T>"
template<typename T>
constexpr  GorillaTag::GTDirectAssetRef_1<T>::operator ::System::IEquatable_1<T>*()  {
return static_cast<::System::IEquatable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<T>"
template<typename T>
constexpr ::System::IEquatable_1<T>* GorillaTag::GTDirectAssetRef_1<T>::i___System__IEquatable_1_T_()  {
return static_cast<::System::IEquatable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_obj", ty: "T", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "edAssetPath", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GorillaTag::GTDirectAssetRef_1<T>::GTDirectAssetRef_1(T  _obj, ::StringW  edAssetPath) noexcept  {
this->_obj = _obj;
this->edAssetPath = edAssetPath;
}
// Ctor Parameters []
template<typename T>
constexpr ::GorillaTag::GTDirectAssetRef_1<T>::GTDirectAssetRef_1()   {
}
