#pragma once
// IWYU pragma private; include "GorillaTag/MonkeFX/MonkeFXSettingsSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/zzzz__GTDirectAssetRef_1_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(MonkeFXSettingsSO)
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GorillaTag::MonkeFX {
class MonkeFXSettingsSO;
}
// Write type traits
MARK_REF_T(::GorillaTag::MonkeFX::MonkeFXSettingsSO*);
DEFINE_IL2CPP_CLASS(::GorillaTag::MonkeFX::MonkeFXSettingsSO*, "GorillaTag.MonkeFX", "MonkeFXSettingsSO");
// [CreateAssetMenu(fileName = "MeshGenerator", menuName = "ScriptableObjects/MeshGenerator", order = 1)]
// Dependencies GorillaTag.GTDirectAssetRef`1<T>, UnityEngine.ScriptableObject
namespace GorillaTag::MonkeFX {
// Is value type: false
// CS Name: GorillaTag.MonkeFX.MonkeFXSettingsSO
class CORDL_TYPE MonkeFXSettingsSO : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field combinedMesh, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_combinedMesh, put=__cordl_internal_set_combinedMesh)) ::UnityW<::UnityEngine::Mesh>  combinedMesh;

/// @brief Field sourceMeshes, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sourceMeshes, put=__cordl_internal_set_sourceMeshes)) ::ArrayW<::GorillaTag::GTDirectAssetRef_1<::UnityW<::UnityEngine::Mesh>>>  sourceMeshes;

/// @brief Method Awake, addr 0x5d43da4, size 0x54, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GorillaTag::MonkeFX::MonkeFXSettingsSO* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_combinedMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_combinedMesh() ;

constexpr ::ArrayW<::GorillaTag::GTDirectAssetRef_1<::UnityW<::UnityEngine::Mesh>>> const& __cordl_internal_get_sourceMeshes() const;

constexpr ::ArrayW<::GorillaTag::GTDirectAssetRef_1<::UnityW<::UnityEngine::Mesh>>>& __cordl_internal_get_sourceMeshes() ;

constexpr void __cordl_internal_set_combinedMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_sourceMeshes(::ArrayW<::GorillaTag::GTDirectAssetRef_1<::UnityW<::UnityEngine::Mesh>>>  value) ;

/// @brief Method .ctor, addr 0x5d43df8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeFXSettingsSO() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeFXSettingsSO", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeFXSettingsSO(MonkeFXSettingsSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeFXSettingsSO", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeFXSettingsSO(MonkeFXSettingsSO const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4714};

/// @brief Field sourceMeshes, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GorillaTag::GTDirectAssetRef_1<::UnityW<::UnityEngine::Mesh>>>  ___sourceMeshes;

/// [HideInInspector]
/// @brief Field combinedMesh, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___combinedMesh;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::MonkeFX::MonkeFXSettingsSO, ___sourceMeshes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::MonkeFX::MonkeFXSettingsSO, ___combinedMesh) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::MonkeFX::MonkeFXSettingsSO) == 0x28, "Size mismatch!");

} // namespace end def GorillaTag::MonkeFX
