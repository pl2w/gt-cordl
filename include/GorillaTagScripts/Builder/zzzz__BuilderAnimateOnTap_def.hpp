#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderAnimateOnTap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/Builder/zzzz__BuilderPieceTappable_def.hpp"
CORDL_MODULE_EXPORT(BuilderAnimateOnTap)
namespace UnityEngine {
class Animation;
}
// Forward declare root types
namespace GorillaTagScripts::Builder {
class BuilderAnimateOnTap;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Builder::BuilderAnimateOnTap*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::BuilderAnimateOnTap*, "GorillaTagScripts.Builder", "BuilderAnimateOnTap");
// Dependencies GorillaTagScripts.Builder.BuilderPieceTappable
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.BuilderAnimateOnTap
class CORDL_TYPE BuilderAnimateOnTap : public ::GorillaTagScripts::Builder::BuilderPieceTappable {
public:
// Declarations
/// @brief Field anim, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_anim, put=__cordl_internal_set_anim)) ::UnityW<::UnityEngine::Animation>  anim;

static inline ::GorillaTagScripts::Builder::BuilderAnimateOnTap* New_ctor() ;

/// @brief Method OnTapReplicated, addr 0x5c1eef4, size 0x38, virtual true, abstract: false, final false
inline void OnTapReplicated() ;

constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get_anim() const;

constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get_anim() ;

constexpr void __cordl_internal_set_anim(::UnityW<::UnityEngine::Animation>  value) ;

/// @brief Method .ctor, addr 0x5c1ef2c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderAnimateOnTap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderAnimateOnTap", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderAnimateOnTap(BuilderAnimateOnTap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderAnimateOnTap", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderAnimateOnTap(BuilderAnimateOnTap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4143};

/// [SerializeField]
/// @brief Field anim, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animation>  ___anim;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::BuilderAnimateOnTap, ___anim) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::BuilderAnimateOnTap) == 0x48, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
