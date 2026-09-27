#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(GtDisplay)
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class GtDisplay;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::GtDisplay*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::GtDisplay*, "Liv.Lck.GorillaTag", "GtDisplay");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.GtDisplay
class CORDL_TYPE GtDisplay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _canvasTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__canvasTransform, put=__cordl_internal_set__canvasTransform)) ::UnityW<::UnityEngine::RectTransform>  _canvasTransform;

/// @brief Field _initialCanvasPosition, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get__initialCanvasPosition, put=__cordl_internal_set__initialCanvasPosition)) ::UnityEngine::Vector3  _initialCanvasPosition;

/// @brief Field _initialCanvasScale, offset 0x54, size 0xc 
 __declspec(property(get=__cordl_internal_get__initialCanvasScale, put=__cordl_internal_set__initialCanvasScale)) ::UnityEngine::Vector3  _initialCanvasScale;

/// @brief Field _initialMeshBodyPosition, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get__initialMeshBodyPosition, put=__cordl_internal_set__initialMeshBodyPosition)) ::UnityEngine::Vector3  _initialMeshBodyPosition;

/// @brief Field _initialMeshBodyScale, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get__initialMeshBodyScale, put=__cordl_internal_set__initialMeshBodyScale)) ::UnityEngine::Vector3  _initialMeshBodyScale;

/// @brief Field _meshBodyTransform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__meshBodyTransform, put=__cordl_internal_set__meshBodyTransform)) ::UnityW<::UnityEngine::Transform>  _meshBodyTransform;

/// @brief Field _targetCanvasPosition, offset 0x78, size 0xc 
 __declspec(property(get=__cordl_internal_get__targetCanvasPosition, put=__cordl_internal_set__targetCanvasPosition)) ::UnityEngine::Vector3  _targetCanvasPosition;

/// @brief Field _targetCanvasScale, offset 0x84, size 0xc 
 __declspec(property(get=__cordl_internal_get__targetCanvasScale, put=__cordl_internal_set__targetCanvasScale)) ::UnityEngine::Vector3  _targetCanvasScale;

/// @brief Field _targetMeshBodyPosition, offset 0x60, size 0xc 
 __declspec(property(get=__cordl_internal_get__targetMeshBodyPosition, put=__cordl_internal_set__targetMeshBodyPosition)) ::UnityEngine::Vector3  _targetMeshBodyPosition;

/// @brief Field _targetMeshBodyScale, offset 0x6c, size 0xc 
 __declspec(property(get=__cordl_internal_get__targetMeshBodyScale, put=__cordl_internal_set__targetMeshBodyScale)) ::UnityEngine::Vector3  _targetMeshBodyScale;

/// @brief Method Awake, addr 0x9d22cf4, size 0x104, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Maximize, addr 0x9d22df8, size 0x70, virtual false, abstract: false, final false
inline void Maximize() ;

/// @brief Method Minimize, addr 0x9d22e68, size 0x70, virtual false, abstract: false, final false
inline void Minimize() ;

static inline ::Liv::Lck::GorillaTag::GtDisplay* New_ctor() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__canvasTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__canvasTransform() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__initialCanvasPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__initialCanvasPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__initialCanvasScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__initialCanvasScale() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__initialMeshBodyPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__initialMeshBodyPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__initialMeshBodyScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__initialMeshBodyScale() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__meshBodyTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__meshBodyTransform() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__targetCanvasPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__targetCanvasPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__targetCanvasScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__targetCanvasScale() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__targetMeshBodyPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__targetMeshBodyPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__targetMeshBodyScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__targetMeshBodyScale() ;

constexpr void __cordl_internal_set__canvasTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__initialCanvasPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__initialCanvasScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__initialMeshBodyPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__initialMeshBodyScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__meshBodyTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__targetCanvasPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__targetCanvasScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__targetMeshBodyPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__targetMeshBodyScale(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x9d22ed8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GtDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GtDisplay", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GtDisplay(GtDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GtDisplay", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GtDisplay(GtDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29629};

/// [Header("Elements")]
/// [SerializeField]
/// @brief Field _meshBodyTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____meshBodyTransform;

/// [SerializeField]
/// @brief Field _canvasTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____canvasTransform;

/// @brief Field _initialMeshBodyPosition, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____initialMeshBodyPosition;

/// @brief Field _initialMeshBodyScale, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____initialMeshBodyScale;

/// @brief Field _initialCanvasPosition, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____initialCanvasPosition;

/// @brief Field _initialCanvasScale, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____initialCanvasScale;

/// @brief Field _targetMeshBodyPosition, offset: 0x60, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____targetMeshBodyPosition;

/// @brief Field _targetMeshBodyScale, offset: 0x6c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____targetMeshBodyScale;

/// @brief Field _targetCanvasPosition, offset: 0x78, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____targetCanvasPosition;

/// @brief Field _targetCanvasScale, offset: 0x84, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____targetCanvasScale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::GtDisplay, ____meshBodyTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtDisplay, ____canvasTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtDisplay, ____initialMeshBodyPosition) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtDisplay, ____initialMeshBodyScale) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtDisplay, ____initialCanvasPosition) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtDisplay, ____initialCanvasScale) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtDisplay, ____targetMeshBodyPosition) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtDisplay, ____targetMeshBodyScale) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtDisplay, ____targetCanvasPosition) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtDisplay, ____targetCanvasScale) == 0x84, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::GtDisplay) == 0x90, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
