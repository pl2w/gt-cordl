#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Components/LocalizedAssetBehaviour_2.hpp"
#include "UnityEngine/Localization/Components/zzzz__LocalizedMonoBehaviour_impl.hpp"
#include "UnityEngine/Localization/Components/zzzz__LocalizedAssetBehaviour_2_def.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedAsset_1_def.hpp"
template<typename TObject,typename TReference>
constexpr TReference& UnityEngine::Localization::Components::LocalizedAssetBehaviour_2<TObject,TReference>::__cordl_internal_get_m_LocalizedAssetReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocalizedAssetReference;
}
template<typename TObject,typename TReference>
constexpr TReference const& UnityEngine::Localization::Components::LocalizedAssetBehaviour_2<TObject,TReference>::__cordl_internal_get_m_LocalizedAssetReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocalizedAssetReference;
}
template<typename TObject,typename TReference>
constexpr void UnityEngine::Localization::Components::LocalizedAssetBehaviour_2<TObject,TReference>::__cordl_internal_set_m_LocalizedAssetReference(TReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LocalizedAssetReference = value;
}
template<typename TObject,typename TReference>
constexpr ::UnityEngine::Localization::LocalizedAsset_1_ChangeHandler<TObject>*& UnityEngine::Localization::Components::LocalizedAssetBehaviour_2<TObject,TReference>::__cordl_internal_get_m_ChangeHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ChangeHandler;
}
template<typename TObject,typename TReference>
constexpr ::UnityEngine::Localization::LocalizedAsset_1_ChangeHandler<TObject>* const& UnityEngine::Localization::Components::LocalizedAssetBehaviour_2<TObject,TReference>::__cordl_internal_get_m_ChangeHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ChangeHandler;
}
template<typename TObject,typename TReference>
constexpr void UnityEngine::Localization::Components::LocalizedAssetBehaviour_2<TObject,TReference>::__cordl_internal_set_m_ChangeHandler(::UnityEngine::Localization::LocalizedAsset_1_ChangeHandler<TObject>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ChangeHandler = value;
}
template<typename TObject,typename TReference>
inline TReference UnityEngine::Localization::Components::LocalizedAssetBehaviour_2<TObject,TReference>::get_AssetReference()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Components::LocalizedAssetBehaviour_2<TObject,TReference>*>(),
                        {"get_AssetReference", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TReference>(this, ___internal_method);
}
template<typename TObject,typename TReference>
inline void UnityEngine::Localization::Components::LocalizedAssetBehaviour_2<TObject,TReference>::set_AssetReference(TReference  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Components::LocalizedAssetBehaviour_2<TObject,TReference>*>(),
                        {"set_AssetReference", {}, {::i2c::type_of<TReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TObject,typename TReference>
inline void UnityEngine::Localization::Components::LocalizedAssetBehaviour_2<TObject,TReference>::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Components::LocalizedAssetBehaviour_2<TObject,TReference>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TObject,typename TReference>
inline void UnityEngine::Localization::Components::LocalizedAssetBehaviour_2<TObject,TReference>::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Components::LocalizedAssetBehaviour_2<TObject,TReference>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TObject,typename TReference>
inline void UnityEngine::Localization::Components::LocalizedAssetBehaviour_2<TObject,TReference>::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Components::LocalizedAssetBehaviour_2<TObject,TReference>*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TObject,typename TReference>
inline void UnityEngine::Localization::Components::LocalizedAssetBehaviour_2<TObject,TReference>::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Components::LocalizedAssetBehaviour_2<TObject,TReference>*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TObject,typename TReference>
inline void UnityEngine::Localization::Components::LocalizedAssetBehaviour_2<TObject,TReference>::RegisterChangeHandler()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Components::LocalizedAssetBehaviour_2<TObject,TReference>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TObject,typename TReference>
inline void UnityEngine::Localization::Components::LocalizedAssetBehaviour_2<TObject,TReference>::ClearChangeHandler()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Components::LocalizedAssetBehaviour_2<TObject,TReference>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TObject,typename TReference>
inline void UnityEngine::Localization::Components::LocalizedAssetBehaviour_2<TObject,TReference>::UpdateAsset(TObject  localizedAsset)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Components::LocalizedAssetBehaviour_2<TObject,TReference>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localizedAsset);
}
template<typename TObject,typename TReference>
inline void UnityEngine::Localization::Components::LocalizedAssetBehaviour_2<TObject,TReference>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Components::LocalizedAssetBehaviour_2<TObject,TReference>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TObject,typename TReference>
inline ::UnityEngine::Localization::Components::LocalizedAssetBehaviour_2<TObject,TReference>* UnityEngine::Localization::Components::LocalizedAssetBehaviour_2<TObject,TReference>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Components::LocalizedAssetBehaviour_2<TObject,TReference>*>());
}
// Ctor Parameters []
template<typename TObject,typename TReference>
constexpr ::UnityEngine::Localization::Components::LocalizedAssetBehaviour_2<TObject,TReference>::LocalizedAssetBehaviour_2()   {
}
