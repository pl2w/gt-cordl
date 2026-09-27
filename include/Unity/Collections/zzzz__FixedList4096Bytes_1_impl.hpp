#pragma once
// IWYU pragma private; include "Unity/Collections/FixedList4096Bytes_1.hpp"
#include "Unity/Collections/zzzz__FixedBytes4096Align8_impl.hpp"
#include "Unity/Collections/zzzz__FixedList4096Bytes_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__FixedList128Bytes_1_def.hpp"
#include "Unity/Collections/zzzz__FixedList32Bytes_1_def.hpp"
#include "Unity/Collections/zzzz__FixedList512Bytes_1_def.hpp"
#include "Unity/Collections/zzzz__FixedList64Bytes_1_def.hpp"
#include "Unity/Collections/zzzz__IIndexable_1_def.hpp"
#include "Unity/Collections/zzzz__INativeList_1_def.hpp"
template<typename T>
inline uint16_t Unity::Collections::FixedList4096Bytes_1<T>::get_length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
                        {"get_length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method);
}
template<typename T>
inline void Unity::Collections::FixedList4096Bytes_1<T>::set_length(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
                        {"set_length", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename T>
inline uint8_t* Unity::Collections::FixedList4096Bytes_1<T>::get_buffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
                        {"get_buffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t*>(*this, ___internal_method);
}
template<typename T>
inline int32_t Unity::Collections::FixedList4096Bytes_1<T>::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline void Unity::Collections::FixedList4096Bytes_1<T>::set_Length(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
                        {"set_Length", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<T>* Unity::Collections::FixedList4096Bytes_1<T>::get_Elements()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
                        {"get_Elements", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*>(*this, ___internal_method);
}
template<typename T>
inline int32_t Unity::Collections::FixedList4096Bytes_1<T>::get_LengthInBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
                        {"get_LengthInBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline uint8_t* Unity::Collections::FixedList4096Bytes_1<T>::get_Buffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
                        {"get_Buffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t*>(*this, ___internal_method);
}
template<typename T>
inline int32_t Unity::Collections::FixedList4096Bytes_1<T>::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline int32_t Unity::Collections::FixedList4096Bytes_1<T>::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline ::ArrayW<T> Unity::Collections::FixedList4096Bytes_1<T>::ToArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
                        {"ToArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(*this, ___internal_method);
}
template<typename T>
inline int32_t Unity::Collections::FixedList4096Bytes_1<T>::CompareTo(::Unity::Collections::FixedList32Bytes_1<T>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
                        {"CompareTo", {}, {::i2c::type_of<::Unity::Collections::FixedList32Bytes_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
template<typename T>
inline bool Unity::Collections::FixedList4096Bytes_1<T>::Equals(::Unity::Collections::FixedList32Bytes_1<T>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Collections::FixedList32Bytes_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template<typename T>
inline int32_t Unity::Collections::FixedList4096Bytes_1<T>::CompareTo(::Unity::Collections::FixedList64Bytes_1<T>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
                        {"CompareTo", {}, {::i2c::type_of<::Unity::Collections::FixedList64Bytes_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
template<typename T>
inline bool Unity::Collections::FixedList4096Bytes_1<T>::Equals(::Unity::Collections::FixedList64Bytes_1<T>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Collections::FixedList64Bytes_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template<typename T>
inline int32_t Unity::Collections::FixedList4096Bytes_1<T>::CompareTo(::Unity::Collections::FixedList128Bytes_1<T>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
                        {"CompareTo", {}, {::i2c::type_of<::Unity::Collections::FixedList128Bytes_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
template<typename T>
inline bool Unity::Collections::FixedList4096Bytes_1<T>::Equals(::Unity::Collections::FixedList128Bytes_1<T>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Collections::FixedList128Bytes_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template<typename T>
inline int32_t Unity::Collections::FixedList4096Bytes_1<T>::CompareTo(::Unity::Collections::FixedList512Bytes_1<T>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
                        {"CompareTo", {}, {::i2c::type_of<::Unity::Collections::FixedList512Bytes_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
template<typename T>
inline bool Unity::Collections::FixedList4096Bytes_1<T>::Equals(::Unity::Collections::FixedList512Bytes_1<T>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Collections::FixedList512Bytes_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template<typename T>
inline int32_t Unity::Collections::FixedList4096Bytes_1<T>::CompareTo(::Unity::Collections::FixedList4096Bytes_1<T>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
                        {"CompareTo", {}, {::i2c::type_of<::Unity::Collections::FixedList4096Bytes_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
template<typename T>
inline bool Unity::Collections::FixedList4096Bytes_1<T>::Equals(::Unity::Collections::FixedList4096Bytes_1<T>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
                        {"Equals", {}, {::i2c::type_of<::Unity::Collections::FixedList4096Bytes_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template<typename T>
inline bool Unity::Collections::FixedList4096Bytes_1<T>::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
template<typename T>
inline ::System::Collections::IEnumerator* Unity::Collections::FixedList4096Bytes_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerator_1<T>* Unity::Collections::FixedList4096Bytes_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
                        {"System.Collections.Generic.IEnumerable<T>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Collections::INativeList_1<T>"
template<typename T>
constexpr  Unity::Collections::FixedList4096Bytes_1<T>::operator ::Unity::Collections::INativeList_1<T>*()  {
return static_cast<::Unity::Collections::INativeList_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::INativeList_1<T>"
template<typename T>
constexpr ::Unity::Collections::INativeList_1<T>* Unity::Collections::FixedList4096Bytes_1<T>::i___Unity__Collections__INativeList_1_T_()  {
return static_cast<::Unity::Collections::INativeList_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Unity::Collections::IIndexable_1<T>"
template<typename T>
constexpr  Unity::Collections::FixedList4096Bytes_1<T>::operator ::Unity::Collections::IIndexable_1<T>*()  {
return static_cast<::Unity::Collections::IIndexable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::IIndexable_1<T>"
template<typename T>
constexpr ::Unity::Collections::IIndexable_1<T>* Unity::Collections::FixedList4096Bytes_1<T>::i___Unity__Collections__IIndexable_1_T_()  {
return static_cast<::Unity::Collections::IIndexable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr  Unity::Collections::FixedList4096Bytes_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* Unity::Collections::FixedList4096Bytes_1<T>::i___System__Collections__Generic__IEnumerable_1_T_()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename T>
constexpr  Unity::Collections::FixedList4096Bytes_1<T>::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename T>
constexpr ::System::Collections::IEnumerable* Unity::Collections::FixedList4096Bytes_1<T>::i___System__Collections__IEnumerable()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedList32Bytes_1<T>>"
template<typename T>
constexpr  Unity::Collections::FixedList4096Bytes_1<T>::operator ::System::IEquatable_1<::Unity::Collections::FixedList32Bytes_1<T>>*()  {
return static_cast<::System::IEquatable_1<::Unity::Collections::FixedList32Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedList32Bytes_1<T>>"
template<typename T>
constexpr ::System::IEquatable_1<::Unity::Collections::FixedList32Bytes_1<T>>* Unity::Collections::FixedList4096Bytes_1<T>::i___System__IEquatable_1___Unity__Collections__FixedList32Bytes_1_T__()  {
return static_cast<::System::IEquatable_1<::Unity::Collections::FixedList32Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedList32Bytes_1<T>>"
template<typename T>
constexpr  Unity::Collections::FixedList4096Bytes_1<T>::operator ::System::IComparable_1<::Unity::Collections::FixedList32Bytes_1<T>>*()  {
return static_cast<::System::IComparable_1<::Unity::Collections::FixedList32Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedList32Bytes_1<T>>"
template<typename T>
constexpr ::System::IComparable_1<::Unity::Collections::FixedList32Bytes_1<T>>* Unity::Collections::FixedList4096Bytes_1<T>::i___System__IComparable_1___Unity__Collections__FixedList32Bytes_1_T__()  {
return static_cast<::System::IComparable_1<::Unity::Collections::FixedList32Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedList64Bytes_1<T>>"
template<typename T>
constexpr  Unity::Collections::FixedList4096Bytes_1<T>::operator ::System::IEquatable_1<::Unity::Collections::FixedList64Bytes_1<T>>*()  {
return static_cast<::System::IEquatable_1<::Unity::Collections::FixedList64Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedList64Bytes_1<T>>"
template<typename T>
constexpr ::System::IEquatable_1<::Unity::Collections::FixedList64Bytes_1<T>>* Unity::Collections::FixedList4096Bytes_1<T>::i___System__IEquatable_1___Unity__Collections__FixedList64Bytes_1_T__()  {
return static_cast<::System::IEquatable_1<::Unity::Collections::FixedList64Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedList64Bytes_1<T>>"
template<typename T>
constexpr  Unity::Collections::FixedList4096Bytes_1<T>::operator ::System::IComparable_1<::Unity::Collections::FixedList64Bytes_1<T>>*()  {
return static_cast<::System::IComparable_1<::Unity::Collections::FixedList64Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedList64Bytes_1<T>>"
template<typename T>
constexpr ::System::IComparable_1<::Unity::Collections::FixedList64Bytes_1<T>>* Unity::Collections::FixedList4096Bytes_1<T>::i___System__IComparable_1___Unity__Collections__FixedList64Bytes_1_T__()  {
return static_cast<::System::IComparable_1<::Unity::Collections::FixedList64Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedList128Bytes_1<T>>"
template<typename T>
constexpr  Unity::Collections::FixedList4096Bytes_1<T>::operator ::System::IEquatable_1<::Unity::Collections::FixedList128Bytes_1<T>>*()  {
return static_cast<::System::IEquatable_1<::Unity::Collections::FixedList128Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedList128Bytes_1<T>>"
template<typename T>
constexpr ::System::IEquatable_1<::Unity::Collections::FixedList128Bytes_1<T>>* Unity::Collections::FixedList4096Bytes_1<T>::i___System__IEquatable_1___Unity__Collections__FixedList128Bytes_1_T__()  {
return static_cast<::System::IEquatable_1<::Unity::Collections::FixedList128Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedList128Bytes_1<T>>"
template<typename T>
constexpr  Unity::Collections::FixedList4096Bytes_1<T>::operator ::System::IComparable_1<::Unity::Collections::FixedList128Bytes_1<T>>*()  {
return static_cast<::System::IComparable_1<::Unity::Collections::FixedList128Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedList128Bytes_1<T>>"
template<typename T>
constexpr ::System::IComparable_1<::Unity::Collections::FixedList128Bytes_1<T>>* Unity::Collections::FixedList4096Bytes_1<T>::i___System__IComparable_1___Unity__Collections__FixedList128Bytes_1_T__()  {
return static_cast<::System::IComparable_1<::Unity::Collections::FixedList128Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedList512Bytes_1<T>>"
template<typename T>
constexpr  Unity::Collections::FixedList4096Bytes_1<T>::operator ::System::IEquatable_1<::Unity::Collections::FixedList512Bytes_1<T>>*()  {
return static_cast<::System::IEquatable_1<::Unity::Collections::FixedList512Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedList512Bytes_1<T>>"
template<typename T>
constexpr ::System::IEquatable_1<::Unity::Collections::FixedList512Bytes_1<T>>* Unity::Collections::FixedList4096Bytes_1<T>::i___System__IEquatable_1___Unity__Collections__FixedList512Bytes_1_T__()  {
return static_cast<::System::IEquatable_1<::Unity::Collections::FixedList512Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedList512Bytes_1<T>>"
template<typename T>
constexpr  Unity::Collections::FixedList4096Bytes_1<T>::operator ::System::IComparable_1<::Unity::Collections::FixedList512Bytes_1<T>>*()  {
return static_cast<::System::IComparable_1<::Unity::Collections::FixedList512Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedList512Bytes_1<T>>"
template<typename T>
constexpr ::System::IComparable_1<::Unity::Collections::FixedList512Bytes_1<T>>* Unity::Collections::FixedList4096Bytes_1<T>::i___System__IComparable_1___Unity__Collections__FixedList512Bytes_1_T__()  {
return static_cast<::System::IComparable_1<::Unity::Collections::FixedList512Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedList4096Bytes_1<T>>"
template<typename T>
constexpr  Unity::Collections::FixedList4096Bytes_1<T>::operator ::System::IEquatable_1<::Unity::Collections::FixedList4096Bytes_1<T>>*()  {
return static_cast<::System::IEquatable_1<::Unity::Collections::FixedList4096Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedList4096Bytes_1<T>>"
template<typename T>
constexpr ::System::IEquatable_1<::Unity::Collections::FixedList4096Bytes_1<T>>* Unity::Collections::FixedList4096Bytes_1<T>::i___System__IEquatable_1___Unity__Collections__FixedList4096Bytes_1_T__()  {
return static_cast<::System::IEquatable_1<::Unity::Collections::FixedList4096Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedList4096Bytes_1<T>>"
template<typename T>
constexpr  Unity::Collections::FixedList4096Bytes_1<T>::operator ::System::IComparable_1<::Unity::Collections::FixedList4096Bytes_1<T>>*()  {
return static_cast<::System::IComparable_1<::Unity::Collections::FixedList4096Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedList4096Bytes_1<T>>"
template<typename T>
constexpr ::System::IComparable_1<::Unity::Collections::FixedList4096Bytes_1<T>>* Unity::Collections::FixedList4096Bytes_1<T>::i___System__IComparable_1___Unity__Collections__FixedList4096Bytes_1_T__()  {
return static_cast<::System::IComparable_1<::Unity::Collections::FixedList4096Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "data", ty: "::Unity::Collections::FixedBytes4096Align8", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::Unity::Collections::FixedList4096Bytes_1<T>::FixedList4096Bytes_1(::Unity::Collections::FixedBytes4096Align8  data) noexcept  {
this->data = data;
}
// Ctor Parameters []
template<typename T>
constexpr ::Unity::Collections::FixedList4096Bytes_1<T>::FixedList4096Bytes_1()   {
}
