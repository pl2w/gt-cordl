#pragma once
// IWYU pragma private; include "GorillaTag/GuidedRefs/GRef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GRef)
namespace GlobalNamespace {
struct GRef_EResolveModes;
}
// Forward declare root types
namespace GorillaTag::GuidedRefs {
class GRef;
}
// Write type traits
MARK_REF_T(::GorillaTag::GuidedRefs::GRef*);
DEFINE_IL2CPP_CLASS(::GorillaTag::GuidedRefs::GRef*, "GorillaTag.GuidedRefs", "GRef");
// Dependencies System.Object
namespace GorillaTag::GuidedRefs {
// Is value type: false
// CS Name: GorillaTag.GuidedRefs.GRef
class CORDL_TYPE GRef : public ::System::Object {
public:
// Declarations
using EResolveModes = ::GlobalNamespace::GRef_EResolveModes;

/// @brief Method IsAnyResolveModeOn, addr 0x5d44034, size 0xc, virtual false, abstract: false, final false
static inline bool IsAnyResolveModeOn(::GlobalNamespace::GRef_EResolveModes  mode) ;

/// @brief Method ShouldResolveNow, addr 0x5d43fd4, size 0x60, virtual false, abstract: false, final false
static inline bool ShouldResolveNow(::GlobalNamespace::GRef_EResolveModes  mode) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRef() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRef", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRef(GRef && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRef", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRef(GRef const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4717};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::GuidedRefs::GRef) == 0x10, "Size mismatch!");

} // namespace end def GorillaTag::GuidedRefs
