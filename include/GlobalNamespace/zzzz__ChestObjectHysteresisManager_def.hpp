#pragma once
// IWYU pragma private; include "GlobalNamespace/ChestObjectHysteresisManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MonoBehaviourTick_def.hpp"
CORDL_MODULE_EXPORT(ChestObjectHysteresisManager)
namespace GlobalNamespace {
class ChestObjectHysteresis;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ChestObjectHysteresisManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ChestObjectHysteresisManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ChestObjectHysteresisManager*, "", "ChestObjectHysteresisManager");
// [DefaultExecutionOrder(2000)]
// Dependencies MonoBehaviourTick
namespace GlobalNamespace {
// Is value type: false
// CS Name: ChestObjectHysteresisManager
class CORDL_TYPE ChestObjectHysteresisManager : public ::GlobalNamespace::MonoBehaviourTick {
public:
// Declarations
/// @brief Field allChests, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_allChests, put=setStaticF_allChests)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ChestObjectHysteresis>>*  allChests;

/// @brief Field hasInstance, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasInstance, put=setStaticF_hasInstance)) bool  hasInstance;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::ChestObjectHysteresisManager>  instance;

/// @brief Method Awake, addr 0x5754e88, size 0xf4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateManager, addr 0x5755060, size 0xc0, virtual false, abstract: false, final false
static inline void CreateManager() ;

static inline ::GlobalNamespace::ChestObjectHysteresisManager* New_ctor() ;

/// @brief Method RegisterCH, addr 0x5754ab0, size 0x154, virtual false, abstract: false, final false
static inline void RegisterCH(::GlobalNamespace::ChestObjectHysteresis*  cOH) ;

/// @brief Method SetInstance, addr 0x5754f7c, size 0xe4, virtual false, abstract: false, final false
static inline void SetInstance(::GlobalNamespace::ChestObjectHysteresisManager*  manager) ;

/// @brief Method Tick, addr 0x5755120, size 0xcc, virtual true, abstract: false, final false
inline void Tick() ;

/// @brief Method UnregisterCH, addr 0x5754c58, size 0x100, virtual false, abstract: false, final false
static inline void UnregisterCH(::GlobalNamespace::ChestObjectHysteresis*  cOH) ;

/// @brief Method .ctor, addr 0x57551ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ChestObjectHysteresis>>* getStaticF_allChests() ;

static inline bool getStaticF_hasInstance() ;

static inline ::UnityW<::GlobalNamespace::ChestObjectHysteresisManager> getStaticF_instance() ;

static inline void setStaticF_allChests(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ChestObjectHysteresis>>*  value) ;

static inline void setStaticF_hasInstance(bool  value) ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::ChestObjectHysteresisManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChestObjectHysteresisManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChestObjectHysteresisManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ChestObjectHysteresisManager(ChestObjectHysteresisManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChestObjectHysteresisManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChestObjectHysteresisManager(ChestObjectHysteresisManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1316};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ChestObjectHysteresisManager) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
