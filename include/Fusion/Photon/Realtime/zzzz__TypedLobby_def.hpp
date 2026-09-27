#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/TypedLobby.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Photon/Realtime/zzzz__LobbyType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TypedLobby)
namespace Fusion::Photon::Realtime {
struct LobbyType;
}
// Forward declare root types
namespace Fusion::Photon::Realtime {
class TypedLobby;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::TypedLobby*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::TypedLobby*, "Fusion.Photon.Realtime", "TypedLobby");
// Dependencies Fusion.Photon.Realtime.LobbyType, System.Object
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.TypedLobby
class CORDL_TYPE TypedLobby : public ::System::Object {
public:
// Declarations
/// @brief Field Default, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Default, put=setStaticF_Default)) ::Fusion::Photon::Realtime::TypedLobby*  Default;

 __declspec(property(get=get_IsDefault)) bool  IsDefault;

/// @brief Field Name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

/// @brief Field Type, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_Type, put=__cordl_internal_set_Type)) ::Fusion::Photon::Realtime::LobbyType  Type;

static inline ::Fusion::Photon::Realtime::TypedLobby* New_ctor() ;

static inline ::Fusion::Photon::Realtime::TypedLobby* New_ctor(::StringW  name, ::Fusion::Photon::Realtime::LobbyType  type) ;

/// @brief Method ToString, addr 0x5f5dd84, size 0x8c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr ::Fusion::Photon::Realtime::LobbyType const& __cordl_internal_get_Type() const;

constexpr ::Fusion::Photon::Realtime::LobbyType& __cordl_internal_get_Type() ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

constexpr void __cordl_internal_set_Type(::Fusion::Photon::Realtime::LobbyType  value) ;

/// @brief Method .ctor, addr 0x5f5dd40, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5f5dd48, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::Fusion::Photon::Realtime::LobbyType  type) ;

static inline ::Fusion::Photon::Realtime::TypedLobby* getStaticF_Default() ;

/// @brief Method get_IsDefault, addr 0x5f5a840, size 0xc, virtual false, abstract: false, final false
inline bool get_IsDefault() ;

static inline void setStaticF_Default(::Fusion::Photon::Realtime::TypedLobby*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TypedLobby() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TypedLobby", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TypedLobby(TypedLobby && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypedLobby", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypedLobby(TypedLobby const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28088};

/// @brief Field Name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Name;

/// @brief Field Type, offset: 0x18, size: 0x1, def value: None
 ::Fusion::Photon::Realtime::LobbyType  ___Type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::TypedLobby, ___Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Photon::Realtime::TypedLobby, ___Type) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::TypedLobby) == 0x20, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime
