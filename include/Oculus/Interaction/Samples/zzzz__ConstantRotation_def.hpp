#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/ConstantRotation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ConstantRotation)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Samples {
class ConstantRotation;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::ConstantRotation*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::ConstantRotation*, "Oculus.Interaction.Samples", "ConstantRotation");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.ConstantRotation
class CORDL_TYPE ConstantRotation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_LocalAxis, put=set_LocalAxis)) ::UnityEngine::Vector3  LocalAxis;

 __declspec(property(get=get_RotationSpeed, put=set_RotationSpeed)) float_t  RotationSpeed;

/// @brief Field _localAxis, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get__localAxis, put=__cordl_internal_set__localAxis)) ::UnityEngine::Vector3  _localAxis;

/// @brief Field _rotationSpeed, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__rotationSpeed, put=__cordl_internal_set__rotationSpeed)) float_t  _rotationSpeed;

static inline ::Oculus::Interaction::Samples::ConstantRotation* New_ctor() ;

/// @brief Method Update, addr 0xa440848, size 0x60, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__localAxis() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__localAxis() ;

constexpr float_t const& __cordl_internal_get__rotationSpeed() const;

constexpr float_t& __cordl_internal_get__rotationSpeed() ;

constexpr void __cordl_internal_set__localAxis(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__rotationSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0xa4408a8, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_LocalAxis, addr 0xa440830, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_LocalAxis() ;

/// @brief Method get_RotationSpeed, addr 0xa440820, size 0x8, virtual false, abstract: false, final false
inline float_t get_RotationSpeed() ;

/// @brief Method set_LocalAxis, addr 0xa44083c, size 0xc, virtual false, abstract: false, final false
inline void set_LocalAxis(::UnityEngine::Vector3  value) ;

/// @brief Method set_RotationSpeed, addr 0xa440828, size 0x8, virtual false, abstract: false, final false
inline void set_RotationSpeed(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConstantRotation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConstantRotation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConstantRotation(ConstantRotation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConstantRotation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConstantRotation(ConstantRotation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28348};

/// [SerializeField]
/// @brief Field _rotationSpeed, offset: 0x20, size: 0x4, def value: None
 float_t  ____rotationSpeed;

/// [SerializeField]
/// @brief Field _localAxis, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____localAxis;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::ConstantRotation, ____rotationSpeed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::ConstantRotation, ____localAxis) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::ConstantRotation) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
