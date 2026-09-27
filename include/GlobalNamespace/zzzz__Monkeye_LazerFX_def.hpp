#pragma once
// IWYU pragma private; include "GlobalNamespace/Monkeye_LazerFX.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LineRenderer_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Monkeye_LazerFX)
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class Monkeye_LazerFX;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Monkeye_LazerFX*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Monkeye_LazerFX*, "", "Monkeye_LazerFX");
// Dependencies UnityEngine.LineRenderer, UnityEngine.MonoBehaviour, UnityEngine.Transform, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: Monkeye_LazerFX
class CORDL_TYPE Monkeye_LazerFX : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field eyeBones, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_eyeBones, put=__cordl_internal_set_eyeBones)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  eyeBones;

/// @brief Field lines, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_lines, put=__cordl_internal_set_lines)) ::ArrayW<::UnityW<::UnityEngine::LineRenderer>>  lines;

/// @brief Field targetFx, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetFx, put=__cordl_internal_set_targetFx)) ::UnityW<::UnityEngine::GameObject>  targetFx;

/// @brief Field targetPos, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_targetPos, put=__cordl_internal_set_targetPos)) ::UnityEngine::Vector3  targetPos;

/// @brief Field targetRig, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetRig, put=__cordl_internal_set_targetRig)) ::UnityW<::GlobalNamespace::VRRig>  targetRig;

/// @brief Method Awake, addr 0x5c069a0, size 0x104, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DisableLazer, addr 0x5c04524, size 0x110, virtual false, abstract: false, final false
inline void DisableLazer() ;

/// @brief Method EnableLazer, addr 0x5c04634, size 0x19c, virtual false, abstract: false, final false
inline void EnableLazer(::ArrayW<::UnityEngine::Transform*>  eyes_, ::GlobalNamespace::VRRig*  rig_, float_t  maxDist) ;

/// @brief Method EnableLazer, addr 0x5c06aa4, size 0x164, virtual false, abstract: false, final false
inline void EnableLazer(::ArrayW<::UnityEngine::Transform*>  eyes_, ::UnityEngine::Vector3  targetPos_) ;

static inline ::GlobalNamespace::Monkeye_LazerFX* New_ctor() ;

/// @brief Method Update, addr 0x5c06c08, size 0x19c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_eyeBones() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_eyeBones() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::LineRenderer>> const& __cordl_internal_get_lines() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::LineRenderer>>& __cordl_internal_get_lines() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_targetFx() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_targetFx() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_targetPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_targetPos() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_targetRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_targetRig() ;

constexpr void __cordl_internal_set_eyeBones(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_lines(::ArrayW<::UnityW<::UnityEngine::LineRenderer>>  value) ;

constexpr void __cordl_internal_set_targetFx(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_targetPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_targetRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

/// @brief Method .ctor, addr 0x5c06da4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Monkeye_LazerFX() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Monkeye_LazerFX", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Monkeye_LazerFX(Monkeye_LazerFX && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Monkeye_LazerFX", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Monkeye_LazerFX(Monkeye_LazerFX const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{427};

/// @brief Field eyeBones, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___eyeBones;

/// @brief Field targetRig, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___targetRig;

/// @brief Field targetPos, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___targetPos;

/// @brief Field lines, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::LineRenderer>>  ___lines;

/// @brief Field targetFx, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___targetFx;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Monkeye_LazerFX, ___eyeBones) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Monkeye_LazerFX, ___targetRig) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Monkeye_LazerFX, ___targetPos) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Monkeye_LazerFX, ___lines) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Monkeye_LazerFX, ___targetFx) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Monkeye_LazerFX) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
