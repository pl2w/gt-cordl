#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsGorillaZipline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaLocomotion/Gameplay/zzzz__GorillaZipline_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(CustomMapsGorillaZipline)
namespace CustomMapSupport {
struct BezierControlPointMode;
}
namespace CustomMapSupport {
class BezierSpline;
}
namespace GT_CustomMapSupportRuntime {
class GTObjectPlaceholder;
}
namespace GlobalNamespace {
struct BezierControlPointMode;
}
namespace GorillaLocomotion::Climbing {
class GorillaClimbableRef;
}
namespace GorillaLocomotion::Climbing {
class GorillaHandClimber;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomMapsGorillaZipline;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomMapsGorillaZipline*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapsGorillaZipline*, "", "CustomMapsGorillaZipline");
// Dependencies GorillaLocomotion.Gameplay.GorillaZipline
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapsGorillaZipline
class CORDL_TYPE CustomMapsGorillaZipline : public ::GorillaLocomotion::Gameplay::GorillaZipline {
public:
// Declarations
/// @brief Method ConvertControlPointModes, addr 0x59a8e44, size 0xac, virtual false, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::BezierControlPointMode> ConvertControlPointModes(::ArrayW<::CustomMapSupport::BezierControlPointMode>  refModes) ;

/// @brief Method GenerateZipline, addr 0x59a8ae4, size 0x360, virtual false, abstract: false, final false
inline bool GenerateZipline(::CustomMapSupport::BezierSpline*  splineRef) ;

/// @brief Method Init, addr 0x59a9018, size 0x238, virtual false, abstract: false, final false
inline void Init(::GT_CustomMapSupportRuntime::GTObjectPlaceholder*  ziplinePlaceholder) ;

static inline ::GlobalNamespace::CustomMapsGorillaZipline* New_ctor() ;

/// @brief Method OnBeforeClimb, addr 0x59a8ef0, size 0x54, virtual true, abstract: false, final false
inline void OnBeforeClimb(::GorillaLocomotion::Climbing::GorillaHandClimber*  hand, ::GorillaLocomotion::Climbing::GorillaClimbableRef*  climbRef) ;

/// @brief Method Start, addr 0x59a8f44, size 0xd4, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method .ctor, addr 0x59a9250, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapsGorillaZipline() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsGorillaZipline", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapsGorillaZipline(CustomMapsGorillaZipline && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapsGorillaZipline", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapsGorillaZipline(CustomMapsGorillaZipline const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2642};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CustomMapsGorillaZipline) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
