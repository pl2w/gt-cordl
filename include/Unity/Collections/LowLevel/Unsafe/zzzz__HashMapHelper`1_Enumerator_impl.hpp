#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/HashMapHelper`1_Enumerator.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__HashMapHelper`1_Enumerator_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__HashMapHelper_1_def.hpp"
#include "Unity/Collections/zzzz__KVPair_2_def.hpp"
template<typename TKey>
inline void GlobalNamespace::HashMapHelper_1_Enumerator<TKey>::_ctor(::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HashMapHelper_1_Enumerator<TKey>>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data);
}
template<typename TKey>
inline bool GlobalNamespace::HashMapHelper_1_Enumerator<TKey>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HashMapHelper_1_Enumerator<TKey>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename TKey>
inline void GlobalNamespace::HashMapHelper_1_Enumerator<TKey>::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HashMapHelper_1_Enumerator<TKey>>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TKey>
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
inline ::Unity::Collections::KVPair_2<TKey,TValue> GlobalNamespace::HashMapHelper_1_Enumerator<TKey>::GetCurrent()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HashMapHelper_1_Enumerator<TKey>>(),
                    {"GetCurrent", {::i2c::class_of<TValue>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::KVPair_2<TKey,TValue>>(*this, ___internal_method);
}
template<typename TKey>
inline TKey GlobalNamespace::HashMapHelper_1_Enumerator<TKey>::GetCurrentKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HashMapHelper_1_Enumerator<TKey>>(),
                        {"GetCurrentKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TKey>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Data", ty: "::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_BucketIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_NextIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TKey>
constexpr ::GlobalNamespace::HashMapHelper_1_Enumerator<TKey>::HashMapHelper_1_Enumerator(::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>*  m_Data, int32_t  m_Index, int32_t  m_BucketIndex, int32_t  m_NextIndex) noexcept  {
this->m_Data = m_Data;
this->m_Index = m_Index;
this->m_BucketIndex = m_BucketIndex;
this->m_NextIndex = m_NextIndex;
}
// Ctor Parameters []
template<typename TKey>
constexpr ::GlobalNamespace::HashMapHelper_1_Enumerator<TKey>::HashMapHelper_1_Enumerator()   {
}
