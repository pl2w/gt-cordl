#pragma once
// IWYU pragma private; include "GlobalNamespace/ZoneGraphBSP.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ZoneGraphBSP)
namespace GlobalNamespace {
class SerializableBSPTree;
}
namespace GlobalNamespace {
class ZoneDef;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ZoneGraphBSP;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ZoneGraphBSP*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ZoneGraphBSP*, "", "ZoneGraphBSP");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ZoneGraphBSP
class CORDL_TYPE ZoneGraphBSP : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::UnityW<::GlobalNamespace::ZoneGraphBSP>  _Instance_k__BackingField;

/// @brief Field bspTree, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_bspTree, put=__cordl_internal_set_bspTree)) ::GlobalNamespace::SerializableBSPTree*  bspTree;

/// @brief Method Awake, addr 0x5b4a654, size 0x100, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CompileBSP, addr 0x5b4a8a4, size 0x1a0, virtual false, abstract: false, final false
inline void CompileBSP() ;

/// @brief Method FindZoneAtPoint, addr 0x5b4420c, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::ZoneDef> FindZoneAtPoint(::UnityEngine::Vector3  worldPoint) ;

/// @brief Method GetBSPTree, addr 0x5b4aae0, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SerializableBSPTree* GetBSPTree() ;

/// @brief Method HasCompiledTree, addr 0x5b4445c, size 0x28, virtual false, abstract: false, final false
inline bool HasCompiledTree() ;

/// @brief Method IsPointInAnyZone, addr 0x5b4aa44, size 0x9c, virtual false, abstract: false, final false
inline bool IsPointInAnyZone(::UnityEngine::Vector3  worldPoint) ;

static inline ::GlobalNamespace::ZoneGraphBSP* New_ctor() ;

/// @brief Method Preprocess, addr 0x5b4a754, size 0x150, virtual false, abstract: false, final false
inline void Preprocess() ;

constexpr ::GlobalNamespace::SerializableBSPTree* const& __cordl_internal_get_bspTree() const;

constexpr ::GlobalNamespace::SerializableBSPTree*& __cordl_internal_get_bspTree() ;

constexpr void __cordl_internal_set_bspTree(::GlobalNamespace::SerializableBSPTree*  value) ;

/// @brief Method .ctor, addr 0x5b4aae8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::ZoneGraphBSP> getStaticF__Instance_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_Instance, addr 0x5b4a5b4, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::ZoneGraphBSP> get_Instance() ;

static inline void setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::ZoneGraphBSP>  value) ;

/// [CompilerGenerated]
/// @brief Method set_Instance, addr 0x5b4a5fc, size 0x58, virtual false, abstract: false, final false
static inline void set_Instance(::GlobalNamespace::ZoneGraphBSP*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZoneGraphBSP() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZoneGraphBSP", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZoneGraphBSP(ZoneGraphBSP && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZoneGraphBSP", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZoneGraphBSP(ZoneGraphBSP const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3742};

/// [SerializeField]
/// @brief Field bspTree, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::SerializableBSPTree*  ___bspTree;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ZoneGraphBSP, ___bspTree) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ZoneGraphBSP) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
