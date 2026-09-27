#pragma once
// IWYU pragma private; include "Modio/Unity/ImageCacheTexture2D.hpp"
#include "Modio/Images/zzzz__BaseImageCache_1_impl.hpp"
#include "Modio/Unity/zzzz__ImageCacheTexture2D_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::Modio::Unity::ImageCacheTexture2D.Convert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::Modio::Unity::ImageCacheTexture2D::*)(::ArrayW<uint8_t>)>(&::Modio::Unity::ImageCacheTexture2D::Convert)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x9f8fb18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::ImageCacheTexture2D*>(),
                    {::i2c::class_of<::Modio::Unity::ImageCacheTexture2D*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ImageCacheTexture2D.ConvertToBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Modio::Unity::ImageCacheTexture2D::*)(::UnityEngine::Texture2D*)>(&::Modio::Unity::ImageCacheTexture2D::ConvertToBytes)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9f8fc8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::ImageCacheTexture2D*>(),
                    {::i2c::class_of<::Modio::Unity::ImageCacheTexture2D*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ImageCacheTexture2D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::ImageCacheTexture2D::*)()>(&::Modio::Unity::ImageCacheTexture2D::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9f8fd08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ImageCacheTexture2D*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Unity::ImageCacheTexture2D::setStaticF_Instance(::Modio::Unity::ImageCacheTexture2D*  value)  {
::cordl_internals::setStaticField<::Modio::Unity::ImageCacheTexture2D*, "Instance", ::Modio::Unity::ImageCacheTexture2D*>(std::forward<::Modio::Unity::ImageCacheTexture2D*>(value));
}
inline ::Modio::Unity::ImageCacheTexture2D* Modio::Unity::ImageCacheTexture2D::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Modio::Unity::ImageCacheTexture2D*, "Instance", ::Modio::Unity::ImageCacheTexture2D*>();
}
inline ::UnityW<::UnityEngine::Texture2D> Modio::Unity::ImageCacheTexture2D::Convert(::ArrayW<uint8_t>  rawBytes)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::ImageCacheTexture2D*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method, rawBytes);
}
inline ::ArrayW<uint8_t> Modio::Unity::ImageCacheTexture2D::ConvertToBytes(::UnityEngine::Texture2D*  image)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::ImageCacheTexture2D*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, image);
}
inline void Modio::Unity::ImageCacheTexture2D::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ImageCacheTexture2D*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::ImageCacheTexture2D* Modio::Unity::ImageCacheTexture2D::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::ImageCacheTexture2D*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::ImageCacheTexture2D::ImageCacheTexture2D()   {
}
