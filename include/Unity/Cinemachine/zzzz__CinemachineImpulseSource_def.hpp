#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineImpulseSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachineImpulseSource)
namespace Unity::Cinemachine {
class CinemachineImpulseDefinition;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineImpulseSource;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineImpulseSource*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineImpulseSource*, "Unity.Cinemachine", "CinemachineImpulseSource");
// [SaveDuringPlay]
// [AddComponentMenu("Cinemachine/Helpers/Cinemachine Impulse Source")]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineImpulseSource.html")]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineImpulseSource
class CORDL_TYPE CinemachineImpulseSource : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field DefaultVelocity, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_DefaultVelocity, put=__cordl_internal_set_DefaultVelocity)) ::UnityEngine::Vector3  DefaultVelocity;

/// @brief Field ImpulseDefinition, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ImpulseDefinition, put=__cordl_internal_set_ImpulseDefinition)) ::Unity::Cinemachine::CinemachineImpulseDefinition*  ImpulseDefinition;

/// @brief Method GenerateImpulse, addr 0xaee5758, size 0xc, virtual false, abstract: false, final false
inline void GenerateImpulse() ;

/// @brief Method GenerateImpulse, addr 0xaee577c, size 0x4, virtual false, abstract: false, final false
inline void GenerateImpulse(float_t  force) ;

/// @brief Method GenerateImpulse, addr 0xaee5778, size 0x4, virtual false, abstract: false, final false
inline void GenerateImpulse(::UnityEngine::Vector3  velocity) ;

/// @brief Method GenerateImpulseAt, addr 0xaee5764, size 0x14, virtual false, abstract: false, final false
inline void GenerateImpulseAt(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  velocity) ;

/// @brief Method GenerateImpulseAtPositionWithVelocity, addr 0xaee5678, size 0x14, virtual false, abstract: false, final false
inline void GenerateImpulseAtPositionWithVelocity(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  velocity) ;

/// @brief Method GenerateImpulseWithForce, addr 0xaee56f8, size 0x60, virtual false, abstract: false, final false
inline void GenerateImpulseWithForce(float_t  force) ;

/// @brief Method GenerateImpulseWithVelocity, addr 0xaee568c, size 0x6c, virtual false, abstract: false, final false
inline void GenerateImpulseWithVelocity(::UnityEngine::Vector3  velocity) ;

static inline ::Unity::Cinemachine::CinemachineImpulseSource* New_ctor() ;

/// @brief Method OnValidate, addr 0xaee5550, size 0x18, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Reset, addr 0xaee5568, size 0x110, virtual false, abstract: false, final false
inline void Reset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_DefaultVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_DefaultVelocity() ;

constexpr ::Unity::Cinemachine::CinemachineImpulseDefinition* const& __cordl_internal_get_ImpulseDefinition() const;

constexpr ::Unity::Cinemachine::CinemachineImpulseDefinition*& __cordl_internal_get_ImpulseDefinition() ;

constexpr void __cordl_internal_set_DefaultVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_ImpulseDefinition(::Unity::Cinemachine::CinemachineImpulseDefinition*  value) ;

/// @brief Method .ctor, addr 0xaee5780, size 0xac, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineImpulseSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineImpulseSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineImpulseSource(CinemachineImpulseSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineImpulseSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineImpulseSource(CinemachineImpulseSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22484};

/// [FormerlySerializedAs("m_ImpulseDefinition")]
/// @brief Field ImpulseDefinition, offset: 0x20, size: 0x8, def value: None
 ::Unity::Cinemachine::CinemachineImpulseDefinition*  ___ImpulseDefinition;

/// [Header("Default Invocation")]
/// [Tooltip("The default direction and force of the Impulse Signal in the absense of any specified overrides.  Overrides can be specified by calling the appropriate GenerateImpulse method in the API.")]
/// [FormerlySerializedAs("m_DefaultVelocity")]
/// @brief Field DefaultVelocity, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___DefaultVelocity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseSource, ___ImpulseDefinition) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineImpulseSource, ___DefaultVelocity) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineImpulseSource) == 0x38, "Size mismatch!");

} // namespace end def Unity::Cinemachine
