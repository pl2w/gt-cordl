#pragma once
// IWYU pragma private; include "GlobalNamespace/DroneFakeCameraMimicer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DroneFakeCameraMimicer)
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class DroneFakeCameraMimicer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DroneFakeCameraMimicer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DroneFakeCameraMimicer*, "", "DroneFakeCameraMimicer");
// [RequireComponent(typeof(UnityEngine.Camera))]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DroneFakeCameraMimicer
class CORDL_TYPE DroneFakeCameraMimicer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _mimicer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__mimicer, put=__cordl_internal_set__mimicer)) ::UnityW<::UnityEngine::Camera>  _mimicer;

/// @brief Field _target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityW<::UnityEngine::Camera>  _target;

/// @brief Method Awake, addr 0x9d14ae8, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LateUpdate, addr 0x9d14b40, size 0xd8, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::DroneFakeCameraMimicer* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__mimicer() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__mimicer() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__target() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__target() ;

constexpr void __cordl_internal_set__mimicer(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set__target(::UnityW<::UnityEngine::Camera>  value) ;

/// @brief Method .ctor, addr 0x9d14c18, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DroneFakeCameraMimicer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DroneFakeCameraMimicer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DroneFakeCameraMimicer(DroneFakeCameraMimicer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DroneFakeCameraMimicer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DroneFakeCameraMimicer(DroneFakeCameraMimicer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29584};

/// [SerializeField]
/// @brief Field _target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____target;

/// @brief Field _mimicer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____mimicer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DroneFakeCameraMimicer, ____target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DroneFakeCameraMimicer, ____mimicer) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DroneFakeCameraMimicer) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
