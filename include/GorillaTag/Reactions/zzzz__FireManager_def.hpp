#pragma once
// IWYU pragma private; include "GorillaTag/Reactions/FireManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FireManager)
namespace GlobalNamespace {
class ITickSystemPost;
}
namespace GlobalNamespace {
class SinglePool;
}
namespace GorillaTag::Reactions {
class FireInstance;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag::Reactions {
class FireManager;
}
// Write type traits
MARK_REF_T(::GorillaTag::Reactions::FireManager*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Reactions::FireManager*, "GorillaTag.Reactions", "FireManager");
// Dependencies System.Object
namespace GorillaTag::Reactions {
// Is value type: false
// CS Name: GorillaTag.Reactions.FireManager
class CORDL_TYPE FireManager : public ::System::Object {
public:
// Declarations
 __declspec(property(get=ITickSystemPost_get_PostTickRunning, put=ITickSystemPost_set_PostTickRunning)) bool  ITickSystemPost_PostTickRunning;

/// @brief Field <ITickSystemPost.PostTickRunning>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField, put=__cordl_internal_set__ITickSystemPost_PostTickRunning_k__BackingField)) bool  _ITickSystemPost_PostTickRunning_k__BackingField;

/// @brief Field _activeAudioSources, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__activeAudioSources, put=setStaticF__activeAudioSources)) int32_t  _activeAudioSources;

/// @brief Field _fireSpatialGrid, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__fireSpatialGrid, put=setStaticF__fireSpatialGrid)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int,int32_t>*  _fireSpatialGrid;

/// @brief Field <hasInstance>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__hasInstance_k__BackingField, put=setStaticF__hasInstance_k__BackingField)) bool  _hasInstance_k__BackingField;

/// @brief Field <instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance_k__BackingField, put=setStaticF__instance_k__BackingField)) ::GorillaTag::Reactions::FireManager*  _instance_k__BackingField;

/// @brief Field _kEnabledReactions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__kEnabledReactions, put=setStaticF__kEnabledReactions)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Reactions::FireInstance>>*  _kEnabledReactions;

/// @brief Field _kFiresToDespawn, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__kFiresToDespawn, put=setStaticF__kFiresToDespawn)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Reactions::FireInstance>>*  _kFiresToDespawn;

/// @brief Field _kGObjInstId_to_fire, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__kGObjInstId_to_fire, put=setStaticF__kGObjInstId_to_fire)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GorillaTag::Reactions::FireInstance>>*  _kGObjInstId_to_fire;

/// @brief Field shaderProp_EmissionColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_shaderProp_EmissionColor, put=setStaticF_shaderProp_EmissionColor)) int32_t  shaderProp_EmissionColor;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemPost"
constexpr operator  ::GlobalNamespace::ITickSystemPost*() noexcept;

/// @brief Method Extinguish, addr 0x5d3ee70, size 0x1ec, virtual false, abstract: false, final false
static inline void Extinguish(::UnityEngine::GameObject*  gObj, float_t  extinguishAmount) ;

/// @brief Method GetSpatialGridPos, addr 0x5d3e408, size 0x54, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3Int GetSpatialGridPos(::UnityEngine::Vector3  pos) ;

/// @brief Method ITickSystemPost.PostTick, addr 0x5d3f06c, size 0x83c, virtual true, abstract: false, final true
inline void ITickSystemPost_PostTick() ;

/// [CompilerGenerated]
/// @brief Method ITickSystemPost.get_PostTickRunning, addr 0x5d3f05c, size 0x8, virtual true, abstract: false, final true
inline bool ITickSystemPost_get_PostTickRunning() ;

/// [CompilerGenerated]
/// @brief Method ITickSystemPost.set_PostTickRunning, addr 0x5d3f064, size 0x8, virtual true, abstract: false, final true
inline void ITickSystemPost_set_PostTickRunning(bool  value) ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)0)]
/// @brief Method Initialize, addr 0x5d3daac, size 0x1f4, virtual false, abstract: false, final false
static inline void Initialize() ;

static inline ::GorillaTag::Reactions::FireManager* New_ctor() ;

/// @brief Method OnDisable, addr 0x5d3ec44, size 0x13c, virtual false, abstract: false, final false
static inline void OnDisable(::GorillaTag::Reactions::FireInstance*  f) ;

/// @brief Method OnEnable, addr 0x5d3e828, size 0x41c, virtual false, abstract: false, final false
static inline void OnEnable(::GorillaTag::Reactions::FireInstance*  f) ;

/// @brief Method OnTriggerEnter, addr 0x5d3ed80, size 0xf0, virtual false, abstract: false, final false
static inline void OnTriggerEnter(::GorillaTag::Reactions::FireInstance*  f, ::UnityEngine::Collider*  other) ;

/// @brief Method Register, addr 0x5d3dca8, size 0x678, virtual false, abstract: false, final false
static inline void Register(::GorillaTag::Reactions::FireInstance*  f) ;

/// @brief Method ResetFireValues, addr 0x5d3e45c, size 0x40, virtual false, abstract: false, final false
static inline void ResetFireValues(::GorillaTag::Reactions::FireInstance*  f) ;

/// @brief Method SpawnFire, addr 0x5d3e49c, size 0xc8, virtual false, abstract: false, final false
static inline void SpawnFire(::GlobalNamespace::SinglePool*  pool, ::UnityEngine::Vector3  pos, ::UnityEngine::Vector3  normal, float_t  scale) ;

/// @brief Method SpawnFire, addr 0x5d3e564, size 0x2c4, virtual false, abstract: false, final false
static inline void SpawnFire(::GlobalNamespace::SinglePool*  pool, ::UnityEngine::Vector3  pos, ::UnityEngine::Vector3  normal, float_t  scale, ::System::Nullable_1<::UnityEngine::Quaternion>  rotationOverride) ;

/// @brief Method Unregister, addr 0x5d3e320, size 0xe8, virtual false, abstract: false, final false
static inline void Unregister(::GorillaTag::Reactions::FireInstance*  reactable) ;

constexpr bool const& __cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField() ;

constexpr void __cordl_internal_set__ITickSystemPost_PostTickRunning_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x5d3dca0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__activeAudioSources() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int,int32_t>* getStaticF__fireSpatialGrid() ;

static inline bool getStaticF__hasInstance_k__BackingField() ;

static inline ::GorillaTag::Reactions::FireManager* getStaticF__instance_k__BackingField() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Reactions::FireInstance>>* getStaticF__kEnabledReactions() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Reactions::FireInstance>>* getStaticF__kFiresToDespawn() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GorillaTag::Reactions::FireInstance>>* getStaticF__kGObjInstId_to_fire() ;

static inline int32_t getStaticF_shaderProp_EmissionColor() ;

/// [CompilerGenerated]
/// @brief Method get_hasInstance, addr 0x5d3d9f4, size 0x58, virtual false, abstract: false, final false
static inline bool get_hasInstance() ;

/// [CompilerGenerated]
/// @brief Method get_instance, addr 0x5d3d934, size 0x58, virtual false, abstract: false, final false
static inline ::GorillaTag::Reactions::FireManager* get_instance() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemPost"
constexpr ::GlobalNamespace::ITickSystemPost* i___GlobalNamespace__ITickSystemPost() noexcept;

static inline void setStaticF__activeAudioSources(int32_t  value) ;

static inline void setStaticF__fireSpatialGrid(::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector3Int,int32_t>*  value) ;

static inline void setStaticF__hasInstance_k__BackingField(bool  value) ;

static inline void setStaticF__instance_k__BackingField(::GorillaTag::Reactions::FireManager*  value) ;

static inline void setStaticF__kEnabledReactions(::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Reactions::FireInstance>>*  value) ;

static inline void setStaticF__kFiresToDespawn(::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Reactions::FireInstance>>*  value) ;

static inline void setStaticF__kGObjInstId_to_fire(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GorillaTag::Reactions::FireInstance>>*  value) ;

static inline void setStaticF_shaderProp_EmissionColor(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_hasInstance, addr 0x5d3da4c, size 0x60, virtual false, abstract: false, final false
static inline void set_hasInstance(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_instance, addr 0x5d3d98c, size 0x68, virtual false, abstract: false, final false
static inline void set_instance(::GorillaTag::Reactions::FireManager*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FireManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FireManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FireManager(FireManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FireManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FireManager(FireManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4700};

/// @brief Field _kMaxAudioSources offset 0xffffffff size 0x4
static constexpr int32_t  _kMaxAudioSources{static_cast<int32_t>(0x8)};

/// @brief Field _kSpatialGridCellSize offset 0xffffffff size 0x4
static constexpr float_t  _kSpatialGridCellSize{static_cast<float_t>(0.2f)};

/// [CompilerGenerated]
/// @brief Field <ITickSystemPost.PostTickRunning>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____ITickSystemPost_PostTickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Reactions::FireManager, ____ITickSystemPost_PostTickRunning_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Reactions::FireManager) == 0x18, "Size mismatch!");

} // namespace end def GorillaTag::Reactions
