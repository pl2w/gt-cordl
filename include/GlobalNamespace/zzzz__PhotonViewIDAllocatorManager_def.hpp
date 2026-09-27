#pragma once
// IWYU pragma private; include "GlobalNamespace/PhotonViewIDAllocatorManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PhotonViewIDAllocatorManager)
// Forward declare root types
namespace GlobalNamespace {
class PhotonViewIDAllocatorManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PhotonViewIDAllocatorManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PhotonViewIDAllocatorManager*, "", "PhotonViewIDAllocatorManager");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PhotonViewIDAllocatorManager
class CORDL_TYPE PhotonViewIDAllocatorManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::PhotonViewIDAllocatorManager* New_ctor() ;

/// @brief Method .ctor, addr 0x5643638, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonViewIDAllocatorManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonViewIDAllocatorManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonViewIDAllocatorManager(PhotonViewIDAllocatorManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonViewIDAllocatorManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonViewIDAllocatorManager(PhotonViewIDAllocatorManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{656};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PhotonViewIDAllocatorManager) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
