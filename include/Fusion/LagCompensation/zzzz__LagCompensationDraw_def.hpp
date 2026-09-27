#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/LagCompensationDraw.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LagCompensationDraw)
namespace Fusion::LagCompensation {
class BVHDraw;
}
namespace Fusion::LagCompensation {
class HitboxBuffer;
}
namespace Fusion::LagCompensation {
class SnapshotHistoryDraw;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Fusion::LagCompensation {
class LagCompensationDraw;
}
// Write type traits
MARK_REF_T(::Fusion::LagCompensation::LagCompensationDraw*);
DEFINE_IL2CPP_CLASS(::Fusion::LagCompensation::LagCompensationDraw*, "Fusion.LagCompensation", "LagCompensationDraw");
// Dependencies System.Object
namespace Fusion::LagCompensation {
// Is value type: false
// CS Name: Fusion.LagCompensation.LagCompensationDraw
class CORDL_TYPE LagCompensationDraw : public ::System::Object {
public:
// Declarations
/// @brief Field BVHDraw, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_BVHDraw, put=__cordl_internal_set_BVHDraw)) ::Fusion::LagCompensation::BVHDraw*  BVHDraw;

/// @brief Field SnapshotHistoryDraw, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_SnapshotHistoryDraw, put=__cordl_internal_set_SnapshotHistoryDraw)) ::Fusion::LagCompensation::SnapshotHistoryDraw*  SnapshotHistoryDraw;

/// @brief Method GizmosDrawWireCapsule, addr 0x60182bc, size 0x1e8, virtual false, abstract: false, final false
static inline void GizmosDrawWireCapsule(::UnityEngine::Vector3  topCenter, ::UnityEngine::Vector3  bottomCenter, float_t  capsuleRadius) ;

static inline ::Fusion::LagCompensation::LagCompensationDraw* New_ctor(::Fusion::LagCompensation::HitboxBuffer*  _buffer) ;

constexpr ::Fusion::LagCompensation::BVHDraw* const& __cordl_internal_get_BVHDraw() const;

constexpr ::Fusion::LagCompensation::BVHDraw*& __cordl_internal_get_BVHDraw() ;

constexpr ::Fusion::LagCompensation::SnapshotHistoryDraw* const& __cordl_internal_get_SnapshotHistoryDraw() const;

constexpr ::Fusion::LagCompensation::SnapshotHistoryDraw*& __cordl_internal_get_SnapshotHistoryDraw() ;

constexpr void __cordl_internal_set_BVHDraw(::Fusion::LagCompensation::BVHDraw*  value) ;

constexpr void __cordl_internal_set_SnapshotHistoryDraw(::Fusion::LagCompensation::SnapshotHistoryDraw*  value) ;

/// @brief Method .ctor, addr 0x6018094, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::Fusion::LagCompensation::HitboxBuffer*  _buffer) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LagCompensationDraw() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LagCompensationDraw", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LagCompensationDraw(LagCompensationDraw && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LagCompensationDraw", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LagCompensationDraw(LagCompensationDraw const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19402};

/// @brief Field SnapshotHistoryDraw, offset: 0x10, size: 0x8, def value: None
 ::Fusion::LagCompensation::SnapshotHistoryDraw*  ___SnapshotHistoryDraw;

/// @brief Field BVHDraw, offset: 0x18, size: 0x8, def value: None
 ::Fusion::LagCompensation::BVHDraw*  ___BVHDraw;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::LagCompensation::LagCompensationDraw, ___SnapshotHistoryDraw) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::LagCompensationDraw, ___BVHDraw) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::LagCompensation::LagCompensationDraw) == 0x20, "Size mismatch!");

} // namespace end def Fusion::LagCompensation
