#pragma once
// IWYU pragma private; include "Modio/Images/ModioImageSource_1.hpp"
#include "Modio/Images/zzzz__ImageReference_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Images/zzzz__ModioImageSource_1_def.hpp"
#include "Modio/Images/zzzz__ImageReference_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
template<typename TResolution>
constexpr ::StringW& Modio::Images::ModioImageSource_1<TResolution>::__cordl_internal_get__FileName_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FileName_k__BackingField;
}
template<typename TResolution>
constexpr ::StringW const& Modio::Images::ModioImageSource_1<TResolution>::__cordl_internal_get__FileName_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FileName_k__BackingField;
}
template<typename TResolution>
constexpr void Modio::Images::ModioImageSource_1<TResolution>::__cordl_internal_set__FileName_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FileName_k__BackingField = value;
}
template<typename TResolution>
constexpr ::ArrayW<::Modio::Images::ImageReference>& Modio::Images::ModioImageSource_1<TResolution>::__cordl_internal_get__resolutions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resolutions;
}
template<typename TResolution>
constexpr ::ArrayW<::Modio::Images::ImageReference> const& Modio::Images::ModioImageSource_1<TResolution>::__cordl_internal_get__resolutions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resolutions;
}
template<typename TResolution>
constexpr void Modio::Images::ModioImageSource_1<TResolution>::__cordl_internal_set__resolutions(::ArrayW<::Modio::Images::ImageReference>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resolutions = value;
}
template<typename TResolution>
constexpr bool& Modio::Images::ModioImageSource_1<TResolution>::__cordl_internal_get__isCachingLowestResolution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isCachingLowestResolution;
}
template<typename TResolution>
constexpr bool const& Modio::Images::ModioImageSource_1<TResolution>::__cordl_internal_get__isCachingLowestResolution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isCachingLowestResolution;
}
template<typename TResolution>
constexpr void Modio::Images::ModioImageSource_1<TResolution>::__cordl_internal_set__isCachingLowestResolution(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isCachingLowestResolution = value;
}
template<typename TResolution>
inline ::StringW Modio::Images::ModioImageSource_1<TResolution>::get_FileName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::ModioImageSource_1<TResolution>*>(),
                        {"get_FileName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename TResolution>
inline void Modio::Images::ModioImageSource_1<TResolution>::set_FileName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::ModioImageSource_1<TResolution>*>(),
                        {"set_FileName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TResolution>
inline void Modio::Images::ModioImageSource_1<TResolution>::_ctor(::StringW  fileName, /* [ParamArray] */ ::ArrayW<::StringW>  links)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::ModioImageSource_1<TResolution>*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fileName, links);
}
template<typename TResolution>
inline ::Modio::Images::ImageReference Modio::Images::ModioImageSource_1<TResolution>::GetUri(TResolution  resolution)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::ModioImageSource_1<TResolution>*>(),
                        {"GetUri", {}, {::i2c::type_of<TResolution>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Images::ImageReference>(this, ___internal_method, resolution);
}
template<typename TResolution>
inline ::System::Collections::Generic::IEnumerable_1<::Modio::Images::ImageReference>* Modio::Images::ModioImageSource_1<TResolution>::GetAllReferences()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::ModioImageSource_1<TResolution>*>(),
                        {"GetAllReferences", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Modio::Images::ImageReference>*>(this, ___internal_method);
}
template<typename TResolution>
inline void Modio::Images::ModioImageSource_1<TResolution>::CacheLowestResolutionOnDisk(bool  shouldCache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::ModioImageSource_1<TResolution>*>(),
                        {"CacheLowestResolutionOnDisk", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shouldCache);
}
template<typename TResolution>
inline ::Modio::Images::ModioImageSource_1<TResolution>* Modio::Images::ModioImageSource_1<TResolution>::New_ctor(::StringW  fileName, /* [ParamArray] */ ::ArrayW<::StringW>  links)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Images::ModioImageSource_1<TResolution>*>(fileName, links));
}
// Ctor Parameters []
template<typename TResolution>
constexpr ::Modio::Images::ModioImageSource_1<TResolution>::ModioImageSource_1()   {
}
