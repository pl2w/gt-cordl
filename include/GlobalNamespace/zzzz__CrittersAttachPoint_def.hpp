#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersAttachPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CrittersActor_def.hpp"
#include "GlobalNamespace/zzzz__CrittersAttachPoint_AnchoredLocationTypes_def.hpp"
CORDL_MODULE_EXPORT(CrittersAttachPoint)
namespace GlobalNamespace {
struct CrittersAttachPoint_AnchoredLocationTypes;
}
// Forward declare root types
namespace GlobalNamespace {
class CrittersAttachPoint;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrittersAttachPoint*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersAttachPoint*, "", "CrittersAttachPoint");
// Dependencies CrittersActor, CrittersAttachPoint::AnchoredLocationTypes
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersAttachPoint
class CORDL_TYPE CrittersAttachPoint : public ::GlobalNamespace::CrittersActor {
public:
// Declarations
using AnchoredLocationTypes = ::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes;

/// @brief Field anchorLocation, offset 0x18c, size 0x4 
 __declspec(property(get=__cordl_internal_get_anchorLocation, put=__cordl_internal_set_anchorLocation)) ::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes  anchorLocation;

/// @brief Field fixedOrientation, offset 0x188, size 0x1 
 __declspec(property(get=__cordl_internal_get_fixedOrientation, put=__cordl_internal_set_fixedOrientation)) bool  fixedOrientation;

/// @brief Field isLeft, offset 0x190, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLeft, put=__cordl_internal_set_isLeft)) bool  isLeft;

static inline ::GlobalNamespace::CrittersAttachPoint* New_ctor() ;

/// @brief Method ProcessRemote, addr 0x55fb5bc, size 0x4, virtual true, abstract: false, final false
inline void ProcessRemote() ;

constexpr ::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes const& __cordl_internal_get_anchorLocation() const;

constexpr ::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes& __cordl_internal_get_anchorLocation() ;

constexpr bool const& __cordl_internal_get_fixedOrientation() const;

constexpr bool& __cordl_internal_get_fixedOrientation() ;

constexpr bool const& __cordl_internal_get_isLeft() const;

constexpr bool& __cordl_internal_get_isLeft() ;

constexpr void __cordl_internal_set_anchorLocation(::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes  value) ;

constexpr void __cordl_internal_set_fixedOrientation(bool  value) ;

constexpr void __cordl_internal_set_isLeft(bool  value) ;

/// @brief Method .ctor, addr 0x55fb5c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersAttachPoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersAttachPoint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersAttachPoint(CrittersAttachPoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersAttachPoint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersAttachPoint(CrittersAttachPoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{84};

/// @brief Field fixedOrientation, offset: 0x188, size: 0x1, def value: None
 bool  ___fixedOrientation;

/// @brief Field anchorLocation, offset: 0x18c, size: 0x4, def value: None
 ::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes  ___anchorLocation;

/// @brief Field isLeft, offset: 0x190, size: 0x1, def value: None
 bool  ___isLeft;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersAttachPoint, ___fixedOrientation) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersAttachPoint, ___anchorLocation) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersAttachPoint, ___isLeft) == 0x190, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersAttachPoint) == 0x198, "Size mismatch!");

} // namespace end def GlobalNamespace
