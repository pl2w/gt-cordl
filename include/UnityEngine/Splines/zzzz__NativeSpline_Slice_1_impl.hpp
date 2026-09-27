#pragma once
// IWYU pragma private; include "UnityEngine/Splines/NativeSpline_Slice_1.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_impl.hpp"
#include "UnityEngine/Splines/zzzz__NativeSpline_Slice_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
template<typename T>
inline void GlobalNamespace::NativeSpline_Slice_1<T>::_ctor(::Unity::Collections::NativeArray_1<T>  array, int32_t  start, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeSpline_Slice_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array, start, count);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerator_1<T>* GlobalNamespace::NativeSpline_Slice_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeSpline_Slice_1<T>>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(*this, ___internal_method);
}
template<typename T>
inline ::System::Collections::IEnumerator* GlobalNamespace::NativeSpline_Slice_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeSpline_Slice_1<T>>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
template<typename T>
inline int32_t GlobalNamespace::NativeSpline_Slice_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeSpline_Slice_1<T>>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline T GlobalNamespace::NativeSpline_Slice_1<T>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeSpline_Slice_1<T>>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<T>"
template<typename T>
constexpr  GlobalNamespace::NativeSpline_Slice_1<T>::operator ::System::Collections::Generic::IReadOnlyList_1<T>*()  {
return static_cast<::System::Collections::Generic::IReadOnlyList_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IReadOnlyList_1<T>* GlobalNamespace::NativeSpline_Slice_1<T>::i___System__Collections__Generic__IReadOnlyList_1_T_()  {
return static_cast<::System::Collections::Generic::IReadOnlyList_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr  GlobalNamespace::NativeSpline_Slice_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* GlobalNamespace::NativeSpline_Slice_1<T>::i___System__Collections__Generic__IEnumerable_1_T_()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename T>
constexpr  GlobalNamespace::NativeSpline_Slice_1<T>::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename T>
constexpr ::System::Collections::IEnumerable* GlobalNamespace::NativeSpline_Slice_1<T>::i___System__Collections__IEnumerable()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
template<typename T>
constexpr  GlobalNamespace::NativeSpline_Slice_1<T>::operator ::System::Collections::Generic::IReadOnlyCollection_1<T>*()  {
return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<T>* GlobalNamespace::NativeSpline_Slice_1<T>::i___System__Collections__Generic__IReadOnlyCollection_1_T_()  {
return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Slice", ty: "::Unity::Collections::NativeSlice_1<T>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::NativeSpline_Slice_1<T>::NativeSpline_Slice_1(::Unity::Collections::NativeSlice_1<T>  m_Slice) noexcept  {
this->m_Slice = m_Slice;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::NativeSpline_Slice_1<T>::NativeSpline_Slice_1()   {
}
