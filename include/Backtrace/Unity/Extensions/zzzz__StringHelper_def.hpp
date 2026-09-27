#pragma once
// IWYU pragma private; include "Backtrace/Unity/Extensions/StringHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StringHelper)
namespace Backtrace::Unity::Extensions {
class StringHelper___c;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Backtrace::Unity::Extensions {
class StringHelper;
}
namespace Backtrace::Unity::Extensions {
class StringHelper___c;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Extensions::StringHelper*);
MARK_REF_T(::Backtrace::Unity::Extensions::StringHelper___c*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Extensions::StringHelper*, "Backtrace.Unity.Extensions", "StringHelper");
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Extensions::StringHelper___c*, "Backtrace.Unity.Extensions", "StringHelper/<>c");
// [Extension]
// Dependencies System.Object
namespace Backtrace::Unity::Extensions {
// Is value type: false
// CS Name: Backtrace.Unity.Extensions.StringHelper
class CORDL_TYPE StringHelper : public ::System::Object {
public:
// Declarations
using __c = ::Backtrace::Unity::Extensions::StringHelper___c;

/// [Extension]
/// @brief Method GetSha, addr 0x5f25e10, size 0x278, virtual false, abstract: false, final false
static inline ::StringW GetSha(::StringW  source) ;

/// [Extension]
/// @brief Method GetSha, addr 0x5f25ddc, size 0x34, virtual false, abstract: false, final false
static inline ::StringW GetSha(::System::Text::StringBuilder*  source) ;

/// [Extension]
/// @brief Method OnlyLetters, addr 0x5f25c78, size 0x164, virtual false, abstract: false, final false
static inline ::StringW OnlyLetters(::StringW  source) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StringHelper(StringHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringHelper(StringHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27667};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Backtrace::Unity::Extensions::StringHelper) == 0x10, "Size mismatch!");

} // namespace end def Backtrace::Unity::Extensions
// [CompilerGenerated]
// Dependencies System.Object
namespace Backtrace::Unity::Extensions {
// Is value type: false
// CS Name: Backtrace.Unity.Extensions.StringHelper/<>c
class CORDL_TYPE StringHelper___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Backtrace::Unity::Extensions::StringHelper___c*  __9;

/// @brief Field <>9__0_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_0, put=setStaticF___9__0_0)) ::System::Func_2<char16_t,bool>*  __9__0_0;

static inline ::Backtrace::Unity::Extensions::StringHelper___c* New_ctor() ;

/// @brief Method <OnlyLetters>b__0_0, addr 0x5f260f8, size 0x30, virtual false, abstract: false, final false
inline bool _OnlyLetters_b__0_0(char16_t  n) ;

/// @brief Method .ctor, addr 0x5f260f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Backtrace::Unity::Extensions::StringHelper___c* getStaticF___9() ;

static inline ::System::Func_2<char16_t,bool>* getStaticF___9__0_0() ;

static inline void setStaticF___9(::Backtrace::Unity::Extensions::StringHelper___c*  value) ;

static inline void setStaticF___9__0_0(::System::Func_2<char16_t,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StringHelper___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StringHelper___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StringHelper___c(StringHelper___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringHelper___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringHelper___c(StringHelper___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27666};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Backtrace::Unity::Extensions::StringHelper___c) == 0x10, "Size mismatch!");

} // namespace end def Backtrace::Unity::Extensions
