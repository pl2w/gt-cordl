#pragma once
// IWYU pragma private; include "GorillaTagScripts/SnapOverlap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SnapBounds_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SnapOverlap)
namespace GorillaTagScripts {
class BuilderAttachGridPlane;
}
// Forward declare root types
namespace GorillaTagScripts {
class SnapOverlap;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::SnapOverlap*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::SnapOverlap*, "GorillaTagScripts", "SnapOverlap");
// Dependencies SnapBounds, System.Object
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.SnapOverlap
class CORDL_TYPE SnapOverlap : public ::System::Object {
public:
// Declarations
/// @brief Field bounds, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_bounds, put=__cordl_internal_set_bounds)) ::GlobalNamespace::SnapBounds  bounds;

/// @brief Field inPool, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_inPool, put=__cordl_internal_set_inPool)) bool  inPool;

/// @brief Field nextOverlap, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextOverlap, put=__cordl_internal_set_nextOverlap)) ::GorillaTagScripts::SnapOverlap*  nextOverlap;

/// @brief Field otherPlane, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_otherPlane, put=__cordl_internal_set_otherPlane)) ::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>  otherPlane;

static inline ::GorillaTagScripts::SnapOverlap* New_ctor() ;

constexpr ::GlobalNamespace::SnapBounds const& __cordl_internal_get_bounds() const;

constexpr ::GlobalNamespace::SnapBounds& __cordl_internal_get_bounds() ;

constexpr bool const& __cordl_internal_get_inPool() const;

constexpr bool& __cordl_internal_get_inPool() ;

constexpr ::GorillaTagScripts::SnapOverlap* const& __cordl_internal_get_nextOverlap() const;

constexpr ::GorillaTagScripts::SnapOverlap*& __cordl_internal_get_nextOverlap() ;

constexpr ::UnityW<::GorillaTagScripts::BuilderAttachGridPlane> const& __cordl_internal_get_otherPlane() const;

constexpr ::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>& __cordl_internal_get_otherPlane() ;

constexpr void __cordl_internal_set_bounds(::GlobalNamespace::SnapBounds  value) ;

constexpr void __cordl_internal_set_inPool(bool  value) ;

constexpr void __cordl_internal_set_nextOverlap(::GorillaTagScripts::SnapOverlap*  value) ;

constexpr void __cordl_internal_set_otherPlane(::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>  value) ;

/// @brief Method .ctor, addr 0x5b82d68, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SnapOverlap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SnapOverlap", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SnapOverlap(SnapOverlap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SnapOverlap", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SnapOverlap(SnapOverlap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3925};

/// @brief Field otherPlane, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>  ___otherPlane;

/// @brief Field bounds, offset: 0x18, size: 0x10, def value: None
 ::GlobalNamespace::SnapBounds  ___bounds;

/// @brief Field nextOverlap, offset: 0x28, size: 0x8, def value: None
 ::GorillaTagScripts::SnapOverlap*  ___nextOverlap;

/// @brief Field inPool, offset: 0x30, size: 0x1, def value: None
 bool  ___inPool;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::SnapOverlap, ___otherPlane) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SnapOverlap, ___bounds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SnapOverlap, ___nextOverlap) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::SnapOverlap, ___inPool) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::SnapOverlap) == 0x38, "Size mismatch!");

} // namespace end def GorillaTagScripts
