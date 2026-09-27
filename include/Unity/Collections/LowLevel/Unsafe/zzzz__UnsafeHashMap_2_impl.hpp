#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeHashMap_2.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__HashMapHelper_1_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeHashMap_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__KVPair_2_def.hpp"
template<typename TKey,typename TValue>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeHashMap_2<TKey,TValue>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeHashMap_2<TKey,TValue>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeHashMap_2<TKey,TValue>::get_IsCreated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeHashMap_2<TKey,TValue>>(),
                        {"get_IsCreated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<::Unity::Collections::KVPair_2<TKey,TValue>>* Unity::Collections::LowLevel::Unsafe::UnsafeHashMap_2<TKey,TValue>::System_Collections_Generic_IEnumerable_Unity_Collections_KVPair_TKey_TValue___GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeHashMap_2<TKey,TValue>>(),
                        {"System.Collections.Generic.IEnumerable<Unity.Collections.KVPair<TKey,TValue>>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Unity::Collections::KVPair_2<TKey,TValue>>*>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Collections::IEnumerator* Unity::Collections::LowLevel::Unsafe::UnsafeHashMap_2<TKey,TValue>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeHashMap_2<TKey,TValue>>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template<typename TKey,typename TValue>
constexpr  Unity::Collections::LowLevel::Unsafe::UnsafeHashMap_2<TKey,TValue>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename TKey,typename TValue>
constexpr ::System::IDisposable* Unity::Collections::LowLevel::Unsafe::UnsafeHashMap_2<TKey,TValue>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Unity::Collections::KVPair_2<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr  Unity::Collections::LowLevel::Unsafe::UnsafeHashMap_2<TKey,TValue>::operator ::System::Collections::Generic::IEnumerable_1<::Unity::Collections::KVPair_2<TKey,TValue>>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Unity::Collections::KVPair_2<TKey,TValue>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Unity::Collections::KVPair_2<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<::Unity::Collections::KVPair_2<TKey,TValue>>* Unity::Collections::LowLevel::Unsafe::UnsafeHashMap_2<TKey,TValue>::i___System__Collections__Generic__IEnumerable_1___Unity__Collections__KVPair_2_TKey_TValue__()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Unity::Collections::KVPair_2<TKey,TValue>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename TKey,typename TValue>
constexpr  Unity::Collections::LowLevel::Unsafe::UnsafeHashMap_2<TKey,TValue>::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename TKey,typename TValue>
constexpr ::System::Collections::IEnumerable* Unity::Collections::LowLevel::Unsafe::UnsafeHashMap_2<TKey,TValue>::i___System__Collections__IEnumerable()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Data", ty: "::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TKey,typename TValue>
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeHashMap_2<TKey,TValue>::UnsafeHashMap_2(::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>  m_Data) noexcept  {
this->m_Data = m_Data;
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeHashMap_2<TKey,TValue>::UnsafeHashMap_2()   {
}
