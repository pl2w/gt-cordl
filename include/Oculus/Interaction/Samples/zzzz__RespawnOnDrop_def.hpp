#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/RespawnOnDrop.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__TwoGrabFreeTransformer_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RespawnOnDrop)
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace Oculus::Interaction::Samples {
class RespawnOnDrop;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::RespawnOnDrop*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::RespawnOnDrop*, "Oculus.Interaction.Samples", "RespawnOnDrop");
// Dependencies Oculus.Interaction.TwoGrabFreeTransformer, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.RespawnOnDrop
class CORDL_TYPE RespawnOnDrop : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_WhenRespawned)) ::UnityEngine::Events::UnityEvent*  WhenRespawned;

/// @brief Field _freeTransformers, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__freeTransformers, put=__cordl_internal_set__freeTransformers)) ::ArrayW<::UnityW<::Oculus::Interaction::TwoGrabFreeTransformer>>  _freeTransformers;

/// @brief Field _initialPosition, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get__initialPosition, put=__cordl_internal_set__initialPosition)) ::UnityEngine::Vector3  _initialPosition;

/// @brief Field _initialRotation, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__initialRotation, put=__cordl_internal_set__initialRotation)) ::UnityEngine::Quaternion  _initialRotation;

/// @brief Field _initialScale, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get__initialScale, put=__cordl_internal_set__initialScale)) ::UnityEngine::Vector3  _initialScale;

/// @brief Field _rigidBody, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__rigidBody, put=__cordl_internal_set__rigidBody)) ::UnityW<::UnityEngine::Rigidbody>  _rigidBody;

/// @brief Field _sleepCountDown, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__sleepCountDown, put=__cordl_internal_set__sleepCountDown)) int32_t  _sleepCountDown;

/// @brief Field _sleepFrames, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__sleepFrames, put=__cordl_internal_set__sleepFrames)) int32_t  _sleepFrames;

/// @brief Field _whenRespawned, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenRespawned, put=__cordl_internal_set__whenRespawned)) ::UnityEngine::Events::UnityEvent*  _whenRespawned;

/// @brief Field _yThresholdForRespawn, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__yThresholdForRespawn, put=__cordl_internal_set__yThresholdForRespawn)) float_t  _yThresholdForRespawn;

/// @brief Method FixedUpdate, addr 0xa43e1e8, size 0x34, virtual true, abstract: false, final false
inline void FixedUpdate() ;

static inline ::Oculus::Interaction::Samples::RespawnOnDrop* New_ctor() ;

/// @brief Method OnEnable, addr 0xa43ded4, size 0xec, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Respawn, addr 0xa43e000, size 0x1e8, virtual false, abstract: false, final false
inline void Respawn() ;

/// @brief Method Update, addr 0xa43dfc0, size 0x40, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::ArrayW<::UnityW<::Oculus::Interaction::TwoGrabFreeTransformer>> const& __cordl_internal_get__freeTransformers() const;

constexpr ::ArrayW<::UnityW<::Oculus::Interaction::TwoGrabFreeTransformer>>& __cordl_internal_get__freeTransformers() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__initialPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__initialPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__initialRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__initialRotation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__initialScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__initialScale() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__rigidBody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__rigidBody() ;

constexpr int32_t const& __cordl_internal_get__sleepCountDown() const;

constexpr int32_t& __cordl_internal_get__sleepCountDown() ;

constexpr int32_t const& __cordl_internal_get__sleepFrames() const;

constexpr int32_t& __cordl_internal_get__sleepFrames() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenRespawned() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenRespawned() ;

constexpr float_t const& __cordl_internal_get__yThresholdForRespawn() const;

constexpr float_t& __cordl_internal_get__yThresholdForRespawn() ;

constexpr void __cordl_internal_set__freeTransformers(::ArrayW<::UnityW<::Oculus::Interaction::TwoGrabFreeTransformer>>  value) ;

constexpr void __cordl_internal_set__initialPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__initialRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__initialScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__rigidBody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set__sleepCountDown(int32_t  value) ;

constexpr void __cordl_internal_set__sleepFrames(int32_t  value) ;

constexpr void __cordl_internal_set__whenRespawned(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__yThresholdForRespawn(float_t  value) ;

/// @brief Method .ctor, addr 0xa43e21c, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_WhenRespawned, addr 0xa43decc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenRespawned() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RespawnOnDrop() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RespawnOnDrop", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RespawnOnDrop(RespawnOnDrop && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RespawnOnDrop", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RespawnOnDrop(RespawnOnDrop const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28328};

/// [SerializeField]
/// [Tooltip("Respawn will happen when the transform moves below this World Y position.")]
/// @brief Field _yThresholdForRespawn, offset: 0x20, size: 0x4, def value: None
 float_t  ____yThresholdForRespawn;

/// [SerializeField]
/// [Tooltip("UnityEvent triggered when a respawn occurs.")]
/// @brief Field _whenRespawned, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenRespawned;

/// [SerializeField]
/// [Tooltip("If the transform has an associated rigidbody, make it kinematic during this number of frames after a respawn, in order to avoid ghost collisions.")]
/// @brief Field _sleepFrames, offset: 0x30, size: 0x4, def value: None
 int32_t  ____sleepFrames;

/// @brief Field _initialPosition, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____initialPosition;

/// @brief Field _initialRotation, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____initialRotation;

/// @brief Field _initialScale, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____initialScale;

/// @brief Field _freeTransformers, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityW<::Oculus::Interaction::TwoGrabFreeTransformer>>  ____freeTransformers;

/// @brief Field _rigidBody, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ____rigidBody;

/// @brief Field _sleepCountDown, offset: 0x70, size: 0x4, def value: None
 int32_t  ____sleepCountDown;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::RespawnOnDrop, ____yThresholdForRespawn) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::RespawnOnDrop, ____whenRespawned) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::RespawnOnDrop, ____sleepFrames) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::RespawnOnDrop, ____initialPosition) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::RespawnOnDrop, ____initialRotation) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::RespawnOnDrop, ____initialScale) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::RespawnOnDrop, ____freeTransformers) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::RespawnOnDrop, ____rigidBody) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::RespawnOnDrop, ____sleepCountDown) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::RespawnOnDrop) == 0x78, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
