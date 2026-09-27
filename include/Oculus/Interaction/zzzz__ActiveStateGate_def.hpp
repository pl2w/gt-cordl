#pragma once
// IWYU pragma private; include "Oculus/Interaction/ActiveStateGate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ActiveStateGate)
namespace Oculus::Interaction {
class IActiveState;
}
namespace Oculus::Interaction {
class ISelector;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class ActiveStateGate;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::ActiveStateGate*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ActiveStateGate*, "Oculus.Interaction", "ActiveStateGate");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ActiveStateGate
class CORDL_TYPE ActiveStateGate : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Active, put=set_Active)) bool  Active;

 __declspec(property(get=get_CloseSelector, put=set_CloseSelector)) ::Oculus::Interaction::ISelector*  CloseSelector;

 __declspec(property(get=get_OpenSelector, put=set_OpenSelector)) ::Oculus::Interaction::ISelector*  OpenSelector;

/// @brief Field <Active>k__BackingField, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__Active_k__BackingField, put=__cordl_internal_set__Active_k__BackingField)) bool  _Active_k__BackingField;

/// @brief Field <CloseSelector>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__CloseSelector_k__BackingField, put=__cordl_internal_set__CloseSelector_k__BackingField)) ::Oculus::Interaction::ISelector*  _CloseSelector_k__BackingField;

/// @brief Field <OpenSelector>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__OpenSelector_k__BackingField, put=__cordl_internal_set__OpenSelector_k__BackingField)) ::Oculus::Interaction::ISelector*  _OpenSelector_k__BackingField;

/// @brief Field _closeSelector, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__closeSelector, put=__cordl_internal_set__closeSelector)) ::UnityW<::UnityEngine::Object>  _closeSelector;

/// @brief Field _openSelector, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__openSelector, put=__cordl_internal_set__openSelector)) ::UnityW<::UnityEngine::Object>  _openSelector;

/// @brief Field _started, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr operator  ::Oculus::Interaction::IActiveState*() noexcept;

/// @brief Method Awake, addr 0xa408c60, size 0x74, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method HandleCloseSelected, addr 0xa409060, size 0x8, virtual false, abstract: false, final false
inline void HandleCloseSelected() ;

/// @brief Method HandleOpenSelected, addr 0xa409054, size 0xc, virtual false, abstract: false, final false
inline void HandleOpenSelected() ;

/// @brief Method InjectAllActiveStateGate, addr 0xa409068, size 0x28, virtual false, abstract: false, final false
inline void InjectAllActiveStateGate(::Oculus::Interaction::ISelector*  openSelector, ::Oculus::Interaction::ISelector*  closeSelector) ;

/// @brief Method InjectCloseState, addr 0xa409160, size 0xd0, virtual false, abstract: false, final false
inline void InjectCloseState(::Oculus::Interaction::ISelector*  closeSelector) ;

/// @brief Method InjectOpenState, addr 0xa409090, size 0xd0, virtual false, abstract: false, final false
inline void InjectOpenState(::Oculus::Interaction::ISelector*  openSelector) ;

static inline ::Oculus::Interaction::ActiveStateGate* New_ctor() ;

/// @brief Method OnDisable, addr 0xa408ea0, size 0x1b4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa408cf8, size 0x1a8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa408cd4, size 0x24, virtual true, abstract: false, final false
inline void Start() ;

constexpr bool const& __cordl_internal_get__Active_k__BackingField() const;

constexpr bool& __cordl_internal_get__Active_k__BackingField() ;

constexpr ::Oculus::Interaction::ISelector* const& __cordl_internal_get__CloseSelector_k__BackingField() const;

constexpr ::Oculus::Interaction::ISelector*& __cordl_internal_get__CloseSelector_k__BackingField() ;

constexpr ::Oculus::Interaction::ISelector* const& __cordl_internal_get__OpenSelector_k__BackingField() const;

constexpr ::Oculus::Interaction::ISelector*& __cordl_internal_get__OpenSelector_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__closeSelector() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__closeSelector() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__openSelector() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__openSelector() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set__Active_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__CloseSelector_k__BackingField(::Oculus::Interaction::ISelector*  value) ;

constexpr void __cordl_internal_set__OpenSelector_k__BackingField(::Oculus::Interaction::ISelector*  value) ;

constexpr void __cordl_internal_set__closeSelector(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__openSelector(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa409230, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Active, addr 0xa408c50, size 0x8, virtual true, abstract: false, final true
inline bool get_Active() ;

/// [CompilerGenerated]
/// @brief Method get_CloseSelector, addr 0xa408c40, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::ISelector* get_CloseSelector() ;

/// [CompilerGenerated]
/// @brief Method get_OpenSelector, addr 0xa408c30, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::ISelector* get_OpenSelector() ;

/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* i___Oculus__Interaction__IActiveState() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Active, addr 0xa408c58, size 0x8, virtual false, abstract: false, final false
inline void set_Active(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_CloseSelector, addr 0xa408c48, size 0x8, virtual false, abstract: false, final false
inline void set_CloseSelector(::Oculus::Interaction::ISelector*  value) ;

/// [CompilerGenerated]
/// @brief Method set_OpenSelector, addr 0xa408c38, size 0x8, virtual false, abstract: false, final false
inline void set_OpenSelector(::Oculus::Interaction::ISelector*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActiveStateGate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateGate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ActiveStateGate(ActiveStateGate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateGate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActiveStateGate(ActiveStateGate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15724};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.ISelector), new[] {  })]
/// @brief Field _openSelector, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____openSelector;

/// [CompilerGenerated]
/// @brief Field <OpenSelector>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::ISelector*  ____OpenSelector_k__BackingField;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.ISelector), new[] {  })]
/// @brief Field _closeSelector, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____closeSelector;

/// [CompilerGenerated]
/// @brief Field <CloseSelector>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::Oculus::Interaction::ISelector*  ____CloseSelector_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Active>k__BackingField, offset: 0x40, size: 0x1, def value: None
 bool  ____Active_k__BackingField;

/// @brief Field _started, offset: 0x41, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::ActiveStateGate, ____openSelector) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateGate, ____OpenSelector_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateGate, ____closeSelector) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateGate, ____CloseSelector_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateGate, ____Active_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ActiveStateGate, ____started) == 0x41, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::ActiveStateGate) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction
