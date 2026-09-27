#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/DataModifier_1.hpp"
#include "Oculus/Interaction/Input/zzzz__DataSource_1_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__DataModifier_1_def.hpp"
#include "Oculus/Interaction/Input/zzzz__DataSource`1_UpdateModeFlags_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IDataSource_1_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IDataSource_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
template<typename TData>
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Input::DataModifier_1<TData>::__cordl_internal_get__iModifyDataFromSourceMono()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____iModifyDataFromSourceMono;
}
template<typename TData>
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Input::DataModifier_1<TData>::__cordl_internal_get__iModifyDataFromSourceMono() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____iModifyDataFromSourceMono;
}
template<typename TData>
constexpr void Oculus::Interaction::Input::DataModifier_1<TData>::__cordl_internal_set__iModifyDataFromSourceMono(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____iModifyDataFromSourceMono = value;
}
template<typename TData>
constexpr ::Oculus::Interaction::Input::IDataSource_1<TData>*& Oculus::Interaction::Input::DataModifier_1<TData>::__cordl_internal_get__modifyDataFromSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____modifyDataFromSource;
}
template<typename TData>
constexpr ::Oculus::Interaction::Input::IDataSource_1<TData>* const& Oculus::Interaction::Input::DataModifier_1<TData>::__cordl_internal_get__modifyDataFromSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____modifyDataFromSource;
}
template<typename TData>
constexpr void Oculus::Interaction::Input::DataModifier_1<TData>::__cordl_internal_set__modifyDataFromSource(::Oculus::Interaction::Input::IDataSource_1<TData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____modifyDataFromSource = value;
}
template<typename TData>
constexpr bool& Oculus::Interaction::Input::DataModifier_1<TData>::__cordl_internal_get__applyModifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____applyModifier;
}
template<typename TData>
constexpr bool const& Oculus::Interaction::Input::DataModifier_1<TData>::__cordl_internal_get__applyModifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____applyModifier;
}
template<typename TData>
constexpr void Oculus::Interaction::Input::DataModifier_1<TData>::__cordl_internal_set__applyModifier(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____applyModifier = value;
}
template<typename TData>
constexpr TData& Oculus::Interaction::Input::DataModifier_1<TData>::__cordl_internal_get__thisDataAsset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thisDataAsset;
}
template<typename TData>
constexpr TData const& Oculus::Interaction::Input::DataModifier_1<TData>::__cordl_internal_get__thisDataAsset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thisDataAsset;
}
template<typename TData>
constexpr void Oculus::Interaction::Input::DataModifier_1<TData>::__cordl_internal_set__thisDataAsset(TData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thisDataAsset = value;
}
template<typename TData>
constexpr TData& Oculus::Interaction::Input::DataModifier_1<TData>::__cordl_internal_get__currentDataAsset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentDataAsset;
}
template<typename TData>
constexpr TData const& Oculus::Interaction::Input::DataModifier_1<TData>::__cordl_internal_get__currentDataAsset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentDataAsset;
}
template<typename TData>
constexpr void Oculus::Interaction::Input::DataModifier_1<TData>::__cordl_internal_set__currentDataAsset(TData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentDataAsset = value;
}
template<typename TData>
inline void Oculus::Interaction::Input::DataModifier_1<TData>::setStaticF__InvalidAsset_k__BackingField(TData  value)  {
::cordl_internals::setStaticField<TData, "<InvalidAsset>k__BackingField", ::Oculus::Interaction::Input::DataModifier_1<TData>*>(std::forward<TData>(value));
}
template<typename TData>
inline TData Oculus::Interaction::Input::DataModifier_1<TData>::getStaticF__InvalidAsset_k__BackingField()  {
return ::cordl_internals::getStaticField<TData, "<InvalidAsset>k__BackingField", ::Oculus::Interaction::Input::DataModifier_1<TData>*>();
}
template<typename TData>
inline TData Oculus::Interaction::Input::DataModifier_1<TData>::get_InvalidAsset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DataModifier_1<TData>*>(),
                        {"get_InvalidAsset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TData>(nullptr, ___internal_method);
}
template<typename TData>
inline TData Oculus::Interaction::Input::DataModifier_1<TData>::get_DataAsset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::DataModifier_1<TData>*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<TData>(this, ___internal_method);
}
template<typename TData>
inline ::Oculus::Interaction::Input::IDataSource_1<TData>* Oculus::Interaction::Input::DataModifier_1<TData>::get_ModifyDataFromSource()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::DataModifier_1<TData>*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IDataSource_1<TData>*>(this, ___internal_method);
}
template<typename TData>
inline int32_t Oculus::Interaction::Input::DataModifier_1<TData>::get_CurrentDataVersion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::DataModifier_1<TData>*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename TData>
inline void Oculus::Interaction::Input::DataModifier_1<TData>::ResetSources(::Oculus::Interaction::Input::IDataSource_1<TData>*  modifyDataFromSource, ::Oculus::Interaction::Input::IDataSource*  updateAfter, ::GlobalNamespace::DataSource_1_UpdateModeFlags<TData>  updateMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DataModifier_1<TData>*>(),
                        {"ResetSources", {}, {::i2c::type_of<::Oculus::Interaction::Input::IDataSource_1<TData>*>(), ::i2c::type_of<::Oculus::Interaction::Input::IDataSource*>(), ::i2c::type_of<::GlobalNamespace::DataSource_1_UpdateModeFlags<TData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, modifyDataFromSource, updateAfter, updateMode);
}
template<typename TData>
inline void Oculus::Interaction::Input::DataModifier_1<TData>::UpdateData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::DataModifier_1<TData>*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TData>
inline void Oculus::Interaction::Input::DataModifier_1<TData>::Apply(TData  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::DataModifier_1<TData>*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
template<typename TData>
inline void Oculus::Interaction::Input::DataModifier_1<TData>::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::DataModifier_1<TData>*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TData>
inline void Oculus::Interaction::Input::DataModifier_1<TData>::InjectAllDataModifier(::GlobalNamespace::DataSource_1_UpdateModeFlags<TData>  updateMode, ::Oculus::Interaction::Input::IDataSource*  updateAfter, ::Oculus::Interaction::Input::IDataSource_1<TData>*  modifyDataFromSource, bool  applyModifier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DataModifier_1<TData>*>(),
                        {"InjectAllDataModifier", {}, {::i2c::type_of<::GlobalNamespace::DataSource_1_UpdateModeFlags<TData>>(), ::i2c::type_of<::Oculus::Interaction::Input::IDataSource*>(), ::i2c::type_of<::Oculus::Interaction::Input::IDataSource_1<TData>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateMode, updateAfter, modifyDataFromSource, applyModifier);
}
template<typename TData>
inline void Oculus::Interaction::Input::DataModifier_1<TData>::InjectModifyDataFromSource(::Oculus::Interaction::Input::IDataSource_1<TData>*  modifyDataFromSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DataModifier_1<TData>*>(),
                        {"InjectModifyDataFromSource", {}, {::i2c::type_of<::Oculus::Interaction::Input::IDataSource_1<TData>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, modifyDataFromSource);
}
template<typename TData>
inline void Oculus::Interaction::Input::DataModifier_1<TData>::InjectApplyModifier(bool  applyModifier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DataModifier_1<TData>*>(),
                        {"InjectApplyModifier", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, applyModifier);
}
template<typename TData>
inline void Oculus::Interaction::Input::DataModifier_1<TData>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DataModifier_1<TData>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TData>
inline void Oculus::Interaction::Input::DataModifier_1<TData>::_Start_b__17_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::DataModifier_1<TData>*>(),
                        {"<Start>b__17_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TData>
inline ::Oculus::Interaction::Input::DataModifier_1<TData>* Oculus::Interaction::Input::DataModifier_1<TData>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::DataModifier_1<TData>*>());
}
// Ctor Parameters []
template<typename TData>
constexpr ::Oculus::Interaction::Input::DataModifier_1<TData>::DataModifier_1()   {
}
