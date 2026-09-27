#pragma once
// IWYU pragma private; include "GlobalNamespace/WsProxyMessage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__WS_PROXY_ACTIONS_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WsProxyMessage)
// Forward declare root types
namespace GlobalNamespace {
class WsProxyMessage;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::WsProxyMessage*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WsProxyMessage*, "", "WsProxyMessage");
// Dependencies System.Object, WS_PROXY_ACTIONS
namespace GlobalNamespace {
// Is value type: false
// CS Name: WsProxyMessage
class CORDL_TYPE WsProxyMessage : public ::System::Object {
public:
// Declarations
/// @brief Field action, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_action, put=__cordl_internal_set_action)) ::GlobalNamespace::WS_PROXY_ACTIONS  action;

/// @brief Field arguments, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_arguments, put=__cordl_internal_set_arguments)) ::StringW  arguments;

/// @brief Field extraData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_extraData, put=__cordl_internal_set_extraData)) ::StringW  extraData;

/// @brief Field interactionName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_interactionName, put=__cordl_internal_set_interactionName)) ::StringW  interactionName;

static inline ::GlobalNamespace::WsProxyMessage* New_ctor() ;

constexpr ::GlobalNamespace::WS_PROXY_ACTIONS const& __cordl_internal_get_action() const;

constexpr ::GlobalNamespace::WS_PROXY_ACTIONS& __cordl_internal_get_action() ;

constexpr ::StringW const& __cordl_internal_get_arguments() const;

constexpr ::StringW& __cordl_internal_get_arguments() ;

constexpr ::StringW const& __cordl_internal_get_extraData() const;

constexpr ::StringW& __cordl_internal_get_extraData() ;

constexpr ::StringW const& __cordl_internal_get_interactionName() const;

constexpr ::StringW& __cordl_internal_get_interactionName() ;

constexpr void __cordl_internal_set_action(::GlobalNamespace::WS_PROXY_ACTIONS  value) ;

constexpr void __cordl_internal_set_arguments(::StringW  value) ;

constexpr void __cordl_internal_set_extraData(::StringW  value) ;

constexpr void __cordl_internal_set_interactionName(::StringW  value) ;

/// @brief Method .ctor, addr 0x5b24100, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WsProxyMessage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WsProxyMessage", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WsProxyMessage(WsProxyMessage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WsProxyMessage", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WsProxyMessage(WsProxyMessage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3626};

/// @brief Field action, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::WS_PROXY_ACTIONS  ___action;

/// @brief Field interactionName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___interactionName;

/// @brief Field arguments, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___arguments;

/// @brief Field extraData, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___extraData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WsProxyMessage, ___action) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WsProxyMessage, ___interactionName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WsProxyMessage, ___arguments) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WsProxyMessage, ___extraData) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WsProxyMessage) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
