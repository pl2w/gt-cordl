#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TrackAssetExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TrackAssetExtensions)
namespace UnityEngine::Timeline {
class GroupTrack;
}
namespace UnityEngine::Timeline {
class TrackAsset;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TrackAssetExtensions;
}
// Write type traits
MARK_REF_T(::UnityEngine::Timeline::TrackAssetExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Timeline::TrackAssetExtensions*, "UnityEngine.Timeline", "TrackAssetExtensions");
// [Extension]
// Dependencies System.Object
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.TrackAssetExtensions
class CORDL_TYPE TrackAssetExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method ComputeBlendsFromOverlaps, addr 0xb3bbb30, size 0x8c, virtual false, abstract: false, final false
static inline void ComputeBlendsFromOverlaps(::UnityEngine::Timeline::TrackAsset*  asset, bool  force) ;

/// [Extension]
/// @brief Method GetGroup, addr 0xb3ca540, size 0xc4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Timeline::GroupTrack> GetGroup(::UnityEngine::Timeline::TrackAsset*  asset) ;

/// [Extension]
/// @brief Method SetGroup, addr 0xb3ca604, size 0x330, virtual false, abstract: false, final false
static inline void SetGroup(::UnityEngine::Timeline::TrackAsset*  asset, ::UnityEngine::Timeline::GroupTrack*  group) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrackAssetExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrackAssetExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackAssetExtensions(TrackAssetExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackAssetExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackAssetExtensions(TrackAssetExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28748};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Timeline::TrackAssetExtensions) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
