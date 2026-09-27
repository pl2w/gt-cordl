#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/PhotonTeam.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonTeam)
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class PhotonTeam;
}
// Write type traits
MARK_REF_T(::Photon::Pun::UtilityScripts::PhotonTeam*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::UtilityScripts::PhotonTeam*, "Photon.Pun.UtilityScripts", "PhotonTeam");
// Dependencies System.Object
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: Photon.Pun.UtilityScripts.PhotonTeam
class CORDL_TYPE PhotonTeam : public ::System::Object {
public:
// Declarations
/// @brief Field Code, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_Code, put=__cordl_internal_set_Code)) uint8_t  Code;

/// @brief Field Name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

static inline ::Photon::Pun::UtilityScripts::PhotonTeam* New_ctor() ;

/// @brief Method ToString, addr 0xa734540, size 0x80, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr uint8_t const& __cordl_internal_get_Code() const;

constexpr uint8_t& __cordl_internal_get_Code() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr void __cordl_internal_set_Code(uint8_t  value) ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

/// @brief Method .ctor, addr 0xa7345c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonTeam() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonTeam", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonTeam(PhotonTeam && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonTeam", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonTeam(PhotonTeam const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31210};

/// @brief Field Name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Name;

/// @brief Field Code, offset: 0x18, size: 0x1, def value: None
 uint8_t  ___Code;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::UtilityScripts::PhotonTeam, ___Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::PhotonTeam, ___Code) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::UtilityScripts::PhotonTeam) == 0x20, "Size mismatch!");

} // namespace end def Photon::Pun::UtilityScripts
