#pragma once
// IWYU pragma private; include "Modio/Images/BaseImageCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Images/zzzz__BaseImageCache_def.hpp"
#include "Modio/Images/zzzz__ImageReference_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Modio::Images::BaseImageCache.CacheToDisk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::Images::ImageReference, bool)>(&::Modio::Images::BaseImageCache::CacheToDisk)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0xa040428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::BaseImageCache*>(),
                        {"CacheToDisk", {}, {::i2c::type_of<::Modio::Images::ImageReference>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Images::BaseImageCache.CacheToDiskInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Images::BaseImageCache::*)(::Modio::Images::ImageReference)>(&::Modio::Images::BaseImageCache::CacheToDiskInternal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Images::BaseImageCache*>(),
                    {::i2c::class_of<::Modio::Images::BaseImageCache*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Images::BaseImageCache._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Images::BaseImageCache::*)()>(&::Modio::Images::BaseImageCache::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0406f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::BaseImageCache*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Images::BaseImageCache::setStaticF_ImageCacheInstances(::System::Collections::Generic::List_1<::Modio::Images::BaseImageCache*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::Modio::Images::BaseImageCache*>*, "ImageCacheInstances", ::Modio::Images::BaseImageCache*>(std::forward<::System::Collections::Generic::List_1<::Modio::Images::BaseImageCache*>*>(value));
}
inline ::System::Collections::Generic::List_1<::Modio::Images::BaseImageCache*>* Modio::Images::BaseImageCache::getStaticF_ImageCacheInstances()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::Modio::Images::BaseImageCache*>*, "ImageCacheInstances", ::Modio::Images::BaseImageCache*>();
}
inline void Modio::Images::BaseImageCache::setStaticF_PendingDiskSaves(::System::Collections::Generic::HashSet_1<::Modio::Images::ImageReference>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::Modio::Images::ImageReference>*, "PendingDiskSaves", ::Modio::Images::BaseImageCache*>(std::forward<::System::Collections::Generic::HashSet_1<::Modio::Images::ImageReference>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::Modio::Images::ImageReference>* Modio::Images::BaseImageCache::getStaticF_PendingDiskSaves()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::Modio::Images::ImageReference>*, "PendingDiskSaves", ::Modio::Images::BaseImageCache*>();
}
inline void Modio::Images::BaseImageCache::CacheToDisk(::Modio::Images::ImageReference  image, bool  shouldCache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::BaseImageCache*>(),
                        {"CacheToDisk", {}, {::i2c::type_of<::Modio::Images::ImageReference>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, image, shouldCache);
}
inline bool Modio::Images::BaseImageCache::CacheToDiskInternal(::Modio::Images::ImageReference  imageReference)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Images::BaseImageCache*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, imageReference);
}
inline void Modio::Images::BaseImageCache::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::BaseImageCache*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Images::BaseImageCache* Modio::Images::BaseImageCache::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Images::BaseImageCache*>());
}
// Ctor Parameters []
constexpr ::Modio::Images::BaseImageCache::BaseImageCache()   {
}
