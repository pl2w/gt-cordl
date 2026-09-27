#pragma once
// IWYU pragma private; include "Oculus/Interaction/SelectorUnityEventWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SelectorUnityEventWrapper)
namespace Oculus::Interaction {
class ISelector;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class SelectorUnityEventWrapper;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::SelectorUnityEventWrapper*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::SelectorUnityEventWrapper*, "Oculus.Interaction", "SelectorUnityEventWrapper");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.SelectorUnityEventWrapper
class CORDL_TYPE SelectorUnityEventWrapper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Selector, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Selector, put=__cordl_internal_set_Selector)) ::Oculus::Interaction::ISelector*  Selector;

 __declspec(property(get=get_WhenSelected)) ::UnityEngine::Events::UnityEvent*  WhenSelected;

 __declspec(property(get=get_WhenUnselected)) ::UnityEngine::Events::UnityEvent*  WhenUnselected;

/// @brief Field _selector, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__selector, put=__cordl_internal_set__selector)) ::UnityW<::UnityEngine::Object>  _selector;

/// @brief Field _started, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _whenSelected, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenSelected, put=__cordl_internal_set__whenSelected)) ::UnityEngine::Events::UnityEvent*  _whenSelected;

/// @brief Field _whenUnselected, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenUnselected, put=__cordl_internal_set__whenUnselected)) ::UnityEngine::Events::UnityEvent*  _whenUnselected;

/// @brief Method Awake, addr 0xa489dc8, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method HandleSelected, addr 0xa48a1b8, size 0x18, virtual false, abstract: false, final false
inline void HandleSelected() ;

/// @brief Method HandleUnselected, addr 0xa48a1d0, size 0x18, virtual false, abstract: false, final false
inline void HandleUnselected() ;

/// @brief Method InjectAllSelectorUnityEventWrapper, addr 0xa48a1e8, size 0x4, virtual false, abstract: false, final false
inline void InjectAllSelectorUnityEventWrapper(::Oculus::Interaction::ISelector*  selector) ;

/// @brief Method InjectSelector, addr 0xa48a1ec, size 0xd0, virtual false, abstract: false, final false
inline void InjectSelector(::Oculus::Interaction::ISelector*  selector) ;

static inline ::Oculus::Interaction::SelectorUnityEventWrapper* New_ctor() ;

/// @brief Method OnDisable, addr 0xa48a008, size 0x1b0, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa489e5c, size 0x1ac, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa489e30, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::ISelector* const& __cordl_internal_get_Selector() const;

constexpr ::Oculus::Interaction::ISelector*& __cordl_internal_get_Selector() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__selector() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__selector() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenSelected() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenSelected() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenUnselected() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenUnselected() ;

constexpr void __cordl_internal_set_Selector(::Oculus::Interaction::ISelector*  value) ;

constexpr void __cordl_internal_set__selector(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__whenSelected(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__whenUnselected(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0xa48a2bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_WhenSelected, addr 0xa489db8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenSelected() ;

/// @brief Method get_WhenUnselected, addr 0xa489dc0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_WhenUnselected() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SelectorUnityEventWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SelectorUnityEventWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SelectorUnityEventWrapper(SelectorUnityEventWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SelectorUnityEventWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SelectorUnityEventWrapper(SelectorUnityEventWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16006};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.ISelector), new[] {  })]
/// @brief Field _selector, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____selector;

/// @brief Field Selector, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::ISelector*  ___Selector;

/// [SerializeField]
/// @brief Field _whenSelected, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenSelected;

/// [SerializeField]
/// @brief Field _whenUnselected, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenUnselected;

/// @brief Field _started, offset: 0x40, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::SelectorUnityEventWrapper, ____selector) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SelectorUnityEventWrapper, ___Selector) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SelectorUnityEventWrapper, ____whenSelected) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SelectorUnityEventWrapper, ____whenUnselected) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::SelectorUnityEventWrapper, ____started) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::SelectorUnityEventWrapper) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction
