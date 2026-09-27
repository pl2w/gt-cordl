#pragma once
// IWYU pragma private; include "Fusion/NetworkTransform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkTRSP_def.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkTransform)
namespace Fusion {
class IAfterAllTicks;
}
namespace Fusion {
class IBeforeAllTicks;
}
namespace Fusion {
class IBeforeCopyPreviousState;
}
namespace Fusion {
class INetworkTRSPTeleport;
}
namespace Fusion {
class IPublicFacingInterface;
}
namespace Fusion {
class NetworkObject;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Fusion {
class NetworkTransform;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkTransform*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkTransform*, "Fusion", "NetworkTransform");
// [DisallowMultipleComponent]
// [NetworkBehaviourWeaved(14)]
// Dependencies Fusion.NetworkTRSP, Fusion.Tick, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkTransform
class CORDL_TYPE NetworkTransform : public ::Fusion::NetworkTRSP {
public:
// Declarations
 __declspec(property(get=get_AutoUpdateAreaOfInterestOverride, put=set_AutoUpdateAreaOfInterestOverride)) bool  AutoUpdateAreaOfInterestOverride;

/// @brief Field DisableSharedModeInterpolation, offset 0xc4, size 0x1 
 __declspec(property(get=__cordl_internal_get_DisableSharedModeInterpolation, put=__cordl_internal_set_DisableSharedModeInterpolation)) bool  DisableSharedModeInterpolation;

/// @brief Field SyncParent, offset 0xb1, size 0x1 
 __declspec(property(get=__cordl_internal_get_SyncParent, put=__cordl_internal_set_SyncParent)) bool  SyncParent;

/// @brief Field SyncScale, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get_SyncScale, put=__cordl_internal_set_SyncScale)) bool  SyncScale;

/// @brief Field _aoiAutoUpdateOriginal, offset 0xc2, size 0x1 
 __declspec(property(get=__cordl_internal_get__aoiAutoUpdateOriginal, put=__cordl_internal_set__aoiAutoUpdateOriginal)) bool  _aoiAutoUpdateOriginal;

/// @brief Field _aoiEnabled, offset 0xc1, size 0x1 
 __declspec(property(get=__cordl_internal_get__aoiEnabled, put=__cordl_internal_set__aoiEnabled)) bool  _aoiEnabled;

/// @brief Field _autoAOIOverride, offset 0xc3, size 0x1 
 __declspec(property(get=__cordl_internal_get__autoAOIOverride, put=__cordl_internal_set__autoAOIOverride)) bool  _autoAOIOverride;

/// @brief Field _initial, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get__initial, put=__cordl_internal_set__initial)) ::Fusion::Tick  _initial;

/// @brief Field _render, offset 0xc5, size 0x1 
 __declspec(property(get=__cordl_internal_get__render, put=__cordl_internal_set__render)) bool  _render;

/// @brief Field _renderParent, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderParent, put=__cordl_internal_set__renderParent)) ::UnityW<::UnityEngine::Transform>  _renderParent;

/// @brief Field _renderPosition, offset 0xc8, size 0xc 
 __declspec(property(get=__cordl_internal_get__renderPosition, put=__cordl_internal_set__renderPosition)) ::UnityEngine::Vector3  _renderPosition;

/// @brief Field _renderRotation, offset 0xd4, size 0x10 
 __declspec(property(get=__cordl_internal_get__renderRotation, put=__cordl_internal_set__renderRotation)) ::UnityEngine::Quaternion  _renderRotation;

/// @brief Field _simulation, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get__simulation, put=__cordl_internal_set__simulation)) bool  _simulation;

/// @brief Field _transform, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__transform, put=__cordl_internal_set__transform)) ::UnityW<::UnityEngine::Transform>  _transform;

/// @brief Convert operator to "::Fusion::IAfterAllTicks"
constexpr operator  ::Fusion::IAfterAllTicks*() noexcept;

/// @brief Convert operator to "::Fusion::IBeforeAllTicks"
constexpr operator  ::Fusion::IBeforeAllTicks*() noexcept;

/// @brief Convert operator to "::Fusion::IBeforeCopyPreviousState"
constexpr operator  ::Fusion::IBeforeCopyPreviousState*() noexcept;

/// @brief Convert operator to "::Fusion::INetworkTRSPTeleport"
constexpr operator  ::Fusion::INetworkTRSPTeleport*() noexcept;

/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr operator  ::Fusion::IPublicFacingInterface*() noexcept;

/// @brief Method Awake, addr 0x5f8b058, size 0x54, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CanInterpolate, addr 0x5f8b65c, size 0x8c, virtual false, abstract: false, final false
inline bool CanInterpolate() ;

/// @brief Method CopyToBuffer, addr 0x5f8b308, size 0x214, virtual false, abstract: false, final false
inline void CopyToBuffer() ;

/// @brief Method CopyToEngine, addr 0x5f8b0ac, size 0xd0, virtual false, abstract: false, final false
inline void CopyToEngine() ;

/// @brief Method Fusion.IAfterAllTicks.AfterAllTicks, addr 0x5f8b90c, size 0x1c, virtual true, abstract: false, final true
inline void Fusion_IAfterAllTicks_AfterAllTicks(bool  resimulation, int32_t  tickCount) ;

/// @brief Method Fusion.IBeforeAllTicks.BeforeAllTicks, addr 0x5f8b6e8, size 0x224, virtual true, abstract: false, final true
inline void Fusion_IBeforeAllTicks_BeforeAllTicks(bool  resimulation, int32_t  tickCount) ;

/// @brief Method Fusion.IBeforeCopyPreviousState.BeforeCopyPreviousState, addr 0x5f8b928, size 0x4, virtual true, abstract: false, final true
inline void Fusion_IBeforeCopyPreviousState_BeforeCopyPreviousState() ;

static inline ::Fusion::NetworkTransform* New_ctor() ;

/// @brief Method Render, addr 0x5f8bcd0, size 0x100, virtual true, abstract: false, final false
inline void Render() ;

/// @brief Method SetAreaOfInterestOverride, addr 0x5f8baa4, size 0x88, virtual true, abstract: false, final false
inline void SetAreaOfInterestOverride(::Fusion::NetworkObject*  obj) ;

/// @brief Method Spawned, addr 0x5f8bbf0, size 0xe0, virtual true, abstract: false, final false
inline void Spawned() ;

/// @brief Method Teleport, addr 0x5f8b92c, size 0x3c, virtual true, abstract: false, final true
inline void Teleport(::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation) ;

constexpr bool const& __cordl_internal_get_DisableSharedModeInterpolation() const;

constexpr bool& __cordl_internal_get_DisableSharedModeInterpolation() ;

constexpr bool const& __cordl_internal_get_SyncParent() const;

constexpr bool& __cordl_internal_get_SyncParent() ;

constexpr bool const& __cordl_internal_get_SyncScale() const;

constexpr bool& __cordl_internal_get_SyncScale() ;

constexpr bool const& __cordl_internal_get__aoiAutoUpdateOriginal() const;

constexpr bool& __cordl_internal_get__aoiAutoUpdateOriginal() ;

constexpr bool const& __cordl_internal_get__aoiEnabled() const;

constexpr bool& __cordl_internal_get__aoiEnabled() ;

constexpr bool const& __cordl_internal_get__autoAOIOverride() const;

constexpr bool& __cordl_internal_get__autoAOIOverride() ;

constexpr ::Fusion::Tick const& __cordl_internal_get__initial() const;

constexpr ::Fusion::Tick& __cordl_internal_get__initial() ;

constexpr bool const& __cordl_internal_get__render() const;

constexpr bool& __cordl_internal_get__render() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__renderParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__renderParent() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__renderPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__renderPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__renderRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__renderRotation() ;

constexpr bool const& __cordl_internal_get__simulation() const;

constexpr bool& __cordl_internal_get__simulation() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform() ;

constexpr void __cordl_internal_set_DisableSharedModeInterpolation(bool  value) ;

constexpr void __cordl_internal_set_SyncParent(bool  value) ;

constexpr void __cordl_internal_set_SyncScale(bool  value) ;

constexpr void __cordl_internal_set__aoiAutoUpdateOriginal(bool  value) ;

constexpr void __cordl_internal_set__aoiEnabled(bool  value) ;

constexpr void __cordl_internal_set__autoAOIOverride(bool  value) ;

constexpr void __cordl_internal_set__initial(::Fusion::Tick  value) ;

constexpr void __cordl_internal_set__render(bool  value) ;

constexpr void __cordl_internal_set__renderParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__renderPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__renderRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__simulation(bool  value) ;

constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5f8c8e8, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AutoUpdateAreaOfInterestOverride, addr 0x5f8b044, size 0x8, virtual false, abstract: false, final false
inline bool get_AutoUpdateAreaOfInterestOverride() ;

/// @brief Convert to "::Fusion::IAfterAllTicks"
constexpr ::Fusion::IAfterAllTicks* i___Fusion__IAfterAllTicks() noexcept;

/// @brief Convert to "::Fusion::IBeforeAllTicks"
constexpr ::Fusion::IBeforeAllTicks* i___Fusion__IBeforeAllTicks() noexcept;

/// @brief Convert to "::Fusion::IBeforeCopyPreviousState"
constexpr ::Fusion::IBeforeCopyPreviousState* i___Fusion__IBeforeCopyPreviousState() noexcept;

/// @brief Convert to "::Fusion::INetworkTRSPTeleport"
constexpr ::Fusion::INetworkTRSPTeleport* i___Fusion__INetworkTRSPTeleport() noexcept;

/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* i___Fusion__IPublicFacingInterface() noexcept;

/// @brief Method set_AutoUpdateAreaOfInterestOverride, addr 0x5f8b04c, size 0xc, virtual false, abstract: false, final false
inline void set_AutoUpdateAreaOfInterestOverride(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkTransform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkTransform", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkTransform(NetworkTransform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkTransform", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkTransform(NetworkTransform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18933};

/// [SerializeField]
/// [InlineHelp]
/// @brief Field SyncScale, offset: 0xb0, size: 0x1, def value: None
 bool  ___SyncScale;

/// [SerializeField]
/// [InlineHelp]
/// @brief Field SyncParent, offset: 0xb1, size: 0x1, def value: None
 bool  ___SyncParent;

/// @brief Field _initial, offset: 0xb4, size: 0x4, def value: None
 ::Fusion::Tick  ____initial;

/// @brief Field _transform, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____transform;

/// @brief Field _simulation, offset: 0xc0, size: 0x1, def value: None
 bool  ____simulation;

/// @brief Field _aoiEnabled, offset: 0xc1, size: 0x1, def value: None
 bool  ____aoiEnabled;

/// @brief Field _aoiAutoUpdateOriginal, offset: 0xc2, size: 0x1, def value: None
 bool  ____aoiAutoUpdateOriginal;

/// [SerializeField]
/// [InlineHelp]
/// @brief Field _autoAOIOverride, offset: 0xc3, size: 0x1, def value: None
 bool  ____autoAOIOverride;

/// [SerializeField]
/// [InlineHelp]
/// @brief Field DisableSharedModeInterpolation, offset: 0xc4, size: 0x1, def value: None
 bool  ___DisableSharedModeInterpolation;

/// @brief Field _render, offset: 0xc5, size: 0x1, def value: None
 bool  ____render;

/// @brief Field _renderPosition, offset: 0xc8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____renderPosition;

/// @brief Field _renderRotation, offset: 0xd4, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____renderRotation;

/// @brief Field _renderParent, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____renderParent;

/// @brief Size padding 0xf8 - 0xf0 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkTransform, ___SyncScale) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkTransform, ___SyncParent) == 0xb1, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkTransform, ____initial) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkTransform, ____transform) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkTransform, ____simulation) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkTransform, ____aoiEnabled) == 0xc1, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkTransform, ____aoiAutoUpdateOriginal) == 0xc2, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkTransform, ____autoAOIOverride) == 0xc3, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkTransform, ___DisableSharedModeInterpolation) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkTransform, ____render) == 0xc5, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkTransform, ____renderPosition) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkTransform, ____renderRotation) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkTransform, ____renderParent) == 0xe8, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkTransform) == 0xf8, "Size mismatch!");

} // namespace end def Fusion
