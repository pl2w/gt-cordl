#pragma once
// IWYU pragma private; include "GlobalNamespace/BitmapFontText.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "GlobalNamespace/zzzz__BitmapFontText_def.hpp"
#include "GlobalNamespace/zzzz__BitmapFont_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BitmapFontText.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitmapFontText::*)()>(&::GlobalNamespace::BitmapFontText::Awake)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5745260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitmapFontText*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitmapFontText.Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitmapFontText::*)()>(&::GlobalNamespace::BitmapFontText::Render)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x57453b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitmapFontText*>(),
                        {"Render", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitmapFontText.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitmapFontText::*)()>(&::GlobalNamespace::BitmapFontText::Init)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5745278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitmapFontText*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitmapFontText._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitmapFontText::*)()>(&::GlobalNamespace::BitmapFontText::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57453fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitmapFontText*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::BitmapFontText::__cordl_internal_get_text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr ::StringW const& GlobalNamespace::BitmapFontText::__cordl_internal_get_text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr void GlobalNamespace::BitmapFontText::__cordl_internal_set_text(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___text = value;
}
constexpr bool& GlobalNamespace::BitmapFontText::__cordl_internal_get_uppercaseOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uppercaseOnly;
}
constexpr bool const& GlobalNamespace::BitmapFontText::__cordl_internal_get_uppercaseOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uppercaseOnly;
}
constexpr void GlobalNamespace::BitmapFontText::__cordl_internal_set_uppercaseOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uppercaseOnly = value;
}
constexpr ::UnityEngine::Vector2Int& GlobalNamespace::BitmapFontText::__cordl_internal_get_textArea()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textArea;
}
constexpr ::UnityEngine::Vector2Int const& GlobalNamespace::BitmapFontText::__cordl_internal_get_textArea() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textArea;
}
constexpr void GlobalNamespace::BitmapFontText::__cordl_internal_set_textArea(::UnityEngine::Vector2Int  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textArea = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::BitmapFontText::__cordl_internal_get_renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::BitmapFontText::__cordl_internal_get_renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderer;
}
constexpr void GlobalNamespace::BitmapFontText::__cordl_internal_set_renderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderer = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::BitmapFontText::__cordl_internal_get_texture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::BitmapFontText::__cordl_internal_get_texture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture;
}
constexpr void GlobalNamespace::BitmapFontText::__cordl_internal_set_texture(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texture = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::BitmapFontText::__cordl_internal_get_material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::BitmapFontText::__cordl_internal_get_material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___material;
}
constexpr void GlobalNamespace::BitmapFontText::__cordl_internal_set_material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___material = value;
}
constexpr ::UnityW<::GlobalNamespace::BitmapFont>& GlobalNamespace::BitmapFontText::__cordl_internal_get_font()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___font;
}
constexpr ::UnityW<::GlobalNamespace::BitmapFont> const& GlobalNamespace::BitmapFontText::__cordl_internal_get_font() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___font;
}
constexpr void GlobalNamespace::BitmapFontText::__cordl_internal_set_font(::UnityW<::GlobalNamespace::BitmapFont>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___font = value;
}
inline void GlobalNamespace::BitmapFontText::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitmapFontText*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BitmapFontText::Render()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitmapFontText*>(),
                        {"Render", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BitmapFontText::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitmapFontText*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BitmapFontText::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitmapFontText*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BitmapFontText* GlobalNamespace::BitmapFontText::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BitmapFontText*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BitmapFontText::BitmapFontText()   {
}
