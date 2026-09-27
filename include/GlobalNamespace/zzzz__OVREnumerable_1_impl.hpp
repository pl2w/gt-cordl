#pragma once
// IWYU pragma private; include "GlobalNamespace/OVREnumerable_1.hpp"
#include "GlobalNamespace/zzzz__OVREnumerable_1_def.hpp"
#include "GlobalNamespace/zzzz__OVREnumerable`1_Enumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
template<typename T>
inline void GlobalNamespace::OVREnumerable_1<T>::_ctor(::System::Collections::Generic::IEnumerable_1<T>*  enumerable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVREnumerable_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, enumerable);
}
template<typename T>
inline ::GlobalNamespace::OVREnumerable_1_Enumerator<T> GlobalNamespace::OVREnumerable_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVREnumerable_1<T>>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVREnumerable_1_Enumerator<T>>(*this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerator_1<T>* GlobalNamespace::OVREnumerable_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVREnumerable_1<T>>(),
                        {"System.Collections.Generic.IEnumerable<T>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(*this, ___internal_method);
}
template<typename T>
inline ::System::Collections::IEnumerator* GlobalNamespace::OVREnumerable_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVREnumerable_1<T>>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
template<typename T>
inline bool GlobalNamespace::OVREnumerable_1<T>::TryGetCount(::by_ref<int32_t>  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVREnumerable_1<T>>(),
                        {"TryGetCount", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, count);
}
template<typename T>
inline ::System::Nullable_1<int32_t> GlobalNamespace::OVREnumerable_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVREnumerable_1<T>>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(*this, ___internal_method);
}
template<typename T>
inline int32_t GlobalNamespace::OVREnumerable_1<T>::GetCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVREnumerable_1<T>>(),
                        {"GetCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr  GlobalNamespace::OVREnumerable_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* GlobalNamespace::OVREnumerable_1<T>::i___System__Collections__Generic__IEnumerable_1_T_()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename T>
constexpr  GlobalNamespace::OVREnumerable_1<T>::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename T>
constexpr ::System::Collections::IEnumerable* GlobalNamespace::OVREnumerable_1<T>::i___System__Collections__IEnumerable()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_enumerable", ty: "::System::Collections::Generic::IEnumerable_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::OVREnumerable_1<T>::OVREnumerable_1(::System::Collections::Generic::IEnumerable_1<T>*  _enumerable) noexcept  {
this->_enumerable = _enumerable;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::OVREnumerable_1<T>::OVREnumerable_1()   {
}
