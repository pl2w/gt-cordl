#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Components/LocalizedAssetEvent_3.hpp"
#include "UnityEngine/Localization/Components/zzzz__LocalizedAssetBehaviour_2_impl.hpp"
#include "UnityEngine/Localization/Components/zzzz__LocalizedAssetEvent_3_def.hpp"
template<typename TObject,typename TReference,typename TEvent>
constexpr TEvent& UnityEngine::Localization::Components::LocalizedAssetEvent_3<TObject,TReference,TEvent>::__cordl_internal_get_m_UpdateAsset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdateAsset;
}
template<typename TObject,typename TReference,typename TEvent>
constexpr TEvent const& UnityEngine::Localization::Components::LocalizedAssetEvent_3<TObject,TReference,TEvent>::__cordl_internal_get_m_UpdateAsset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdateAsset;
}
template<typename TObject,typename TReference,typename TEvent>
constexpr void UnityEngine::Localization::Components::LocalizedAssetEvent_3<TObject,TReference,TEvent>::__cordl_internal_set_m_UpdateAsset(TEvent  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UpdateAsset = value;
}
template<typename TObject,typename TReference,typename TEvent>
inline TEvent UnityEngine::Localization::Components::LocalizedAssetEvent_3<TObject,TReference,TEvent>::get_OnUpdateAsset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Components::LocalizedAssetEvent_3<TObject,TReference,TEvent>*>(),
                        {"get_OnUpdateAsset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TEvent>(this, ___internal_method);
}
template<typename TObject,typename TReference,typename TEvent>
inline void UnityEngine::Localization::Components::LocalizedAssetEvent_3<TObject,TReference,TEvent>::set_OnUpdateAsset(TEvent  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Components::LocalizedAssetEvent_3<TObject,TReference,TEvent>*>(),
                        {"set_OnUpdateAsset", {}, {::i2c::type_of<TEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TObject,typename TReference,typename TEvent>
inline void UnityEngine::Localization::Components::LocalizedAssetEvent_3<TObject,TReference,TEvent>::UpdateAsset(TObject  localizedAsset)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Components::LocalizedAssetEvent_3<TObject,TReference,TEvent>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localizedAsset);
}
template<typename TObject,typename TReference,typename TEvent>
inline void UnityEngine::Localization::Components::LocalizedAssetEvent_3<TObject,TReference,TEvent>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Components::LocalizedAssetEvent_3<TObject,TReference,TEvent>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TObject,typename TReference,typename TEvent>
inline ::UnityEngine::Localization::Components::LocalizedAssetEvent_3<TObject,TReference,TEvent>* UnityEngine::Localization::Components::LocalizedAssetEvent_3<TObject,TReference,TEvent>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Components::LocalizedAssetEvent_3<TObject,TReference,TEvent>*>());
}
// Ctor Parameters []
template<typename TObject,typename TReference,typename TEvent>
constexpr ::UnityEngine::Localization::Components::LocalizedAssetEvent_3<TObject,TReference,TEvent>::LocalizedAssetEvent_3()   {
}
