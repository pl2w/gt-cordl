#pragma once
// IWYU pragma private; include "Oculus/Interaction/OneGrabFreeTransformer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
CORDL_MODULE_EXPORT(OneGrabFreeTransformer)
namespace Oculus::Interaction {
class IGrabbable;
}
namespace Oculus::Interaction {
class ITransformer;
}
namespace Oculus::Interaction {
class TransformerUtils_PositionConstraints;
}
namespace Oculus::Interaction {
class TransformerUtils_RotationConstraints;
}
// Forward declare root types
namespace Oculus::Interaction {
class OneGrabFreeTransformer;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::OneGrabFreeTransformer*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::OneGrabFreeTransformer*, "Oculus.Interaction", "OneGrabFreeTransformer");
// [Obsolete("Use GrabFreeTransformer instead")]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Pose
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.OneGrabFreeTransformer
class CORDL_TYPE OneGrabFreeTransformer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _grabDeltaInLocalSpace, offset 0x38, size 0x1c 
 __declspec(property(get=__cordl_internal_get__grabDeltaInLocalSpace, put=__cordl_internal_set__grabDeltaInLocalSpace)) ::UnityEngine::Pose  _grabDeltaInLocalSpace;

/// @brief Field _grabbable, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabbable, put=__cordl_internal_set__grabbable)) ::Oculus::Interaction::IGrabbable*  _grabbable;

/// @brief Field _localToTarget, offset 0x60, size 0x1c 
 __declspec(property(get=__cordl_internal_get__localToTarget, put=__cordl_internal_set__localToTarget)) ::UnityEngine::Pose  _localToTarget;

/// @brief Field _parentConstraints, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__parentConstraints, put=__cordl_internal_set__parentConstraints)) ::Oculus::Interaction::TransformerUtils_PositionConstraints*  _parentConstraints;

/// @brief Field _positionConstraints, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__positionConstraints, put=__cordl_internal_set__positionConstraints)) ::Oculus::Interaction::TransformerUtils_PositionConstraints*  _positionConstraints;

/// @brief Field _rotationConstraints, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__rotationConstraints, put=__cordl_internal_set__rotationConstraints)) ::Oculus::Interaction::TransformerUtils_RotationConstraints*  _rotationConstraints;

/// @brief Convert operator to "::Oculus::Interaction::ITransformer"
constexpr operator  ::Oculus::Interaction::ITransformer*() noexcept;

/// @brief Method BeginTransform, addr 0xa448fe4, size 0x1b4, virtual true, abstract: false, final true
inline void BeginTransform() ;

/// @brief Method EndTransform, addr 0xa4493cc, size 0x4, virtual true, abstract: false, final true
inline void EndTransform() ;

/// @brief Method Initialize, addr 0xa448f00, size 0xe4, virtual true, abstract: false, final true
inline void Initialize(::Oculus::Interaction::IGrabbable*  grabbable) ;

static inline ::Oculus::Interaction::OneGrabFreeTransformer* New_ctor() ;

/// @brief Method UpdateTransform, addr 0xa449198, size 0x234, virtual true, abstract: false, final true
inline void UpdateTransform() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__grabDeltaInLocalSpace() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__grabDeltaInLocalSpace() ;

constexpr ::Oculus::Interaction::IGrabbable* const& __cordl_internal_get__grabbable() const;

constexpr ::Oculus::Interaction::IGrabbable*& __cordl_internal_get__grabbable() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__localToTarget() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__localToTarget() ;

constexpr ::Oculus::Interaction::TransformerUtils_PositionConstraints* const& __cordl_internal_get__parentConstraints() const;

constexpr ::Oculus::Interaction::TransformerUtils_PositionConstraints*& __cordl_internal_get__parentConstraints() ;

constexpr ::Oculus::Interaction::TransformerUtils_PositionConstraints* const& __cordl_internal_get__positionConstraints() const;

constexpr ::Oculus::Interaction::TransformerUtils_PositionConstraints*& __cordl_internal_get__positionConstraints() ;

constexpr ::Oculus::Interaction::TransformerUtils_RotationConstraints* const& __cordl_internal_get__rotationConstraints() const;

constexpr ::Oculus::Interaction::TransformerUtils_RotationConstraints*& __cordl_internal_get__rotationConstraints() ;

constexpr void __cordl_internal_set__grabDeltaInLocalSpace(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__grabbable(::Oculus::Interaction::IGrabbable*  value) ;

constexpr void __cordl_internal_set__localToTarget(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__parentConstraints(::Oculus::Interaction::TransformerUtils_PositionConstraints*  value) ;

constexpr void __cordl_internal_set__positionConstraints(::Oculus::Interaction::TransformerUtils_PositionConstraints*  value) ;

constexpr void __cordl_internal_set__rotationConstraints(::Oculus::Interaction::TransformerUtils_RotationConstraints*  value) ;

/// @brief Method .ctor, addr 0xa4493d0, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Oculus::Interaction::ITransformer"
constexpr ::Oculus::Interaction::ITransformer* i___Oculus__Interaction__ITransformer() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OneGrabFreeTransformer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OneGrabFreeTransformer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OneGrabFreeTransformer(OneGrabFreeTransformer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OneGrabFreeTransformer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OneGrabFreeTransformer(OneGrabFreeTransformer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15818};

/// [SerializeField]
/// @brief Field _positionConstraints, offset: 0x20, size: 0x8, def value: None
 ::Oculus::Interaction::TransformerUtils_PositionConstraints*  ____positionConstraints;

/// [SerializeField]
/// @brief Field _rotationConstraints, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::TransformerUtils_RotationConstraints*  ____rotationConstraints;

/// @brief Field _grabbable, offset: 0x30, size: 0x8, def value: None
 ::Oculus::Interaction::IGrabbable*  ____grabbable;

/// @brief Field _grabDeltaInLocalSpace, offset: 0x38, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____grabDeltaInLocalSpace;

/// @brief Field _parentConstraints, offset: 0x58, size: 0x8, def value: None
 ::Oculus::Interaction::TransformerUtils_PositionConstraints*  ____parentConstraints;

/// @brief Field _localToTarget, offset: 0x60, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____localToTarget;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::OneGrabFreeTransformer, ____positionConstraints) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabFreeTransformer, ____rotationConstraints) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabFreeTransformer, ____grabbable) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabFreeTransformer, ____grabDeltaInLocalSpace) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabFreeTransformer, ____parentConstraints) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OneGrabFreeTransformer, ____localToTarget) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::OneGrabFreeTransformer) == 0x80, "Size mismatch!");

} // namespace end def Oculus::Interaction
