#pragma once
// IWYU pragma private; include "Unity/Collections/KVPair_2.hpp"
#include "Unity/Collections/zzzz__KVPair_2_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__HashMapHelper_1_def.hpp"
template<typename TKey,typename TValue>
inline ::by_ref<TValue> Unity::Collections::KVPair_2<TKey,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::KVPair_2<TKey,TValue>>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<TValue>>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Data", ty: "::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Next", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TKey,typename TValue>
constexpr ::Unity::Collections::KVPair_2<TKey,TValue>::KVPair_2(::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>*  m_Data, int32_t  m_Index, int32_t  m_Next) noexcept  {
this->m_Data = m_Data;
this->m_Index = m_Index;
this->m_Next = m_Next;
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::Unity::Collections::KVPair_2<TKey,TValue>::KVPair_2()   {
}
