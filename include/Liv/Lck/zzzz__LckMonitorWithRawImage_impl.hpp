#pragma once
// IWYU pragma private; include "Liv/Lck/LckMonitorWithRawImage.hpp"
#include "Liv/Lck/zzzz__LckMonitor_impl.hpp"
#include "Liv/Lck/zzzz__LckMonitorWithRawImage_def.hpp"
#include "UnityEngine/UI/zzzz__RawImage_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckMonitorWithRawImage.SetRenderTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckMonitorWithRawImage::*)(::UnityEngine::RenderTexture*)>(&::Liv::Lck::LckMonitorWithRawImage::SetRenderTexture)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x9ce4b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LckMonitorWithRawImage*>(),
                    {::i2c::class_of<::Liv::Lck::LckMonitorWithRawImage*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMonitorWithRawImage.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckMonitorWithRawImage::*)()>(&::Liv::Lck::LckMonitorWithRawImage::OnDisable)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9ce4ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonitorWithRawImage*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckMonitorWithRawImage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckMonitorWithRawImage::*)()>(&::Liv::Lck::LckMonitorWithRawImage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ce4dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonitorWithRawImage*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::RawImage>& Liv::Lck::LckMonitorWithRawImage::__cordl_internal_get__monitorImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____monitorImage;
}
constexpr ::UnityW<::UnityEngine::UI::RawImage> const& Liv::Lck::LckMonitorWithRawImage::__cordl_internal_get__monitorImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____monitorImage;
}
constexpr void Liv::Lck::LckMonitorWithRawImage::__cordl_internal_set__monitorImage(::UnityW<::UnityEngine::UI::RawImage>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____monitorImage = value;
}
constexpr bool& Liv::Lck::LckMonitorWithRawImage::__cordl_internal_get__correctImageSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____correctImageSize;
}
constexpr bool const& Liv::Lck::LckMonitorWithRawImage::__cordl_internal_get__correctImageSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____correctImageSize;
}
constexpr void Liv::Lck::LckMonitorWithRawImage::__cordl_internal_set__correctImageSize(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____correctImageSize = value;
}
inline void Liv::Lck::LckMonitorWithRawImage::SetRenderTexture(::UnityEngine::RenderTexture*  renderTexture)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::LckMonitorWithRawImage*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderTexture);
}
inline void Liv::Lck::LckMonitorWithRawImage::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonitorWithRawImage*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckMonitorWithRawImage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckMonitorWithRawImage*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::LckMonitorWithRawImage* Liv::Lck::LckMonitorWithRawImage::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckMonitorWithRawImage*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckMonitorWithRawImage::LckMonitorWithRawImage()   {
}
