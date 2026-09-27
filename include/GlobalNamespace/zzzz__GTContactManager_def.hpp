#pragma once
// IWYU pragma private; include "GlobalNamespace/GTContactManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTContactPoint_def.hpp"
#include "GlobalNamespace/zzzz__SRand_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GTContactManager)
namespace GlobalNamespace {
class GTContactPoint;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GTContactManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GTContactManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTContactManager*, "", "GTContactManager");
// Dependencies GTContactPoint, SRand, UnityEngine.Matrix4x4, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GTContactManager
class CORDL_TYPE GTContactManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field ShaderData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ShaderData, put=setStaticF_ShaderData)) ::ArrayW<::UnityEngine::Matrix4x4>  ShaderData;

/// @brief Field _gContactPoints, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__gContactPoints, put=setStaticF__gContactPoints)) ::ArrayW<::GlobalNamespace::GTContactPoint*>  _gContactPoints;

/// @brief Field gNextFree, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_gNextFree, put=setStaticF_gNextFree)) int32_t  gNextFree;

/// @brief Field gRND, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gRND, put=setStaticF_gRND)) ::GlobalNamespace::SRand  gRND;

/// @brief Method InitContactPoints, addr 0x56746d4, size 0x110, virtual false, abstract: false, final false
static inline ::ArrayW<::GlobalNamespace::GTContactPoint*> InitContactPoints(int32_t  count) ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)1)]
/// @brief Method InitializeOnLoad, addr 0x56746d0, size 0x4, virtual false, abstract: false, final false
static inline void InitializeOnLoad() ;

static inline ::GlobalNamespace::GTContactManager* New_ctor() ;

/// @brief Method ProcessContacts, addr 0x5674964, size 0x128, virtual false, abstract: false, final false
static inline void ProcessContacts() ;

/// @brief Method RaiseContact, addr 0x56747e4, size 0x180, virtual false, abstract: false, final false
static inline void RaiseContact(::UnityEngine::Vector3  point, ::UnityEngine::Vector3  normal) ;

/// @brief Method Transfer, addr 0x5674a8c, size 0x5c, virtual false, abstract: false, final false
static inline void Transfer(::by_ref<::UnityEngine::Matrix4x4>  from, ::by_ref<::UnityEngine::Matrix4x4>  to) ;

/// @brief Method .ctor, addr 0x5674ae8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::UnityEngine::Matrix4x4> getStaticF_ShaderData() ;

static inline ::ArrayW<::GlobalNamespace::GTContactPoint*> getStaticF__gContactPoints() ;

static inline int32_t getStaticF_gNextFree() ;

static inline ::GlobalNamespace::SRand getStaticF_gRND() ;

static inline void setStaticF_ShaderData(::ArrayW<::UnityEngine::Matrix4x4>  value) ;

static inline void setStaticF__gContactPoints(::ArrayW<::GlobalNamespace::GTContactPoint*>  value) ;

static inline void setStaticF_gNextFree(int32_t  value) ;

static inline void setStaticF_gRND(::GlobalNamespace::SRand  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTContactManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTContactManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTContactManager(GTContactManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTContactManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTContactManager(GTContactManager const& ) = delete;

/// @brief Field MAX_CONTACTS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_CONTACTS{static_cast<int32_t>(0x20)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{833};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GTContactManager) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
