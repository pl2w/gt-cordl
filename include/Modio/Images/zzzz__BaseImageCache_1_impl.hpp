#pragma once
// IWYU pragma private; include "Modio/Images/BaseImageCache_1.hpp"
#include "Modio/Images/zzzz__BaseImageCache_impl.hpp"
#include "Modio/Images/zzzz__BaseImageCache_1_def.hpp"
#include "Modio/Images/zzzz__BaseImageCache`1__DownloadImageInternal_d__5_def.hpp"
#include "Modio/Images/zzzz__BaseImageCache`1__LoadFromDiskCache_d__6_def.hpp"
#include "Modio/Images/zzzz__ImageReference_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<::Modio::Images::ImageReference,::System::ValueTuple_2<::Modio::Error*,T>>*& Modio::Images::BaseImageCache_1<T>::__cordl_internal_get__cache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cache;
}
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<::Modio::Images::ImageReference,::System::ValueTuple_2<::Modio::Error*,T>>* const& Modio::Images::BaseImageCache_1<T>::__cordl_internal_get__cache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cache;
}
template<typename T>
constexpr void Modio::Images::BaseImageCache_1<T>::__cordl_internal_set__cache(::System::Collections::Generic::Dictionary_2<::Modio::Images::ImageReference,::System::ValueTuple_2<::Modio::Error*,T>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cache = value;
}
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<::Modio::Images::ImageReference,::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,T>>*>*& Modio::Images::BaseImageCache_1<T>::__cordl_internal_get__ongoingDownloads()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ongoingDownloads;
}
template<typename T>
constexpr ::System::Collections::Generic::Dictionary_2<::Modio::Images::ImageReference,::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,T>>*>* const& Modio::Images::BaseImageCache_1<T>::__cordl_internal_get__ongoingDownloads() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ongoingDownloads;
}
template<typename T>
constexpr void Modio::Images::BaseImageCache_1<T>::__cordl_internal_set__ongoingDownloads(::System::Collections::Generic::Dictionary_2<::Modio::Images::ImageReference,::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,T>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ongoingDownloads = value;
}
template<typename T>
inline void Modio::Images::BaseImageCache_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::BaseImageCache_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline T Modio::Images::BaseImageCache_1<T>::GetCachedImage(::Modio::Images::ImageReference  uri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::BaseImageCache_1<T>*>(),
                        {"GetCachedImage", {}, {::i2c::type_of<::Modio::Images::ImageReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, uri);
}
template<typename T>
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,T>>* Modio::Images::BaseImageCache_1<T>::DownloadImage(::Modio::Images::ImageReference  uri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::BaseImageCache_1<T>*>(),
                        {"DownloadImage", {}, {::i2c::type_of<::Modio::Images::ImageReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,T>>*>(this, ___internal_method, uri);
}
template<typename T>
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,T>>* Modio::Images::BaseImageCache_1<T>::DownloadImageInternal(::Modio::Images::ImageReference  uri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::BaseImageCache_1<T>*>(),
                        {"DownloadImageInternal", {}, {::i2c::type_of<::Modio::Images::ImageReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,T>>*>(this, ___internal_method, uri);
}
template<typename T>
inline ::System::Threading::Tasks::Task_1<T>* Modio::Images::BaseImageCache_1<T>::LoadFromDiskCache(::Modio::Images::ImageReference  imageReference)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::BaseImageCache_1<T>*>(),
                        {"LoadFromDiskCache", {}, {::i2c::type_of<::Modio::Images::ImageReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*>(this, ___internal_method, imageReference);
}
template<typename T>
inline T Modio::Images::BaseImageCache_1<T>::GetFirstCachedImage(::System::Collections::Generic::IEnumerable_1<::Modio::Images::ImageReference>*  imageReferences)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::BaseImageCache_1<T>*>(),
                        {"GetFirstCachedImage", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Modio::Images::ImageReference>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, imageReferences);
}
template<typename T>
inline bool Modio::Images::BaseImageCache_1<T>::CacheToDiskInternal(::Modio::Images::ImageReference  imageReference)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Images::BaseImageCache_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, imageReference);
}
template<typename T>
inline T Modio::Images::BaseImageCache_1<T>::Convert(::ArrayW<uint8_t>  rawBytes)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Images::BaseImageCache_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, rawBytes);
}
template<typename T>
inline ::ArrayW<uint8_t> Modio::Images::BaseImageCache_1<T>::ConvertToBytes(T  image)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Images::BaseImageCache_1<T>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, image);
}
template<typename T>
inline ::Modio::Images::BaseImageCache_1<T>* Modio::Images::BaseImageCache_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Images::BaseImageCache_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Modio::Images::BaseImageCache_1<T>::BaseImageCache_1()   {
}
