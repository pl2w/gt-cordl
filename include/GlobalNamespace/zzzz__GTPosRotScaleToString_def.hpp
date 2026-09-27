#pragma once
// IWYU pragma private; include "GlobalNamespace/GTPosRotScaleToString.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GTPosRotScaleToString)
namespace System::Text::RegularExpressions {
class Match;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GTPosRotScaleToString;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GTPosRotScaleToString*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTPosRotScaleToString*, "", "GTPosRotScaleToString");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GTPosRotScaleToString
class CORDL_TYPE GTPosRotScaleToString : public ::System::Object {
public:
// Declarations
/// @brief Method ParseIsWorldSpace, addr 0x56af7c0, size 0x54, virtual false, abstract: false, final false
static inline bool ParseIsWorldSpace(::StringW  input) ;

/// @brief Method ParseParentPath, addr 0x56af814, size 0xf4, virtual false, abstract: false, final false
static inline ::StringW ParseParentPath(::StringW  input) ;

/// @brief Method StringToVector3, addr 0x56afbd0, size 0x128, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 StringToVector3(::System::Text::RegularExpressions::Match*  match) ;

/// @brief Method ToString, addr 0x56af44c, size 0x2b0, virtual false, abstract: false, final false
static inline ::StringW ToString(::UnityEngine::Vector3  pos, ::UnityEngine::Vector3  rot, ::UnityEngine::Vector3  scale, bool  isWorldSpace, ::StringW  parentPath) ;

/// @brief Method TryParsePos, addr 0x56af908, size 0x70, virtual false, abstract: false, final false
static inline bool TryParsePos(::StringW  input, ::by_ref<::UnityEngine::Vector3>  v) ;

/// @brief Method TryParseRot, addr 0x56afa40, size 0x70, virtual false, abstract: false, final false
static inline bool TryParseRot(::StringW  input, ::by_ref<::UnityEngine::Vector3>  v) ;

/// @brief Method TryParseScale, addr 0x56afab0, size 0xb0, virtual false, abstract: false, final false
static inline bool TryParseScale(::StringW  input, ::by_ref<::UnityEngine::Vector3>  v) ;

/// @brief Method TryParseVec3, addr 0x56afb60, size 0x70, virtual false, abstract: false, final false
static inline bool TryParseVec3(::StringW  input, ::by_ref<::UnityEngine::Vector3>  v) ;

/// @brief Method TryParseVec3_internal, addr 0x56af978, size 0xc8, virtual false, abstract: false, final false
static inline bool TryParseVec3_internal(::System::Text::RegularExpressions::Regex*  regex, ::StringW  input, ::by_ref<::UnityEngine::Vector3>  v) ;

/// @brief Method ValToStr, addr 0x56af6fc, size 0xc4, virtual false, abstract: false, final false
static inline ::StringW ValToStr(::UnityEngine::Vector3  v) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTPosRotScaleToString() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTPosRotScaleToString", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTPosRotScaleToString(GTPosRotScaleToString && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTPosRotScaleToString", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTPosRotScaleToString(GTPosRotScaleToString const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{934};

/// @brief Field k_LocalPRSLabel offset 0xffffffff size 0x8
static constexpr ::ConstString  k_LocalPRSLabel{u"LocalPRS"};

/// @brief Field k_WorldPRSLabel offset 0xffffffff size 0x8
static constexpr ::ConstString  k_WorldPRSLabel{u"WorldPRS"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GTPosRotScaleToString) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
