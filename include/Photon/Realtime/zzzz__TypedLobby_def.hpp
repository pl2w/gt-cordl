#pragma once
// IWYU pragma private; include "Photon/Realtime/TypedLobby.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Realtime/zzzz__LobbyType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TypedLobby)
namespace Photon::Realtime {
struct LobbyType;
}
// Forward declare root types
namespace Photon::Realtime {
class TypedLobby;
}
// Write type traits
MARK_REF_T(::Photon::Realtime::TypedLobby*);
DEFINE_IL2CPP_CLASS(::Photon::Realtime::TypedLobby*, "Photon.Realtime", "TypedLobby");
// Dependencies Photon.Realtime.LobbyType, System.Object
namespace Photon::Realtime {
// Is value type: false
// CS Name: Photon.Realtime.TypedLobby
class CORDL_TYPE TypedLobby : public ::System::Object {
public:
// Declarations
/// @brief Field Default, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Default, put=setStaticF_Default)) ::Photon::Realtime::TypedLobby*  Default;

 __declspec(property(get=get_IsDefault)) bool  IsDefault;

/// @brief Field Name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

/// @brief Field Type, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_Type, put=__cordl_internal_set_Type)) ::Photon::Realtime::LobbyType  Type;

static inline ::Photon::Realtime::TypedLobby* New_ctor() ;

static inline ::Photon::Realtime::TypedLobby* New_ctor(::StringW  name, ::Photon::Realtime::LobbyType  type) ;

/// @brief Method ToString, addr 0xa70976c, size 0x8c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr ::Photon::Realtime::LobbyType const& __cordl_internal_get_Type() const;

constexpr ::Photon::Realtime::LobbyType& __cordl_internal_get_Type() ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

constexpr void __cordl_internal_set_Type(::Photon::Realtime::LobbyType  value) ;

/// @brief Method .ctor, addr 0xa709728, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa709730, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::Photon::Realtime::LobbyType  type) ;

static inline ::Photon::Realtime::TypedLobby* getStaticF_Default() ;

/// @brief Method get_IsDefault, addr 0xa706ae8, size 0xc, virtual false, abstract: false, final false
inline bool get_IsDefault() ;

static inline void setStaticF_Default(::Photon::Realtime::TypedLobby*  value) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29885};

/// @brief Field Name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Name;

/// @brief Field Type, offset: 0x18, size: 0x1, def value: None
 ::Photon::Realtime::LobbyType  ___Type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Realtime::TypedLobby, ___Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::TypedLobby, ___Type) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Photon::Realtime::TypedLobby) == 0x20, "Size mismatch!");

} // namespace end def Photon::Realtime
