#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticRefRegistry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CosmeticRefTarget_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(CosmeticRefRegistry)
namespace GlobalNamespace {
struct CosmeticRefID;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticRefRegistry;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CosmeticRefRegistry*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticRefRegistry*, "", "CosmeticRefRegistry");
// Dependencies CosmeticRefTarget, UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticRefRegistry
class CORDL_TYPE CosmeticRefRegistry : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field builtInRefTargets, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_builtInRefTargets, put=__cordl_internal_set_builtInRefTargets)) ::ArrayW<::UnityW<::GlobalNamespace::CosmeticRefTarget>>  builtInRefTargets;

/// @brief Field partsTable, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_partsTable, put=__cordl_internal_set_partsTable)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  partsTable;

/// @brief Method Awake, addr 0x5648840, size 0x80, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Get, addr 0x56488f4, size 0x30, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> Get(::GlobalNamespace::CosmeticRefID  partID) ;

static inline ::GlobalNamespace::CosmeticRefRegistry* New_ctor() ;

/// @brief Method Register, addr 0x56488c0, size 0x34, virtual false, abstract: false, final false
inline void Register(::GlobalNamespace::CosmeticRefID  partID, ::UnityEngine::GameObject*  part) ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::CosmeticRefTarget>> const& __cordl_internal_get_builtInRefTargets() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::CosmeticRefTarget>>& __cordl_internal_get_builtInRefTargets() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_partsTable() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_partsTable() ;

constexpr void __cordl_internal_set_builtInRefTargets(::ArrayW<::UnityW<::GlobalNamespace::CosmeticRefTarget>>  value) ;

constexpr void __cordl_internal_set_partsTable(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

/// @brief Method .ctor, addr 0x5648924, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticRefRegistry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticRefRegistry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticRefRegistry(CosmeticRefRegistry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticRefRegistry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticRefRegistry(CosmeticRefRegistry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{696};

/// @brief Field partsTable, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___partsTable;

/// [SerializeField]
/// @brief Field builtInRefTargets, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::CosmeticRefTarget>>  ___builtInRefTargets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticRefRegistry, ___partsTable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticRefRegistry, ___builtInRefTargets) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticRefRegistry) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
