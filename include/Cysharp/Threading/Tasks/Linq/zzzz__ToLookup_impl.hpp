#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/ToLookup.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ToLookup_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ToLookup_Lookup`2__CreateAsync_d__6_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ToLookup_Lookup`2__CreateAsync_d__7_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ToLookup_Lookup`2__CreateAsync_d__8_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ToLookup_Lookup`2__CreateAsync_d__9_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ToLookup__ToLookupAsync_d__0_2_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ToLookup__ToLookupAsync_d__1_3_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ToLookup__ToLookupAwaitAsync_d__2_2_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ToLookup__ToLookupAwaitAsync_d__3_3_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ToLookup__ToLookupAwaitWithCancellationAsync_d__4_2_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ToLookup__ToLookupAwaitWithCancellationAsync_d__5_3_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ToLookup_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Linq/zzzz__IGrouping_2_def.hpp"
#include "System/Linq/zzzz__ILookup_2_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TSource>*> Cysharp::Threading::Tasks::Linq::ToLookup::ToLookupAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToLookup*>(),
                    {"ToLookupAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TKey>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TSource>*>>(nullptr, ___internal_method, source, keySelector, comparer, cancellationToken);
}
template<typename TSource,typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TElement>*> Cysharp::Threading::Tasks::Linq::ToLookup::ToLookupAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Func_2<TSource,TElement>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToLookup*>(),
                    {"ToLookupAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TKey>*>(), ::i2c::type_of<::System::Func_2<TSource,TElement>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TElement>*>>(nullptr, ___internal_method, source, keySelector, elementSelector, comparer, cancellationToken);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TSource>*> Cysharp::Threading::Tasks::Linq::ToLookup::ToLookupAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToLookup*>(),
                    {"ToLookupAwaitAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TSource>*>>(nullptr, ___internal_method, source, keySelector, comparer, cancellationToken);
}
template<typename TSource,typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TElement>*> Cysharp::Threading::Tasks::Linq::ToLookup::ToLookupAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToLookup*>(),
                    {"ToLookupAwaitAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TElement>*>>(nullptr, ___internal_method, source, keySelector, elementSelector, comparer, cancellationToken);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TSource>*> Cysharp::Threading::Tasks::Linq::ToLookup::ToLookupAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToLookup*>(),
                    {"ToLookupAwaitWithCancellationAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TSource>*>>(nullptr, ___internal_method, source, keySelector, comparer, cancellationToken);
}
template<typename TSource,typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TElement>*> Cysharp::Threading::Tasks::Linq::ToLookup::ToLookupAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToLookup*>(),
                    {"ToLookupAwaitWithCancellationAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Linq::ILookup_2<TKey,TElement>*>>(nullptr, ___internal_method, source, keySelector, elementSelector, comparer, cancellationToken);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Linq::ToLookup::ToLookup()   {
}
template<typename TKey,typename TElement>
constexpr ::System::Collections::Generic::List_1<TElement>*& Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>::__cordl_internal_get_elements()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elements;
}
template<typename TKey,typename TElement>
constexpr ::System::Collections::Generic::List_1<TElement>* const& Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>::__cordl_internal_get_elements() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elements;
}
template<typename TKey,typename TElement>
constexpr void Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>::__cordl_internal_set_elements(::System::Collections::Generic::List_1<TElement>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elements = value;
}
template<typename TKey,typename TElement>
constexpr TKey& Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>::__cordl_internal_get__Key_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Key_k__BackingField;
}
template<typename TKey,typename TElement>
constexpr TKey const& Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>::__cordl_internal_get__Key_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Key_k__BackingField;
}
template<typename TKey,typename TElement>
constexpr void Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>::__cordl_internal_set__Key_k__BackingField(TKey  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Key_k__BackingField = value;
}
template<typename TKey,typename TElement>
inline TKey Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>*>(),
                        {"get_Key", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TKey>(this, ___internal_method);
}
template<typename TKey,typename TElement>
inline void Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>::set_Key(TKey  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>*>(),
                        {"set_Key", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TKey,typename TElement>
inline void Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>::_ctor(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>*>(),
                        {".ctor", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
template<typename TKey,typename TElement>
inline void Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>::Add(TElement  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>*>(),
                        {"Add", {}, {::i2c::type_of<TElement>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TKey,typename TElement>
inline ::System::Collections::Generic::IEnumerator_1<TElement>* Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TElement>*>(this, ___internal_method);
}
template<typename TKey,typename TElement>
inline ::System::Collections::IEnumerator* Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template<typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TElement>* Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>::GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TElement>*>(this, ___internal_method, cancellationToken);
}
template<typename TKey,typename TElement>
inline ::StringW Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>* Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>::New_ctor(TKey  key)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>*>(key));
}
/// @brief Convert operator to "::System::Linq::IGrouping_2<TKey,TElement>"
template<typename TKey,typename TElement>
constexpr  Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>::operator ::System::Linq::IGrouping_2<TKey,TElement>*() noexcept {
return static_cast<::System::Linq::IGrouping_2<TKey,TElement>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Linq::IGrouping_2<TKey,TElement>"
template<typename TKey,typename TElement>
constexpr ::System::Linq::IGrouping_2<TKey,TElement>* Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>::i___System__Linq__IGrouping_2_TKey_TElement_() noexcept {
return static_cast<::System::Linq::IGrouping_2<TKey,TElement>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TElement>"
template<typename TKey,typename TElement>
constexpr  Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>::operator ::System::Collections::Generic::IEnumerable_1<TElement>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<TElement>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TElement>"
template<typename TKey,typename TElement>
constexpr ::System::Collections::Generic::IEnumerable_1<TElement>* Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>::i___System__Collections__Generic__IEnumerable_1_TElement_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<TElement>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename TKey,typename TElement>
constexpr  Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename TKey,typename TElement>
constexpr ::System::Collections::IEnumerable* Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TKey,typename TElement>
constexpr ::Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>::ToLookup_Grouping_2()   {
}
template<typename TKey,typename TElement>
constexpr ::System::Collections::Generic::Dictionary_2<TKey,::Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>*>*& Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>::__cordl_internal_get_dict()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dict;
}
template<typename TKey,typename TElement>
constexpr ::System::Collections::Generic::Dictionary_2<TKey,::Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>*>* const& Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>::__cordl_internal_get_dict() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dict;
}
template<typename TKey,typename TElement>
constexpr void Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>::__cordl_internal_set_dict(::System::Collections::Generic::Dictionary_2<TKey,::Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dict = value;
}
template<typename TKey,typename TElement>
inline void Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>::setStaticF_empty(::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*, "empty", ::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*>(std::forward<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*>(value));
}
template<typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>* Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>::getStaticF_empty()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*, "empty", ::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*>();
}
template<typename TKey,typename TElement>
inline void Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>::_ctor(::System::Collections::Generic::Dictionary_2<TKey,::Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>*>*  dict)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<TKey,::Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dict);
}
template<typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>* Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>::CreateEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*>(),
                        {"CreateEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*>(nullptr, ___internal_method);
}
template<typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>* Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>::Create(::System::ArraySegment_1<TElement>  source, ::System::Func_2<TElement,TKey>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*>(),
                        {"Create", {}, {::i2c::type_of<::System::ArraySegment_1<TElement>>(), ::i2c::type_of<::System::Func_2<TElement,TKey>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*>(nullptr, ___internal_method, source, keySelector, comparer);
}
template<typename TKey,typename TElement>
template<typename TSource>
inline ::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>* Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>::Create(::System::ArraySegment_1<TSource>  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Func_2<TSource,TElement>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*>(),
                    {"Create", {::i2c::class_of<TSource>()}, {::i2c::type_of<::System::ArraySegment_1<TSource>>(), ::i2c::type_of<::System::Func_2<TSource,TKey>*>(), ::i2c::type_of<::System::Func_2<TSource,TElement>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*>(nullptr, ___internal_method, source, keySelector, elementSelector, comparer);
}
template<typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*> Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>::CreateAsync(::System::ArraySegment_1<TElement>  source, ::System::Func_2<TElement,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*>(),
                        {"CreateAsync", {}, {::i2c::type_of<::System::ArraySegment_1<TElement>>(), ::i2c::type_of<::System::Func_2<TElement,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*>>(nullptr, ___internal_method, source, keySelector, comparer);
}
template<typename TKey,typename TElement>
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*> Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>::CreateAsync(::System::ArraySegment_1<TSource>  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*>(),
                    {"CreateAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::System::ArraySegment_1<TSource>>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*>>(nullptr, ___internal_method, source, keySelector, elementSelector, comparer);
}
template<typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*> Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>::CreateAsync(::System::ArraySegment_1<TElement>  source, ::System::Func_3<TElement,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*>(),
                        {"CreateAsync", {}, {::i2c::type_of<::System::ArraySegment_1<TElement>>(), ::i2c::type_of<::System::Func_3<TElement,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*>>(nullptr, ___internal_method, source, keySelector, comparer, cancellationToken);
}
template<typename TKey,typename TElement>
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*> Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>::CreateAsync(::System::ArraySegment_1<TSource>  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*>(),
                    {"CreateAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::System::ArraySegment_1<TSource>>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*>>(nullptr, ___internal_method, source, keySelector, elementSelector, comparer, cancellationToken);
}
template<typename TKey,typename TElement>
inline ::System::Collections::Generic::IEnumerable_1<TElement>* Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>::get_Item(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*>(),
                        {"get_Item", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TElement>*>(this, ___internal_method, key);
}
template<typename TKey,typename TElement>
inline int32_t Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename TKey,typename TElement>
inline bool Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>::Contains(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*>(),
                        {"Contains", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template<typename TKey,typename TElement>
inline ::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>* Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>*>(this, ___internal_method);
}
template<typename TKey,typename TElement>
inline ::System::Collections::IEnumerator* Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template<typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>* Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>::New_ctor(::System::Collections::Generic::Dictionary_2<TKey,::Cysharp::Threading::Tasks::Linq::ToLookup_Grouping_2<TKey,TElement>*>*  dict)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>*>(dict));
}
/// @brief Convert operator to "::System::Linq::ILookup_2<TKey,TElement>"
template<typename TKey,typename TElement>
constexpr  Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>::operator ::System::Linq::ILookup_2<TKey,TElement>*() noexcept {
return static_cast<::System::Linq::ILookup_2<TKey,TElement>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Linq::ILookup_2<TKey,TElement>"
template<typename TKey,typename TElement>
constexpr ::System::Linq::ILookup_2<TKey,TElement>* Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>::i___System__Linq__ILookup_2_TKey_TElement_() noexcept {
return static_cast<::System::Linq::ILookup_2<TKey,TElement>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
template<typename TKey,typename TElement>
constexpr  Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>::operator ::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
template<typename TKey,typename TElement>
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>* Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>::i___System__Collections__Generic__IEnumerable_1___System__Linq__IGrouping_2_TKey_TElement___() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename TKey,typename TElement>
constexpr  Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename TKey,typename TElement>
constexpr ::System::Collections::IEnumerable* Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TKey,typename TElement>
constexpr ::Cysharp::Threading::Tasks::Linq::ToLookup_Lookup_2<TKey,TElement>::ToLookup_Lookup_2()   {
}
