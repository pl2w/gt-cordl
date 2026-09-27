#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/Distinct_1.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__AsyncEnumeratorBase_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Distinct_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Distinct_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& Cysharp::Threading::Tasks::Linq::Distinct_1<TSource>::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& Cysharp::Threading::Tasks::Linq::Distinct_1<TSource>::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::Distinct_1<TSource>::__cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
template<typename TSource>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>*& Cysharp::Threading::Tasks::Linq::Distinct_1<TSource>::__cordl_internal_get_comparer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comparer;
}
template<typename TSource>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>* const& Cysharp::Threading::Tasks::Linq::Distinct_1<TSource>::__cordl_internal_get_comparer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comparer;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::Distinct_1<TSource>::__cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___comparer = value;
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::Distinct_1<TSource>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Collections::Generic::IEqualityComparer_1<TSource>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Distinct_1<TSource>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TSource>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, comparer);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* Cysharp::Threading::Tasks::Linq::Distinct_1<TSource>::GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Distinct_1<TSource>*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*>(this, ___internal_method, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::Linq::Distinct_1<TSource>* Cysharp::Threading::Tasks::Linq::Distinct_1<TSource>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Collections::Generic::IEqualityComparer_1<TSource>*  comparer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::Distinct_1<TSource>*>(source, comparer));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
template<typename TSource>
constexpr  Cysharp::Threading::Tasks::Linq::Distinct_1<TSource>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::Distinct_1<TSource>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TSource_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::Linq::Distinct_1<TSource>::Distinct_1()   {
}
template<typename TSource>
constexpr ::System::Collections::Generic::HashSet_1<TSource>*& Cysharp::Threading::Tasks::Linq::Distinct_1__Distinct<TSource>::__cordl_internal_get_set()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___set;
}
template<typename TSource>
constexpr ::System::Collections::Generic::HashSet_1<TSource>* const& Cysharp::Threading::Tasks::Linq::Distinct_1__Distinct<TSource>::__cordl_internal_get_set() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___set;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::Distinct_1__Distinct<TSource>::__cordl_internal_set_set(::System::Collections::Generic::HashSet_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___set = value;
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::Distinct_1__Distinct<TSource>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Collections::Generic::IEqualityComparer_1<TSource>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Distinct_1__Distinct<TSource>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TSource>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, comparer, cancellationToken);
}
template<typename TSource>
inline bool Cysharp::Threading::Tasks::Linq::Distinct_1__Distinct<TSource>::TryMoveNextCore(bool  sourceHasCurrent, ::by_ref<bool>  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Distinct_1__Distinct<TSource>*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sourceHasCurrent, result);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::Linq::Distinct_1__Distinct<TSource>* Cysharp::Threading::Tasks::Linq::Distinct_1__Distinct<TSource>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Collections::Generic::IEqualityComparer_1<TSource>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::Distinct_1__Distinct<TSource>*>(source, comparer, cancellationToken));
}
// Ctor Parameters []
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::Linq::Distinct_1__Distinct<TSource>::Distinct_1__Distinct()   {
}
