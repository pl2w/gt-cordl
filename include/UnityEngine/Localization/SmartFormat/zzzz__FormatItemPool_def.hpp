#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/FormatItemPool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FormatItemPool)
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class FormatItem;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Format;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class LiteralText;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Placeholder;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Selector;
}
namespace UnityEngine::Localization::SmartFormat::Core::Settings {
class SmartSettings;
}
namespace UnityEngine::Localization::SmartFormat {
class FormatItemPool___c;
}
namespace UnityEngine::Pool {
template<typename T>
class ObjectPool_1;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat {
class FormatItemPool;
}
namespace UnityEngine::Localization::SmartFormat {
class FormatItemPool___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::FormatItemPool*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::FormatItemPool___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::FormatItemPool*, "UnityEngine.Localization.SmartFormat", "FormatItemPool");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::FormatItemPool___c*, "UnityEngine.Localization.SmartFormat", "FormatItemPool/<>c");
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.FormatItemPool
class CORDL_TYPE FormatItemPool : public ::System::Object {
public:
// Declarations
using __c = ::UnityEngine::Localization::SmartFormat::FormatItemPool___c;

/// @brief Field s_FormatPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_FormatPool, put=setStaticF_s_FormatPool)) ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>*  s_FormatPool;

/// @brief Field s_LiteralTextPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_LiteralTextPool, put=setStaticF_s_LiteralTextPool)) ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText*>*  s_LiteralTextPool;

/// @brief Field s_PlaceholderPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_PlaceholderPool, put=setStaticF_s_PlaceholderPool)) ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>*  s_PlaceholderPool;

/// @brief Field s_SelectorPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_SelectorPool, put=setStaticF_s_SelectorPool)) ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>*  s_SelectorPool;

/// @brief Method GetFormat, addr 0xb02d17c, size 0xb8, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* GetFormat(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  smartSettings, ::StringW  baseString) ;

/// @brief Method GetFormat, addr 0xb02d234, size 0xc0, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* GetFormat(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  smartSettings, ::StringW  baseString, int32_t  startIndex, int32_t  endIndex) ;

/// @brief Method GetFormat, addr 0xb02d2f4, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* GetFormat(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  smartSettings, ::StringW  baseString, int32_t  startIndex, int32_t  endIndex, bool  nested) ;

/// @brief Method GetFormat, addr 0xb02d3c0, size 0xbc, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* GetFormat(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  smartSettings, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*  parent, int32_t  startIndex) ;

/// @brief Method GetLiteralText, addr 0xb02d054, size 0xc4, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText* GetLiteralText(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  smartSettings, ::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*  parent, ::StringW  baseString, int32_t  startIndex, int32_t  endIndex) ;

/// @brief Method GetLiteralText, addr 0xb02ceac, size 0xac, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText* GetLiteralText(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  smartSettings, ::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*  parent, int32_t  startIndex) ;

/// @brief Method GetLiteralText, addr 0xb02cf7c, size 0xbc, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText* GetLiteralText(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  smartSettings, ::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*  parent, int32_t  startIndex, int32_t  endIndex) ;

/// @brief Method GetPlaceholder, addr 0xb02d47c, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder* GetPlaceholder(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  smartSettings, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  parent, int32_t  startIndex, int32_t  nestedDepth) ;

/// @brief Method GetPlaceholder, addr 0xb02d56c, size 0x114, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder* GetPlaceholder(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  smartSettings, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  parent, int32_t  startIndex, int32_t  nestedDepth, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  itemFormat, int32_t  endIndex) ;

/// @brief Method GetSelector, addr 0xb02d680, size 0xd8, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector* GetSelector(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  smartSettings, ::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*  parent, ::StringW  baseString, int32_t  startIndex, int32_t  endIndex, int32_t  operatorStart, int32_t  selectorIndex) ;

/// @brief Method Release, addr 0xb02d8d8, size 0x248, virtual false, abstract: false, final false
static inline void Release(::UnityEngine::Localization::SmartFormat::Core::Parsing::FormatItem*  format) ;

/// @brief Method ReleaseFormat, addr 0xb02a870, size 0x80, virtual false, abstract: false, final false
static inline void ReleaseFormat(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  format) ;

/// @brief Method ReleaseLiteralText, addr 0xb02d758, size 0x80, virtual false, abstract: false, final false
static inline void ReleaseLiteralText(::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText*  literal) ;

/// @brief Method ReleasePlaceholder, addr 0xb02d7d8, size 0x80, virtual false, abstract: false, final false
static inline void ReleasePlaceholder(::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*  placeholder) ;

/// @brief Method ReleaseSelector, addr 0xb02d858, size 0x80, virtual false, abstract: false, final false
static inline void ReleaseSelector(::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*  selector) ;

static inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>* getStaticF_s_FormatPool() ;

static inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText*>* getStaticF_s_LiteralTextPool() ;

static inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>* getStaticF_s_PlaceholderPool() ;

static inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>* getStaticF_s_SelectorPool() ;

static inline void setStaticF_s_FormatPool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>*  value) ;

static inline void setStaticF_s_LiteralTextPool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText*>*  value) ;

static inline void setStaticF_s_PlaceholderPool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*>*  value) ;

static inline void setStaticF_s_SelectorPool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FormatItemPool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FormatItemPool", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FormatItemPool(FormatItemPool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FormatItemPool", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FormatItemPool(FormatItemPool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25144};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::FormatItemPool) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.FormatItemPool/<>c
class CORDL_TYPE FormatItemPool___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Localization::SmartFormat::FormatItemPool___c*  __9;

static inline ::UnityEngine::Localization::SmartFormat::FormatItemPool___c* New_ctor() ;

/// @brief Method <.cctor>b__19_0, addr 0xb02e05c, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText* __cctor_b__19_0() ;

/// @brief Method <.cctor>b__19_1, addr 0xb02e0b8, size 0x20, virtual false, abstract: false, final false
inline void __cctor_b__19_1(::UnityEngine::Localization::SmartFormat::Core::Parsing::LiteralText*  lt) ;

/// @brief Method <.cctor>b__19_2, addr 0xb02e0d8, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* __cctor_b__19_2() ;

/// @brief Method <.cctor>b__19_3, addr 0xb02e204, size 0x14, virtual false, abstract: false, final false
inline void __cctor_b__19_3(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  f) ;

/// @brief Method <.cctor>b__19_4, addr 0xb02e54c, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder* __cctor_b__19_4() ;

/// @brief Method <.cctor>b__19_5, addr 0xb02e5a0, size 0x18, virtual false, abstract: false, final false
inline void __cctor_b__19_5(::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*  p) ;

/// @brief Method <.cctor>b__19_6, addr 0xb02e5b8, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector* __cctor_b__19_6() ;

/// @brief Method <.cctor>b__19_7, addr 0xb02e60c, size 0x20, virtual false, abstract: false, final false
inline void __cctor_b__19_7(::UnityEngine::Localization::SmartFormat::Core::Parsing::Selector*  s) ;

/// @brief Method .ctor, addr 0xb02e054, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Localization::SmartFormat::FormatItemPool___c* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::Localization::SmartFormat::FormatItemPool___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FormatItemPool___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FormatItemPool___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FormatItemPool___c(FormatItemPool___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FormatItemPool___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FormatItemPool___c(FormatItemPool___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25143};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::FormatItemPool___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat
