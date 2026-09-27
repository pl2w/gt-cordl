#pragma once
// IWYU pragma private; include "GlobalNamespace/WorldShareableItemManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(WorldShareableItemManager)
namespace GlobalNamespace {
class WorldShareableItem;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class WorldShareableItemManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::WorldShareableItemManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WorldShareableItemManager*, "", "WorldShareableItemManager");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: WorldShareableItemManager
class CORDL_TYPE WorldShareableItemManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field hasInstance, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasInstance, put=setStaticF_hasInstance)) bool  hasInstance;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::WorldShareableItemManager>  instance;

/// @brief Field worldShareableItems, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_worldShareableItems, put=setStaticF_worldShareableItems)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::WorldShareableItem>>*  worldShareableItems;

/// @brief Method Awake, addr 0x574015c, size 0xf4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateManager, addr 0x57405b4, size 0xf8, virtual false, abstract: false, final false
static inline void CreateManager() ;

static inline ::GlobalNamespace::WorldShareableItemManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x574036c, size 0xd0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Register, addr 0x573eaac, size 0x18c, virtual false, abstract: false, final false
static inline void Register(::GlobalNamespace::WorldShareableItem*  worldShareableItem) ;

/// @brief Method SetInstance, addr 0x5740250, size 0x11c, virtual false, abstract: false, final false
static inline void SetInstance(::GlobalNamespace::WorldShareableItemManager*  manager) ;

/// @brief Method Unregister, addr 0x573ee14, size 0x138, virtual false, abstract: false, final false
static inline void Unregister(::GlobalNamespace::WorldShareableItem*  worldShareableItem) ;

/// @brief Method Update, addr 0x574043c, size 0x178, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method .ctor, addr 0x57406ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_hasInstance() ;

static inline ::UnityW<::GlobalNamespace::WorldShareableItemManager> getStaticF_instance() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::WorldShareableItem>>* getStaticF_worldShareableItems() ;

static inline void setStaticF_hasInstance(bool  value) ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::WorldShareableItemManager>  value) ;

static inline void setStaticF_worldShareableItems(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::WorldShareableItem>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WorldShareableItemManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WorldShareableItemManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WorldShareableItemManager(WorldShareableItemManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WorldShareableItemManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WorldShareableItemManager(WorldShareableItemManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1243};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::WorldShareableItemManager) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
