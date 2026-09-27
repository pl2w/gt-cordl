#pragma once
// IWYU pragma private; include "Photon/Pun/IPunPrefabPool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IPunPrefabPool)
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Photon::Pun {
class IPunPrefabPool;
}
// Write type traits
MARK_REF_T(::Photon::Pun::IPunPrefabPool*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::IPunPrefabPool*, "Photon.Pun", "IPunPrefabPool");
// Dependencies 
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.IPunPrefabPool
class CORDL_TYPE IPunPrefabPool {
public:
// Declarations
/// @brief Method Destroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Destroy(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::GameObject> Instantiate(::StringW  prefabId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

// Ctor Parameters [CppParam { name: "", ty: "IPunPrefabPool", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPunPrefabPool(IPunPrefabPool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29699};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Pun
