#pragma once
// IWYU pragma private; include "Fusion/NetworkTRSP.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NetworkTRSP)
namespace Fusion {
struct NetworkBehaviourId;
}
namespace Fusion {
class NetworkObject;
}
namespace Fusion {
struct NetworkTRSPData;
}
namespace Fusion {
struct Tick;
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
class NetworkTRSP;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkTRSP*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkTRSP*, "Fusion", "NetworkTRSP");
// [DisallowMultipleComponent]
// [NetworkBehaviourWeaved(14)]
// Dependencies Fusion.NetworkBehaviour, Fusion.PlayerRef, Fusion.Tick, System.Nullable`1<T>, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkTRSP
class CORDL_TYPE NetworkTRSP : public ::Fusion::NetworkBehaviour {
public:
// Declarations
 __declspec(property(get=get_Data)) ::Fusion::NetworkTRSPData  Data;

 __declspec(property(get=get_IsMainTRSP, put=set_IsMainTRSP)) bool  IsMainTRSP;

 __declspec(property(get=get_State)) ::Fusion::NetworkTRSPData  State;

/// @brief Field <IsMainTRSP>k__BackingField, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsMainTRSP_k__BackingField, put=__cordl_internal_set__IsMainTRSP_k__BackingField)) bool  _IsMainTRSP_k__BackingField;

/// @brief Field _previousRenderStateAuth, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__previousRenderStateAuth, put=__cordl_internal_set__previousRenderStateAuth)) ::Fusion::PlayerRef  _previousRenderStateAuth;

/// @brief Field _stateAuthorityChangeErrorCorrectionDelta, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__stateAuthorityChangeErrorCorrectionDelta, put=__cordl_internal_set__stateAuthorityChangeErrorCorrectionDelta)) float_t  _stateAuthorityChangeErrorCorrectionDelta;

/// @brief Field _stateAuthorityChangePositionError, offset 0x88, size 0x10 
 __declspec(property(get=__cordl_internal_get__stateAuthorityChangePositionError, put=__cordl_internal_set__stateAuthorityChangePositionError)) ::System::Nullable_1<::UnityEngine::Vector3>  _stateAuthorityChangePositionError;

/// @brief Field _stateAuthorityChangeRotationError, offset 0x98, size 0x10 
 __declspec(property(get=__cordl_internal_get__stateAuthorityChangeRotationError, put=__cordl_internal_set__stateAuthorityChangeRotationError)) ::System::Nullable_1<::UnityEngine::Quaternion>  _stateAuthorityChangeRotationError;

/// @brief Field reenabledTick, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_reenabledTick, put=__cordl_internal_set_reenabledTick)) ::Fusion::Tick  reenabledTick;

static inline ::Fusion::NetworkTRSP* New_ctor() ;

/// @brief Method OnEnable, addr 0x5f8c9cc, size 0x12c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Render, addr 0x5f8bdd0, size 0xb18, virtual false, abstract: false, final false
static inline void Render(::Fusion::NetworkTRSP*  behaviour, ::UnityEngine::Transform*  transform, bool  syncScale, bool  syncParent, bool  local, ::by_ref<::Fusion::Tick>  initial) ;

/// @brief Method ResolveAOIOverride, addr 0x5f8b51c, size 0x138, virtual false, abstract: false, final false
static inline void ResolveAOIOverride(::Fusion::NetworkTRSP*  behaviour, ::UnityEngine::Transform*  parent) ;

/// @brief Method SetAreaOfInterestOverride, addr 0x5f8bb2c, size 0xc4, virtual true, abstract: false, final false
inline void SetAreaOfInterestOverride(::Fusion::NetworkObject*  obj) ;

/// @brief Method SetParentTransform, addr 0x5f8b1c8, size 0x140, virtual false, abstract: false, final false
static inline void SetParentTransform(::Fusion::NetworkTRSP*  behaviour, ::UnityEngine::Transform*  transform, ::Fusion::NetworkBehaviourId  parentId) ;

/// @brief Method Teleport, addr 0x5f8b968, size 0x13c, virtual false, abstract: false, final false
static inline void Teleport(::Fusion::NetworkTRSP*  behaviour, ::UnityEngine::Transform*  transform, ::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation) ;

constexpr bool const& __cordl_internal_get__IsMainTRSP_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsMainTRSP_k__BackingField() ;

constexpr ::Fusion::PlayerRef const& __cordl_internal_get__previousRenderStateAuth() const;

constexpr ::Fusion::PlayerRef& __cordl_internal_get__previousRenderStateAuth() ;

constexpr float_t const& __cordl_internal_get__stateAuthorityChangeErrorCorrectionDelta() const;

constexpr float_t& __cordl_internal_get__stateAuthorityChangeErrorCorrectionDelta() ;

constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& __cordl_internal_get__stateAuthorityChangePositionError() const;

constexpr ::System::Nullable_1<::UnityEngine::Vector3>& __cordl_internal_get__stateAuthorityChangePositionError() ;

constexpr ::System::Nullable_1<::UnityEngine::Quaternion> const& __cordl_internal_get__stateAuthorityChangeRotationError() const;

constexpr ::System::Nullable_1<::UnityEngine::Quaternion>& __cordl_internal_get__stateAuthorityChangeRotationError() ;

constexpr ::Fusion::Tick const& __cordl_internal_get_reenabledTick() const;

constexpr ::Fusion::Tick& __cordl_internal_get_reenabledTick() ;

constexpr void __cordl_internal_set__IsMainTRSP_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__previousRenderStateAuth(::Fusion::PlayerRef  value) ;

constexpr void __cordl_internal_set__stateAuthorityChangeErrorCorrectionDelta(float_t  value) ;

constexpr void __cordl_internal_set__stateAuthorityChangePositionError(::System::Nullable_1<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set__stateAuthorityChangeRotationError(::System::Nullable_1<::UnityEngine::Quaternion>  value) ;

constexpr void __cordl_internal_set_reenabledTick(::Fusion::Tick  value) ;

/// @brief Method .ctor, addr 0x5f8c90c, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Data, addr 0x5f8c938, size 0x94, virtual false, abstract: false, final false
inline ::Fusion::NetworkTRSPData get_Data() ;

/// [CompilerGenerated]
/// @brief Method get_IsMainTRSP, addr 0x5f8c928, size 0x8, virtual false, abstract: false, final false
inline bool get_IsMainTRSP() ;

/// @brief Method get_State, addr 0x5f8b17c, size 0x4c, virtual false, abstract: false, final false
inline ::by_ref<::Fusion::NetworkTRSPData> get_State() ;

/// [CompilerGenerated]
/// @brief Method set_IsMainTRSP, addr 0x5f8c930, size 0x8, virtual false, abstract: false, final false
inline void set_IsMainTRSP(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkTRSP() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkTRSP", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkTRSP(NetworkTRSP && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkTRSP", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkTRSP(NetworkTRSP const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18935};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <IsMainTRSP>k__BackingField, offset: 0x80, size: 0x1, def value: None
 bool  ____IsMainTRSP_k__BackingField;

/// @brief Field _previousRenderStateAuth, offset: 0x84, size: 0x4, def value: None
 ::Fusion::PlayerRef  ____previousRenderStateAuth;

/// @brief Field _stateAuthorityChangePositionError, offset: 0x88, size: 0x10, def value: None
 ::System::Nullable_1<::UnityEngine::Vector3>  ____stateAuthorityChangePositionError;

/// @brief Field _stateAuthorityChangeRotationError, offset: 0x98, size: 0x10, def value: None
 ::System::Nullable_1<::UnityEngine::Quaternion>  ____stateAuthorityChangeRotationError;

/// [SerializeField]
/// [InlineHelp]
/// @brief Field _stateAuthorityChangeErrorCorrectionDelta, offset: 0xa8, size: 0x4, def value: None
 float_t  ____stateAuthorityChangeErrorCorrectionDelta;

/// @brief Field reenabledTick, offset: 0xac, size: 0x4, def value: None
 ::Fusion::Tick  ___reenabledTick;

/// @brief Size padding 0xb8 - 0xb0 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkTRSP, ____IsMainTRSP_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkTRSP, ____previousRenderStateAuth) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkTRSP, ____stateAuthorityChangePositionError) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkTRSP, ____stateAuthorityChangeRotationError) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkTRSP, ____stateAuthorityChangeErrorCorrectionDelta) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkTRSP, ___reenabledTick) == 0xac, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkTRSP) == 0xb8, "Size mismatch!");

} // namespace end def Fusion
