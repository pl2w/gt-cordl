#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionComfortVignetteSetting.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionComfortVignetteSetting_ComfortType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LocomotionComfortVignetteSetting)
namespace GlobalNamespace {
struct LocomotionComfortVignetteSetting_ComfortType;
}
namespace Oculus::Interaction::Locomotion {
class LocomotionTunneling;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class LocomotionComfortVignetteSetting;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting*, "Oculus.Interaction.Locomotion", "LocomotionComfortVignetteSetting");
// Dependencies Oculus.Interaction.Locomotion.LocomotionComfortVignetteSetting::ComfortType, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.LocomotionComfortVignetteSetting
class CORDL_TYPE LocomotionComfortVignetteSetting : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ComfortType = ::GlobalNamespace::LocomotionComfortVignetteSetting_ComfortType;

/// @brief Field _comfortType, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__comfortType, put=__cordl_internal_set__comfortType)) ::GlobalNamespace::LocomotionComfortVignetteSetting_ComfortType  _comfortType;

/// @brief Field _curve, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__curve, put=__cordl_internal_set__curve)) ::UnityEngine::AnimationCurve*  _curve;

/// @brief Field _started, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _toggle, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__toggle, put=__cordl_internal_set__toggle)) ::UnityW<::UnityEngine::UI::Toggle>  _toggle;

/// @brief Field _tunneling, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__tunneling, put=__cordl_internal_set__tunneling)) ::UnityW<::Oculus::Interaction::Locomotion::LocomotionTunneling>  _tunneling;

/// @brief Method InjectAllComfortOption, addr 0xa42e174, size 0x4c, virtual false, abstract: false, final false
inline void InjectAllComfortOption(::GlobalNamespace::LocomotionComfortVignetteSetting_ComfortType  comfortType, ::UnityEngine::UI::Toggle*  toggle, ::UnityEngine::AnimationCurve*  curve, ::Oculus::Interaction::Locomotion::LocomotionTunneling*  tunneling) ;

/// @brief Method InjectComfortType, addr 0xa42e1c0, size 0x8, virtual false, abstract: false, final false
inline void InjectComfortType(::GlobalNamespace::LocomotionComfortVignetteSetting_ComfortType  comfortType) ;

/// @brief Method InjectCurve, addr 0xa42e1d0, size 0x8, virtual false, abstract: false, final false
inline void InjectCurve(::UnityEngine::AnimationCurve*  curve) ;

/// @brief Method InjectCurve, addr 0xa42e04c, size 0x70, virtual false, abstract: false, final false
inline void InjectCurve(bool  inject) ;

/// @brief Method InjectToggle, addr 0xa42e1c8, size 0x8, virtual false, abstract: false, final false
inline void InjectToggle(::UnityEngine::UI::Toggle*  toggle) ;

/// @brief Method InjectTunneling, addr 0xa42e1d8, size 0x8, virtual false, abstract: false, final false
inline void InjectTunneling(::Oculus::Interaction::Locomotion::LocomotionTunneling*  tunneling) ;

static inline ::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting* New_ctor() ;

/// @brief Method OnDisable, addr 0xa42e0bc, size 0xb8, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa42df80, size 0xcc, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa42df54, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::GlobalNamespace::LocomotionComfortVignetteSetting_ComfortType const& __cordl_internal_get__comfortType() const;

constexpr ::GlobalNamespace::LocomotionComfortVignetteSetting_ComfortType& __cordl_internal_get__comfortType() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__curve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__curve() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__toggle() const;

constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__toggle() ;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::LocomotionTunneling> const& __cordl_internal_get__tunneling() const;

constexpr ::UnityW<::Oculus::Interaction::Locomotion::LocomotionTunneling>& __cordl_internal_get__tunneling() ;

constexpr void __cordl_internal_set__comfortType(::GlobalNamespace::LocomotionComfortVignetteSetting_ComfortType  value) ;

constexpr void __cordl_internal_set__curve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__toggle(::UnityW<::UnityEngine::UI::Toggle>  value) ;

constexpr void __cordl_internal_set__tunneling(::UnityW<::Oculus::Interaction::Locomotion::LocomotionTunneling>  value) ;

/// @brief Method .ctor, addr 0xa42e1e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocomotionComfortVignetteSetting() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocomotionComfortVignetteSetting", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocomotionComfortVignetteSetting(LocomotionComfortVignetteSetting && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocomotionComfortVignetteSetting", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocomotionComfortVignetteSetting(LocomotionComfortVignetteSetting const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28268};

/// [SerializeField]
/// @brief Field _toggle, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Toggle>  ____toggle;

/// [SerializeField]
/// @brief Field _comfortType, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::LocomotionComfortVignetteSetting_ComfortType  ____comfortType;

/// [SerializeField]
/// @brief Field _curve, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____curve;

/// [SerializeField]
/// @brief Field _tunneling, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Locomotion::LocomotionTunneling>  ____tunneling;

/// @brief Field _started, offset: 0x40, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting, ____toggle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting, ____comfortType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting, ____curve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting, ____tunneling) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting, ____started) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::LocomotionComfortVignetteSetting) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
