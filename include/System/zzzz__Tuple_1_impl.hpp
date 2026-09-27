#pragma once
// IWYU pragma private; include "System/Tuple_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Tuple_1_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/Collections/zzzz__IStructuralComparable_def.hpp"
#include "System/Collections/zzzz__IStructuralEquatable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ITuple_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__ITupleInternal_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T1>
constexpr T1& System::Tuple_1<T1>::__cordl_internal_get_m_Item1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Item1;
}
template<typename T1>
constexpr T1 const& System::Tuple_1<T1>::__cordl_internal_get_m_Item1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Item1;
}
template<typename T1>
constexpr void System::Tuple_1<T1>::__cordl_internal_set_m_Item1(T1  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Item1 = value;
}
template<typename T1>
inline T1 System::Tuple_1<T1>::get_Item1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Tuple_1<T1>*>(),
                        {"get_Item1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T1>(this, ___internal_method);
}
template<typename T1>
inline void System::Tuple_1<T1>::_ctor(T1  item1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Tuple_1<T1>*>(),
                        {".ctor", {}, {::i2c::type_of<T1>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item1);
}
template<typename T1>
inline bool System::Tuple_1<T1>::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Tuple_1<T1>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
template<typename T1>
inline bool System::Tuple_1<T1>::System_Collections_IStructuralEquatable_Equals(::System::Object*  other, ::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Tuple_1<T1>*>(),
                        {"System.Collections.IStructuralEquatable.Equals", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::IEqualityComparer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other, comparer);
}
template<typename T1>
inline int32_t System::Tuple_1<T1>::System_IComparable_CompareTo(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Tuple_1<T1>*>(),
                        {"System.IComparable.CompareTo", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
template<typename T1>
inline int32_t System::Tuple_1<T1>::System_Collections_IStructuralComparable_CompareTo(::System::Object*  other, ::System::Collections::IComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Tuple_1<T1>*>(),
                        {"System.Collections.IStructuralComparable.CompareTo", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::IComparer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, other, comparer);
}
template<typename T1>
inline int32_t System::Tuple_1<T1>::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Tuple_1<T1>*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T1>
inline int32_t System::Tuple_1<T1>::System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Tuple_1<T1>*>(),
                        {"System.Collections.IStructuralEquatable.GetHashCode", {}, {::i2c::type_of<::System::Collections::IEqualityComparer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, comparer);
}
template<typename T1>
inline int32_t System::Tuple_1<T1>::System_ITupleInternal_GetHashCode(::System::Collections::IEqualityComparer*  comparer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Tuple_1<T1>*>(),
                        {"System.ITupleInternal.GetHashCode", {}, {::i2c::type_of<::System::Collections::IEqualityComparer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, comparer);
}
template<typename T1>
inline ::StringW System::Tuple_1<T1>::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Tuple_1<T1>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename T1>
inline ::StringW System::Tuple_1<T1>::System_ITupleInternal_ToString(::System::Text::StringBuilder*  sb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Tuple_1<T1>*>(),
                        {"System.ITupleInternal.ToString", {}, {::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, sb);
}
template<typename T1>
inline int32_t System::Tuple_1<T1>::System_Runtime_CompilerServices_ITuple_get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Tuple_1<T1>*>(),
                        {"System.Runtime.CompilerServices.ITuple.get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T1>
inline ::System::Tuple_1<T1>* System::Tuple_1<T1>::New_ctor(T1  item1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Tuple_1<T1>*>(item1));
}
/// @brief Convert operator to "::System::Collections::IStructuralEquatable"
template<typename T1>
constexpr  System::Tuple_1<T1>::operator ::System::Collections::IStructuralEquatable*() noexcept {
return static_cast<::System::Collections::IStructuralEquatable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IStructuralEquatable"
template<typename T1>
constexpr ::System::Collections::IStructuralEquatable* System::Tuple_1<T1>::i___System__Collections__IStructuralEquatable() noexcept {
return static_cast<::System::Collections::IStructuralEquatable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IStructuralComparable"
template<typename T1>
constexpr  System::Tuple_1<T1>::operator ::System::Collections::IStructuralComparable*() noexcept {
return static_cast<::System::Collections::IStructuralComparable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IStructuralComparable"
template<typename T1>
constexpr ::System::Collections::IStructuralComparable* System::Tuple_1<T1>::i___System__Collections__IStructuralComparable() noexcept {
return static_cast<::System::Collections::IStructuralComparable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable"
template<typename T1>
constexpr  System::Tuple_1<T1>::operator ::System::IComparable*() noexcept {
return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable"
template<typename T1>
constexpr ::System::IComparable* System::Tuple_1<T1>::i___System__IComparable() noexcept {
return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ITupleInternal"
template<typename T1>
constexpr  System::Tuple_1<T1>::operator ::System::ITupleInternal*() noexcept {
return static_cast<::System::ITupleInternal*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ITupleInternal"
template<typename T1>
constexpr ::System::ITupleInternal* System::Tuple_1<T1>::i___System__ITupleInternal() noexcept {
return static_cast<::System::ITupleInternal*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
template<typename T1>
constexpr  System::Tuple_1<T1>::operator ::System::Runtime::CompilerServices::ITuple*() noexcept {
return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ITuple"
template<typename T1>
constexpr ::System::Runtime::CompilerServices::ITuple* System::Tuple_1<T1>::i___System__Runtime__CompilerServices__ITuple() noexcept {
return static_cast<::System::Runtime::CompilerServices::ITuple*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T1>
constexpr ::System::Tuple_1<T1>::Tuple_1()   {
}
