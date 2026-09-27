#pragma once
// IWYU pragma private; include "Oculus/Interaction/DistanceReticles/ReticleDataIcon.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ReticleDataIcon)
namespace Oculus::Interaction::DistanceReticles {
class IReticleData;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::DistanceReticles {
class ReticleDataIcon;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::DistanceReticles::ReticleDataIcon*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::DistanceReticles::ReticleDataIcon*, "Oculus.Interaction.DistanceReticles", "ReticleDataIcon");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::DistanceReticles {
// Is value type: false
// CS Name: Oculus.Interaction.DistanceReticles.ReticleDataIcon
class CORDL_TYPE ReticleDataIcon : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CustomIcon, put=set_CustomIcon)) ::UnityW<::UnityEngine::Texture>  CustomIcon;

 __declspec(property(get=get_Snappiness, put=set_Snappiness)) float_t  Snappiness;

/// @brief Field _customIcon, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__customIcon, put=__cordl_internal_set__customIcon)) ::UnityW<::UnityEngine::Texture>  _customIcon;

/// @brief Field _renderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderer, put=__cordl_internal_set__renderer)) ::UnityW<::UnityEngine::MeshRenderer>  _renderer;

/// @brief Field _snappiness, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__snappiness, put=__cordl_internal_set__snappiness)) float_t  _snappiness;

/// @brief Convert operator to "::Oculus::Interaction::DistanceReticles::IReticleData"
constexpr operator  ::Oculus::Interaction::DistanceReticles::IReticleData*() noexcept;

/// @brief Method GetTargetSize, addr 0xa4f0754, size 0xb8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetTargetSize() ;

/// @brief Method InjectOptionalRenderer, addr 0xa4f0890, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalRenderer(::UnityEngine::MeshRenderer*  renderer) ;

static inline ::Oculus::Interaction::DistanceReticles::ReticleDataIcon* New_ctor() ;

/// @brief Method ProcessHitPoint, addr 0xa4f080c, size 0x84, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 ProcessHitPoint(::UnityEngine::Vector3  hitPoint) ;

constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get__customIcon() const;

constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get__customIcon() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__renderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__renderer() ;

constexpr float_t const& __cordl_internal_get__snappiness() const;

constexpr float_t& __cordl_internal_get__snappiness() ;

constexpr void __cordl_internal_set__customIcon(::UnityW<::UnityEngine::Texture>  value) ;

constexpr void __cordl_internal_set__renderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set__snappiness(float_t  value) ;

/// @brief Method .ctor, addr 0xa4f0898, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CustomIcon, addr 0xa4f0734, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture> get_CustomIcon() ;

/// @brief Method get_Snappiness, addr 0xa4f0744, size 0x8, virtual false, abstract: false, final false
inline float_t get_Snappiness() ;

/// @brief Convert to "::Oculus::Interaction::DistanceReticles::IReticleData"
constexpr ::Oculus::Interaction::DistanceReticles::IReticleData* i___Oculus__Interaction__DistanceReticles__IReticleData() noexcept;

/// @brief Method set_CustomIcon, addr 0xa4f073c, size 0x8, virtual false, abstract: false, final false
inline void set_CustomIcon(::UnityEngine::Texture*  value) ;

/// @brief Method set_Snappiness, addr 0xa4f074c, size 0x8, virtual false, abstract: false, final false
inline void set_Snappiness(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReticleDataIcon() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReticleDataIcon", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReticleDataIcon(ReticleDataIcon && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReticleDataIcon", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReticleDataIcon(ReticleDataIcon const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16372};

/// [Tooltip("The Mesh Renderer of the GameObject that the icon can appear on.")]
/// [SerializeField]
/// [Optional]
/// @brief Field _renderer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ____renderer;

/// [Tooltip("The icon\'s appearance.")]
/// [SerializeField]
/// [Optional]
/// @brief Field _customIcon, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  ____customIcon;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field _snappiness, offset: 0x30, size: 0x4, def value: None
 float_t  ____snappiness;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::DistanceReticles::ReticleDataIcon, ____renderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::ReticleDataIcon, ____customIcon) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistanceReticles::ReticleDataIcon, ____snappiness) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::DistanceReticles::ReticleDataIcon) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction::DistanceReticles
