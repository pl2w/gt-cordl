#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/FormattingInfoPool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FormattingInfoPool)
namespace System {
class Object;
}
namespace UnityEngine::Localization::SmartFormat::Core::Formatting {
class FormatDetails;
}
namespace UnityEngine::Localization::SmartFormat::Core::Formatting {
class FormattingInfo;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Format;
}
namespace UnityEngine::Localization::SmartFormat::Core::Parsing {
class Placeholder;
}
namespace UnityEngine::Localization::SmartFormat {
class FormattingInfoPool___c;
}
namespace UnityEngine::Pool {
template<typename T>
class ObjectPool_1;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat {
class FormattingInfoPool;
}
namespace UnityEngine::Localization::SmartFormat {
class FormattingInfoPool___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::FormattingInfoPool*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::FormattingInfoPool___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::FormattingInfoPool*, "UnityEngine.Localization.SmartFormat", "FormattingInfoPool");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::FormattingInfoPool___c*, "UnityEngine.Localization.SmartFormat", "FormattingInfoPool/<>c");
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.FormattingInfoPool
class CORDL_TYPE FormattingInfoPool : public ::System::Object {
public:
// Declarations
using __c = ::UnityEngine::Localization::SmartFormat::FormattingInfoPool___c;

/// @brief Field s_Pool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Pool, put=setStaticF_s_Pool)) ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*>*  s_Pool;

/// @brief Method Get, addr 0xb02aee0, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo* Get(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*  formatDetails, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  format, ::System::Object*  currentValue) ;

/// @brief Method Get, addr 0xb02e62c, size 0xc0, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo* Get(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*  parent, ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*  formatDetails, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  format, ::System::Object*  currentValue) ;

/// @brief Method Get, addr 0xb02e6ec, size 0xc0, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo* Get(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*  parent, ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormatDetails*  formatDetails, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Placeholder*  placeholder, ::System::Object*  currentValue) ;

/// @brief Method Release, addr 0xb02af90, size 0x80, virtual false, abstract: false, final false
static inline void Release(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*  toRelease) ;

static inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*>* getStaticF_s_Pool() ;

static inline void setStaticF_s_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FormattingInfoPool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FormattingInfoPool", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FormattingInfoPool(FormattingInfoPool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FormattingInfoPool", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FormattingInfoPool(FormattingInfoPool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25146};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::FormattingInfoPool) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.FormattingInfoPool/<>c
class CORDL_TYPE FormattingInfoPool___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Localization::SmartFormat::FormattingInfoPool___c*  __9;

static inline ::UnityEngine::Localization::SmartFormat::FormattingInfoPool___c* New_ctor() ;

/// @brief Method <.cctor>b__5_0, addr 0xb02e9b0, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo* __cctor_b__5_0() ;

/// @brief Method <.cctor>b__5_1, addr 0xb02ea04, size 0x18, virtual false, abstract: false, final false
inline void __cctor_b__5_1(::UnityEngine::Localization::SmartFormat::Core::Formatting::FormattingInfo*  fi) ;

/// @brief Method .ctor, addr 0xb02e9a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Localization::SmartFormat::FormattingInfoPool___c* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::Localization::SmartFormat::FormattingInfoPool___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FormattingInfoPool___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FormattingInfoPool___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FormattingInfoPool___c(FormattingInfoPool___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FormattingInfoPool___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FormattingInfoPool___c(FormattingInfoPool___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25145};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::SmartFormat::FormattingInfoPool___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat
