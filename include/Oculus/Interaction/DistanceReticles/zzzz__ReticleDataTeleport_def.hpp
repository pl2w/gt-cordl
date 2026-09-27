#pragma once
// IWYU pragma private; include "Oculus/Interaction/DistanceReticles/ReticleDataTeleport.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/DistanceReticles/zzzz__ReticleDataTeleport_TeleportReticleMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReticleDataTeleport)
namespace GlobalNamespace {
struct ReticleDataTeleport_TeleportReticleMode;
}
namespace Oculus::Interaction::DistanceReticles {
class IReticleData;
}
namespace Oculus::Interaction {
class MaterialPropertyBlockEditor;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::DistanceReticles {
class ReticleDataTeleport;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::DistanceReticles::ReticleDataTeleport*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::DistanceReticles::ReticleDataTeleport*, "Oculus.Interaction.DistanceReticles", "ReticleDataTeleport");
// Dependencies Oculus.Interaction.DistanceReticles.ReticleDataTeleport::TeleportReticleMode, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::DistanceReticles {
// Is value type: false
// CS Name: Oculus.Interaction.DistanceReticles.ReticleDataTeleport
class CORDL_TYPE ReticleDataTeleport : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using TeleportReticleMode = ::GlobalNamespace::ReticleDataTeleport_TeleportReticleMode;

 __declspec(property(get=get_HideReticle, put=set_HideReticle)) bool  HideReticle;

/// @brief [Obsolete("Use HideReticle instead")]
 __declspec(property(get=get_ReticleMode, put=set_ReticleMode)) ::GlobalNamespace::ReticleDataTeleport_TeleportReticleMode  ReticleMode;

/// @brief Field _hideReticle, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__hideReticle, put=__cordl_internal_set__hideReticle)) bool  _hideReticle;

/// @brief Field _highlightShaderID, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__highlightShaderID, put=setStaticF__highlightShaderID)) int32_t  _highlightShaderID;

/// @brief Field _materialBlock, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__materialBlock, put=__cordl_internal_set__materialBlock)) ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  _materialBlock;

/// @brief Field _reticleMode, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__reticleMode, put=__cordl_internal_set__reticleMode)) ::GlobalNamespace::ReticleDataTeleport_TeleportReticleMode  _reticleMode;

/// @brief Field _snapPoint, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__snapPoint, put=__cordl_internal_set__snapPoint)) ::UnityW<::UnityEngine::Transform>  _snapPoint;

/// @brief Convert operator to "::Oculus::Interaction::DistanceReticles::IReticleData"
constexpr operator  ::Oculus::Interaction::DistanceReticles::IReticleData*() noexcept;

/// @brief Method Highlight, addr 0xa4f284c, size 0xfc, virtual false, abstract: false, final false
inline void Highlight(bool  highlight) ;

/// @brief Method InjectOptionalMaterialPropertyBlockEditor, addr 0xa4f2950, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalMaterialPropertyBlockEditor(::Oculus::Interaction::MaterialPropertyBlockEditor*  materialBlock) ;

/// @brief Method InjectOptionalSnapPoint, addr 0xa4f2948, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalSnapPoint(::UnityEngine::Transform*  snapPoint) ;

static inline ::Oculus::Interaction::DistanceReticles::ReticleDataTeleport* New_ctor() ;

/// @brief Method ProcessHitPoint, addr 0xa4f279c, size 0xb0, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 ProcessHitPoint(::UnityEngine::Vector3  hitPoint) ;

constexpr bool const& __cordl_internal_get__hideReticle() const;

constexpr bool& __cordl_internal_get__hideReticle() ;

constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor> const& __cordl_internal_get__materialBlock() const;

constexpr ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>& __cordl_internal_get__materialBlock() ;

constexpr ::GlobalNamespace::ReticleDataTeleport_TeleportReticleMode const& __cordl_internal_get__reticleMode() const;

constexpr ::GlobalNamespace::ReticleDataTeleport_TeleportReticleMode& __cordl_internal_get__reticleMode() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__snapPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__snapPoint() ;

constexpr void __cordl_internal_set__hideReticle(bool  value) ;

constexpr void __cordl_internal_set__materialBlock(::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  value) ;

constexpr void __cordl_internal_set__reticleMode(::GlobalNamespace::ReticleDataTeleport_TeleportReticleMode  value) ;

constexpr void __cordl_internal_set__snapPoint(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0xa4f2958, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__highlightShaderID() ;

/// @brief Method get_HideReticle, addr 0xa4f278c, size 0x8, virtual false, abstract: false, final false
inline bool get_HideReticle() ;

/// @brief Method get_ReticleMode, addr 0xa4f277c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::ReticleDataTeleport_TeleportReticleMode get_ReticleMode() ;

/// @brief Convert to "::Oculus::Interaction::DistanceReticles::IReticleData"
constexpr ::Oculus::Interaction::DistanceReticles::IReticleData* i___Oculus__Interaction__DistanceReticles__IReticleData() noexcept;

static inline void setStaticF__highlightShaderID(int32_t  value) ;

/// @brief Method set_HideReticle, addr 0xa4f2794, size 0x8, virtual false, abstract: false, final false
inline void set_HideReticle(bool  value) ;

/// @brief Method set_ReticleMode, addr 0xa4f2784, size 0x8, virtual false, abstract: false, final false
inline void set_ReticleMode(::GlobalNamespace::ReticleDataTeleport_TeleportReticleMode  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReticleDataTeleport() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReticleDataTeleport", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReticleDataTeleport(ReticleDataTeleport && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReticleDataTeleport", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReticleDataTeleport(ReticleDataTeleport const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16378};

/// [SerializeField]
/// [Optional]
/// @brief Field _snapPoint, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____snapPoint;

/// [SerializeField]
/// [Optional]
/// @brief Field _materialBlock, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::MaterialPropertyBlockEditor>  ____materialBlock;

/// [Tooltip("Determines if the teleport reticle is hidden or marked as either valid or invalid when hovering over this spot.")]
/// [SerializeField]
/// [Obsolete("Use _hideReticle instead")]
/// [Optional((Oculus.Interaction.OptionalAttribute::Flag)4)]
/// @brief Field _reticleMode, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::ReticleDataTeleport_TeleportReticleMode  ____reticleMode;

/// [Tooltip("Determines if the teleport reticle is hidden when hovering over this spot.")]
/// [SerializeField]
/// @brief Field _hideReticle, offset: 0x34, size: 0x1, def value: None
 bool  ____hideReticle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::DistanceReticles::ReticleDataTeleport, ____snapPoint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::ReticleDataTeleport, ____materialBlock) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::ReticleDataTeleport, ____reticleMode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::ReticleDataTeleport, ____hideReticle) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::DistanceReticles::ReticleDataTeleport) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction::DistanceReticles
