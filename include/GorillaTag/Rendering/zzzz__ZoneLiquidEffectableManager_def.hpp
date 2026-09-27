#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/ZoneLiquidEffectableManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ZoneLiquidEffectableManager)
namespace GorillaTag::Rendering {
class ZoneLiquidEffectable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GorillaTag::Rendering {
class ZoneLiquidEffectableManager;
}
// Write type traits
MARK_REF_T(::GorillaTag::Rendering::ZoneLiquidEffectableManager*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Rendering::ZoneLiquidEffectableManager*, "GorillaTag.Rendering", "ZoneLiquidEffectableManager");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag::Rendering {
// Is value type: false
// CS Name: GorillaTag.Rendering.ZoneLiquidEffectableManager
class CORDL_TYPE ZoneLiquidEffectableManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field <hasInstance>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__hasInstance_k__BackingField, put=setStaticF__hasInstance_k__BackingField)) bool  _hasInstance_k__BackingField;

/// @brief Field <instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance_k__BackingField, put=setStaticF__instance_k__BackingField)) ::UnityW<::GorillaTag::Rendering::ZoneLiquidEffectableManager>  _instance_k__BackingField;

/// @brief Field zoneLiquidEffectables, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_zoneLiquidEffectables, put=__cordl_internal_set_zoneLiquidEffectables)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Rendering::ZoneLiquidEffectable>>*  zoneLiquidEffectables;

/// @brief Method Awake, addr 0x5d5a5dc, size 0x10c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateManager, addr 0x5d5acb4, size 0x90, virtual false, abstract: false, final false
static inline void CreateManager() ;

/// @brief Method LateUpdate, addr 0x5d5a900, size 0x3b4, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GorillaTag::Rendering::ZoneLiquidEffectableManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5d5a7fc, size 0x104, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Register, addr 0x5d5ad44, size 0x330, virtual false, abstract: false, final false
static inline void Register(::GorillaTag::Rendering::ZoneLiquidEffectable*  effect) ;

/// @brief Method SetInstance, addr 0x5d5a6e8, size 0x114, virtual false, abstract: false, final false
static inline void SetInstance(::GorillaTag::Rendering::ZoneLiquidEffectableManager*  manager) ;

/// @brief Method Unregister, addr 0x5d5b074, size 0x8c, virtual false, abstract: false, final false
static inline void Unregister(::GorillaTag::Rendering::ZoneLiquidEffectable*  effect) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Rendering::ZoneLiquidEffectable>>* const& __cordl_internal_get_zoneLiquidEffectables() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Rendering::ZoneLiquidEffectable>>*& __cordl_internal_get_zoneLiquidEffectables() ;

constexpr void __cordl_internal_set_zoneLiquidEffectables(::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Rendering::ZoneLiquidEffectable>>*  value) ;

/// @brief Method .ctor, addr 0x5d5b100, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF__hasInstance_k__BackingField() ;

static inline ::UnityW<::GorillaTag::Rendering::ZoneLiquidEffectableManager> getStaticF__instance_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_hasInstance, addr 0x5d5a544, size 0x48, virtual false, abstract: false, final false
static inline bool get_hasInstance() ;

/// [CompilerGenerated]
/// @brief Method get_instance, addr 0x5d5a4a4, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::GorillaTag::Rendering::ZoneLiquidEffectableManager> get_instance() ;

static inline void setStaticF__hasInstance_k__BackingField(bool  value) ;

static inline void setStaticF__instance_k__BackingField(::UnityW<::GorillaTag::Rendering::ZoneLiquidEffectableManager>  value) ;

/// [CompilerGenerated]
/// @brief Method set_hasInstance, addr 0x5d5a58c, size 0x50, virtual false, abstract: false, final false
static inline void set_hasInstance(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_instance, addr 0x5d5a4ec, size 0x58, virtual false, abstract: false, final false
static inline void set_instance(::GorillaTag::Rendering::ZoneLiquidEffectableManager*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZoneLiquidEffectableManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZoneLiquidEffectableManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZoneLiquidEffectableManager(ZoneLiquidEffectableManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZoneLiquidEffectableManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZoneLiquidEffectableManager(ZoneLiquidEffectableManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4812};

/// @brief Field zoneLiquidEffectables, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Rendering::ZoneLiquidEffectable>>*  ___zoneLiquidEffectables;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Rendering::ZoneLiquidEffectableManager, ___zoneLiquidEffectables) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Rendering::ZoneLiquidEffectableManager) == 0x28, "Size mismatch!");

} // namespace end def GorillaTag::Rendering
