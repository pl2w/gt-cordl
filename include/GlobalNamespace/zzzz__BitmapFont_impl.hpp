#pragma once
// IWYU pragma private; include "GlobalNamespace/BitmapFont.hpp"
#include "GlobalNamespace/zzzz__BitmapFont_SymbolData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__BitmapFont_def.hpp"
#include "GlobalNamespace/zzzz__BitmapFont_SymbolData_def.hpp"
#include "GlobalNamespace/zzzz__BitmapFont_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BitmapFont.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitmapFont::*)()>(&::GlobalNamespace::BitmapFont::OnEnable)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5744d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitmapFont*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitmapFont.RenderToTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitmapFont::*)(::UnityEngine::Texture2D*, ::StringW)>(&::GlobalNamespace::BitmapFont::RenderToTexture)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x5744ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitmapFont*>(),
                        {"RenderToTexture", {}, {::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitmapFont._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitmapFont::*)()>(&::GlobalNamespace::BitmapFont::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5745138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitmapFont*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::BitmapFont::__cordl_internal_get_fontImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fontImage;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::BitmapFont::__cordl_internal_get_fontImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fontImage;
}
constexpr void GlobalNamespace::BitmapFont::__cordl_internal_set_fontImage(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fontImage = value;
}
constexpr ::UnityW<::UnityEngine::TextAsset>& GlobalNamespace::BitmapFont::__cordl_internal_get_fontJson()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fontJson;
}
constexpr ::UnityW<::UnityEngine::TextAsset> const& GlobalNamespace::BitmapFont::__cordl_internal_get_fontJson() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fontJson;
}
constexpr void GlobalNamespace::BitmapFont::__cordl_internal_set_fontJson(::UnityW<::UnityEngine::TextAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fontJson = value;
}
constexpr int32_t& GlobalNamespace::BitmapFont::__cordl_internal_get_symbolPixelsPerUnit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___symbolPixelsPerUnit;
}
constexpr int32_t const& GlobalNamespace::BitmapFont::__cordl_internal_get_symbolPixelsPerUnit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___symbolPixelsPerUnit;
}
constexpr void GlobalNamespace::BitmapFont::__cordl_internal_set_symbolPixelsPerUnit(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___symbolPixelsPerUnit = value;
}
constexpr ::StringW& GlobalNamespace::BitmapFont::__cordl_internal_get_characterMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___characterMap;
}
constexpr ::StringW const& GlobalNamespace::BitmapFont::__cordl_internal_get_characterMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___characterMap;
}
constexpr void GlobalNamespace::BitmapFont::__cordl_internal_set_characterMap(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___characterMap = value;
}
constexpr ::ArrayW<::GlobalNamespace::BitmapFont_SymbolData>& GlobalNamespace::BitmapFont::__cordl_internal_get_symbols()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___symbols;
}
constexpr ::ArrayW<::GlobalNamespace::BitmapFont_SymbolData> const& GlobalNamespace::BitmapFont::__cordl_internal_get_symbols() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___symbols;
}
constexpr void GlobalNamespace::BitmapFont::__cordl_internal_set_symbols(::ArrayW<::GlobalNamespace::BitmapFont_SymbolData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___symbols = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<char16_t,::GlobalNamespace::BitmapFont_SymbolData>*& GlobalNamespace::BitmapFont::__cordl_internal_get__charToSymbol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____charToSymbol;
}
constexpr ::System::Collections::Generic::Dictionary_2<char16_t,::GlobalNamespace::BitmapFont_SymbolData>* const& GlobalNamespace::BitmapFont::__cordl_internal_get__charToSymbol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____charToSymbol;
}
constexpr void GlobalNamespace::BitmapFont::__cordl_internal_set__charToSymbol(::System::Collections::Generic::Dictionary_2<char16_t,::GlobalNamespace::BitmapFont_SymbolData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____charToSymbol = value;
}
constexpr ::ArrayW<::UnityEngine::Color>& GlobalNamespace::BitmapFont::__cordl_internal_get__empty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____empty;
}
constexpr ::ArrayW<::UnityEngine::Color> const& GlobalNamespace::BitmapFont::__cordl_internal_get__empty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____empty;
}
constexpr void GlobalNamespace::BitmapFont::__cordl_internal_set__empty(::ArrayW<::UnityEngine::Color>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____empty = value;
}
inline void GlobalNamespace::BitmapFont::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitmapFont*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BitmapFont::RenderToTexture(::UnityEngine::Texture2D*  target, ::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitmapFont*>(),
                        {"RenderToTexture", {}, {::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, text);
}
inline void GlobalNamespace::BitmapFont::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitmapFont*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BitmapFont* GlobalNamespace::BitmapFont::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BitmapFont*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BitmapFont::BitmapFont()   {
}
//  Writing Method size for method: ::GlobalNamespace::BitmapFont___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BitmapFont___c::*)()>(&::GlobalNamespace::BitmapFont___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5745244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitmapFont___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitmapFont___c._OnEnable_b__7_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::GlobalNamespace::BitmapFont___c::*)(::GlobalNamespace::BitmapFont_SymbolData)>(&::GlobalNamespace::BitmapFont___c::_OnEnable_b__7_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x574524c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitmapFont___c*>(),
                        {"<OnEnable>b__7_0", {}, {::i2c::type_of<::GlobalNamespace::BitmapFont_SymbolData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BitmapFont___c._OnEnable_b__7_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BitmapFont_SymbolData (::GlobalNamespace::BitmapFont___c::*)(::GlobalNamespace::BitmapFont_SymbolData)>(&::GlobalNamespace::BitmapFont___c::_OnEnable_b__7_1)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5745254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitmapFont___c*>(),
                        {"<OnEnable>b__7_1", {}, {::i2c::type_of<::GlobalNamespace::BitmapFont_SymbolData>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BitmapFont___c::setStaticF___9(::GlobalNamespace::BitmapFont___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::BitmapFont___c*, "<>9", ::GlobalNamespace::BitmapFont___c*>(std::forward<::GlobalNamespace::BitmapFont___c*>(value));
}
inline ::GlobalNamespace::BitmapFont___c* GlobalNamespace::BitmapFont___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::BitmapFont___c*, "<>9", ::GlobalNamespace::BitmapFont___c*>();
}
inline void GlobalNamespace::BitmapFont___c::setStaticF___9__7_0(::System::Func_2<::GlobalNamespace::BitmapFont_SymbolData,char16_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::BitmapFont_SymbolData,char16_t>*, "<>9__7_0", ::GlobalNamespace::BitmapFont___c*>(std::forward<::System::Func_2<::GlobalNamespace::BitmapFont_SymbolData,char16_t>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::BitmapFont_SymbolData,char16_t>* GlobalNamespace::BitmapFont___c::getStaticF___9__7_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::BitmapFont_SymbolData,char16_t>*, "<>9__7_0", ::GlobalNamespace::BitmapFont___c*>();
}
inline void GlobalNamespace::BitmapFont___c::setStaticF___9__7_1(::System::Func_2<::GlobalNamespace::BitmapFont_SymbolData,::GlobalNamespace::BitmapFont_SymbolData>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::BitmapFont_SymbolData,::GlobalNamespace::BitmapFont_SymbolData>*, "<>9__7_1", ::GlobalNamespace::BitmapFont___c*>(std::forward<::System::Func_2<::GlobalNamespace::BitmapFont_SymbolData,::GlobalNamespace::BitmapFont_SymbolData>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::BitmapFont_SymbolData,::GlobalNamespace::BitmapFont_SymbolData>* GlobalNamespace::BitmapFont___c::getStaticF___9__7_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::BitmapFont_SymbolData,::GlobalNamespace::BitmapFont_SymbolData>*, "<>9__7_1", ::GlobalNamespace::BitmapFont___c*>();
}
inline void GlobalNamespace::BitmapFont___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitmapFont___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline char16_t GlobalNamespace::BitmapFont___c::_OnEnable_b__7_0(::GlobalNamespace::BitmapFont_SymbolData  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitmapFont___c*>(),
                        {"<OnEnable>b__7_0", {}, {::i2c::type_of<::GlobalNamespace::BitmapFont_SymbolData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method, s);
}
inline ::GlobalNamespace::BitmapFont_SymbolData GlobalNamespace::BitmapFont___c::_OnEnable_b__7_1(::GlobalNamespace::BitmapFont_SymbolData  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BitmapFont___c*>(),
                        {"<OnEnable>b__7_1", {}, {::i2c::type_of<::GlobalNamespace::BitmapFont_SymbolData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BitmapFont_SymbolData>(this, ___internal_method, s);
}
inline ::GlobalNamespace::BitmapFont___c* GlobalNamespace::BitmapFont___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BitmapFont___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BitmapFont___c::BitmapFont___c()   {
}
