#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Fusion/AvatarBehaviourFusion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarBehaviourFusion)
namespace Fusion {
template<typename T>
struct NetworkArray_1;
}
namespace Meta::XR::MultiplayerBlocks::Shared {
class IAvatarBehaviour;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Fusion {
class AvatarBehaviourFusion;
}
// Write type traits
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Fusion::AvatarBehaviourFusion*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Fusion::AvatarBehaviourFusion*, "Meta.XR.MultiplayerBlocks.Fusion", "AvatarBehaviourFusion");
// [NetworkBehaviourWeaved(904)]
// Dependencies Fusion.NetworkBehaviour
namespace Meta::XR::MultiplayerBlocks::Fusion {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Fusion.AvatarBehaviourFusion
class CORDL_TYPE AvatarBehaviourFusion : public ::Fusion::NetworkBehaviour {
public:
// Declarations
/// [Networked]
/// [Capacity(900)]
/// [OnChangedRender("OnAvatarDataStreamChanged")]
/// [NetworkedWeaved(4, 900)]
/// @brief [NetworkedWeavedArray(900, 1, typeof(Fusion.ElementReaderWriterByte))]
 __declspec(property(get=get_AvatarDataStream)) ::Fusion::NetworkArray_1<uint8_t>  AvatarDataStream;

/// [Networked]
/// @brief [NetworkedWeaved(3, 1)]
 __declspec(property(get=get_AvatarDataStreamLength, put=set_AvatarDataStreamLength)) int32_t  AvatarDataStreamLength;

/// [Networked]
/// [OnChangedRender("OnAvatarIdChanged")]
/// @brief [NetworkedWeaved(2, 1)]
 __declspec(property(get=get_LocalAvatarIndex, put=set_LocalAvatarIndex)) int32_t  LocalAvatarIndex;

/// [Networked]
/// [OnChangedRender("OnAvatarIdChanged")]
/// @brief [NetworkedWeaved(0, 2)]
 __declspec(property(get=get_OculusId, put=set_OculusId)) uint64_t  OculusId;

/// @brief Field _AvatarDataStream, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__AvatarDataStream, put=__cordl_internal_set__AvatarDataStream)) ::ArrayW<uint8_t>  _AvatarDataStream;

/// @brief Field _AvatarDataStreamLength, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get__AvatarDataStreamLength, put=__cordl_internal_set__AvatarDataStreamLength)) int32_t  _AvatarDataStreamLength;

/// @brief Field _LocalAvatarIndex, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get__LocalAvatarIndex, put=__cordl_internal_set__LocalAvatarIndex)) int32_t  _LocalAvatarIndex;

/// @brief Field _OculusId, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__OculusId, put=__cordl_internal_set__OculusId)) uint64_t  _OculusId;

/// @brief Field _buffer, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__buffer, put=__cordl_internal_set__buffer)) ::ArrayW<uint8_t>  _buffer;

/// @brief Field _cameraRig, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraRig, put=__cordl_internal_set__cameraRig)) ::UnityW<::UnityEngine::Transform>  _cameraRig;

/// @brief Convert operator to "::Meta::XR::MultiplayerBlocks::Shared::IAvatarBehaviour"
constexpr operator  ::Meta::XR::MultiplayerBlocks::Shared::IAvatarBehaviour*() noexcept;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x9f5d5ec, size 0xe0, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x9f5d6cc, size 0xbc, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method FixedUpdateNetwork, addr 0x9f5d2c4, size 0x1ac, virtual true, abstract: false, final false
inline void FixedUpdateNetwork() ;

/// @brief Method Meta.XR.MultiplayerBlocks.Shared.IAvatarBehaviour.get_HasInputAuthority, addr 0x9f5d5cc, size 0x20, virtual true, abstract: false, final true
inline bool Meta_XR_MultiplayerBlocks_Shared_IAvatarBehaviour_get_HasInputAuthority() ;

static inline ::Meta::XR::MultiplayerBlocks::Fusion::AvatarBehaviourFusion* New_ctor() ;

/// @brief Method OnAvatarDataStreamChanged, addr 0x9f5d2c0, size 0x4, virtual false, abstract: false, final false
inline void OnAvatarDataStreamChanged() ;

/// @brief Method OnAvatarIdChanged, addr 0x9f5d2bc, size 0x4, virtual false, abstract: false, final false
inline void OnAvatarIdChanged() ;

/// @brief Method ReceiveStreamData, addr 0x9f5d470, size 0x154, virtual true, abstract: false, final true
inline void ReceiveStreamData(::ArrayW<uint8_t>  bytes) ;

/// @brief Method Spawned, addr 0x9f5d15c, size 0x160, virtual true, abstract: false, final false
inline void Spawned() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__AvatarDataStream() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__AvatarDataStream() ;

constexpr int32_t const& __cordl_internal_get__AvatarDataStreamLength() const;

constexpr int32_t& __cordl_internal_get__AvatarDataStreamLength() ;

constexpr int32_t const& __cordl_internal_get__LocalAvatarIndex() const;

constexpr int32_t& __cordl_internal_get__LocalAvatarIndex() ;

constexpr uint64_t const& __cordl_internal_get__OculusId() const;

constexpr uint64_t& __cordl_internal_get__OculusId() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__buffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__buffer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__cameraRig() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__cameraRig() ;

constexpr void __cordl_internal_set__AvatarDataStream(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__AvatarDataStreamLength(int32_t  value) ;

constexpr void __cordl_internal_set__LocalAvatarIndex(int32_t  value) ;

constexpr void __cordl_internal_set__OculusId(uint64_t  value) ;

constexpr void __cordl_internal_set__buffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__cameraRig(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x9f5d5c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AvatarDataStream, addr 0x9f5d038, size 0x124, virtual false, abstract: false, final false
inline ::Fusion::NetworkArray_1<uint8_t> get_AvatarDataStream() ;

/// @brief Method get_AvatarDataStreamLength, addr 0x9f5cf80, size 0x5c, virtual false, abstract: false, final false
inline int32_t get_AvatarDataStreamLength() ;

/// @brief Method get_LocalAvatarIndex, addr 0x9f5cec8, size 0x5c, virtual true, abstract: false, final true
inline int32_t get_LocalAvatarIndex() ;

/// @brief Method get_OculusId, addr 0x9f5ce10, size 0x5c, virtual true, abstract: false, final true
inline uint64_t get_OculusId() ;

/// @brief Convert to "::Meta::XR::MultiplayerBlocks::Shared::IAvatarBehaviour"
constexpr ::Meta::XR::MultiplayerBlocks::Shared::IAvatarBehaviour* i___Meta__XR__MultiplayerBlocks__Shared__IAvatarBehaviour() noexcept;

/// @brief Method set_AvatarDataStreamLength, addr 0x9f5cfdc, size 0x5c, virtual false, abstract: false, final false
inline void set_AvatarDataStreamLength(int32_t  value) ;

/// @brief Method set_LocalAvatarIndex, addr 0x9f5cf24, size 0x5c, virtual false, abstract: false, final false
inline void set_LocalAvatarIndex(int32_t  value) ;

/// @brief Method set_OculusId, addr 0x9f5ce6c, size 0x5c, virtual false, abstract: false, final false
inline void set_OculusId(uint64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AvatarBehaviourFusion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AvatarBehaviourFusion", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AvatarBehaviourFusion(AvatarBehaviourFusion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AvatarBehaviourFusion", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AvatarBehaviourFusion(AvatarBehaviourFusion const& ) = delete;

/// @brief Field AvatarDataStreamMaxCapacity offset 0xffffffff size 0x4
static constexpr int32_t  AvatarDataStreamMaxCapacity{static_cast<int32_t>(0x384)};

/// @brief Field LERP_TIME offset 0xffffffff size 0x4
static constexpr float_t  LERP_TIME{static_cast<float_t>(0.5f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31174};

/// @brief Field _cameraRig, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____cameraRig;

/// @brief Field _buffer, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____buffer;

/// [WeaverGenerated]
/// [SerializeField]
/// [DefaultForProperty("OculusId", 0, 2)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _OculusId, offset: 0x90, size: 0x8, def value: None
 uint64_t  ____OculusId;

/// [WeaverGenerated]
/// [SerializeField]
/// [DefaultForProperty("LocalAvatarIndex", 2, 1)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _LocalAvatarIndex, offset: 0x98, size: 0x4, def value: None
 int32_t  ____LocalAvatarIndex;

/// [WeaverGenerated]
/// [DefaultForProperty("AvatarDataStreamLength", 3, 1)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _AvatarDataStreamLength, offset: 0x9c, size: 0x4, def value: None
 int32_t  ____AvatarDataStreamLength;

/// [WeaverGenerated]
/// [DefaultForProperty("AvatarDataStream", 4, 900)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _AvatarDataStream, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____AvatarDataStream;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::AvatarBehaviourFusion, ____cameraRig) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::AvatarBehaviourFusion, ____buffer) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::AvatarBehaviourFusion, ____OculusId) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::AvatarBehaviourFusion, ____LocalAvatarIndex) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::AvatarBehaviourFusion, ____AvatarDataStreamLength) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Fusion::AvatarBehaviourFusion, ____AvatarDataStream) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Fusion::AvatarBehaviourFusion) == 0xa8, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Fusion
