#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/RingDictionaryBuffer_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Voice/Logging/zzzz__RingDictionaryBuffer_2_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TKey,typename TValue>
constexpr int32_t& Meta::Voice::Logging::RingDictionaryBuffer_2<TKey,TValue>::__cordl_internal_get__capacity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____capacity;
}
template<typename TKey,typename TValue>
constexpr int32_t const& Meta::Voice::Logging::RingDictionaryBuffer_2<TKey,TValue>::__cordl_internal_get__capacity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____capacity;
}
template<typename TKey,typename TValue>
constexpr void Meta::Voice::Logging::RingDictionaryBuffer_2<TKey,TValue>::__cordl_internal_set__capacity(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____capacity = value;
}
template<typename TKey,typename TValue>
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,::System::Collections::Generic::LinkedList_1<TValue>*>*& Meta::Voice::Logging::RingDictionaryBuffer_2<TKey,TValue>::__cordl_internal_get__dictionary()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dictionary;
}
template<typename TKey,typename TValue>
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,::System::Collections::Generic::LinkedList_1<TValue>*>* const& Meta::Voice::Logging::RingDictionaryBuffer_2<TKey,TValue>::__cordl_internal_get__dictionary() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dictionary;
}
template<typename TKey,typename TValue>
constexpr void Meta::Voice::Logging::RingDictionaryBuffer_2<TKey,TValue>::__cordl_internal_set__dictionary(::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,::System::Collections::Generic::LinkedList_1<TValue>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dictionary = value;
}
template<typename TKey,typename TValue>
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,::System::Object*>*& Meta::Voice::Logging::RingDictionaryBuffer_2<TKey,TValue>::__cordl_internal_get__valueLocks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueLocks;
}
template<typename TKey,typename TValue>
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,::System::Object*>* const& Meta::Voice::Logging::RingDictionaryBuffer_2<TKey,TValue>::__cordl_internal_get__valueLocks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueLocks;
}
template<typename TKey,typename TValue>
constexpr void Meta::Voice::Logging::RingDictionaryBuffer_2<TKey,TValue>::__cordl_internal_set__valueLocks(::System::Collections::Concurrent::ConcurrentDictionary_2<TKey,::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____valueLocks = value;
}
template<typename TKey,typename TValue>
inline void Meta::Voice::Logging::RingDictionaryBuffer_2<TKey,TValue>::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::RingDictionaryBuffer_2<TKey,TValue>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::ICollection_1<TValue>* Meta::Voice::Logging::RingDictionaryBuffer_2<TKey,TValue>::get_Item(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::RingDictionaryBuffer_2<TKey,TValue>*>(),
                        {"get_Item", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TValue>*>(this, ___internal_method, key);
}
template<typename TKey,typename TValue>
inline bool Meta::Voice::Logging::RingDictionaryBuffer_2<TKey,TValue>::Add(TKey  key, TValue  value, bool  unique)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::RingDictionaryBuffer_2<TKey,TValue>*>(),
                        {"Add", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<TValue>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value, unique);
}
template<typename TKey,typename TValue>
inline bool Meta::Voice::Logging::RingDictionaryBuffer_2<TKey,TValue>::ContainsKey(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::RingDictionaryBuffer_2<TKey,TValue>*>(),
                        {"ContainsKey", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::IEnumerable_1<TValue>* Meta::Voice::Logging::RingDictionaryBuffer_2<TKey,TValue>::Extract(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::RingDictionaryBuffer_2<TKey,TValue>*>(),
                        {"Extract", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TValue>*>(this, ___internal_method, key);
}
template<typename TKey,typename TValue>
inline ::Meta::Voice::Logging::RingDictionaryBuffer_2<TKey,TValue>* Meta::Voice::Logging::RingDictionaryBuffer_2<TKey,TValue>::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Logging::RingDictionaryBuffer_2<TKey,TValue>*>(capacity));
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::Meta::Voice::Logging::RingDictionaryBuffer_2<TKey,TValue>::RingDictionaryBuffer_2()   {
}
