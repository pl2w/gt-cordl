#pragma once
// IWYU pragma private; include "Oculus/Interaction/RayInteractorDebugGizmos.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RayInteractorDebugGizmos)
namespace Oculus::Interaction {
class RayInteractor;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace Oculus::Interaction {
class RayInteractorDebugGizmos;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::RayInteractorDebugGizmos*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::RayInteractorDebugGizmos*, "Oculus.Interaction", "RayInteractorDebugGizmos");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.RayInteractorDebugGizmos
class CORDL_TYPE RayInteractorDebugGizmos : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_HoverColor, put=set_HoverColor)) ::UnityEngine::Color  HoverColor;

 __declspec(property(get=get_NormalColor, put=set_NormalColor)) ::UnityEngine::Color  NormalColor;

 __declspec(property(get=get_RayWidth, put=set_RayWidth)) float_t  RayWidth;

 __declspec(property(get=get_SelectColor, put=set_SelectColor)) ::UnityEngine::Color  SelectColor;

/// @brief Field _hoverColor, offset 0x3c, size 0x10 
 __declspec(property(get=__cordl_internal_get__hoverColor, put=__cordl_internal_set__hoverColor)) ::UnityEngine::Color  _hoverColor;

/// @brief Field _normalColor, offset 0x2c, size 0x10 
 __declspec(property(get=__cordl_internal_get__normalColor, put=__cordl_internal_set__normalColor)) ::UnityEngine::Color  _normalColor;

/// @brief Field _rayInteractor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__rayInteractor, put=__cordl_internal_set__rayInteractor)) ::UnityW<::Oculus::Interaction::RayInteractor>  _rayInteractor;

/// @brief Field _rayWidth, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__rayWidth, put=__cordl_internal_set__rayWidth)) float_t  _rayWidth;

/// @brief Field _selectColor, offset 0x4c, size 0x10 
 __declspec(property(get=__cordl_internal_get__selectColor, put=__cordl_internal_set__selectColor)) ::UnityEngine::Color  _selectColor;

/// @brief Method InjectAllRayInteractorDebugGizmos, addr 0xa45efbc, size 0x8, virtual false, abstract: false, final false
inline void InjectAllRayInteractorDebugGizmos(::Oculus::Interaction::RayInteractor*  rayInteractor) ;

/// @brief Method InjectRayInteractor, addr 0xa45efc4, size 0x8, virtual false, abstract: false, final false
inline void InjectRayInteractor(::Oculus::Interaction::RayInteractor*  rayInteractor) ;

/// @brief Method LateUpdate, addr 0xa45ee74, size 0x148, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::Oculus::Interaction::RayInteractorDebugGizmos* New_ctor() ;

/// @brief Method Start, addr 0xa45ee70, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__hoverColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__hoverColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__normalColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__normalColor() ;

constexpr ::UnityW<::Oculus::Interaction::RayInteractor> const& __cordl_internal_get__rayInteractor() const;

constexpr ::UnityW<::Oculus::Interaction::RayInteractor>& __cordl_internal_get__rayInteractor() ;

constexpr float_t const& __cordl_internal_get__rayWidth() const;

constexpr float_t& __cordl_internal_get__rayWidth() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__selectColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__selectColor() ;

constexpr void __cordl_internal_set__hoverColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__normalColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__rayInteractor(::UnityW<::Oculus::Interaction::RayInteractor>  value) ;

constexpr void __cordl_internal_set__rayWidth(float_t  value) ;

constexpr void __cordl_internal_set__selectColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0xa45efcc, size 0x34, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HoverColor, addr 0xa45ee40, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_HoverColor() ;

/// @brief Method get_NormalColor, addr 0xa45ee28, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_NormalColor() ;

/// @brief Method get_RayWidth, addr 0xa45ee18, size 0x8, virtual false, abstract: false, final false
inline float_t get_RayWidth() ;

/// @brief Method get_SelectColor, addr 0xa45ee58, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_SelectColor() ;

/// @brief Method set_HoverColor, addr 0xa45ee4c, size 0xc, virtual false, abstract: false, final false
inline void set_HoverColor(::UnityEngine::Color  value) ;

/// @brief Method set_NormalColor, addr 0xa45ee34, size 0xc, virtual false, abstract: false, final false
inline void set_NormalColor(::UnityEngine::Color  value) ;

/// @brief Method set_RayWidth, addr 0xa45ee20, size 0x8, virtual false, abstract: false, final false
inline void set_RayWidth(float_t  value) ;

/// @brief Method set_SelectColor, addr 0xa45ee64, size 0xc, virtual false, abstract: false, final false
inline void set_SelectColor(::UnityEngine::Color  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RayInteractorDebugGizmos() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RayInteractorDebugGizmos", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RayInteractorDebugGizmos(RayInteractorDebugGizmos && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RayInteractorDebugGizmos", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RayInteractorDebugGizmos(RayInteractorDebugGizmos const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15868};

/// [SerializeField]
/// @brief Field _rayInteractor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::RayInteractor>  ____rayInteractor;

/// [SerializeField]
/// @brief Field _rayWidth, offset: 0x28, size: 0x4, def value: None
 float_t  ____rayWidth;

/// [SerializeField]
/// @brief Field _normalColor, offset: 0x2c, size: 0x10, def value: None
 ::UnityEngine::Color  ____normalColor;

/// [SerializeField]
/// @brief Field _hoverColor, offset: 0x3c, size: 0x10, def value: None
 ::UnityEngine::Color  ____hoverColor;

/// [SerializeField]
/// @brief Field _selectColor, offset: 0x4c, size: 0x10, def value: None
 ::UnityEngine::Color  ____selectColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::RayInteractorDebugGizmos, ____rayInteractor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractorDebugGizmos, ____rayWidth) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractorDebugGizmos, ____normalColor) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractorDebugGizmos, ____hoverColor) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractorDebugGizmos, ____selectColor) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::RayInteractorDebugGizmos) == 0x60, "Size mismatch!");

} // namespace end def Oculus::Interaction
