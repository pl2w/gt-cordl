#pragma once
// IWYU pragma private; include "Modio/Images/ImageCacheBytes.hpp"
#include "Modio/Images/zzzz__BaseImageCache_1_impl.hpp"
#include "Modio/Images/zzzz__ImageCacheBytes_def.hpp"
//  Writing Method size for method: ::Modio::Images::ImageCacheBytes.Convert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Modio::Images::ImageCacheBytes::*)(::ArrayW<uint8_t>)>(&::Modio::Images::ImageCacheBytes::Convert)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0407f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Images::ImageCacheBytes*>(),
                    {::i2c::class_of<::Modio::Images::ImageCacheBytes*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Images::ImageCacheBytes.ConvertToBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Modio::Images::ImageCacheBytes::*)(::ArrayW<uint8_t>)>(&::Modio::Images::ImageCacheBytes::ConvertToBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0407f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Images::ImageCacheBytes*>(),
                    {::i2c::class_of<::Modio::Images::ImageCacheBytes*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Images::ImageCacheBytes._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Images::ImageCacheBytes::*)()>(&::Modio::Images::ImageCacheBytes::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa040800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::ImageCacheBytes*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Images::ImageCacheBytes::setStaticF_Instance(::Modio::Images::ImageCacheBytes*  value)  {
::cordl_internals::setStaticField<::Modio::Images::ImageCacheBytes*, "Instance", ::Modio::Images::ImageCacheBytes*>(std::forward<::Modio::Images::ImageCacheBytes*>(value));
}
inline ::Modio::Images::ImageCacheBytes* Modio::Images::ImageCacheBytes::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Modio::Images::ImageCacheBytes*, "Instance", ::Modio::Images::ImageCacheBytes*>();
}
inline ::ArrayW<uint8_t> Modio::Images::ImageCacheBytes::Convert(::ArrayW<uint8_t>  rawBytes)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Images::ImageCacheBytes*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, rawBytes);
}
inline ::ArrayW<uint8_t> Modio::Images::ImageCacheBytes::ConvertToBytes(::ArrayW<uint8_t>  image)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Images::ImageCacheBytes*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, image);
}
inline void Modio::Images::ImageCacheBytes::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Images::ImageCacheBytes*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Images::ImageCacheBytes* Modio::Images::ImageCacheBytes::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Images::ImageCacheBytes*>());
}
// Ctor Parameters []
constexpr ::Modio::Images::ImageCacheBytes::ImageCacheBytes()   {
}
