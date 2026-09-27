#pragma once
// IWYU pragma private; include "GlobalNamespace/GTRegex.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GTRegex)
namespace System::Text::RegularExpressions {
class Regex;
}
// Forward declare root types
namespace GlobalNamespace {
class GTRegex;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GTRegex*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTRegex*, "", "GTRegex");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GTRegex
class CORDL_TYPE GTRegex : public ::System::Object {
public:
// Declarations
/// @brief Field k_Float, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_Float, put=setStaticF_k_Float)) ::System::Text::RegularExpressions::Regex*  k_Float;

/// @brief Field k_Pos, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_Pos, put=setStaticF_k_Pos)) ::System::Text::RegularExpressions::Regex*  k_Pos;

/// @brief Field k_Rot, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_Rot, put=setStaticF_k_Rot)) ::System::Text::RegularExpressions::Regex*  k_Rot;

/// @brief Field k_Scale, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_Scale, put=setStaticF_k_Scale)) ::System::Text::RegularExpressions::Regex*  k_Scale;

/// @brief Field k_Vec3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_Vec3, put=setStaticF_k_Vec3)) ::System::Text::RegularExpressions::Regex*  k_Vec3;

static inline ::System::Text::RegularExpressions::Regex* getStaticF_k_Float() ;

static inline ::System::Text::RegularExpressions::Regex* getStaticF_k_Pos() ;

static inline ::System::Text::RegularExpressions::Regex* getStaticF_k_Rot() ;

static inline ::System::Text::RegularExpressions::Regex* getStaticF_k_Scale() ;

static inline ::System::Text::RegularExpressions::Regex* getStaticF_k_Vec3() ;

static inline void setStaticF_k_Float(::System::Text::RegularExpressions::Regex*  value) ;

static inline void setStaticF_k_Pos(::System::Text::RegularExpressions::Regex*  value) ;

static inline void setStaticF_k_Rot(::System::Text::RegularExpressions::Regex*  value) ;

static inline void setStaticF_k_Scale(::System::Text::RegularExpressions::Regex*  value) ;

static inline void setStaticF_k_Vec3(::System::Text::RegularExpressions::Regex*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTRegex() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTRegex", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTRegex(GTRegex && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTRegex", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTRegex(GTRegex const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{935};

/// @brief Field k_FloatPattern offset 0xffffffff size 0x8
static constexpr ::ConstString  k_FloatPattern{u"(?<=^|[\\s,;()\\[\\]{}\"\"\'])-?(?:\\d+\\.?\\d*|\\.\\d+)(?:[eE][-+]?\\d+)?(?=$|[\\s,;()\\[\\]{}\"\"\'])"};

/// @brief Field k_VecPattern offset 0xffffffff size 0x8
static constexpr ::ConstString  k_VecPattern{u"\\(\\s*(?<x>(?<=^|[\\s,;()\\[\\]{}\"\"\'])-?(?:\\d+\\.?\\d*|\\.\\d+)(?:[eE][-+]?\\d+)?(?=$|[\\s,;()\\[\\]{}\"\"\']))\\s*,\\s*(?<y>(?<=^|[\\s,;()\\[\\]{}\"\"\'])-?(?:\\d+\\.?\\d*|\\.\\d+)(?:[eE][-+]?\\d+)?(?=$|[\\s,;()\\[\\]{}\"\"\']))\\s*(?:,\\s*(?<z>(?<=^|[\\s,;()\\[\\]{}\"\"\'])-?(?:\\d+\\.?\\d*|\\.\\d+)(?:[eE][-+]?\\d+)?(?=$|[\\s,;()\\[\\]{}\"\"\']))\\s*)?(?:,\\s*(?<w>(?<=^|[\\s,;()\\[\\]{}\"\"\'])-?(?:\\d+\\.?\\d*|\\.\\d+)(?:[eE][-+]?\\d+)?(?=$|[\\s,;()\\[\\]{}\"\"\']))\\s*)?,?\\)"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GTRegex) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
