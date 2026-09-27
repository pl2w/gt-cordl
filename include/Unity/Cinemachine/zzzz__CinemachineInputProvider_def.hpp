#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineInputProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineInputProvider)
namespace Unity::Cinemachine {
class AxisState_IInputAxisProvider;
}
namespace Unity::Cinemachine {
class CinemachineInputProvider___c__DisplayClass7_0;
}
namespace UnityEngine::InputSystem::Users {
struct InputUser;
}
namespace UnityEngine::InputSystem {
class InputActionReference;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineInputProvider;
}
namespace Unity::Cinemachine {
class CinemachineInputProvider___c__DisplayClass7_0;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineInputProvider*);
MARK_REF_T(::Unity::Cinemachine::CinemachineInputProvider___c__DisplayClass7_0*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineInputProvider*, "Unity.Cinemachine", "CinemachineInputProvider");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineInputProvider___c__DisplayClass7_0*, "Unity.Cinemachine", "CinemachineInputProvider/<>c__DisplayClass7_0");
// [Obsolete("CinemachineInputProvider has been deprecated. Use InputAxisController instead.")]
// [AddComponentMenu("")]
// Dependencies UnityEngine.InputSystem.InputAction, UnityEngine.MonoBehaviour
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineInputProvider
class CORDL_TYPE CinemachineInputProvider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass7_0 = ::Unity::Cinemachine::CinemachineInputProvider___c__DisplayClass7_0;

/// @brief Field AutoEnableInputs, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_AutoEnableInputs, put=__cordl_internal_set_AutoEnableInputs)) bool  AutoEnableInputs;

/// @brief Field PlayerIndex, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_PlayerIndex, put=__cordl_internal_set_PlayerIndex)) int32_t  PlayerIndex;

/// @brief Field XYAxis, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_XYAxis, put=__cordl_internal_set_XYAxis)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  XYAxis;

/// @brief Field ZAxis, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ZAxis, put=__cordl_internal_set_ZAxis)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ZAxis;

/// @brief Field m_cachedActions, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_cachedActions, put=__cordl_internal_set_m_cachedActions)) ::ArrayW<::UnityEngine::InputSystem::InputAction*>  m_cachedActions;

/// @brief Convert operator to "::Unity::Cinemachine::AxisState_IInputAxisProvider"
constexpr operator  ::Unity::Cinemachine::AxisState_IInputAxisProvider*() noexcept;

/// @brief Method GetAxisValue, addr 0xaed3880, size 0xf0, virtual true, abstract: false, final false
inline float_t GetAxisValue(int32_t  axis) ;

static inline ::Unity::Cinemachine::CinemachineInputProvider* New_ctor() ;

/// @brief Method OnDisable, addr 0xaed3e4c, size 0xc, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method ResolveForPlayer, addr 0xaed3970, size 0x3a8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputAction* ResolveForPlayer(int32_t  axis, ::UnityEngine::InputSystem::InputActionReference*  actionRef) ;

/// [CompilerGenerated]
/// @brief Method <ResolveForPlayer>g__GetFirstMatch|7_0, addr 0xaed3d18, size 0x134, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::InputAction* _ResolveForPlayer_g__GetFirstMatch_7_0(/* [IsReadOnly] */ ::by_ref<::UnityEngine::InputSystem::Users::InputUser>  user, ::UnityEngine::InputSystem::InputActionReference*  aRef) ;

constexpr bool const& __cordl_internal_get_AutoEnableInputs() const;

constexpr bool& __cordl_internal_get_AutoEnableInputs() ;

constexpr int32_t const& __cordl_internal_get_PlayerIndex() const;

constexpr int32_t& __cordl_internal_get_PlayerIndex() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_XYAxis() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_XYAxis() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_ZAxis() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_ZAxis() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputAction*> const& __cordl_internal_get_m_cachedActions() const;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputAction*>& __cordl_internal_get_m_cachedActions() ;

constexpr void __cordl_internal_set_AutoEnableInputs(bool  value) ;

constexpr void __cordl_internal_set_PlayerIndex(int32_t  value) ;

constexpr void __cordl_internal_set_XYAxis(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_ZAxis(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_cachedActions(::ArrayW<::UnityEngine::InputSystem::InputAction*>  value) ;

/// @brief Method .ctor, addr 0xaed3e58, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Unity::Cinemachine::AxisState_IInputAxisProvider"
constexpr ::Unity::Cinemachine::AxisState_IInputAxisProvider* i___Unity__Cinemachine__AxisState_IInputAxisProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineInputProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineInputProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineInputProvider(CinemachineInputProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineInputProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineInputProvider(CinemachineInputProvider const& ) = delete;

/// @brief Field NUM_AXES offset 0xffffffff size 0x4
static constexpr int32_t  NUM_AXES{static_cast<int32_t>(0x3)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22418};

/// [Tooltip("Leave this at -1 for single-player games.  For multi-player games, set this to be the player index, and the actions will be read from that player\'s controls")]
/// @brief Field PlayerIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  ___PlayerIndex;

/// [Tooltip("If set, Input Actions will be auto-enabled at start")]
/// @brief Field AutoEnableInputs, offset: 0x24, size: 0x1, def value: None
 bool  ___AutoEnableInputs;

/// [Tooltip("Vector2 action for XY movement")]
/// @brief Field XYAxis, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___XYAxis;

/// [Tooltip("Float action for Z movement")]
/// @brief Field ZAxis, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___ZAxis;

/// @brief Field m_cachedActions, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::InputAction*>  ___m_cachedActions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineInputProvider, ___PlayerIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineInputProvider, ___AutoEnableInputs) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineInputProvider, ___XYAxis) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineInputProvider, ___ZAxis) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineInputProvider, ___m_cachedActions) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineInputProvider) == 0x40, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// [CompilerGenerated]
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineInputProvider/<>c__DisplayClass7_0
class CORDL_TYPE CinemachineInputProvider___c__DisplayClass7_0 : public ::System::Object {
public:
// Declarations
/// @brief Field aRef, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_aRef, put=__cordl_internal_set_aRef)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  aRef;

static inline ::Unity::Cinemachine::CinemachineInputProvider___c__DisplayClass7_0* New_ctor() ;

/// @brief Method <ResolveForPlayer>b__1, addr 0xaed3e78, size 0x64, virtual false, abstract: false, final false
inline bool _ResolveForPlayer_b__1(::UnityEngine::InputSystem::InputAction*  x) ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_aRef() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_aRef() ;

constexpr void __cordl_internal_set_aRef(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

/// @brief Method .ctor, addr 0xaed3e70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineInputProvider___c__DisplayClass7_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineInputProvider___c__DisplayClass7_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineInputProvider___c__DisplayClass7_0(CinemachineInputProvider___c__DisplayClass7_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineInputProvider___c__DisplayClass7_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineInputProvider___c__DisplayClass7_0(CinemachineInputProvider___c__DisplayClass7_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22417};

/// @brief Field aRef, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___aRef;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineInputProvider___c__DisplayClass7_0, ___aRef) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineInputProvider___c__DisplayClass7_0) == 0x18, "Size mismatch!");

} // namespace end def Unity::Cinemachine
