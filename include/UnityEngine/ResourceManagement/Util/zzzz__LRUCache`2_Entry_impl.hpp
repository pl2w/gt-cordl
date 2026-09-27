#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/LRUCache`2_Entry.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__LRUCache`2_Entry_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__LRUCache`2_Key_def.hpp"
template<typename TKey,typename TValue>
inline bool GlobalNamespace::LRUCache_2_Entry<TKey,TValue>::Equals(::GlobalNamespace::LRUCache_2_Entry<TKey,TValue>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LRUCache_2_Entry<TKey,TValue>>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::LRUCache_2_Entry<TKey,TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template<typename TKey,typename TValue>
inline int32_t GlobalNamespace::LRUCache_2_Entry<TKey,TValue>::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LRUCache_2_Entry<TKey,TValue>>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::LRUCache_2_Entry<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr  GlobalNamespace::LRUCache_2_Entry<TKey,TValue>::operator ::System::IEquatable_1<::GlobalNamespace::LRUCache_2_Entry<TKey,TValue>>*()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::LRUCache_2_Entry<TKey,TValue>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::LRUCache_2_Entry<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr ::System::IEquatable_1<::GlobalNamespace::LRUCache_2_Entry<TKey,TValue>>* GlobalNamespace::LRUCache_2_Entry<TKey,TValue>::i___System__IEquatable_1___GlobalNamespace__LRUCache_2_Entry_TKey_TValue__()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::LRUCache_2_Entry<TKey,TValue>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "lruNode", ty: "::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::LRUCache_2_Key<TKey,TValue>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Value", ty: "TValue", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TKey,typename TValue>
constexpr ::GlobalNamespace::LRUCache_2_Entry<TKey,TValue>::LRUCache_2_Entry(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::LRUCache_2_Key<TKey,TValue>>*  lruNode, TValue  Value) noexcept  {
this->lruNode = lruNode;
this->Value = Value;
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::GlobalNamespace::LRUCache_2_Entry<TKey,TValue>::LRUCache_2_Entry()   {
}
