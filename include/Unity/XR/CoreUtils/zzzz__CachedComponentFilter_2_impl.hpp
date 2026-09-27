#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/CachedComponentFilter_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__CachedComponentFilter_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/XR/CoreUtils/zzzz__CachedSearchType_def.hpp"
#include "Unity/XR/CoreUtils/zzzz__IComponentHost_1_def.hpp"
template<typename TFilterType,typename TRootType>
constexpr ::System::Collections::Generic::List_1<TFilterType>*& Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>::__cordl_internal_get_m_MasterComponentStorage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MasterComponentStorage;
}
template<typename TFilterType,typename TRootType>
constexpr ::System::Collections::Generic::List_1<TFilterType>* const& Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>::__cordl_internal_get_m_MasterComponentStorage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MasterComponentStorage;
}
template<typename TFilterType,typename TRootType>
constexpr void Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>::__cordl_internal_set_m_MasterComponentStorage(::System::Collections::Generic::List_1<TFilterType>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MasterComponentStorage = value;
}
template<typename TFilterType,typename TRootType>
constexpr bool& Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>::__cordl_internal_get_m_DisposedValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DisposedValue;
}
template<typename TFilterType,typename TRootType>
constexpr bool const& Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>::__cordl_internal_get_m_DisposedValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DisposedValue;
}
template<typename TFilterType,typename TRootType>
constexpr void Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>::__cordl_internal_set_m_DisposedValue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DisposedValue = value;
}
template<typename TFilterType,typename TRootType>
inline void Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>::setStaticF_k_TempComponentList(::System::Collections::Generic::List_1<TFilterType>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<TFilterType>*, "k_TempComponentList", ::Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>*>(std::forward<::System::Collections::Generic::List_1<TFilterType>*>(value));
}
template<typename TFilterType,typename TRootType>
inline ::System::Collections::Generic::List_1<TFilterType>* Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>::getStaticF_k_TempComponentList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<TFilterType>*, "k_TempComponentList", ::Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>*>();
}
template<typename TFilterType,typename TRootType>
inline void Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>::setStaticF_k_TempHostComponentList(::System::Collections::Generic::List_1<::Unity::XR::CoreUtils::IComponentHost_1<TFilterType>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::Unity::XR::CoreUtils::IComponentHost_1<TFilterType>*>*, "k_TempHostComponentList", ::Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>*>(std::forward<::System::Collections::Generic::List_1<::Unity::XR::CoreUtils::IComponentHost_1<TFilterType>*>*>(value));
}
template<typename TFilterType,typename TRootType>
inline ::System::Collections::Generic::List_1<::Unity::XR::CoreUtils::IComponentHost_1<TFilterType>*>* Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>::getStaticF_k_TempHostComponentList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::Unity::XR::CoreUtils::IComponentHost_1<TFilterType>*>*, "k_TempHostComponentList", ::Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>*>();
}
template<typename TFilterType,typename TRootType>
inline void Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>::_ctor(TRootType  componentRoot, ::Unity::XR::CoreUtils::CachedSearchType  cachedSearchType, bool  includeDisabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>*>(),
                        {".ctor", {}, {::i2c::type_of<TRootType>(), ::i2c::type_of<::Unity::XR::CoreUtils::CachedSearchType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, componentRoot, cachedSearchType, includeDisabled);
}
template<typename TFilterType,typename TRootType>
inline void Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>::_ctor(::ArrayW<TFilterType>  componentList, bool  includeDisabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<TFilterType>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, componentList, includeDisabled);
}
template<typename TFilterType,typename TRootType>
template<typename TChildType>
requires(::cordl_internals::type_constraint<TChildType, TFilterType> && ::cordl_internals::reference_type_constraint<TChildType>)
inline void Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>::StoreMatchingComponents(::System::Collections::Generic::List_1<TChildType>*  outputList)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>*>(),
                    {"StoreMatchingComponents", {::i2c::class_of<TChildType>()}, {::i2c::type_of<::System::Collections::Generic::List_1<TChildType>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TChildType>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outputList);
}
template<typename TFilterType,typename TRootType>
template<typename TChildType>
requires(::cordl_internals::type_constraint<TChildType, TFilterType> && ::cordl_internals::reference_type_constraint<TChildType>)
inline ::ArrayW<TChildType> Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>::GetMatchingComponents()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>*>(),
                    {"GetMatchingComponents", {::i2c::class_of<TChildType>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TChildType>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<TChildType>>(this, ___internal_method);
}
template<typename TFilterType,typename TRootType>
inline void Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>::FilteredCopyToMaster(bool  includeDisabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>*>(),
                        {"FilteredCopyToMaster", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, includeDisabled);
}
template<typename TFilterType,typename TRootType>
inline void Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>::FilteredCopyToMaster(bool  includeDisabled, TRootType  requiredRoot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>*>(),
                        {"FilteredCopyToMaster", {}, {::i2c::type_of<bool>(), ::i2c::type_of<TRootType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, includeDisabled, requiredRoot);
}
template<typename TFilterType,typename TRootType>
inline void Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
template<typename TFilterType,typename TRootType>
inline void Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TFilterType,typename TRootType>
inline ::Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>* Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>::New_ctor(TRootType  componentRoot, ::Unity::XR::CoreUtils::CachedSearchType  cachedSearchType, bool  includeDisabled)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>*>(componentRoot, cachedSearchType, includeDisabled));
}
template<typename TFilterType,typename TRootType>
inline ::Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>* Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>::New_ctor(::ArrayW<TFilterType>  componentList, bool  includeDisabled)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>*>(componentList, includeDisabled));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename TFilterType,typename TRootType>
constexpr  Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename TFilterType,typename TRootType>
constexpr ::System::IDisposable* Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TFilterType,typename TRootType>
constexpr ::Unity::XR::CoreUtils::CachedComponentFilter_2<TFilterType,TRootType>::CachedComponentFilter_2()   {
}
