#pragma once
// IWYU pragma private; include "Oculus/Interaction/DistantPointDetectorFrustums.hpp"
#include "Oculus/Interaction/zzzz__DistantPointDetectorFrustums_def.hpp"
#include "Oculus/Interaction/zzzz__ConicalFrustum_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::DistantPointDetectorFrustums.get_SelectionFrustum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::ConicalFrustum> (::Oculus::Interaction::DistantPointDetectorFrustums::*)()>(&::Oculus::Interaction::DistantPointDetectorFrustums::get_SelectionFrustum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4007ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistantPointDetectorFrustums>(),
                        {"get_SelectionFrustum", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistantPointDetectorFrustums.get_DeselectionFrustum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::ConicalFrustum> (::Oculus::Interaction::DistantPointDetectorFrustums::*)()>(&::Oculus::Interaction::DistantPointDetectorFrustums::get_DeselectionFrustum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4007f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistantPointDetectorFrustums>(),
                        {"get_DeselectionFrustum", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistantPointDetectorFrustums.get_AidFrustum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::ConicalFrustum> (::Oculus::Interaction::DistantPointDetectorFrustums::*)()>(&::Oculus::Interaction::DistantPointDetectorFrustums::get_AidFrustum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4007fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistantPointDetectorFrustums>(),
                        {"get_AidFrustum", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistantPointDetectorFrustums.get_AidBlending
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::DistantPointDetectorFrustums::*)()>(&::Oculus::Interaction::DistantPointDetectorFrustums::get_AidBlending)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa400804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistantPointDetectorFrustums>(),
                        {"get_AidBlending", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistantPointDetectorFrustums._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistantPointDetectorFrustums::*)(::Oculus::Interaction::ConicalFrustum*, ::Oculus::Interaction::ConicalFrustum*, ::Oculus::Interaction::ConicalFrustum*, float_t)>(&::Oculus::Interaction::DistantPointDetectorFrustums::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa40080c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistantPointDetectorFrustums>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::ConicalFrustum*>(), ::i2c::type_of<::Oculus::Interaction::ConicalFrustum*>(), ::i2c::type_of<::Oculus::Interaction::ConicalFrustum*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::Oculus::Interaction::ConicalFrustum> Oculus::Interaction::DistantPointDetectorFrustums::get_SelectionFrustum()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistantPointDetectorFrustums>(),
                        {"get_SelectionFrustum", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::ConicalFrustum>>(*this, ___internal_method);
}
inline ::UnityW<::Oculus::Interaction::ConicalFrustum> Oculus::Interaction::DistantPointDetectorFrustums::get_DeselectionFrustum()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistantPointDetectorFrustums>(),
                        {"get_DeselectionFrustum", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::ConicalFrustum>>(*this, ___internal_method);
}
inline ::UnityW<::Oculus::Interaction::ConicalFrustum> Oculus::Interaction::DistantPointDetectorFrustums::get_AidFrustum()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistantPointDetectorFrustums>(),
                        {"get_AidFrustum", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::ConicalFrustum>>(*this, ___internal_method);
}
inline float_t Oculus::Interaction::DistantPointDetectorFrustums::get_AidBlending()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistantPointDetectorFrustums>(),
                        {"get_AidBlending", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void Oculus::Interaction::DistantPointDetectorFrustums::_ctor(::Oculus::Interaction::ConicalFrustum*  selection, ::Oculus::Interaction::ConicalFrustum*  deselection, ::Oculus::Interaction::ConicalFrustum*  aid, float_t  blend)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistantPointDetectorFrustums>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::ConicalFrustum*>(), ::i2c::type_of<::Oculus::Interaction::ConicalFrustum*>(), ::i2c::type_of<::Oculus::Interaction::ConicalFrustum*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, selection, deselection, aid, blend);
}
// Ctor Parameters [CppParam { name: "_selectionFrustum", ty: "::UnityW<::Oculus::Interaction::ConicalFrustum>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_deselectionFrustum", ty: "::UnityW<::Oculus::Interaction::ConicalFrustum>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_aidFrustum", ty: "::UnityW<::Oculus::Interaction::ConicalFrustum>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_aidBlending", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::DistantPointDetectorFrustums::DistantPointDetectorFrustums(::UnityW<::Oculus::Interaction::ConicalFrustum>  _selectionFrustum, ::UnityW<::Oculus::Interaction::ConicalFrustum>  _deselectionFrustum, ::UnityW<::Oculus::Interaction::ConicalFrustum>  _aidFrustum, float_t  _aidBlending) noexcept  {
this->_selectionFrustum = _selectionFrustum;
this->_deselectionFrustum = _deselectionFrustum;
this->_aidFrustum = _aidFrustum;
this->_aidBlending = _aidBlending;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::DistantPointDetectorFrustums::DistantPointDetectorFrustums()   {
}
