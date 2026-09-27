#pragma once
// IWYU pragma private; include "GlobalNamespace/BitmapFont.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BitmapFont_SymbolData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BitmapFont)
namespace GlobalNamespace {
struct BitmapFont_SymbolData;
}
namespace GlobalNamespace {
class BitmapFont___c;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
class TextAsset;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class BitmapFont;
}
namespace GlobalNamespace {
class BitmapFont___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BitmapFont*);
MARK_REF_T(::GlobalNamespace::BitmapFont___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BitmapFont*, "", "BitmapFont");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BitmapFont___c*, "", "BitmapFont/<>c");
// Dependencies BitmapFont::SymbolData, UnityEngine.Color, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: BitmapFont
class CORDL_TYPE BitmapFont : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using SymbolData = ::GlobalNamespace::BitmapFont_SymbolData;

using __c = ::GlobalNamespace::BitmapFont___c;

/// @brief Field _charToSymbol, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__charToSymbol, put=__cordl_internal_set__charToSymbol)) ::System::Collections::Generic::Dictionary_2<char16_t,::GlobalNamespace::BitmapFont_SymbolData>*  _charToSymbol;

/// @brief Field _empty, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__empty, put=__cordl_internal_set__empty)) ::ArrayW<::UnityEngine::Color>  _empty;

/// @brief Field characterMap, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_characterMap, put=__cordl_internal_set_characterMap)) ::StringW  characterMap;

/// @brief Field fontImage, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_fontImage, put=__cordl_internal_set_fontImage)) ::UnityW<::UnityEngine::Texture2D>  fontImage;

/// @brief Field fontJson, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_fontJson, put=__cordl_internal_set_fontJson)) ::UnityW<::UnityEngine::TextAsset>  fontJson;

/// @brief Field symbolPixelsPerUnit, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_symbolPixelsPerUnit, put=__cordl_internal_set_symbolPixelsPerUnit)) int32_t  symbolPixelsPerUnit;

/// @brief Field symbols, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_symbols, put=__cordl_internal_set_symbols)) ::ArrayW<::GlobalNamespace::BitmapFont_SymbolData>  symbols;

static inline ::GlobalNamespace::BitmapFont* New_ctor() ;

/// @brief Method OnEnable, addr 0x5744d20, size 0x1a8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RenderToTexture, addr 0x5744ec8, size 0x270, virtual false, abstract: false, final false
inline void RenderToTexture(::UnityEngine::Texture2D*  target, ::StringW  text) ;

constexpr ::System::Collections::Generic::Dictionary_2<char16_t,::GlobalNamespace::BitmapFont_SymbolData>* const& __cordl_internal_get__charToSymbol() const;

constexpr ::System::Collections::Generic::Dictionary_2<char16_t,::GlobalNamespace::BitmapFont_SymbolData>*& __cordl_internal_get__charToSymbol() ;

constexpr ::ArrayW<::UnityEngine::Color> const& __cordl_internal_get__empty() const;

constexpr ::ArrayW<::UnityEngine::Color>& __cordl_internal_get__empty() ;

constexpr ::StringW const& __cordl_internal_get_characterMap() const;

constexpr ::StringW& __cordl_internal_get_characterMap() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_fontImage() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_fontImage() ;

constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get_fontJson() const;

constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get_fontJson() ;

constexpr int32_t const& __cordl_internal_get_symbolPixelsPerUnit() const;

constexpr int32_t& __cordl_internal_get_symbolPixelsPerUnit() ;

constexpr ::ArrayW<::GlobalNamespace::BitmapFont_SymbolData> const& __cordl_internal_get_symbols() const;

constexpr ::ArrayW<::GlobalNamespace::BitmapFont_SymbolData>& __cordl_internal_get_symbols() ;

constexpr void __cordl_internal_set__charToSymbol(::System::Collections::Generic::Dictionary_2<char16_t,::GlobalNamespace::BitmapFont_SymbolData>*  value) ;

constexpr void __cordl_internal_set__empty(::ArrayW<::UnityEngine::Color>  value) ;

constexpr void __cordl_internal_set_characterMap(::StringW  value) ;

constexpr void __cordl_internal_set_fontImage(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_fontJson(::UnityW<::UnityEngine::TextAsset>  value) ;

constexpr void __cordl_internal_set_symbolPixelsPerUnit(int32_t  value) ;

constexpr void __cordl_internal_set_symbols(::ArrayW<::GlobalNamespace::BitmapFont_SymbolData>  value) ;

/// @brief Method .ctor, addr 0x5745138, size 0xa4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BitmapFont() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BitmapFont", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BitmapFont(BitmapFont && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BitmapFont", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BitmapFont(BitmapFont const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1263};

/// @brief Field fontImage, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___fontImage;

/// @brief Field fontJson, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TextAsset>  ___fontJson;

/// @brief Field symbolPixelsPerUnit, offset: 0x28, size: 0x4, def value: None
 int32_t  ___symbolPixelsPerUnit;

/// @brief Field characterMap, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___characterMap;

/// [Space]
/// @brief Field symbols, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::BitmapFont_SymbolData>  ___symbols;

/// @brief Field _charToSymbol, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<char16_t,::GlobalNamespace::BitmapFont_SymbolData>*  ____charToSymbol;

/// @brief Field _empty, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color>  ____empty;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BitmapFont, ___fontImage) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitmapFont, ___fontJson) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitmapFont, ___symbolPixelsPerUnit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitmapFont, ___characterMap) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitmapFont, ___symbols) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitmapFont, ____charToSymbol) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BitmapFont, ____empty) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BitmapFont) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BitmapFont/<>c
class CORDL_TYPE BitmapFont___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::BitmapFont___c*  __9;

/// @brief Field <>9__7_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_0, put=setStaticF___9__7_0)) ::System::Func_2<::GlobalNamespace::BitmapFont_SymbolData,char16_t>*  __9__7_0;

/// @brief Field <>9__7_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_1, put=setStaticF___9__7_1)) ::System::Func_2<::GlobalNamespace::BitmapFont_SymbolData,::GlobalNamespace::BitmapFont_SymbolData>*  __9__7_1;

static inline ::GlobalNamespace::BitmapFont___c* New_ctor() ;

/// @brief Method <OnEnable>b__7_0, addr 0x574524c, size 0x8, virtual false, abstract: false, final false
inline char16_t _OnEnable_b__7_0(::GlobalNamespace::BitmapFont_SymbolData  s) ;

/// @brief Method <OnEnable>b__7_1, addr 0x5745254, size 0xc, virtual false, abstract: false, final false
inline ::GlobalNamespace::BitmapFont_SymbolData _OnEnable_b__7_1(::GlobalNamespace::BitmapFont_SymbolData  s) ;

/// @brief Method .ctor, addr 0x5745244, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::BitmapFont___c* getStaticF___9() ;

static inline ::System::Func_2<::GlobalNamespace::BitmapFont_SymbolData,char16_t>* getStaticF___9__7_0() ;

static inline ::System::Func_2<::GlobalNamespace::BitmapFont_SymbolData,::GlobalNamespace::BitmapFont_SymbolData>* getStaticF___9__7_1() ;

static inline void setStaticF___9(::GlobalNamespace::BitmapFont___c*  value) ;

static inline void setStaticF___9__7_0(::System::Func_2<::GlobalNamespace::BitmapFont_SymbolData,char16_t>*  value) ;

static inline void setStaticF___9__7_1(::System::Func_2<::GlobalNamespace::BitmapFont_SymbolData,::GlobalNamespace::BitmapFont_SymbolData>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BitmapFont___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BitmapFont___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BitmapFont___c(BitmapFont___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BitmapFont___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BitmapFont___c(BitmapFont___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1262};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BitmapFont___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
