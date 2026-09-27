#pragma once
// IWYU pragma private; include "GlobalNamespace/SIPosedTentacleArm.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ShaderHashId_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SIPosedTentacleArm)
namespace GlobalNamespace {
class SIGadgetTentacleArm;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SIPosedTentacleArm;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIPosedTentacleArm*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIPosedTentacleArm*, "", "SIPosedTentacleArm");
// [ExecuteAlways]
// Dependencies ShaderHashId, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIPosedTentacleArm
class CORDL_TYPE SIPosedTentacleArm : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field LengthFactor, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_LengthFactor, put=__cordl_internal_set_LengthFactor)) float_t  LengthFactor;

/// @brief Field _hasTentacle2, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasTentacle2, put=__cordl_internal_set__hasTentacle2)) bool  _hasTentacle2;

/// @brief Field _initialized, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__initialized, put=__cordl_internal_set__initialized)) bool  _initialized;

/// @brief Field _lastAnchorPos, offset 0x74, size 0xc 
 __declspec(property(get=__cordl_internal_get__lastAnchorPos, put=__cordl_internal_set__lastAnchorPos)) ::UnityEngine::Vector3  _lastAnchorPos;

/// @brief Field _lastPos, offset 0x68, size 0xc 
 __declspec(property(get=__cordl_internal_get__lastPos, put=__cordl_internal_set__lastPos)) ::UnityEngine::Vector3  _lastPos;

/// @brief Field _tentacleMat, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__tentacleMat, put=__cordl_internal_set__tentacleMat)) ::UnityW<::UnityEngine::Material>  _tentacleMat;

/// @brief Field _tentacleMat2, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__tentacleMat2, put=__cordl_internal_set__tentacleMat2)) ::UnityW<::UnityEngine::Material>  _tentacleMat2;

/// @brief Field tentacleAnchor, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_tentacleAnchor, put=__cordl_internal_set_tentacleAnchor)) ::UnityW<::UnityEngine::Transform>  tentacleAnchor;

/// @brief Field tentacleAnchor2, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_tentacleAnchor2, put=__cordl_internal_set_tentacleAnchor2)) ::UnityW<::UnityEngine::Transform>  tentacleAnchor2;

/// @brief Field tentacleEndDir_HASH, offset 0xa0, size 0x10 
 __declspec(property(get=__cordl_internal_get_tentacleEndDir_HASH, put=__cordl_internal_set_tentacleEndDir_HASH)) ::GlobalNamespace::ShaderHashId  tentacleEndDir_HASH;

/// @brief Field tentacleEnd_HASH, offset 0x90, size 0x10 
 __declspec(property(get=__cordl_internal_get_tentacleEnd_HASH, put=__cordl_internal_set_tentacleEnd_HASH)) ::GlobalNamespace::ShaderHashId  tentacleEnd_HASH;

/// @brief Field tentacleRenderer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_tentacleRenderer, put=__cordl_internal_set_tentacleRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  tentacleRenderer;

/// @brief Field tentacleRenderer2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_tentacleRenderer2, put=__cordl_internal_set_tentacleRenderer2)) ::UnityW<::UnityEngine::MeshRenderer>  tentacleRenderer2;

/// @brief Field tentacleRingOrigin_HASH, offset 0xb0, size 0x10 
 __declspec(property(get=__cordl_internal_get_tentacleRingOrigin_HASH, put=__cordl_internal_set_tentacleRingOrigin_HASH)) ::GlobalNamespace::ShaderHashId  tentacleRingOrigin_HASH;

/// @brief Field tentacleSharedMaterial, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_tentacleSharedMaterial, put=__cordl_internal_set_tentacleSharedMaterial)) ::UnityW<::UnityEngine::Material>  tentacleSharedMaterial;

/// @brief Field tentacleStartDir_HASH, offset 0x80, size 0x10 
 __declspec(property(get=__cordl_internal_get_tentacleStartDir_HASH, put=__cordl_internal_set_tentacleStartDir_HASH)) ::GlobalNamespace::ShaderHashId  tentacleStartDir_HASH;

/// @brief Method CanUpdateTentaclePose, addr 0x59d6274, size 0x8, virtual false, abstract: false, final false
inline bool CanUpdateTentaclePose() ;

/// @brief Method ConfigureFrom, addr 0x59d6158, size 0x98, virtual false, abstract: false, final false
inline void ConfigureFrom(::GlobalNamespace::SIGadgetTentacleArm*  source, ::UnityEngine::MeshRenderer*  rend1, ::UnityEngine::MeshRenderer*  rend2, ::UnityEngine::Transform*  anchor1, ::UnityEngine::Transform*  anchor2) ;

/// @brief Method EnsureMaterialsInitialized, addr 0x59d627c, size 0x124, virtual false, abstract: false, final false
inline void EnsureMaterialsInitialized() ;

static inline ::GlobalNamespace::SIPosedTentacleArm* New_ctor() ;

/// @brief Method Start, addr 0x59d61f0, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateTentacle, addr 0x59d63a0, size 0x594, virtual false, abstract: false, final false
inline void UpdateTentacle(::UnityEngine::Material*  material, ::UnityEngine::Transform*  tentacle, ::UnityEngine::Transform*  anchor) ;

/// @brief Method UpdateTentaclePose, addr 0x59d61f4, size 0x80, virtual false, abstract: false, final false
inline void UpdateTentaclePose() ;

constexpr float_t const& __cordl_internal_get_LengthFactor() const;

constexpr float_t& __cordl_internal_get_LengthFactor() ;

constexpr bool const& __cordl_internal_get__hasTentacle2() const;

constexpr bool& __cordl_internal_get__hasTentacle2() ;

constexpr bool const& __cordl_internal_get__initialized() const;

constexpr bool& __cordl_internal_get__initialized() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__lastAnchorPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__lastAnchorPos() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__lastPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__lastPos() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__tentacleMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__tentacleMat() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__tentacleMat2() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__tentacleMat2() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_tentacleAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_tentacleAnchor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_tentacleAnchor2() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_tentacleAnchor2() ;

constexpr ::GlobalNamespace::ShaderHashId const& __cordl_internal_get_tentacleEndDir_HASH() const;

constexpr ::GlobalNamespace::ShaderHashId& __cordl_internal_get_tentacleEndDir_HASH() ;

constexpr ::GlobalNamespace::ShaderHashId const& __cordl_internal_get_tentacleEnd_HASH() const;

constexpr ::GlobalNamespace::ShaderHashId& __cordl_internal_get_tentacleEnd_HASH() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_tentacleRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_tentacleRenderer() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_tentacleRenderer2() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_tentacleRenderer2() ;

constexpr ::GlobalNamespace::ShaderHashId const& __cordl_internal_get_tentacleRingOrigin_HASH() const;

constexpr ::GlobalNamespace::ShaderHashId& __cordl_internal_get_tentacleRingOrigin_HASH() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_tentacleSharedMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_tentacleSharedMaterial() ;

constexpr ::GlobalNamespace::ShaderHashId const& __cordl_internal_get_tentacleStartDir_HASH() const;

constexpr ::GlobalNamespace::ShaderHashId& __cordl_internal_get_tentacleStartDir_HASH() ;

constexpr void __cordl_internal_set_LengthFactor(float_t  value) ;

constexpr void __cordl_internal_set__hasTentacle2(bool  value) ;

constexpr void __cordl_internal_set__initialized(bool  value) ;

constexpr void __cordl_internal_set__lastAnchorPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__lastPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__tentacleMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__tentacleMat2(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_tentacleAnchor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_tentacleAnchor2(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_tentacleEndDir_HASH(::GlobalNamespace::ShaderHashId  value) ;

constexpr void __cordl_internal_set_tentacleEnd_HASH(::GlobalNamespace::ShaderHashId  value) ;

constexpr void __cordl_internal_set_tentacleRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_tentacleRenderer2(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_tentacleRingOrigin_HASH(::GlobalNamespace::ShaderHashId  value) ;

constexpr void __cordl_internal_set_tentacleSharedMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_tentacleStartDir_HASH(::GlobalNamespace::ShaderHashId  value) ;

/// @brief Method .ctor, addr 0x59d6934, size 0x12c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIPosedTentacleArm() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIPosedTentacleArm", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIPosedTentacleArm(SIPosedTentacleArm && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIPosedTentacleArm", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIPosedTentacleArm(SIPosedTentacleArm const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{285};

/// @brief Field LengthFactor, offset: 0x20, size: 0x4, def value: None
 float_t  ___LengthFactor;

/// @brief Field tentacleRenderer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___tentacleRenderer;

/// @brief Field tentacleRenderer2, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___tentacleRenderer2;

/// @brief Field tentacleAnchor, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___tentacleAnchor;

/// @brief Field tentacleAnchor2, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___tentacleAnchor2;

/// @brief Field tentacleSharedMaterial, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___tentacleSharedMaterial;

/// @brief Field _initialized, offset: 0x50, size: 0x1, def value: None
 bool  ____initialized;

/// @brief Field _hasTentacle2, offset: 0x51, size: 0x1, def value: None
 bool  ____hasTentacle2;

/// @brief Field _tentacleMat, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____tentacleMat;

/// @brief Field _tentacleMat2, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____tentacleMat2;

/// @brief Field _lastPos, offset: 0x68, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____lastPos;

/// @brief Field _lastAnchorPos, offset: 0x74, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____lastAnchorPos;

/// @brief Field tentacleStartDir_HASH, offset: 0x80, size: 0x10, def value: None
 ::GlobalNamespace::ShaderHashId  ___tentacleStartDir_HASH;

/// @brief Field tentacleEnd_HASH, offset: 0x90, size: 0x10, def value: None
 ::GlobalNamespace::ShaderHashId  ___tentacleEnd_HASH;

/// @brief Field tentacleEndDir_HASH, offset: 0xa0, size: 0x10, def value: None
 ::GlobalNamespace::ShaderHashId  ___tentacleEndDir_HASH;

/// @brief Field tentacleRingOrigin_HASH, offset: 0xb0, size: 0x10, def value: None
 ::GlobalNamespace::ShaderHashId  ___tentacleRingOrigin_HASH;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIPosedTentacleArm, ___LengthFactor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPosedTentacleArm, ___tentacleRenderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPosedTentacleArm, ___tentacleRenderer2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPosedTentacleArm, ___tentacleAnchor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPosedTentacleArm, ___tentacleAnchor2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPosedTentacleArm, ___tentacleSharedMaterial) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPosedTentacleArm, ____initialized) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPosedTentacleArm, ____hasTentacle2) == 0x51, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPosedTentacleArm, ____tentacleMat) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPosedTentacleArm, ____tentacleMat2) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPosedTentacleArm, ____lastPos) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPosedTentacleArm, ____lastAnchorPos) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPosedTentacleArm, ___tentacleStartDir_HASH) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPosedTentacleArm, ___tentacleEnd_HASH) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPosedTentacleArm, ___tentacleEndDir_HASH) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPosedTentacleArm, ___tentacleRingOrigin_HASH) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIPosedTentacleArm) == 0xc0, "Size mismatch!");

} // namespace end def GlobalNamespace
