#pragma once
// IWYU pragma private; include "GlobalNamespace/NetInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NetInput)
namespace GlobalNamespace {
struct NetworkedInput;
}
namespace GlobalNamespace {
class VRRig;
}
// Forward declare root types
namespace GlobalNamespace {
class NetInput;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NetInput*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetInput*, "", "NetInput");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetInput
class CORDL_TYPE NetInput : public ::System::Object {
public:
// Declarations
/// @brief Field _localPlayerVRRig, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__localPlayerVRRig, put=setStaticF__localPlayerVRRig)) ::UnityW<::GlobalNamespace::VRRig>  _localPlayerVRRig;

/// @brief Method GetInput, addr 0x56d9158, size 0x4b0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::NetworkedInput GetInput() ;

static inline ::UnityW<::GlobalNamespace::VRRig> getStaticF__localPlayerVRRig() ;

/// @brief Method get_LocalPlayerVRRig, addr 0x56d906c, size 0xec, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::VRRig> get_LocalPlayerVRRig() ;

static inline void setStaticF__localPlayerVRRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetInput", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetInput(NetInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetInput", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetInput(NetInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1088};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NetInput) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
