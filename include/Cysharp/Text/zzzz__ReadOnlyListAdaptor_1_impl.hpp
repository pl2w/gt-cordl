#pragma once
// IWYU pragma private; include "Cysharp/Text/ReadOnlyListAdaptor_1.hpp"
#include "Cysharp/Text/zzzz__ReadOnlyListAdaptor_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
template<typename T>
inline void Cysharp::Text::ReadOnlyListAdaptor_1<T>::_ctor(::System::Collections::Generic::IList_1<T>*  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::ReadOnlyListAdaptor_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, list);
}
template<typename T>
inline T Cysharp::Text::ReadOnlyListAdaptor_1<T>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::ReadOnlyListAdaptor_1<T>>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, index);
}
template<typename T>
inline int32_t Cysharp::Text::ReadOnlyListAdaptor_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::ReadOnlyListAdaptor_1<T>>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerator_1<T>* Cysharp::Text::ReadOnlyListAdaptor_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::ReadOnlyListAdaptor_1<T>>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(*this, ___internal_method);
}
template<typename T>
inline ::System::Collections::IEnumerator* Cysharp::Text::ReadOnlyListAdaptor_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Text::ReadOnlyListAdaptor_1<T>>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<T>"
template<typename T>
constexpr  Cysharp::Text::ReadOnlyListAdaptor_1<T>::operator ::System::Collections::Generic::IReadOnlyList_1<T>*()  {
return static_cast<::System::Collections::Generic::IReadOnlyList_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IReadOnlyList_1<T>* Cysharp::Text::ReadOnlyListAdaptor_1<T>::i___System__Collections__Generic__IReadOnlyList_1_T_()  {
return static_cast<::System::Collections::Generic::IReadOnlyList_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr  Cysharp::Text::ReadOnlyListAdaptor_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* Cysharp::Text::ReadOnlyListAdaptor_1<T>::i___System__Collections__Generic__IEnumerable_1_T_()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename T>
constexpr  Cysharp::Text::ReadOnlyListAdaptor_1<T>::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename T>
constexpr ::System::Collections::IEnumerable* Cysharp::Text::ReadOnlyListAdaptor_1<T>::i___System__Collections__IEnumerable()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
template<typename T>
constexpr  Cysharp::Text::ReadOnlyListAdaptor_1<T>::operator ::System::Collections::Generic::IReadOnlyCollection_1<T>*()  {
return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<T>* Cysharp::Text::ReadOnlyListAdaptor_1<T>::i___System__Collections__Generic__IReadOnlyCollection_1_T_()  {
return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_list", ty: "::System::Collections::Generic::IList_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::Cysharp::Text::ReadOnlyListAdaptor_1<T>::ReadOnlyListAdaptor_1(::System::Collections::Generic::IList_1<T>*  _list) noexcept  {
this->_list = _list;
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Text::ReadOnlyListAdaptor_1<T>::ReadOnlyListAdaptor_1()   {
}
