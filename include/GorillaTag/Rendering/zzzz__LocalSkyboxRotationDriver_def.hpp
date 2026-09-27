#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/LocalSkyboxRotationDriver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalSkyboxRotationDriver)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTag::Rendering {
class LocalSkyboxRotationDriver;
}
// Write type traits
MARK_REF_T(::GorillaTag::Rendering::LocalSkyboxRotationDriver*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Rendering::LocalSkyboxRotationDriver*, "GorillaTag.Rendering", "LocalSkyboxRotationDriver");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag::Rendering {
// Is value type: false
// CS Name: GorillaTag.Rendering.LocalSkyboxRotationDriver
class CORDL_TYPE LocalSkyboxRotationDriver : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _LocalSkyboxRotation, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LocalSkyboxRotation, put=setStaticF__LocalSkyboxRotation)) int32_t  _LocalSkyboxRotation;

/// @brief Field rotationSource, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rotationSource, put=__cordl_internal_set_rotationSource)) ::UnityW<::UnityEngine::Transform>  rotationSource;

/// @brief Method LateUpdate, addr 0x5d55614, size 0xe0, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GorillaTag::Rendering::LocalSkyboxRotationDriver* New_ctor() ;

/// @brief Method OnDisable, addr 0x5d556f4, size 0xb0, virtual false, abstract: false, final false
inline void OnDisable() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rotationSource() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rotationSource() ;

constexpr void __cordl_internal_set_rotationSource(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5d557a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__LocalSkyboxRotation() ;

static inline void setStaticF__LocalSkyboxRotation(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalSkyboxRotationDriver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalSkyboxRotationDriver", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalSkyboxRotationDriver(LocalSkyboxRotationDriver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalSkyboxRotationDriver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalSkyboxRotationDriver(LocalSkyboxRotationDriver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4801};

/// [Tooltip("The sky\'s rotation mirrors this Transform\'s world rotation. Only rotation is used - position and scale are ignored.")]
/// [SerializeField]
/// @brief Field rotationSource, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rotationSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Rendering::LocalSkyboxRotationDriver, ___rotationSource) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Rendering::LocalSkyboxRotationDriver) == 0x28, "Size mismatch!");

} // namespace end def GorillaTag::Rendering
