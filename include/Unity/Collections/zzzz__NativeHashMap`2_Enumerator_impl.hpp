#pragma once
// IWYU pragma private; include "Unity/Collections/NativeHashMap`2_Enumerator.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__HashMapHelper`1_Enumerator_impl.hpp"
#include "Unity/Collections/zzzz__NativeHashMap`2_Enumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__KVPair_2_def.hpp"
template<typename TKey,typename TValue>
inline void GlobalNamespace::NativeHashMap_2_Enumerator<TKey,TValue>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeHashMap_2_Enumerator<TKey,TValue>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline bool GlobalNamespace::NativeHashMap_2_Enumerator<TKey,TValue>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeHashMap_2_Enumerator<TKey,TValue>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline void GlobalNamespace::NativeHashMap_2_Enumerator<TKey,TValue>::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeHashMap_2_Enumerator<TKey,TValue>>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::Unity::Collections::KVPair_2<TKey,TValue> GlobalNamespace::NativeHashMap_2_Enumerator<TKey,TValue>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeHashMap_2_Enumerator<TKey,TValue>>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::KVPair_2<TKey,TValue>>(*this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Object* GlobalNamespace::NativeHashMap_2_Enumerator<TKey,TValue>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeHashMap_2_Enumerator<TKey,TValue>>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Unity::Collections::KVPair_2<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr  GlobalNamespace::NativeHashMap_2_Enumerator<TKey,TValue>::operator ::System::Collections::Generic::IEnumerator_1<::Unity::Collections::KVPair_2<TKey,TValue>>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Unity::Collections::KVPair_2<TKey,TValue>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Unity::Collections::KVPair_2<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::IEnumerator_1<::Unity::Collections::KVPair_2<TKey,TValue>>* GlobalNamespace::NativeHashMap_2_Enumerator<TKey,TValue>::i___System__Collections__Generic__IEnumerator_1___Unity__Collections__KVPair_2_TKey_TValue__()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Unity::Collections::KVPair_2<TKey,TValue>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename TKey,typename TValue>
constexpr  GlobalNamespace::NativeHashMap_2_Enumerator<TKey,TValue>::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename TKey,typename TValue>
constexpr ::System::Collections::IEnumerator* GlobalNamespace::NativeHashMap_2_Enumerator<TKey,TValue>::i___System__Collections__IEnumerator()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename TKey,typename TValue>
constexpr  GlobalNamespace::NativeHashMap_2_Enumerator<TKey,TValue>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename TKey,typename TValue>
constexpr ::System::IDisposable* GlobalNamespace::NativeHashMap_2_Enumerator<TKey,TValue>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Enumerator", ty: "::GlobalNamespace::HashMapHelper_1_Enumerator<TKey>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TKey,typename TValue>
constexpr ::GlobalNamespace::NativeHashMap_2_Enumerator<TKey,TValue>::NativeHashMap_2_Enumerator(::GlobalNamespace::HashMapHelper_1_Enumerator<TKey>  m_Enumerator) noexcept  {
this->m_Enumerator = m_Enumerator;
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::GlobalNamespace::NativeHashMap_2_Enumerator<TKey,TValue>::NativeHashMap_2_Enumerator()   {
}
