#pragma once
// IWYU pragma private; include "GlobalNamespace/CanvasSizeConstraint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CanvasSizeConstraint)
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CanvasSizeConstraint;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CanvasSizeConstraint*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CanvasSizeConstraint*, "", "CanvasSizeConstraint");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector2, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: CanvasSizeConstraint
class CORDL_TYPE CanvasSizeConstraint : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _initialLocalScale, offset 0x60, size 0xc 
 __declspec(property(get=__cordl_internal_get__initialLocalScale, put=__cordl_internal_set__initialLocalScale)) ::UnityEngine::Vector3  _initialLocalScale;

/// @brief Field _initialRectSize, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__initialRectSize, put=__cordl_internal_set__initialRectSize)) ::UnityEngine::Vector2  _initialRectSize;

/// @brief Field _initialSize, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__initialSize, put=__cordl_internal_set__initialSize)) ::UnityEngine::Vector2  _initialSize;

/// @brief Field _rectTransform, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__rectTransform, put=__cordl_internal_set__rectTransform)) ::UnityW<::UnityEngine::RectTransform>  _rectTransform;

/// @brief Field horizontalAnchorA, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_horizontalAnchorA, put=__cordl_internal_set_horizontalAnchorA)) ::UnityW<::UnityEngine::Transform>  horizontalAnchorA;

/// @brief Field horizontalAnchorB, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_horizontalAnchorB, put=__cordl_internal_set_horizontalAnchorB)) ::UnityW<::UnityEngine::Transform>  horizontalAnchorB;

/// @brief Field horizontalSizeOffset, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_horizontalSizeOffset, put=__cordl_internal_set_horizontalSizeOffset)) float_t  horizontalSizeOffset;

/// @brief Field verticalAnchorA, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_verticalAnchorA, put=__cordl_internal_set_verticalAnchorA)) ::UnityW<::UnityEngine::Transform>  verticalAnchorA;

/// @brief Field verticalAnchorB, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_verticalAnchorB, put=__cordl_internal_set_verticalAnchorB)) ::UnityW<::UnityEngine::Transform>  verticalAnchorB;

/// @brief Field verticalSizeOffset, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_verticalSizeOffset, put=__cordl_internal_set_verticalSizeOffset)) float_t  verticalSizeOffset;

static inline ::GlobalNamespace::CanvasSizeConstraint* New_ctor() ;

/// @brief Method Start, addr 0xa427870, size 0x1f4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa427a64, size 0x1bc, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__initialLocalScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__initialLocalScale() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__initialRectSize() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__initialRectSize() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__initialSize() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__initialSize() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rectTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rectTransform() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_horizontalAnchorA() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_horizontalAnchorA() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_horizontalAnchorB() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_horizontalAnchorB() ;

constexpr float_t const& __cordl_internal_get_horizontalSizeOffset() const;

constexpr float_t& __cordl_internal_get_horizontalSizeOffset() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_verticalAnchorA() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_verticalAnchorA() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_verticalAnchorB() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_verticalAnchorB() ;

constexpr float_t const& __cordl_internal_get_verticalSizeOffset() const;

constexpr float_t& __cordl_internal_get_verticalSizeOffset() ;

constexpr void __cordl_internal_set__initialLocalScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__initialRectSize(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__initialSize(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set_horizontalAnchorA(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_horizontalAnchorB(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_horizontalSizeOffset(float_t  value) ;

constexpr void __cordl_internal_set_verticalAnchorA(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_verticalAnchorB(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_verticalSizeOffset(float_t  value) ;

/// @brief Method .ctor, addr 0xa427c20, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CanvasSizeConstraint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CanvasSizeConstraint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CanvasSizeConstraint(CanvasSizeConstraint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CanvasSizeConstraint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CanvasSizeConstraint(CanvasSizeConstraint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28241};

/// @brief Field horizontalAnchorA, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___horizontalAnchorA;

/// @brief Field horizontalAnchorB, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___horizontalAnchorB;

/// @brief Field verticalAnchorA, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___verticalAnchorA;

/// @brief Field verticalAnchorB, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___verticalAnchorB;

/// @brief Field horizontalSizeOffset, offset: 0x40, size: 0x4, def value: None
 float_t  ___horizontalSizeOffset;

/// @brief Field verticalSizeOffset, offset: 0x44, size: 0x4, def value: None
 float_t  ___verticalSizeOffset;

/// @brief Field _initialSize, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____initialSize;

/// @brief Field _initialRectSize, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____initialRectSize;

/// @brief Field _rectTransform, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____rectTransform;

/// @brief Field _initialLocalScale, offset: 0x60, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____initialLocalScale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CanvasSizeConstraint, ___horizontalAnchorA) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CanvasSizeConstraint, ___horizontalAnchorB) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CanvasSizeConstraint, ___verticalAnchorA) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CanvasSizeConstraint, ___verticalAnchorB) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CanvasSizeConstraint, ___horizontalSizeOffset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CanvasSizeConstraint, ___verticalSizeOffset) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CanvasSizeConstraint, ____initialSize) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CanvasSizeConstraint, ____initialRectSize) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CanvasSizeConstraint, ____rectTransform) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CanvasSizeConstraint, ____initialLocalScale) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CanvasSizeConstraint) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
