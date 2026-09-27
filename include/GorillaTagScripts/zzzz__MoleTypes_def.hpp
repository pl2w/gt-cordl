#pragma once
// IWYU pragma private; include "GorillaTagScripts/MoleTypes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MoleTypes)
namespace GorillaTagScripts {
class Mole;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GorillaTagScripts {
class MoleTypes;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::MoleTypes*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::MoleTypes*, "GorillaTagScripts", "MoleTypes");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.MoleTypes
class CORDL_TYPE MoleTypes : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsLeftSideMoleType, put=set_IsLeftSideMoleType)) bool  IsLeftSideMoleType;

/// @brief Field MeshRenderer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_MeshRenderer, put=__cordl_internal_set_MeshRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  MeshRenderer;

 __declspec(property(get=get_MoleContainerParent, put=set_MoleContainerParent)) ::UnityW<::GorillaTagScripts::Mole>  MoleContainerParent;

/// @brief Field <IsLeftSideMoleType>k__BackingField, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsLeftSideMoleType_k__BackingField, put=__cordl_internal_set__IsLeftSideMoleType_k__BackingField)) bool  _IsLeftSideMoleType_k__BackingField;

/// @brief Field <MoleContainerParent>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__MoleContainerParent_k__BackingField, put=__cordl_internal_set__MoleContainerParent_k__BackingField)) ::UnityW<::GorillaTagScripts::Mole>  _MoleContainerParent_k__BackingField;

/// @brief Field isHazard, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_isHazard, put=__cordl_internal_set_isHazard)) bool  isHazard;

/// @brief Field monkeMoleDefaultMaterial, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_monkeMoleDefaultMaterial, put=__cordl_internal_set_monkeMoleDefaultMaterial)) ::UnityW<::UnityEngine::Material>  monkeMoleDefaultMaterial;

/// @brief Field monkeMoleHitMaterial, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_monkeMoleHitMaterial, put=__cordl_internal_set_monkeMoleHitMaterial)) ::UnityW<::UnityEngine::Material>  monkeMoleHitMaterial;

/// @brief Field scorePoint, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_scorePoint, put=__cordl_internal_set_scorePoint)) int32_t  scorePoint;

static inline ::GorillaTagScripts::MoleTypes* New_ctor() ;

/// @brief Method Start, addr 0x5b7c728, size 0xb4, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_MeshRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_MeshRenderer() ;

constexpr bool const& __cordl_internal_get__IsLeftSideMoleType_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsLeftSideMoleType_k__BackingField() ;

constexpr ::UnityW<::GorillaTagScripts::Mole> const& __cordl_internal_get__MoleContainerParent_k__BackingField() const;

constexpr ::UnityW<::GorillaTagScripts::Mole>& __cordl_internal_get__MoleContainerParent_k__BackingField() ;

constexpr bool const& __cordl_internal_get_isHazard() const;

constexpr bool& __cordl_internal_get_isHazard() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_monkeMoleDefaultMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_monkeMoleDefaultMaterial() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_monkeMoleHitMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_monkeMoleHitMaterial() ;

constexpr int32_t const& __cordl_internal_get_scorePoint() const;

constexpr int32_t& __cordl_internal_get_scorePoint() ;

constexpr void __cordl_internal_set_MeshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set__IsLeftSideMoleType_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__MoleContainerParent_k__BackingField(::UnityW<::GorillaTagScripts::Mole>  value) ;

constexpr void __cordl_internal_set_isHazard(bool  value) ;

constexpr void __cordl_internal_set_monkeMoleDefaultMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_monkeMoleHitMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_scorePoint(int32_t  value) ;

/// @brief Method .ctor, addr 0x5b7c7dc, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_IsLeftSideMoleType, addr 0x5b7c708, size 0x8, virtual false, abstract: false, final false
inline bool get_IsLeftSideMoleType() ;

/// [CompilerGenerated]
/// @brief Method get_MoleContainerParent, addr 0x5b7c718, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GorillaTagScripts::Mole> get_MoleContainerParent() ;

/// [CompilerGenerated]
/// @brief Method set_IsLeftSideMoleType, addr 0x5b7c710, size 0x8, virtual false, abstract: false, final false
inline void set_IsLeftSideMoleType(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_MoleContainerParent, addr 0x5b7c720, size 0x8, virtual false, abstract: false, final false
inline void set_MoleContainerParent(::GorillaTagScripts::Mole*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MoleTypes() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MoleTypes", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MoleTypes(MoleTypes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MoleTypes", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MoleTypes(MoleTypes const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3908};

/// @brief Field isHazard, offset: 0x20, size: 0x1, def value: None
 bool  ___isHazard;

/// @brief Field scorePoint, offset: 0x24, size: 0x4, def value: None
 int32_t  ___scorePoint;

/// @brief Field MeshRenderer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___MeshRenderer;

/// @brief Field monkeMoleDefaultMaterial, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___monkeMoleDefaultMaterial;

/// @brief Field monkeMoleHitMaterial, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___monkeMoleHitMaterial;

/// [CompilerGenerated]
/// @brief Field <IsLeftSideMoleType>k__BackingField, offset: 0x40, size: 0x1, def value: None
 bool  ____IsLeftSideMoleType_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MoleContainerParent>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::Mole>  ____MoleContainerParent_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::MoleTypes, ___isHazard) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::MoleTypes, ___scorePoint) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::MoleTypes, ___MeshRenderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::MoleTypes, ___monkeMoleDefaultMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::MoleTypes, ___monkeMoleHitMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::MoleTypes, ____IsLeftSideMoleType_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::MoleTypes, ____MoleContainerParent_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::MoleTypes) == 0x50, "Size mismatch!");

} // namespace end def GorillaTagScripts
