#pragma once
// IWYU pragma private; include "GlobalNamespace/GameBallPlayerLocal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameBallPlayerLocal_HandData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GameBallPlayerLocal)
namespace GlobalNamespace {
struct GameBallId;
}
namespace GlobalNamespace {
struct GameBallPlayerLocal_HandData;
}
namespace GlobalNamespace {
struct GameBallPlayerLocal_HandGrabState;
}
namespace GlobalNamespace {
struct GameBallPlayerLocal_InputDataMotion;
}
namespace GlobalNamespace {
class GameBallPlayerLocal_InputData;
}
namespace GlobalNamespace {
class GameBallPlayer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GameBallPlayerLocal;
}
namespace GlobalNamespace {
class GameBallPlayerLocal_InputData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameBallPlayerLocal*);
MARK_REF_T(::GlobalNamespace::GameBallPlayerLocal_InputData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameBallPlayerLocal*, "", "GameBallPlayerLocal");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameBallPlayerLocal_InputData*, "", "GameBallPlayerLocal/InputData");
// Dependencies GameBallPlayerLocal::HandData, GameBallPlayerLocal::InputData, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameBallPlayerLocal
class CORDL_TYPE GameBallPlayerLocal : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using HandData = ::GlobalNamespace::GameBallPlayerLocal_HandData;

using HandGrabState = ::GlobalNamespace::GameBallPlayerLocal_HandGrabState;

using InputData = ::GlobalNamespace::GameBallPlayerLocal_InputData;

using InputDataMotion = ::GlobalNamespace::GameBallPlayerLocal_InputDataMotion;

/// @brief Field gamePlayer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gamePlayer, put=__cordl_internal_set_gamePlayer)) ::UnityW<::GlobalNamespace::GameBallPlayer>  gamePlayer;

/// @brief Field hands, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_hands, put=__cordl_internal_set_hands)) ::ArrayW<::GlobalNamespace::GameBallPlayerLocal_HandData>  hands;

/// @brief Field inputData, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputData, put=__cordl_internal_set_inputData)) ::ArrayW<::GlobalNamespace::GameBallPlayerLocal_InputData*>  inputData;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::GameBallPlayerLocal>  instance;

/// @brief Method Awake, addr 0x57a77f0, size 0x1e8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearAllGrabbed, addr 0x57a8ee8, size 0x4c, virtual false, abstract: false, final false
inline void ClearAllGrabbed() ;

/// @brief Method ClearGrabbed, addr 0x57a8e84, size 0x64, virtual false, abstract: false, final false
inline void ClearGrabbed(int32_t  handIndex) ;

/// @brief Method GetHandIndex, addr 0x57a9290, size 0xc, virtual false, abstract: false, final false
static inline int32_t GetHandIndex(bool  leftHand) ;

/// @brief Method GetHandTransform, addr 0x57a8f34, size 0xc4, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetHandTransform(int32_t  handIndex) ;

/// @brief Method GetXRNode, addr 0x57a8028, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::XR::XRNode GetXRNode(int32_t  handIndex) ;

/// @brief Method IsLeftHand, addr 0x57a8ff8, size 0xc, virtual false, abstract: false, final false
static inline bool IsLeftHand(int32_t  handIndex) ;

static inline ::GlobalNamespace::GameBallPlayerLocal* New_ctor() ;

/// @brief Method OnApplicationPause, addr 0x57a7bbc, size 0xa8, virtual false, abstract: false, final false
inline void OnApplicationPause(bool  pause) ;

/// @brief Method OnDestroy, addr 0x57a7c64, size 0xd8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnUpdateInteract, addr 0x57a7d3c, size 0x90, virtual false, abstract: false, final false
inline void OnUpdateInteract() ;

/// @brief Method PlayCatchFx, addr 0x57a929c, size 0xf8, virtual false, abstract: false, final false
inline void PlayCatchFx(bool  isLeftHand) ;

/// @brief Method PlayThrowFx, addr 0x57a9394, size 0x104, virtual false, abstract: false, final false
inline void PlayThrowFx(bool  isLeftHand) ;

/// @brief Method SetGrabbed, addr 0x57a8d2c, size 0x34, virtual false, abstract: false, final false
inline void SetGrabbed(::GlobalNamespace::GameBallId  gameBallId, int32_t  handIndex) ;

/// @brief Method UpdateHand, addr 0x57a7f1c, size 0x10c, virtual false, abstract: false, final false
inline void UpdateHand(int32_t  handIndex) ;

/// @brief Method UpdateHandEmpty, addr 0x57a8164, size 0x54c, virtual false, abstract: false, final false
inline void UpdateHandEmpty(int32_t  handIndex) ;

/// @brief Method UpdateHandHolding, addr 0x57a86b0, size 0x67c, virtual false, abstract: false, final false
inline void UpdateHandHolding(int32_t  handIndex) ;

/// @brief Method UpdateInput, addr 0x57a7dcc, size 0x150, virtual false, abstract: false, final false
inline void UpdateInput(int32_t  handIndex) ;

/// @brief Method UpdateStuckState, addr 0x57a8d60, size 0x124, virtual false, abstract: false, final false
inline void UpdateStuckState() ;

/// @brief Method _OnApplicationQuit, addr 0x57a7a6c, size 0xa0, virtual false, abstract: false, final false
static inline void _OnApplicationQuit() ;

constexpr ::UnityW<::GlobalNamespace::GameBallPlayer> const& __cordl_internal_get_gamePlayer() const;

constexpr ::UnityW<::GlobalNamespace::GameBallPlayer>& __cordl_internal_get_gamePlayer() ;

constexpr ::ArrayW<::GlobalNamespace::GameBallPlayerLocal_HandData> const& __cordl_internal_get_hands() const;

constexpr ::ArrayW<::GlobalNamespace::GameBallPlayerLocal_HandData>& __cordl_internal_get_hands() ;

constexpr ::ArrayW<::GlobalNamespace::GameBallPlayerLocal_InputData*> const& __cordl_internal_get_inputData() const;

constexpr ::ArrayW<::GlobalNamespace::GameBallPlayerLocal_InputData*>& __cordl_internal_get_inputData() ;

constexpr void __cordl_internal_set_gamePlayer(::UnityW<::GlobalNamespace::GameBallPlayer>  value) ;

constexpr void __cordl_internal_set_hands(::ArrayW<::GlobalNamespace::GameBallPlayerLocal_HandData>  value) ;

constexpr void __cordl_internal_set_inputData(::ArrayW<::GlobalNamespace::GameBallPlayerLocal_InputData*>  value) ;

/// @brief Method .ctor, addr 0x57a9498, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::GameBallPlayerLocal> getStaticF_instance() ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::GameBallPlayerLocal>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameBallPlayerLocal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameBallPlayerLocal", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameBallPlayerLocal(GameBallPlayerLocal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameBallPlayerLocal", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameBallPlayerLocal(GameBallPlayerLocal const& ) = delete;

/// @brief Field MAX_INPUT_HISTORY offset 0xffffffff size 0x4
static constexpr int32_t  MAX_INPUT_HISTORY{static_cast<int32_t>(0x20)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1544};

/// @brief Field gamePlayer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameBallPlayer>  ___gamePlayer;

/// @brief Field hands, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GameBallPlayerLocal_HandData>  ___hands;

/// @brief Field inputData, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GameBallPlayerLocal_InputData*>  ___inputData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameBallPlayerLocal, ___gamePlayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameBallPlayerLocal, ___hands) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameBallPlayerLocal, ___inputData) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameBallPlayerLocal) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameBallPlayerLocal/InputData
class CORDL_TYPE GameBallPlayerLocal_InputData : public ::System::Object {
public:
// Declarations
/// @brief Field inputMotionHistory, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputMotionHistory, put=__cordl_internal_set_inputMotionHistory)) ::System::Collections::Generic::List_1<::GlobalNamespace::GameBallPlayerLocal_InputDataMotion>*  inputMotionHistory;

/// @brief Field maxInputs, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxInputs, put=__cordl_internal_set_maxInputs)) int32_t  maxInputs;

/// @brief Method AddInput, addr 0x57a8038, size 0x12c, virtual false, abstract: false, final false
inline void AddInput(::GlobalNamespace::GameBallPlayerLocal_InputDataMotion  data) ;

/// @brief Method GetAvgVel, addr 0x57a9110, size 0x180, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetAvgVel(float_t  ignoreRecent, float_t  window) ;

/// @brief Method GetMaxSpeed, addr 0x57a9004, size 0x10c, virtual false, abstract: false, final false
inline float_t GetMaxSpeed(float_t  ignoreRecent, float_t  window) ;

static inline ::GlobalNamespace::GameBallPlayerLocal_InputData* New_ctor(int32_t  maxInputs) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameBallPlayerLocal_InputDataMotion>* const& __cordl_internal_get_inputMotionHistory() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameBallPlayerLocal_InputDataMotion>*& __cordl_internal_get_inputMotionHistory() ;

constexpr int32_t const& __cordl_internal_get_maxInputs() const;

constexpr int32_t& __cordl_internal_get_maxInputs() ;

constexpr void __cordl_internal_set_inputMotionHistory(::System::Collections::Generic::List_1<::GlobalNamespace::GameBallPlayerLocal_InputDataMotion>*  value) ;

constexpr void __cordl_internal_set_maxInputs(int32_t  value) ;

/// @brief Method .ctor, addr 0x57a79d8, size 0x94, virtual false, abstract: false, final false
inline void _ctor(int32_t  maxInputs) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameBallPlayerLocal_InputData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameBallPlayerLocal_InputData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameBallPlayerLocal_InputData(GameBallPlayerLocal_InputData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameBallPlayerLocal_InputData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameBallPlayerLocal_InputData(GameBallPlayerLocal_InputData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1543};

/// @brief Field maxInputs, offset: 0x10, size: 0x4, def value: None
 int32_t  ___maxInputs;

/// @brief Field inputMotionHistory, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GameBallPlayerLocal_InputDataMotion>*  ___inputMotionHistory;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameBallPlayerLocal_InputData, ___maxInputs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameBallPlayerLocal_InputData, ___inputMotionHistory) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameBallPlayerLocal_InputData) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
