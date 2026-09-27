#pragma once
// IWYU pragma private; include "GlobalNamespace/GenericTriggerReactor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GenericTriggerReactor)
namespace GlobalNamespace {
class GorillaVelocityEstimator;
}
namespace GlobalNamespace {
class IBuildValidation;
}
namespace System {
class Type;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class GenericTriggerReactor;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GenericTriggerReactor*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GenericTriggerReactor*, "", "GenericTriggerReactor");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: GenericTriggerReactor
class CORDL_TYPE GenericTriggerReactor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field ComponentName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ComponentName, put=__cordl_internal_set_ComponentName)) ::StringW  ComponentName;

/// @brief Field GTOnTriggerEnter, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_GTOnTriggerEnter, put=__cordl_internal_set_GTOnTriggerEnter)) ::UnityEngine::Events::UnityEvent*  GTOnTriggerEnter;

/// @brief Field GTOnTriggerExit, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_GTOnTriggerExit, put=__cordl_internal_set_GTOnTriggerExit)) ::UnityEngine::Events::UnityEvent*  GTOnTriggerExit;

/// @brief Field componentType, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_componentType, put=__cordl_internal_set_componentType)) ::System::Type*  componentType;

/// @brief Field gorillaVelocityEstimator, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_gorillaVelocityEstimator, put=__cordl_internal_set_gorillaVelocityEstimator)) ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  gorillaVelocityEstimator;

/// @brief Field idealMotion, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_idealMotion, put=__cordl_internal_set_idealMotion)) ::UnityW<::UnityEngine::Transform>  idealMotion;

/// @brief Field idealMotionPlayRangeEnter, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_idealMotionPlayRangeEnter, put=__cordl_internal_set_idealMotionPlayRangeEnter)) ::UnityEngine::Vector2  idealMotionPlayRangeEnter;

/// @brief Field idealMotionPlayRangeExit, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_idealMotionPlayRangeExit, put=__cordl_internal_set_idealMotionPlayRangeExit)) ::UnityEngine::Vector2  idealMotionPlayRangeExit;

/// @brief Field speedRangeEnter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_speedRangeEnter, put=__cordl_internal_set_speedRangeEnter)) ::UnityEngine::Vector2  speedRangeEnter;

/// @brief Field speedRangeExit, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_speedRangeExit, put=__cordl_internal_set_speedRangeExit)) ::UnityEngine::Vector2  speedRangeExit;

/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr operator  ::GlobalNamespace::IBuildValidation*() noexcept;

/// @brief Method Awake, addr 0x57ec9b8, size 0xb8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method IBuildValidation.BuildValidationCheck, addr 0x57ec8c8, size 0xf0, virtual true, abstract: false, final true
inline bool IBuildValidation_BuildValidationCheck() ;

static inline ::GlobalNamespace::GenericTriggerReactor* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x57eca70, size 0x10, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x57ecc9c, size 0x10, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerTest, addr 0x57eca80, size 0x21c, virtual false, abstract: false, final false
inline void OnTriggerTest(::UnityEngine::Collider*  other, ::UnityEngine::Vector2  speedRange, ::UnityEngine::Events::UnityEvent*  unityEvent, ::UnityEngine::Vector2  idealMotionPlay) ;

constexpr ::StringW const& __cordl_internal_get_ComponentName() const;

constexpr ::StringW& __cordl_internal_get_ComponentName() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_GTOnTriggerEnter() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_GTOnTriggerEnter() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_GTOnTriggerExit() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_GTOnTriggerExit() ;

constexpr ::System::Type* const& __cordl_internal_get_componentType() const;

constexpr ::System::Type*& __cordl_internal_get_componentType() ;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& __cordl_internal_get_gorillaVelocityEstimator() const;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& __cordl_internal_get_gorillaVelocityEstimator() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_idealMotion() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_idealMotion() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_idealMotionPlayRangeEnter() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_idealMotionPlayRangeEnter() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_idealMotionPlayRangeExit() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_idealMotionPlayRangeExit() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_speedRangeEnter() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_speedRangeEnter() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_speedRangeExit() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_speedRangeExit() ;

constexpr void __cordl_internal_set_ComponentName(::StringW  value) ;

constexpr void __cordl_internal_set_GTOnTriggerEnter(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_GTOnTriggerExit(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_componentType(::System::Type*  value) ;

constexpr void __cordl_internal_set_gorillaVelocityEstimator(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value) ;

constexpr void __cordl_internal_set_idealMotion(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_idealMotionPlayRangeEnter(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_idealMotionPlayRangeExit(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_speedRangeEnter(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_speedRangeExit(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor, addr 0x57eccac, size 0x34, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* i___GlobalNamespace__IBuildValidation() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GenericTriggerReactor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GenericTriggerReactor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericTriggerReactor(GenericTriggerReactor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericTriggerReactor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericTriggerReactor(GenericTriggerReactor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{176};

/// [SerializeField]
/// @brief Field ComponentName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___ComponentName;

/// [Space]
/// [SerializeField]
/// @brief Field speedRangeEnter, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___speedRangeEnter;

/// [SerializeField]
/// @brief Field speedRangeExit, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___speedRangeExit;

/// [Space]
/// [SerializeField]
/// @brief Field idealMotion, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___idealMotion;

/// [SerializeField]
/// @brief Field idealMotionPlayRangeEnter, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___idealMotionPlayRangeEnter;

/// [SerializeField]
/// @brief Field idealMotionPlayRangeExit, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___idealMotionPlayRangeExit;

/// [Space]
/// [SerializeField]
/// @brief Field GTOnTriggerEnter, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___GTOnTriggerEnter;

/// [SerializeField]
/// @brief Field GTOnTriggerExit, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___GTOnTriggerExit;

/// @brief Field componentType, offset: 0x60, size: 0x8, def value: None
 ::System::Type*  ___componentType;

/// @brief Field gorillaVelocityEstimator, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  ___gorillaVelocityEstimator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GenericTriggerReactor, ___ComponentName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GenericTriggerReactor, ___speedRangeEnter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GenericTriggerReactor, ___speedRangeExit) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GenericTriggerReactor, ___idealMotion) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GenericTriggerReactor, ___idealMotionPlayRangeEnter) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GenericTriggerReactor, ___idealMotionPlayRangeExit) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GenericTriggerReactor, ___GTOnTriggerEnter) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GenericTriggerReactor, ___GTOnTriggerExit) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GenericTriggerReactor, ___componentType) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GenericTriggerReactor, ___gorillaVelocityEstimator) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GenericTriggerReactor) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
