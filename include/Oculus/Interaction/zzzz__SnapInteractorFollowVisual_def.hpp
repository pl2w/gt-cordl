#pragma once
// IWYU pragma private; include "Oculus/Interaction/SnapInteractorFollowVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SnapInteractorFollowVisual)
namespace Oculus::Interaction {
struct InteractorStateChangeArgs;
}
namespace Oculus::Interaction {
class ProgressCurve;
}
namespace Oculus::Interaction {
class SnapInteractor;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction {
class SnapInteractorFollowVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::SnapInteractorFollowVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::SnapInteractorFollowVisual*, "Oculus.Interaction", "SnapInteractorFollowVisual");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Pose
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.SnapInteractorFollowVisual
class CORDL_TYPE SnapInteractorFollowVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_EaseCurve, put=set_EaseCurve)) ::Oculus::Interaction::ProgressCurve*  EaseCurve;

 __declspec(property(get=get_HoverOffset, put=set_HoverOffset)) float_t  HoverOffset;

/// @brief Field _easeCurve, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__easeCurve, put=__cordl_internal_set__easeCurve)) ::Oculus::Interaction::ProgressCurve*  _easeCurve;

/// @brief Field _from, offset 0x44, size 0x1c 
 __declspec(property(get=__cordl_internal_get__from, put=__cordl_internal_set__from)) ::UnityEngine::Pose  _from;

/// @brief Field _hoverOffset, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__hoverOffset, put=__cordl_internal_set__hoverOffset)) float_t  _hoverOffset;

/// @brief Field _snapInteractor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__snapInteractor, put=__cordl_internal_set__snapInteractor)) ::UnityW<::Oculus::Interaction::SnapInteractor>  _snapInteractor;

/// @brief Field _started, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _to, offset 0x60, size 0x1c 
 __declspec(property(get=__cordl_internal_get__to, put=__cordl_internal_set__to)) ::UnityEngine::Pose  _to;

/// @brief Field _transform, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__transform, put=__cordl_internal_set__transform)) ::UnityW<::UnityEngine::Transform>  _transform;

/// @brief Method ComputeTargetPose, addr 0xa464d2c, size 0x15c, virtual true, abstract: false, final false
inline ::UnityEngine::Pose ComputeTargetPose() ;

/// @brief Method HandleStateChanged, addr 0xa464cb4, size 0x78, virtual false, abstract: false, final false
inline void HandleStateChanged(::Oculus::Interaction::InteractorStateChangeArgs  args) ;

/// @brief Method InjectAllSnapInteractorFollowVisual, addr 0xa464f30, size 0x8, virtual false, abstract: false, final false
inline void InjectAllSnapInteractorFollowVisual(::Oculus::Interaction::SnapInteractor*  snapInteractor) ;

/// @brief Method InjectOptionalTransform, addr 0xa464f38, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalTransform(::UnityEngine::Transform*  transform) ;

static inline ::Oculus::Interaction::SnapInteractorFollowVisual* New_ctor() ;

/// @brief Method OnDisable, addr 0xa464c04, size 0xb0, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa464b54, size 0xb0, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa464a78, size 0xdc, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa464e88, size 0xa8, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::Oculus::Interaction::ProgressCurve* const& __cordl_internal_get__easeCurve() const;

constexpr ::Oculus::Interaction::ProgressCurve*& __cordl_internal_get__easeCurve() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__from() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__from() ;

constexpr float_t const& __cordl_internal_get__hoverOffset() const;

constexpr float_t& __cordl_internal_get__hoverOffset() ;

constexpr ::UnityW<::Oculus::Interaction::SnapInteractor> const& __cordl_internal_get__snapInteractor() const;

constexpr ::UnityW<::Oculus::Interaction::SnapInteractor>& __cordl_internal_get__snapInteractor() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__to() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__to() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform() ;

constexpr void __cordl_internal_set__easeCurve(::Oculus::Interaction::ProgressCurve*  value) ;

constexpr void __cordl_internal_set__from(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__hoverOffset(float_t  value) ;

constexpr void __cordl_internal_set__snapInteractor(::UnityW<::Oculus::Interaction::SnapInteractor>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__to(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0xa464f40, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_EaseCurve, addr 0xa464a68, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::ProgressCurve* get_EaseCurve() ;

/// @brief Method get_HoverOffset, addr 0xa464a58, size 0x8, virtual false, abstract: false, final false
inline float_t get_HoverOffset() ;

/// @brief Method set_EaseCurve, addr 0xa464a70, size 0x8, virtual false, abstract: false, final false
inline void set_EaseCurve(::Oculus::Interaction::ProgressCurve*  value) ;

/// @brief Method set_HoverOffset, addr 0xa464a60, size 0x8, virtual false, abstract: false, final false
inline void set_HoverOffset(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SnapInteractorFollowVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SnapInteractorFollowVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SnapInteractorFollowVisual(SnapInteractorFollowVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SnapInteractorFollowVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SnapInteractorFollowVisual(SnapInteractorFollowVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15884};

/// [SerializeField]
/// @brief Field _snapInteractor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::SnapInteractor>  ____snapInteractor;

/// [SerializeField]
/// @brief Field _hoverOffset, offset: 0x28, size: 0x4, def value: None
 float_t  ____hoverOffset;

/// [SerializeField]
/// @brief Field _easeCurve, offset: 0x30, size: 0x8, def value: None
 ::Oculus::Interaction::ProgressCurve*  ____easeCurve;

/// [SerializeField]
/// [Optional]
/// @brief Field _transform, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____transform;

/// @brief Field _started, offset: 0x40, size: 0x1, def value: None
 bool  ____started;

/// @brief Field _from, offset: 0x44, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____from;

/// @brief Field _to, offset: 0x60, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____to;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::SnapInteractorFollowVisual, ____snapInteractor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SnapInteractorFollowVisual, ____hoverOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SnapInteractorFollowVisual, ____easeCurve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SnapInteractorFollowVisual, ____transform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SnapInteractorFollowVisual, ____started) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SnapInteractorFollowVisual, ____from) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SnapInteractorFollowVisual, ____to) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::SnapInteractorFollowVisual) == 0x80, "Size mismatch!");

} // namespace end def Oculus::Interaction
