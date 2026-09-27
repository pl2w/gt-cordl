#pragma once
// IWYU pragma private; include "Oculus/Interaction/PressureSquishable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PressureSquishable)
namespace Oculus::Interaction::HandGrab {
class IHandGrabUseDelegate;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Oculus::Interaction {
class PressureSquishable;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PressureSquishable*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PressureSquishable*, "Oculus.Interaction", "PressureSquishable");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.PressureSquishable
class CORDL_TYPE PressureSquishable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _initialScale, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get__initialScale, put=__cordl_internal_set__initialScale)) ::UnityEngine::Vector3  _initialScale;

/// @brief Field _maxSquish, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxSquish, put=__cordl_internal_set__maxSquish)) float_t  _maxSquish;

/// @brief Field _maxStretch, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxStretch, put=__cordl_internal_set__maxStretch)) float_t  _maxStretch;

/// @brief Field _squishableObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__squishableObject, put=__cordl_internal_set__squishableObject)) ::UnityW<::UnityEngine::GameObject>  _squishableObject;

/// @brief Field _started, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Convert operator to "::Oculus::Interaction::HandGrab::IHandGrabUseDelegate"
constexpr operator  ::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*() noexcept;

/// @brief Method BeginUse, addr 0xa42c8f8, size 0x4, virtual true, abstract: false, final true
inline void BeginUse() ;

/// @brief Method ComputeUseStrength, addr 0xa42c930, size 0x90, virtual true, abstract: false, final true
inline float_t ComputeUseStrength(float_t  strength) ;

/// @brief Method EndUse, addr 0xa42c8fc, size 0x34, virtual true, abstract: false, final true
inline void EndUse() ;

static inline ::Oculus::Interaction::PressureSquishable* New_ctor() ;

/// @brief Method Start, addr 0xa42c8c0, size 0x38, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__initialScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__initialScale() ;

constexpr float_t const& __cordl_internal_get__maxSquish() const;

constexpr float_t& __cordl_internal_get__maxSquish() ;

constexpr float_t const& __cordl_internal_get__maxStretch() const;

constexpr float_t& __cordl_internal_get__maxStretch() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__squishableObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__squishableObject() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set__initialScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__maxSquish(float_t  value) ;

constexpr void __cordl_internal_set__maxStretch(float_t  value) ;

constexpr void __cordl_internal_set__squishableObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa42c9c0, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Oculus::Interaction::HandGrab::IHandGrabUseDelegate"
constexpr ::Oculus::Interaction::HandGrab::IHandGrabUseDelegate* i___Oculus__Interaction__HandGrab__IHandGrabUseDelegate() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PressureSquishable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PressureSquishable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PressureSquishable(PressureSquishable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PressureSquishable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PressureSquishable(PressureSquishable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28263};

/// [SerializeField]
/// @brief Field _squishableObject, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____squishableObject;

/// [SerializeField]
/// [Range(0.01, 1)]
/// @brief Field _maxSquish, offset: 0x28, size: 0x4, def value: None
 float_t  ____maxSquish;

/// [SerializeField]
/// [Range(0.01, 1)]
/// @brief Field _maxStretch, offset: 0x2c, size: 0x4, def value: None
 float_t  ____maxStretch;

/// @brief Field _started, offset: 0x30, size: 0x1, def value: None
 bool  ____started;

/// @brief Field _initialScale, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____initialScale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PressureSquishable, ____squishableObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PressureSquishable, ____maxSquish) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PressureSquishable, ____maxStretch) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PressureSquishable, ____started) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PressureSquishable, ____initialScale) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PressureSquishable) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction
