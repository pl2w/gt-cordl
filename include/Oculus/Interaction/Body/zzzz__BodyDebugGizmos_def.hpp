#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/BodyDebugGizmos.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Body/zzzz__BodyDebugGizmos_CoordSpace_def.hpp"
#include "Oculus/Interaction/zzzz__SkeletonDebugGizmos_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BodyDebugGizmos)
namespace GlobalNamespace {
struct BodyDebugGizmos_CoordSpace;
}
namespace GlobalNamespace {
struct SkeletonDebugGizmos_VisibilityFlags;
}
namespace Oculus::Interaction::Body::Input {
class IBody;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction::Body {
class BodyDebugGizmos;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Body::BodyDebugGizmos*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Body::BodyDebugGizmos*, "Oculus.Interaction.Body", "BodyDebugGizmos");
// Dependencies Oculus.Interaction.Body.BodyDebugGizmos::CoordSpace, Oculus.Interaction.SkeletonDebugGizmos
namespace Oculus::Interaction::Body {
// Is value type: false
// CS Name: Oculus.Interaction.Body.BodyDebugGizmos
class CORDL_TYPE BodyDebugGizmos : public ::Oculus::Interaction::SkeletonDebugGizmos {
public:
// Declarations
using CoordSpace = ::GlobalNamespace::BodyDebugGizmos_CoordSpace;

/// @brief Field Body, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_Body, put=__cordl_internal_set_Body)) ::Oculus::Interaction::Body::Input::IBody*  Body;

 __declspec(property(get=get_Space, put=set_Space)) ::GlobalNamespace::BodyDebugGizmos_CoordSpace  Space;

/// @brief Field _body, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__body, put=__cordl_internal_set__body)) ::UnityW<::UnityEngine::Object>  _body;

/// @brief Field _space, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__space, put=__cordl_internal_set__space)) ::GlobalNamespace::BodyDebugGizmos_CoordSpace  _space;

/// @brief Field _started, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method Awake, addr 0xa4f3a78, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetModifiedDrawFlags, addr 0xa4f405c, size 0x3c, virtual false, abstract: false, final false
inline ::GlobalNamespace::SkeletonDebugGizmos_VisibilityFlags GetModifiedDrawFlags() ;

/// @brief Method HandleBodyUpdated, addr 0xa4f4098, size 0x298, virtual false, abstract: false, final false
inline void HandleBodyUpdated() ;

/// @brief Method InjectAllBodyJointDebugGizmos, addr 0xa4f4330, size 0x4, virtual false, abstract: false, final false
inline void InjectAllBodyJointDebugGizmos(::Oculus::Interaction::Body::Input::IBody*  body) ;

/// @brief Method InjectBody, addr 0xa4f4334, size 0xd0, virtual false, abstract: false, final false
inline void InjectBody(::Oculus::Interaction::Body::Input::IBody*  body) ;

static inline ::Oculus::Interaction::Body::BodyDebugGizmos* New_ctor() ;

/// @brief Method OnDisable, addr 0xa4f3c0c, size 0x100, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa4f3b0c, size 0x100, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa4f3ae0, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method TryGetJointPose, addr 0xa4f3d0c, size 0x208, virtual true, abstract: false, final false
inline bool TryGetJointPose(int32_t  jointId, ::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method TryGetParentJointId, addr 0xa4f3f14, size 0x148, virtual true, abstract: false, final false
inline bool TryGetParentJointId(int32_t  jointId, ::by_ref<int32_t>  parent) ;

constexpr ::Oculus::Interaction::Body::Input::IBody* const& __cordl_internal_get_Body() const;

constexpr ::Oculus::Interaction::Body::Input::IBody*& __cordl_internal_get_Body() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__body() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__body() ;

constexpr ::GlobalNamespace::BodyDebugGizmos_CoordSpace const& __cordl_internal_get__space() const;

constexpr ::GlobalNamespace::BodyDebugGizmos_CoordSpace& __cordl_internal_get__space() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set_Body(::Oculus::Interaction::Body::Input::IBody*  value) ;

constexpr void __cordl_internal_set__body(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__space(::GlobalNamespace::BodyDebugGizmos_CoordSpace  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa4f4404, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Space, addr 0xa4f3a68, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::BodyDebugGizmos_CoordSpace get_Space() ;

/// @brief Method set_Space, addr 0xa4f3a70, size 0x8, virtual false, abstract: false, final false
inline void set_Space(::GlobalNamespace::BodyDebugGizmos_CoordSpace  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BodyDebugGizmos() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BodyDebugGizmos", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BodyDebugGizmos(BodyDebugGizmos && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BodyDebugGizmos", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BodyDebugGizmos(BodyDebugGizmos const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16384};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Body.Input.IBody), new[] {  })]
/// @brief Field _body, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____body;

/// @brief Field Body, offset: 0x50, size: 0x8, def value: None
 ::Oculus::Interaction::Body::Input::IBody*  ___Body;

/// [Tooltip("The coordinate space in which to draw the skeleton. World space draws the skeleton at the world Body location. Local draws the skeleton relative to this transform\'s position, and can be placed, scaled, or mirrored as desired.")]
/// [SerializeField]
/// @brief Field _space, offset: 0x58, size: 0x4, def value: None
 ::GlobalNamespace::BodyDebugGizmos_CoordSpace  ____space;

/// @brief Field _started, offset: 0x5c, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Body::BodyDebugGizmos, ____body) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::BodyDebugGizmos, ___Body) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::BodyDebugGizmos, ____space) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Body::BodyDebugGizmos, ____started) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Body::BodyDebugGizmos) == 0x60, "Size mismatch!");

} // namespace end def Oculus::Interaction::Body
