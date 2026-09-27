#pragma once
// IWYU pragma private; include "GorillaTag/Audio/PlanarSound.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlanarSound)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTag::Audio {
class PlanarSound;
}
// Write type traits
MARK_REF_T(::GorillaTag::Audio::PlanarSound*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Audio::PlanarSound*, "GorillaTag.Audio", "PlanarSound");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag::Audio {
// Is value type: false
// CS Name: GorillaTag.Audio.PlanarSound
class CORDL_TYPE PlanarSound : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field cameraXform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cameraXform, put=__cordl_internal_set_cameraXform)) ::UnityW<::UnityEngine::Transform>  cameraXform;

/// @brief Field hasCamera, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasCamera, put=__cordl_internal_set_hasCamera)) bool  hasCamera;

/// @brief Field limitDistance, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_limitDistance, put=__cordl_internal_set_limitDistance)) bool  limitDistance;

/// @brief Field maxDistance, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDistance, put=__cordl_internal_set_maxDistance)) float_t  maxDistance;

/// @brief Method LateUpdate, addr 0x5d4f97c, size 0x17c, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GorillaTag::Audio::PlanarSound* New_ctor() ;

/// @brief Method OnEnable, addr 0x5d4f8d8, size 0xa4, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_cameraXform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_cameraXform() ;

constexpr bool const& __cordl_internal_get_hasCamera() const;

constexpr bool& __cordl_internal_get_hasCamera() ;

constexpr bool const& __cordl_internal_get_limitDistance() const;

constexpr bool& __cordl_internal_get_limitDistance() ;

constexpr float_t const& __cordl_internal_get_maxDistance() const;

constexpr float_t& __cordl_internal_get_maxDistance() ;

constexpr void __cordl_internal_set_cameraXform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_hasCamera(bool  value) ;

constexpr void __cordl_internal_set_limitDistance(bool  value) ;

constexpr void __cordl_internal_set_maxDistance(float_t  value) ;

/// @brief Method .ctor, addr 0x5d4faf8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlanarSound() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlanarSound", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlanarSound(PlanarSound && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlanarSound", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlanarSound(PlanarSound const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4784};

/// @brief Field cameraXform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___cameraXform;

/// @brief Field hasCamera, offset: 0x28, size: 0x1, def value: None
 bool  ___hasCamera;

/// [SerializeField]
/// @brief Field limitDistance, offset: 0x29, size: 0x1, def value: None
 bool  ___limitDistance;

/// [SerializeField]
/// @brief Field maxDistance, offset: 0x2c, size: 0x4, def value: None
 float_t  ___maxDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Audio::PlanarSound, ___cameraXform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::PlanarSound, ___hasCamera) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::PlanarSound, ___limitDistance) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::PlanarSound, ___maxDistance) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Audio::PlanarSound) == 0x30, "Size mismatch!");

} // namespace end def GorillaTag::Audio
