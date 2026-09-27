#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/Port.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/MultiplayerModels/zzzz__ProtocolType_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Port)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class Port;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::Port*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::Port*, "PlayFab.MultiplayerModels", "Port");
// Dependencies PlayFab.MultiplayerModels.ProtocolType, PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.Port
class CORDL_TYPE Port : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

/// @brief Field Num, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Num, put=__cordl_internal_set_Num)) int32_t  Num;

/// @brief Field Protocol, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Protocol, put=__cordl_internal_set_Protocol)) ::PlayFab::MultiplayerModels::ProtocolType  Protocol;

static inline ::PlayFab::MultiplayerModels::Port* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr int32_t const& __cordl_internal_get_Num() const;

constexpr int32_t& __cordl_internal_get_Num() ;

constexpr ::PlayFab::MultiplayerModels::ProtocolType const& __cordl_internal_get_Protocol() const;

constexpr ::PlayFab::MultiplayerModels::ProtocolType& __cordl_internal_get_Protocol() ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

constexpr void __cordl_internal_set_Num(int32_t  value) ;

constexpr void __cordl_internal_set_Protocol(::PlayFab::MultiplayerModels::ProtocolType  value) ;

/// @brief Method .ctor, addr 0xa840ba8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Port() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Port", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Port(Port && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Port", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Port(Port const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19720};

/// @brief Field Name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Name;

/// @brief Field Num, offset: 0x18, size: 0x4, def value: None
 int32_t  ___Num;

/// @brief Field Protocol, offset: 0x1c, size: 0x4, def value: None
 ::PlayFab::MultiplayerModels::ProtocolType  ___Protocol;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::Port, ___Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::Port, ___Num) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::Port, ___Protocol) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::Port) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
