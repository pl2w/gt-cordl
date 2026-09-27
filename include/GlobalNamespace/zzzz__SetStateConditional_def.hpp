#pragma once
// IWYU pragma private; include "GlobalNamespace/SetStateConditional.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AnimStateHash_def.hpp"
#include "GlobalNamespace/zzzz__TimeSince_def.hpp"
#include "UnityEngine/zzzz__StateMachineBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SetStateConditional)
namespace UnityEngine {
struct AnimatorStateInfo;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace GlobalNamespace {
class SetStateConditional;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SetStateConditional*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SetStateConditional*, "", "SetStateConditional");
// Dependencies AnimStateHash, TimeSince, UnityEngine.StateMachineBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SetStateConditional
class CORDL_TYPE SetStateConditional : public ::UnityEngine::StateMachineBehaviour {
public:
// Declarations
/// @brief Field _didSetup, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__didSetup, put=__cordl_internal_set__didSetup)) bool  _didSetup;

/// @brief Field _setToID, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__setToID, put=__cordl_internal_set__setToID)) ::GlobalNamespace::AnimStateHash  _setToID;

/// @brief Field _sinceEnter, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__sinceEnter, put=__cordl_internal_set__sinceEnter)) ::GlobalNamespace::TimeSince  _sinceEnter;

/// @brief Field delay, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_delay, put=__cordl_internal_set_delay)) float_t  delay;

/// @brief Field parentAnimator, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentAnimator, put=__cordl_internal_set_parentAnimator)) ::UnityW<::UnityEngine::Animator>  parentAnimator;

/// @brief Field setToState, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_setToState, put=__cordl_internal_set_setToState)) ::StringW  setToState;

/// @brief Method CanSetState, addr 0x579f6ec, size 0x8, virtual true, abstract: false, final false
inline bool CanSetState(::UnityEngine::Animator*  animator, ::UnityEngine::AnimatorStateInfo  stateInfo, int32_t  layerIndex) ;

static inline ::GlobalNamespace::SetStateConditional* New_ctor() ;

/// @brief Method OnStateEnter, addr 0x579f5bc, size 0x8c, virtual true, abstract: false, final false
inline void OnStateEnter(::UnityEngine::Animator*  animator, ::UnityEngine::AnimatorStateInfo  stateInfo, int32_t  layerIndex) ;

/// @brief Method OnStateUpdate, addr 0x579f648, size 0xa0, virtual true, abstract: false, final false
inline void OnStateUpdate(::UnityEngine::Animator*  animator, ::UnityEngine::AnimatorStateInfo  stateInfo, int32_t  layerIndex) ;

/// @brief Method OnValidate, addr 0x579f59c, size 0x20, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Setup, addr 0x579f6e8, size 0x4, virtual true, abstract: false, final false
inline void Setup(::UnityEngine::Animator*  animator, ::UnityEngine::AnimatorStateInfo  stateInfo, int32_t  layerIndex) ;

constexpr bool const& __cordl_internal_get__didSetup() const;

constexpr bool& __cordl_internal_get__didSetup() ;

constexpr ::GlobalNamespace::AnimStateHash const& __cordl_internal_get__setToID() const;

constexpr ::GlobalNamespace::AnimStateHash& __cordl_internal_get__setToID() ;

constexpr ::GlobalNamespace::TimeSince const& __cordl_internal_get__sinceEnter() const;

constexpr ::GlobalNamespace::TimeSince& __cordl_internal_get__sinceEnter() ;

constexpr float_t const& __cordl_internal_get_delay() const;

constexpr float_t& __cordl_internal_get_delay() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_parentAnimator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_parentAnimator() ;

constexpr ::StringW const& __cordl_internal_get_setToState() const;

constexpr ::StringW& __cordl_internal_get_setToState() ;

constexpr void __cordl_internal_set__didSetup(bool  value) ;

constexpr void __cordl_internal_set__setToID(::GlobalNamespace::AnimStateHash  value) ;

constexpr void __cordl_internal_set__sinceEnter(::GlobalNamespace::TimeSince  value) ;

constexpr void __cordl_internal_set_delay(float_t  value) ;

constexpr void __cordl_internal_set_parentAnimator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_setToState(::StringW  value) ;

/// @brief Method .ctor, addr 0x579f6f4, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetStateConditional() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetStateConditional", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SetStateConditional(SetStateConditional && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetStateConditional", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetStateConditional(SetStateConditional const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1522};

/// @brief Field parentAnimator, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___parentAnimator;

/// @brief Field setToState, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___setToState;

/// [SerializeField]
/// @brief Field _setToID, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::AnimStateHash  ____setToID;

/// @brief Field delay, offset: 0x2c, size: 0x4, def value: None
 float_t  ___delay;

/// @brief Field _sinceEnter, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::TimeSince  ____sinceEnter;

/// @brief Field _didSetup, offset: 0x38, size: 0x1, def value: None
 bool  ____didSetup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SetStateConditional, ___parentAnimator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetStateConditional, ___setToState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetStateConditional, ____setToID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetStateConditional, ___delay) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetStateConditional, ____sinceEnter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetStateConditional, ____didSetup) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SetStateConditional) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
