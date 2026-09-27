#pragma once
// IWYU pragma private; include "Fusion/FixedArray_1.hpp"
#include "Fusion/zzzz__FixedArray_1_def.hpp"
#include "Fusion/zzzz__FixedArray`1_Enumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
template<typename T>
inline void Fusion::FixedArray_1<T>::setStaticF__stringBuilderCached(::System::Text::StringBuilder*  value)  {
::cordl_internals::setStaticField<::System::Text::StringBuilder*, "_stringBuilderCached", ::Fusion::FixedArray_1<T>>(std::forward<::System::Text::StringBuilder*>(value));
}
template<typename T>
inline ::System::Text::StringBuilder* Fusion::FixedArray_1<T>::getStaticF__stringBuilderCached()  {
return ::cordl_internals::getStaticField<::System::Text::StringBuilder*, "_stringBuilderCached", ::Fusion::FixedArray_1<T>>();
}
template<typename T>
inline int32_t Fusion::FixedArray_1<T>::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FixedArray_1<T>>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline ::by_ref<T> Fusion::FixedArray_1<T>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FixedArray_1<T>>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method, index);
}
template<typename T>
inline void Fusion::FixedArray_1<T>::_ctor(T*  array, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FixedArray_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<T*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array, length);
}
template<typename T>
inline ::ArrayW<T> Fusion::FixedArray_1<T>::ToArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FixedArray_1<T>>(),
                        {"ToArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(*this, ___internal_method);
}
template<typename T>
inline void Fusion::FixedArray_1<T>::CopyTo(::System::Collections::Generic::List_1<T>*  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FixedArray_1<T>>(),
                        {"CopyTo", {}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, list);
}
template<typename T>
inline void Fusion::FixedArray_1<T>::CopyTo(::ArrayW<T>  array, bool  throwIfOverflow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FixedArray_1<T>>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array, throwIfOverflow);
}
template<typename T>
inline ::StringW Fusion::FixedArray_1<T>::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::FixedArray_1<T>>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::FixedArray_1_Enumerator<T> Fusion::FixedArray_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FixedArray_1<T>>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FixedArray_1_Enumerator<T>>(*this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerator_1<T>* Fusion::FixedArray_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FixedArray_1<T>>(),
                        {"System.Collections.Generic.IEnumerable<T>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(*this, ___internal_method);
}
template<typename T>
inline ::System::Collections::IEnumerator* Fusion::FixedArray_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FixedArray_1<T>>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
template<typename T>
inline void Fusion::FixedArray_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FixedArray_1<T>>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void Fusion::FixedArray_1<T>::CopyFrom(::ArrayW<T>  source, int32_t  sourceOffset, int32_t  sourceCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FixedArray_1<T>>(),
                        {"CopyFrom", {}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source, sourceOffset, sourceCount);
}
template<typename T>
inline void Fusion::FixedArray_1<T>::CopyFrom(::System::Collections::Generic::List_1<T>*  source, int32_t  sourceOffset, int32_t  sourceCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FixedArray_1<T>>(),
                        {"CopyFrom", {}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source, sourceOffset, sourceCount);
}
template<typename T>
inline ::StringW Fusion::FixedArray_1<T>::ToListString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FixedArray_1<T>>(),
                        {"ToListString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr  Fusion::FixedArray_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* Fusion::FixedArray_1<T>::i___System__Collections__Generic__IEnumerable_1_T_()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename T>
constexpr  Fusion::FixedArray_1<T>::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename T>
constexpr ::System::Collections::IEnumerable* Fusion::FixedArray_1<T>::i___System__Collections__IEnumerable()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_array", ty: "T*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::Fusion::FixedArray_1<T>::FixedArray_1(T*  _array, int32_t  _length) noexcept  {
this->_array = _array;
this->_length = _length;
}
// Ctor Parameters []
template<typename T>
constexpr ::Fusion::FixedArray_1<T>::FixedArray_1()   {
}
