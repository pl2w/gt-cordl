#pragma once
// IWYU pragma private; include "UnityEngine/Tilemaps/Tilemap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GridLayout_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Tilemap)
namespace GlobalNamespace {
struct Tilemap_SyncTileCallbackSettings;
}
namespace GlobalNamespace {
struct Tilemap_SyncTile;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
struct Vector3Int;
}
// Forward declare root types
namespace UnityEngine::Tilemaps {
class Tilemap;
}
// Write type traits
MARK_REF_T(::UnityEngine::Tilemaps::Tilemap*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Tilemaps::Tilemap*, "UnityEngine.Tilemaps", "Tilemap");
// [NativeHeader("Modules/Tilemap/Public/TilemapTile.h")]
// [RequireComponent(typeof(UnityEngine.Transform))]
// [NativeHeader("Modules/Grid/Public/GridMarshalling.h")]
// [NativeHeader("Modules/Grid/Public/Grid.h")]
// [NativeHeader("Runtime/Graphics/SpriteFrame.h")]
// [NativeHeader("Modules/Tilemap/Public/TilemapMarshalling.h")]
// [NativeType(Header = "Modules/Tilemap/Public/Tilemap.h")]
// Dependencies UnityEngine.GridLayout
namespace UnityEngine::Tilemaps {
// Is value type: false
// CS Name: UnityEngine.Tilemaps.Tilemap
class CORDL_TYPE Tilemap : public ::UnityEngine::GridLayout {
public:
// Declarations
using SyncTile = ::GlobalNamespace::Tilemap_SyncTile;

using SyncTileCallbackSettings = ::GlobalNamespace::Tilemap_SyncTileCallbackSettings;

 __declspec(property(get=get_bufferSyncTile)) bool  bufferSyncTile;

/// @brief Field loopEndedForTileAnimation, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_loopEndedForTileAnimation, put=setStaticF_loopEndedForTileAnimation)) ::System::Action_2<::UnityW<::UnityEngine::Tilemaps::Tilemap>,::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>*  loopEndedForTileAnimation;

/// @brief Field m_BufferSyncTile, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_BufferSyncTile, put=__cordl_internal_set_m_BufferSyncTile)) bool  m_BufferSyncTile;

/// @brief Field tilemapPositionsChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tilemapPositionsChanged, put=setStaticF_tilemapPositionsChanged)) ::System::Action_2<::UnityW<::UnityEngine::Tilemaps::Tilemap>,::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>*  tilemapPositionsChanged;

/// @brief Field tilemapTileChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tilemapTileChanged, put=setStaticF_tilemapTileChanged)) ::System::Action_2<::UnityW<::UnityEngine::Tilemaps::Tilemap>,::ArrayW<::GlobalNamespace::Tilemap_SyncTile>>*  tilemapTileChanged;

/// [RequiredByNativeCode]
/// @brief Method DoLoopEndedForTileAnimationCallback, addr 0xb6fd7e8, size 0x4, virtual false, abstract: false, final false
inline void DoLoopEndedForTileAnimationCallback(int32_t  count, ::System::IntPtr  positionsIntPtr) ;

/// [RequiredByNativeCode]
/// @brief Method DoPositionsChangedCallback, addr 0xb6fd890, size 0x4, virtual false, abstract: false, final false
inline void DoPositionsChangedCallback(int32_t  count, ::System::IntPtr  positionsIntPtr) ;

/// [RequiredByNativeCode]
/// @brief Method DoSyncTileCallback, addr 0xb6fd88c, size 0x4, virtual false, abstract: false, final false
inline void DoSyncTileCallback(::ArrayW<::GlobalNamespace::Tilemap_SyncTile>  syncTiles) ;

/// [RequiredByNativeCode]
/// @brief Method GetLoopEndedForTileAnimationCallbackSettings, addr 0xb6fd790, size 0x58, virtual false, abstract: false, final false
inline void GetLoopEndedForTileAnimationCallbackSettings(::by_ref<bool>  hasEndLoopForTileAnimationCallback) ;

/// [RequiredByNativeCode]
/// @brief Method GetSyncTileCallbackSettings, addr 0xb6fd7ec, size 0xa0, virtual false, abstract: false, final false
inline void GetSyncTileCallbackSettings(::by_ref<::GlobalNamespace::Tilemap_SyncTileCallbackSettings>  settings) ;

/// @brief Method HandleLoopEndedForTileAnimationCallback, addr 0xb6fd100, size 0xc0, virtual false, abstract: false, final false
inline void HandleLoopEndedForTileAnimationCallback(int32_t  count, ::System::IntPtr  positionsIntPtr) ;

/// @brief Method HandlePositionsChangedCallback, addr 0xb6fd514, size 0xc0, virtual false, abstract: false, final false
inline void HandlePositionsChangedCallback(int32_t  count, ::System::IntPtr  positionsIntPtr) ;

/// @brief Method HandleSyncTileCallback, addr 0xb6fd384, size 0x74, virtual false, abstract: false, final false
inline void HandleSyncTileCallback(::ArrayW<::GlobalNamespace::Tilemap_SyncTile>  syncTiles) ;

/// @brief Method HasLoopEndedForTileAnimationCallback, addr 0xb6fd0b0, size 0x50, virtual false, abstract: false, final false
static inline bool HasLoopEndedForTileAnimationCallback() ;

/// @brief Method HasPositionsChangedCallback, addr 0xb6fd334, size 0x50, virtual false, abstract: false, final false
static inline bool HasPositionsChangedCallback() ;

/// @brief Method HasSyncTileCallback, addr 0xb6fd2e4, size 0x50, virtual false, abstract: false, final false
static inline bool HasSyncTileCallback() ;

/// [NativeMethod(Name = "RefreshTileAsset")]
/// @brief Method RefreshTile, addr 0xb6fc628, size 0x90, virtual false, abstract: false, final false
inline void RefreshTile(::UnityEngine::Vector3Int  position) ;

/// @brief Method RefreshTile_Injected, addr 0xb6fd6f8, size 0x44, virtual false, abstract: false, final false
static inline void RefreshTile_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3Int>  position) ;

/// [FreeFunction(Name = "TilemapBindings::RefreshTileAssetsNative", HasExplicitThis = true)]
/// @brief Method RefreshTilesNative, addr 0xb6fca00, size 0x90, virtual false, abstract: false, final false
inline void RefreshTilesNative(void*  positions, int32_t  count) ;

/// @brief Method RefreshTilesNative_Injected, addr 0xb6fd73c, size 0x54, virtual false, abstract: false, final false
static inline void RefreshTilesNative_Injected(::System::IntPtr  _unity_self, void*  positions, int32_t  count) ;

/// @brief Method SendLoopEndedForTileAnimationCallback, addr 0xb6fd1c0, size 0x124, virtual false, abstract: false, final false
inline void SendLoopEndedForTileAnimationCallback(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>  positions) ;

/// @brief Method SendTilemapPositionsChangedCallback, addr 0xb6fd5d4, size 0x124, virtual false, abstract: false, final false
inline void SendTilemapPositionsChangedCallback(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>  positions) ;

/// @brief Method SendTilemapTileChangedCallback, addr 0xb6fd3f8, size 0x11c, virtual false, abstract: false, final false
inline void SendTilemapTileChangedCallback(::ArrayW<::GlobalNamespace::Tilemap_SyncTile>  syncTiles) ;

constexpr bool const& __cordl_internal_get_m_BufferSyncTile() const;

constexpr bool& __cordl_internal_get_m_BufferSyncTile() ;

constexpr void __cordl_internal_set_m_BufferSyncTile(bool  value) ;

static inline ::System::Action_2<::UnityW<::UnityEngine::Tilemaps::Tilemap>,::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>* getStaticF_loopEndedForTileAnimation() ;

static inline ::System::Action_2<::UnityW<::UnityEngine::Tilemaps::Tilemap>,::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>* getStaticF_tilemapPositionsChanged() ;

static inline ::System::Action_2<::UnityW<::UnityEngine::Tilemaps::Tilemap>,::ArrayW<::GlobalNamespace::Tilemap_SyncTile>>* getStaticF_tilemapTileChanged() ;

/// @brief Method get_bufferSyncTile, addr 0xb6fd0a8, size 0x8, virtual false, abstract: false, final false
inline bool get_bufferSyncTile() ;

static inline void setStaticF_loopEndedForTileAnimation(::System::Action_2<::UnityW<::UnityEngine::Tilemaps::Tilemap>,::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>*  value) ;

static inline void setStaticF_tilemapPositionsChanged(::System::Action_2<::UnityW<::UnityEngine::Tilemaps::Tilemap>,::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>>*  value) ;

static inline void setStaticF_tilemapTileChanged(::System::Action_2<::UnityW<::UnityEngine::Tilemaps::Tilemap>,::ArrayW<::GlobalNamespace::Tilemap_SyncTile>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Tilemap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Tilemap", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Tilemap(Tilemap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Tilemap", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Tilemap(Tilemap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32594};

/// @brief Field m_BufferSyncTile, offset: 0x18, size: 0x1, def value: None
 bool  ___m_BufferSyncTile;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Tilemaps::Tilemap, ___m_BufferSyncTile) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Tilemaps::Tilemap) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Tilemaps
