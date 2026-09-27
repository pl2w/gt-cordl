#pragma once
// IWYU pragma private; include "GlobalNamespace/MB3_MultiMeshBaker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MB3_MeshBakerCommon_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MB3_MultiMeshBaker)
namespace DigitalOpus::MB::Core {
class MB3_MeshCombiner;
}
namespace DigitalOpus::MB::Core {
class MB3_MultiMeshCombiner;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MB3_MultiMeshBaker;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MB3_MultiMeshBaker*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB3_MultiMeshBaker*, "", "MB3_MultiMeshBaker");
// Dependencies MB3_MeshBakerCommon
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB3_MultiMeshBaker
class CORDL_TYPE MB3_MultiMeshBaker : public ::GlobalNamespace::MB3_MeshBakerCommon {
public:
// Declarations
/// @brief Field _meshCombiner, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__meshCombiner, put=__cordl_internal_set__meshCombiner)) ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*  _meshCombiner;

 __declspec(property(get=get_meshCombiner)) ::DigitalOpus::MB::Core::MB3_MeshCombiner*  meshCombiner;

/// @brief Method AddDeleteGameObjects, addr 0x9d7a2cc, size 0x1a8, virtual true, abstract: false, final false
inline bool AddDeleteGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos, ::ArrayW<::UnityEngine::GameObject*>  deleteGOs, bool  disableRendererInSource) ;

/// @brief Method AddDeleteGameObjectsByID, addr 0x9d7a474, size 0x1a8, virtual true, abstract: false, final false
inline bool AddDeleteGameObjectsByID(::ArrayW<::UnityEngine::GameObject*>  gos, ::ArrayW<int32_t>  deleteGOs, bool  disableRendererInSource) ;

static inline ::GlobalNamespace::MB3_MultiMeshBaker* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9d7a61c, size 0x20, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method PrintTimings, addr 0x9d79b70, size 0x754, virtual false, abstract: false, final false
inline void PrintTimings() ;

constexpr ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner* const& __cordl_internal_get__meshCombiner() const;

constexpr ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*& __cordl_internal_get__meshCombiner() ;

constexpr void __cordl_internal_set__meshCombiner(::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*  value) ;

/// @brief Method .ctor, addr 0x9d7a63c, size 0x74, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_meshCombiner, addr 0x9d7a2c4, size 0x8, virtual true, abstract: false, final false
inline ::DigitalOpus::MB::Core::MB3_MeshCombiner* get_meshCombiner() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_MultiMeshBaker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_MultiMeshBaker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_MultiMeshBaker(MB3_MultiMeshBaker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MultiMeshBaker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MultiMeshBaker(MB3_MultiMeshBaker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22578};

/// [SerializeField]
/// @brief Field _meshCombiner, offset: 0x60, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_MultiMeshCombiner*  ____meshCombiner;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB3_MultiMeshBaker, ____meshCombiner) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB3_MultiMeshBaker) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
