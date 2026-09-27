#pragma once
// IWYU pragma private; include "Photon/Pun/IPunPrefabPoolVerify.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IPunPrefabPoolVerify)
namespace Photon::Pun {
class IPunPrefabPool;
}
namespace Photon::Realtime {
class Player;
}
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
class IPunPrefabPoolVerify;
}
// Write type traits
MARK_REF_T(::Photon::Pun::IPunPrefabPoolVerify*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::IPunPrefabPoolVerify*, "Photon.Pun", "IPunPrefabPoolVerify");
// Dependencies 
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.IPunPrefabPoolVerify
class CORDL_TYPE IPunPrefabPoolVerify {
public:
// Declarations
/// @brief Convert operator to "::Photon::Pun::IPunPrefabPool"
constexpr operator  ::Photon::Pun::IPunPrefabPool*() noexcept;

/// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::UnityEngine::GameObject> Instantiate(::UnityEngine::GameObject*  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method VerifyInstantiation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool VerifyInstantiation(::Photon::Realtime::Player*  sender, ::StringW  prefabId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::ArrayW<int32_t>  viewIds, ::by_ref<::UnityEngine::GameObject*>  prefab) ;

/// @brief Convert to "::Photon::Pun::IPunPrefabPool"
constexpr ::Photon::Pun::IPunPrefabPool* i___Photon__Pun__IPunPrefabPool() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IPunPrefabPoolVerify", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPunPrefabPoolVerify(IPunPrefabPoolVerify const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29700};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Pun
