#pragma once
// IWYU pragma private; include "GlobalNamespace/SyncToPlayerColor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ShaderHashId_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(SyncToPlayerColor)
namespace GlobalNamespace {
class VRRig;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class SyncToPlayerColor;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SyncToPlayerColor*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SyncToPlayerColor*, "", "SyncToPlayerColor");
// Dependencies ShaderHashId, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SyncToPlayerColor
class CORDL_TYPE SyncToPlayerColor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _colorFunc, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__colorFunc, put=__cordl_internal_set__colorFunc)) ::System::Action_1<::UnityEngine::Color>*  _colorFunc;

/// @brief Field colorPropertiesToSync, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_colorPropertiesToSync, put=__cordl_internal_set_colorPropertiesToSync)) ::ArrayW<::GlobalNamespace::ShaderHashId>  colorPropertiesToSync;

/// @brief Field rig, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rig, put=__cordl_internal_set_rig)) ::UnityW<::GlobalNamespace::VRRig>  rig;

/// @brief Field target, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Material>  target;

/// @brief Method Awake, addr 0x5795078, size 0xa4, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::SyncToPlayerColor* New_ctor() ;

/// @brief Method OnDisable, addr 0x5795184, size 0x20, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5795164, size 0x20, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0x579511c, size 0x48, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateColor, addr 0x57951a4, size 0xe8, virtual true, abstract: false, final false
inline void UpdateColor(::UnityEngine::Color  color) ;

constexpr ::System::Action_1<::UnityEngine::Color>* const& __cordl_internal_get__colorFunc() const;

constexpr ::System::Action_1<::UnityEngine::Color>*& __cordl_internal_get__colorFunc() ;

constexpr ::ArrayW<::GlobalNamespace::ShaderHashId> const& __cordl_internal_get_colorPropertiesToSync() const;

constexpr ::ArrayW<::GlobalNamespace::ShaderHashId>& __cordl_internal_get_colorPropertiesToSync() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_rig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_rig() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set__colorFunc(::System::Action_1<::UnityEngine::Color>*  value) ;

constexpr void __cordl_internal_set_colorPropertiesToSync(::ArrayW<::GlobalNamespace::ShaderHashId>  value) ;

constexpr void __cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x579528c, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SyncToPlayerColor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SyncToPlayerColor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SyncToPlayerColor(SyncToPlayerColor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SyncToPlayerColor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SyncToPlayerColor(SyncToPlayerColor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1455};

/// @brief Field rig, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___rig;

/// @brief Field target, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___target;

/// @brief Field colorPropertiesToSync, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::ShaderHashId>  ___colorPropertiesToSync;

/// @brief Field _colorFunc, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::Color>*  ____colorFunc;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SyncToPlayerColor, ___rig) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SyncToPlayerColor, ___target) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SyncToPlayerColor, ___colorPropertiesToSync) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SyncToPlayerColor, ____colorFunc) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SyncToPlayerColor) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
