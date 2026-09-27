#pragma once
// IWYU pragma private; include "Oculus/Interaction/RectTransformBoundsClipperDriver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RectTransformBoundsClipperDriver)
namespace Oculus::Interaction::Surfaces {
class BoundsClipper;
}
// Forward declare root types
namespace Oculus::Interaction {
class RectTransformBoundsClipperDriver;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::RectTransformBoundsClipperDriver*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::RectTransformBoundsClipperDriver*, "Oculus.Interaction", "RectTransformBoundsClipperDriver");
// [RequireComponent(typeof(UnityEngine.RectTransform))]
// [ExecuteInEditMode]
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.RectTransformBoundsClipperDriver
class CORDL_TYPE RectTransformBoundsClipperDriver : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _boundsClipper, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__boundsClipper, put=__cordl_internal_set__boundsClipper)) ::UnityW<::Oculus::Interaction::Surfaces::BoundsClipper>  _boundsClipper;

/// @brief Method Awake, addr 0xa489ad8, size 0x4, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::Oculus::Interaction::RectTransformBoundsClipperDriver* New_ctor() ;

/// @brief Method OnRectTransformDimensionsChange, addr 0xa489bc0, size 0x4, virtual false, abstract: false, final false
inline void OnRectTransformDimensionsChange() ;

/// @brief Method Resize, addr 0xa489adc, size 0xe0, virtual false, abstract: false, final false
inline void Resize() ;

/// @brief Method Start, addr 0xa489bbc, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::Oculus::Interaction::Surfaces::BoundsClipper> const& __cordl_internal_get__boundsClipper() const;

constexpr ::UnityW<::Oculus::Interaction::Surfaces::BoundsClipper>& __cordl_internal_get__boundsClipper() ;

constexpr void __cordl_internal_set__boundsClipper(::UnityW<::Oculus::Interaction::Surfaces::BoundsClipper>  value) ;

/// @brief Method .ctor, addr 0xa489bc4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RectTransformBoundsClipperDriver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RectTransformBoundsClipperDriver", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RectTransformBoundsClipperDriver(RectTransformBoundsClipperDriver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RectTransformBoundsClipperDriver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RectTransformBoundsClipperDriver(RectTransformBoundsClipperDriver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16003};

/// [SerializeField]
/// @brief Field _boundsClipper, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Surfaces::BoundsClipper>  ____boundsClipper;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::RectTransformBoundsClipperDriver, ____boundsClipper) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::RectTransformBoundsClipperDriver) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction
