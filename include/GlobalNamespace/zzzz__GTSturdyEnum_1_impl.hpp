#pragma once
// IWYU pragma private; include "GlobalNamespace/GTSturdyEnum_1.hpp"
#include "GlobalNamespace/zzzz__GTSturdyEnum`1_EnumPair_impl.hpp"
#include "GlobalNamespace/zzzz__GTSturdyEnum_1_def.hpp"
#include "GlobalNamespace/zzzz__GTSturdyEnum`1_EnumPair_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
template<typename TEnum>
inline TEnum GlobalNamespace::GTSturdyEnum_1<TEnum>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSturdyEnum_1<TEnum>>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TEnum>(*this, ___internal_method);
}
template<typename TEnum>
inline void GlobalNamespace::GTSturdyEnum_1<TEnum>::set_Value(TEnum  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSturdyEnum_1<TEnum>>(),
                        {"set_Value", {}, {::i2c::type_of<TEnum>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename TEnum>
inline ::GlobalNamespace::GTSturdyEnum_1<TEnum> GlobalNamespace::GTSturdyEnum_1<TEnum>::op_Implicit___GlobalNamespace__GTSturdyEnum_1_TEnum_(TEnum  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSturdyEnum_1<TEnum>>(),
                        {"op_Implicit", {}, {::i2c::type_of<TEnum>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GTSturdyEnum_1<TEnum>>(nullptr, ___internal_method, value);
}
template<typename TEnum>
inline TEnum GlobalNamespace::GTSturdyEnum_1<TEnum>::op_Implicit_TEnum(::GlobalNamespace::GTSturdyEnum_1<TEnum>  sturdyEnum)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSturdyEnum_1<TEnum>>(),
                        {"op_Implicit", {}, {::i2c::type_of<::GlobalNamespace::GTSturdyEnum_1<TEnum>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TEnum>(nullptr, ___internal_method, sturdyEnum);
}
template<typename TEnum>
inline void GlobalNamespace::GTSturdyEnum_1<TEnum>::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSturdyEnum_1<TEnum>>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TEnum>
inline void GlobalNamespace::GTSturdyEnum_1<TEnum>::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSturdyEnum_1<TEnum>>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
template<typename TEnum>
constexpr  GlobalNamespace::GTSturdyEnum_1<TEnum>::operator ::UnityEngine::ISerializationCallbackReceiver*()  {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
template<typename TEnum>
constexpr ::UnityEngine::ISerializationCallbackReceiver* GlobalNamespace::GTSturdyEnum_1<TEnum>::i___UnityEngine__ISerializationCallbackReceiver()  {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_Value_k__BackingField", ty: "TEnum", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_stringValuePairs", ty: "::ArrayW<::GlobalNamespace::GTSturdyEnum_1_EnumPair<TEnum>>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TEnum>
constexpr ::GlobalNamespace::GTSturdyEnum_1<TEnum>::GTSturdyEnum_1(TEnum  _Value_k__BackingField, ::ArrayW<::GlobalNamespace::GTSturdyEnum_1_EnumPair<TEnum>>  m_stringValuePairs) noexcept  {
this->_Value_k__BackingField = _Value_k__BackingField;
this->m_stringValuePairs = m_stringValuePairs;
}
// Ctor Parameters []
template<typename TEnum>
constexpr ::GlobalNamespace::GTSturdyEnum_1<TEnum>::GTSturdyEnum_1()   {
}
