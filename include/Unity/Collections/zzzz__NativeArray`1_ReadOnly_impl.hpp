#pragma once
// IWYU pragma private; include "Unity/Collections/NativeArray`1_ReadOnly.hpp"
#include "Unity/Collections/zzzz__NativeArray`1_ReadOnly_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray`1_ReadOnly_Enumerator_def.hpp"
template<typename T>
inline void GlobalNamespace::NativeArray_1_ReadOnly<T>::_ctor(void*  buffer, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeArray_1_ReadOnly<T>>(),
                        {".ctor", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, buffer, length);
}
template<typename T>
inline int32_t GlobalNamespace::NativeArray_1_ReadOnly<T>::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeArray_1_ReadOnly<T>>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline T GlobalNamespace::NativeArray_1_ReadOnly<T>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeArray_1_ReadOnly<T>>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, index);
}
template<typename T>
inline ::by_ref<T> GlobalNamespace::NativeArray_1_ReadOnly<T>::UnsafeElementAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeArray_1_ReadOnly<T>>(),
                        {"UnsafeElementAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method, index);
}
template<typename T>
inline ::GlobalNamespace::ReadOnly_NativeArray_1_Enumerator<T> GlobalNamespace::NativeArray_1_ReadOnly<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeArray_1_ReadOnly<T>>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ReadOnly_NativeArray_1_Enumerator<T>>(*this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerator_1<T>* GlobalNamespace::NativeArray_1_ReadOnly<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeArray_1_ReadOnly<T>>(),
                        {"System.Collections.Generic.IEnumerable<T>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(*this, ___internal_method);
}
template<typename T>
inline ::System::Collections::IEnumerator* GlobalNamespace::NativeArray_1_ReadOnly<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeArray_1_ReadOnly<T>>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
template<typename T>
inline ::System::ReadOnlySpan_1<T> GlobalNamespace::NativeArray_1_ReadOnly<T>::AsReadOnlySpan()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeArray_1_ReadOnly<T>>(),
                        {"AsReadOnlySpan", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<T>>(*this, ___internal_method);
}
template<typename T>
inline ::System::ReadOnlySpan_1<T> GlobalNamespace::NativeArray_1_ReadOnly<T>::op_Implicit___System__ReadOnlySpan_1_T_(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<T>>  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeArray_1_ReadOnly<T>>(),
                        {"op_Implicit", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::NativeArray_1_ReadOnly<T>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<T>>(nullptr, ___internal_method, source);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr  GlobalNamespace::NativeArray_1_ReadOnly<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* GlobalNamespace::NativeArray_1_ReadOnly<T>::i___System__Collections__Generic__IEnumerable_1_T_()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename T>
constexpr  GlobalNamespace::NativeArray_1_ReadOnly<T>::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename T>
constexpr ::System::Collections::IEnumerable* GlobalNamespace::NativeArray_1_ReadOnly<T>::i___System__Collections__IEnumerable()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::NativeArray_1_ReadOnly<T>::NativeArray_1_ReadOnly(void*  m_Buffer, int32_t  m_Length) noexcept  {
this->m_Buffer = m_Buffer;
this->m_Length = m_Length;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::NativeArray_1_ReadOnly<T>::NativeArray_1_ReadOnly()   {
}
