#pragma once
// IWYU pragma private; include "GlobalNamespace/XSceneInvoker_Send.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__XSceneRef_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(XSceneInvoker_Send)
// Forward declare root types
namespace GlobalNamespace {
class XSceneInvoker_Send;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::XSceneInvoker_Send*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XSceneInvoker_Send*, "", "XSceneInvoker_Send");
// Dependencies UnityEngine.MonoBehaviour, XSceneRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: XSceneInvoker_Send
class CORDL_TYPE XSceneInvoker_Send : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field target, offset 0x20, size 0x18 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::GlobalNamespace::XSceneRef  target;

/// @brief Method Invoke, addr 0x56ba470, size 0x7c, virtual false, abstract: false, final false
inline void Invoke() ;

static inline ::GlobalNamespace::XSceneInvoker_Send* New_ctor() ;

constexpr ::GlobalNamespace::XSceneRef const& __cordl_internal_get_target() const;

constexpr ::GlobalNamespace::XSceneRef& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::GlobalNamespace::XSceneRef  value) ;

/// @brief Method .ctor, addr 0x56ba4ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XSceneInvoker_Send() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XSceneInvoker_Send", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XSceneInvoker_Send(XSceneInvoker_Send && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XSceneInvoker_Send", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XSceneInvoker_Send(XSceneInvoker_Send const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{968};

/// [SerializeField]
/// @brief Field target, offset: 0x20, size: 0x18, def value: None
 ::GlobalNamespace::XSceneRef  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XSceneInvoker_Send, ___target) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XSceneInvoker_Send) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
