#pragma once
// IWYU pragma private; include "GlobalNamespace/XSceneInvoker_Receive.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(XSceneInvoker_Receive)
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class XSceneInvoker_Receive;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::XSceneInvoker_Receive*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XSceneInvoker_Receive*, "", "XSceneInvoker_Receive");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: XSceneInvoker_Receive
class CORDL_TYPE XSceneInvoker_Receive : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field evt, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_evt, put=__cordl_internal_set_evt)) ::UnityEngine::Events::UnityEvent*  evt;

/// @brief Method Invoke, addr 0x56ba450, size 0x18, virtual false, abstract: false, final false
inline void Invoke() ;

static inline ::GlobalNamespace::XSceneInvoker_Receive* New_ctor() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_evt() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_evt() ;

constexpr void __cordl_internal_set_evt(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x56ba468, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XSceneInvoker_Receive() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XSceneInvoker_Receive", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XSceneInvoker_Receive(XSceneInvoker_Receive && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XSceneInvoker_Receive", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XSceneInvoker_Receive(XSceneInvoker_Receive const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{967};

/// [SerializeField]
/// @brief Field evt, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___evt;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XSceneInvoker_Receive, ___evt) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XSceneInvoker_Receive) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
