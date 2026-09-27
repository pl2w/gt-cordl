#pragma once
// IWYU pragma private; include "Modio/Images/LazyImage_1.hpp"
#include "Modio/Images/zzzz__ImageReference_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Images/zzzz__LazyImage_1_def.hpp"
#include "Modio/Images/zzzz__BaseImageCache_1_def.hpp"
#include "Modio/Images/zzzz__LazyImage`1__SetImage_d__10_1_def.hpp"
#include "Modio/Images/zzzz__ModioImageSource_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
template<typename TImage>
constexpr ::System::Action_1<TImage>*& Modio::Images::LazyImage_1<TImage>::__cordl_internal_get_OnNewImageAvailable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnNewImageAvailable;
}
template<typename TImage>
constexpr ::System::Action_1<TImage>* const& Modio::Images::LazyImage_1<TImage>::__cordl_internal_get_OnNewImageAvailable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnNewImageAvailable;
}
template<typename TImage>
constexpr void Modio::Images::LazyImage_1<TImage>::__cordl_internal_set_OnNewImageAvailable(::System::Action_1<TImage>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnNewImageAvailable = value;
}
template<typename TImage>
constexpr ::System::Action_1<bool>*& Modio::Images::LazyImage_1<TImage>::__cordl_internal_get_OnLoadingActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLoadingActive;
}
template<typename TImage>
constexpr ::System::Action_1<bool>* const& Modio::Images::LazyImage_1<TImage>::__cordl_internal_get_OnLoadingActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLoadingActive;
}
template<typename TImage>
constexpr void Modio::Images::LazyImage_1<TImage>::__cordl_internal_set_OnLoadingActive(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnLoadingActive = value;
}
template<typename TImage>
constexpr ::Modio::Images::ImageReference& Modio::Images::LazyImage_1<TImage>::__cordl_internal_get__currentImageReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentImageReference;
}
template<typename TImage>
constexpr ::Modio::Images::ImageReference const& Modio::Images::LazyImage_1<TImage>::__cordl_internal_get__currentImageReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentImageReference;
}
template<typename TImage>
constexpr void Modio::Images::LazyImage_1<TImage>::__cordl_internal_set__currentImageReference(::Modio::Images::ImageReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentImageReference = value;
}
template<typename TImage>
constexpr ::Modio::Images::BaseImageCache_1<TImage>*& Modio::Images::LazyImage_1<TImage>::__cordl_internal_get__imageCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imageCache;
}
template<typename TImage>
constexpr ::Modio::Images::BaseImageCache_1<TImage>* const& Modio::Images::LazyImage_1<TImage>::__cordl_internal_get__imageCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imageCache;
}
template<typename TImage>
constexpr void Modio::Images::LazyImage_1<TImage>::__cordl_internal_set__imageCache(::Modio::Images::BaseImageCache_1<TImage>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____imageCache = value;
}
template<typename TImage>
constexpr bool& Modio::Images::LazyImage_1<TImage>::__cordl_internal_get__failedToLoad()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____failedToLoad;
}
template<typename TImage>
constexpr bool const& Modio::Images::LazyImage_1<TImage>::__cordl_internal_get__failedToLoad() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____failedToLoad;
}
template<typename TImage>
constexpr void Modio::Images::LazyImage_1<TImage>::__cordl_internal_set__failedToLoad(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____failedToLoad = value;
}
template<typename TImage>
inline void Modio::Images::LazyImage_1<TImage>::add_OnNewImageAvailable(::System::Action_1<TImage>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::LazyImage_1<TImage>*>(),
                        {"add_OnNewImageAvailable", {}, {::i2c::type_of<::System::Action_1<TImage>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TImage>
inline void Modio::Images::LazyImage_1<TImage>::remove_OnNewImageAvailable(::System::Action_1<TImage>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::LazyImage_1<TImage>*>(),
                        {"remove_OnNewImageAvailable", {}, {::i2c::type_of<::System::Action_1<TImage>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TImage>
inline void Modio::Images::LazyImage_1<TImage>::add_OnLoadingActive(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::LazyImage_1<TImage>*>(),
                        {"add_OnLoadingActive", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TImage>
inline void Modio::Images::LazyImage_1<TImage>::remove_OnLoadingActive(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::LazyImage_1<TImage>*>(),
                        {"remove_OnLoadingActive", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TImage>
inline void Modio::Images::LazyImage_1<TImage>::_ctor(::Modio::Images::BaseImageCache_1<TImage>*  imageCache, ::System::Action_1<TImage>*  onImageAvailable, ::System::Action_1<bool>*  onLoadingActive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::LazyImage_1<TImage>*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::Images::BaseImageCache_1<TImage>*>(), ::i2c::type_of<::System::Action_1<TImage>*>(), ::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, imageCache, onImageAvailable, onLoadingActive);
}
template<typename TImage>
template<typename T>
inline void Modio::Images::LazyImage_1<TImage>::SetImage(::Modio::Images::ModioImageSource_1<T>*  source, T  resolution)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Modio::Images::LazyImage_1<TImage>*>(),
                    {"SetImage", {::i2c::class_of<T>()}, {::i2c::type_of<::Modio::Images::ModioImageSource_1<T>*>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, resolution);
}
template<typename TImage>
inline void Modio::Images::LazyImage_1<TImage>::ApplyImage(TImage  cachedImage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::LazyImage_1<TImage>*>(),
                        {"ApplyImage", {}, {::i2c::type_of<TImage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cachedImage);
}
template<typename TImage>
inline ::Modio::Images::LazyImage_1<TImage>* Modio::Images::LazyImage_1<TImage>::New_ctor(::Modio::Images::BaseImageCache_1<TImage>*  imageCache, ::System::Action_1<TImage>*  onImageAvailable, ::System::Action_1<bool>*  onLoadingActive)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Images::LazyImage_1<TImage>*>(imageCache, onImageAvailable, onLoadingActive));
}
// Ctor Parameters []
template<typename TImage>
constexpr ::Modio::Images::LazyImage_1<TImage>::LazyImage_1()   {
}
