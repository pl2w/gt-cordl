#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/LRUCache`2_Key.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__LRUCache`2_Key_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
template<typename TKey,typename TValue>
inline void GlobalNamespace::LRUCache_2_Key<TKey,TValue>::setStaticF_typeType(::System::Type*  value)  {
::cordl_internals::setStaticField<::System::Type*, "typeType", ::GlobalNamespace::LRUCache_2_Key<TKey,TValue>>(std::forward<::System::Type*>(value));
}
template<typename TKey,typename TValue>
inline ::System::Type* GlobalNamespace::LRUCache_2_Key<TKey,TValue>::getStaticF_typeType()  {
return ::cordl_internals::getStaticField<::System::Type*, "typeType", ::GlobalNamespace::LRUCache_2_Key<TKey,TValue>>();
}
template<typename TKey,typename TValue>
inline void GlobalNamespace::LRUCache_2_Key<TKey,TValue>::_ctor(TKey  k, ::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LRUCache_2_Key<TKey,TValue>>(),
                        {".ctor", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, k, t);
}
template<typename TKey,typename TValue>
inline bool GlobalNamespace::LRUCache_2_Key<TKey,TValue>::System_IEquatable_UnityEngine_ResourceManagement_Util_LRUCache_TKey_TValue__Key__Equals(::GlobalNamespace::LRUCache_2_Key<TKey,TValue>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LRUCache_2_Key<TKey,TValue>>(),
                        {"System.IEquatable<UnityEngine.ResourceManagement.Util.LRUCache<TKey,TValue>.Key>.Equals", {}, {::i2c::type_of<::GlobalNamespace::LRUCache_2_Key<TKey,TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template<typename TKey,typename TValue>
inline int32_t GlobalNamespace::LRUCache_2_Key<TKey,TValue>::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::LRUCache_2_Key<TKey,TValue>>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::LRUCache_2_Key<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr  GlobalNamespace::LRUCache_2_Key<TKey,TValue>::operator ::System::IEquatable_1<::GlobalNamespace::LRUCache_2_Key<TKey,TValue>>*()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::LRUCache_2_Key<TKey,TValue>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::LRUCache_2_Key<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr ::System::IEquatable_1<::GlobalNamespace::LRUCache_2_Key<TKey,TValue>>* GlobalNamespace::LRUCache_2_Key<TKey,TValue>::i___System__IEquatable_1___GlobalNamespace__LRUCache_2_Key_TKey_TValue__()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::LRUCache_2_Key<TKey,TValue>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "type", ty: "::System::Type*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TKey,typename TValue>
constexpr ::GlobalNamespace::LRUCache_2_Key<TKey,TValue>::LRUCache_2_Key(TKey  key, ::System::Type*  type) noexcept  {
this->key = key;
this->type = type;
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::GlobalNamespace::LRUCache_2_Key<TKey,TValue>::LRUCache_2_Key()   {
}
