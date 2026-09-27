#pragma once
// IWYU pragma private; include "GlobalNamespace/LckRawImageFillCanvas.hpp"
#include "GlobalNamespace/zzzz__LckRawImageFillCanvas_ScaleType_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LckRawImageFillCanvas_def.hpp"
#include "GlobalNamespace/zzzz__LckRawImageFillCanvas_ScaleType_def.hpp"
#include "UnityEngine/UI/zzzz__RawImage_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LckRawImageFillCanvas.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckRawImageFillCanvas::*)()>(&::GlobalNamespace::LckRawImageFillCanvas::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56c9a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckRawImageFillCanvas*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckRawImageFillCanvas.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckRawImageFillCanvas::*)()>(&::GlobalNamespace::LckRawImageFillCanvas::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56c9c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckRawImageFillCanvas*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckRawImageFillCanvas.UpdateSizeDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckRawImageFillCanvas::*)()>(&::GlobalNamespace::LckRawImageFillCanvas::UpdateSizeDelta)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x56c9a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckRawImageFillCanvas*>(),
                        {"UpdateSizeDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckRawImageFillCanvas._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckRawImageFillCanvas::*)()>(&::GlobalNamespace::LckRawImageFillCanvas::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c9c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckRawImageFillCanvas*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::RawImage>& GlobalNamespace::LckRawImageFillCanvas::__cordl_internal_get__rawImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rawImage;
}
constexpr ::UnityW<::UnityEngine::UI::RawImage> const& GlobalNamespace::LckRawImageFillCanvas::__cordl_internal_get__rawImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rawImage;
}
constexpr void GlobalNamespace::LckRawImageFillCanvas::__cordl_internal_set__rawImage(::UnityW<::UnityEngine::UI::RawImage>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rawImage = value;
}
constexpr ::GlobalNamespace::LckRawImageFillCanvas_ScaleType& GlobalNamespace::LckRawImageFillCanvas::__cordl_internal_get__scaleType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleType;
}
constexpr ::GlobalNamespace::LckRawImageFillCanvas_ScaleType const& GlobalNamespace::LckRawImageFillCanvas::__cordl_internal_get__scaleType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleType;
}
constexpr void GlobalNamespace::LckRawImageFillCanvas::__cordl_internal_set__scaleType(::GlobalNamespace::LckRawImageFillCanvas_ScaleType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scaleType = value;
}
inline void GlobalNamespace::LckRawImageFillCanvas::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckRawImageFillCanvas*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckRawImageFillCanvas::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckRawImageFillCanvas*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckRawImageFillCanvas::UpdateSizeDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckRawImageFillCanvas*>(),
                        {"UpdateSizeDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LckRawImageFillCanvas::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckRawImageFillCanvas*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LckRawImageFillCanvas* GlobalNamespace::LckRawImageFillCanvas::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LckRawImageFillCanvas*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckRawImageFillCanvas::LckRawImageFillCanvas()   {
}
