#pragma once
// IWYU pragma private; include "Photon/Pun/DefaultPool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DefaultPool)
namespace Photon::Pun {
class IPunPrefabPool;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
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
class DefaultPool;
}
// Write type traits
MARK_REF_T(::Photon::Pun::DefaultPool*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::DefaultPool*, "Photon.Pun", "DefaultPool");
// Dependencies System.Object
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.DefaultPool
class CORDL_TYPE DefaultPool : public ::System::Object {
public:
// Declarations
/// @brief Field ResourceCache, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ResourceCache, put=__cordl_internal_set_ResourceCache)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::GameObject>>*  ResourceCache;

/// @brief Convert operator to "::Photon::Pun::IPunPrefabPool"
constexpr operator  ::Photon::Pun::IPunPrefabPool*() noexcept;

/// @brief Method Destroy, addr 0xa72cad0, size 0x58, virtual true, abstract: false, final true
inline void Destroy(::UnityEngine::GameObject*  gameObject) ;

static inline ::Photon::Pun::DefaultPool* New_ctor() ;

/// @brief Method Photon.Pun.IPunPrefabPool.Instantiate, addr 0xa72c878, size 0x258, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::GameObject> Photon_Pun_IPunPrefabPool_Instantiate(::StringW  prefabId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_ResourceCache() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_ResourceCache() ;

constexpr void __cordl_internal_set_ResourceCache(::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::GameObject>>*  value) ;

/// @brief Method .ctor, addr 0xa7190b0, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Photon::Pun::IPunPrefabPool"
constexpr ::Photon::Pun::IPunPrefabPool* i___Photon__Pun__IPunPrefabPool() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DefaultPool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DefaultPool", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultPool(DefaultPool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultPool", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultPool(DefaultPool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29719};

/// @brief Field ResourceCache, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::GameObject>>*  ___ResourceCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::DefaultPool, ___ResourceCache) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::DefaultPool) == 0x18, "Size mismatch!");

} // namespace end def Photon::Pun
