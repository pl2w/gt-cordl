#pragma once
// IWYU pragma private; include "GlobalNamespace/MB3_MeshBaker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MB3_MeshBakerCommon_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MB3_MeshBaker)
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSingle;
}
namespace DigitalOpus::MB::Core {
class MB3_MeshCombiner;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MB3_MeshBaker;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MB3_MeshBaker*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB3_MeshBaker*, "", "MB3_MeshBaker");
// Dependencies MB3_MeshBakerCommon
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB3_MeshBaker
class CORDL_TYPE MB3_MeshBaker : public ::GlobalNamespace::MB3_MeshBakerCommon {
public:
// Declarations
/// @brief Field _meshCombiner, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__meshCombiner, put=__cordl_internal_set__meshCombiner)) ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  _meshCombiner;

 __declspec(property(get=get_meshCombiner)) ::DigitalOpus::MB::Core::MB3_MeshCombiner*  meshCombiner;

/// @brief Method AddDeleteGameObjects, addr 0x9d76240, size 0xb8, virtual true, abstract: false, final false
inline bool AddDeleteGameObjects(::ArrayW<::UnityEngine::GameObject*>  gos, ::ArrayW<::UnityEngine::GameObject*>  deleteGOs, bool  disableRendererInSource) ;

/// @brief Method AddDeleteGameObjectsByID, addr 0x9d76350, size 0xb8, virtual true, abstract: false, final false
inline bool AddDeleteGameObjectsByID(::ArrayW<::UnityEngine::GameObject*>  gos, ::ArrayW<int32_t>  deleteGOinstanceIDs, bool  disableRendererInSource) ;

/// @brief Method ApplyShowHide, addr 0x9d76220, size 0x20, virtual true, abstract: false, final false
inline void ApplyShowHide() ;

/// @brief Method BuildSceneMeshObject, addr 0x9d761e8, size 0x20, virtual false, abstract: false, final false
inline void BuildSceneMeshObject() ;

static inline ::GlobalNamespace::MB3_MeshBaker* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9d76408, size 0x50, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method PrintTimings, addr 0x9d75900, size 0x7e0, virtual false, abstract: false, final false
inline void PrintTimings() ;

/// @brief Method ShowHide, addr 0x9d76208, size 0x18, virtual true, abstract: false, final false
inline bool ShowHide(::ArrayW<::UnityEngine::GameObject*>  gos, ::ArrayW<::UnityEngine::GameObject*>  deleteGOs) ;

constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* const& __cordl_internal_get__meshCombiner() const;

constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*& __cordl_internal_get__meshCombiner() ;

constexpr void __cordl_internal_set__meshCombiner(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  value) ;

/// @brief Method .ctor, addr 0x9d7646c, size 0x74, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_meshCombiner, addr 0x9d761e0, size 0x8, virtual true, abstract: false, final false
inline ::DigitalOpus::MB::Core::MB3_MeshCombiner* get_meshCombiner() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshBaker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshBaker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_MeshBaker(MB3_MeshBaker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshBaker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MeshBaker(MB3_MeshBaker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22569};

/// [SerializeField]
/// @brief Field _meshCombiner, offset: 0x60, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*  ____meshCombiner;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB3_MeshBaker, ____meshCombiner) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB3_MeshBaker) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
