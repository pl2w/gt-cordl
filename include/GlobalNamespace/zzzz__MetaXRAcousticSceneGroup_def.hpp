#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAcousticSceneGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MetaXRAcousticSceneGroup)
// Forward declare root types
namespace GlobalNamespace {
class MetaXRAcousticSceneGroup;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MetaXRAcousticSceneGroup*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAcousticSceneGroup*, "", "MetaXRAcousticSceneGroup");
// [CreateAssetMenu(menuName = "MetaXRAudio/Acoustic Scene Group")]
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAcousticSceneGroup
class CORDL_TYPE MetaXRAcousticSceneGroup : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field sceneGuids, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_sceneGuids, put=__cordl_internal_set_sceneGuids)) ::ArrayW<::StringW>  sceneGuids;

static inline ::GlobalNamespace::MetaXRAcousticSceneGroup* New_ctor() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_sceneGuids() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_sceneGuids() ;

constexpr void __cordl_internal_set_sceneGuids(::ArrayW<::StringW>  value) ;

/// @brief Method .ctor, addr 0x9ebaaec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAcousticSceneGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticSceneGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaXRAcousticSceneGroup(MetaXRAcousticSceneGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticSceneGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAcousticSceneGroup(MetaXRAcousticSceneGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29943};

/// [SerializeField]
/// @brief Field sceneGuids, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___sceneGuids;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetaXRAcousticSceneGroup, ___sceneGuids) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetaXRAcousticSceneGroup) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
