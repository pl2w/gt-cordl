#pragma once
// IWYU pragma private; include "Photon/Pun/PunRPC.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(PunRPC)
// Forward declare root types
namespace Photon::Pun {
class PunRPC;
}
// Write type traits
MARK_REF_T(::Photon::Pun::PunRPC*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::PunRPC*, "Photon.Pun", "PunRPC");
// Dependencies System.Attribute
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.PunRPC
class CORDL_TYPE PunRPC : public ::System::Attribute {
public:
// Declarations
static inline ::Photon::Pun::PunRPC* New_ctor() ;

/// @brief Method .ctor, addr 0xa72b6ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PunRPC() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PunRPC", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PunRPC(PunRPC && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PunRPC", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PunRPC(PunRPC const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29712};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Pun::PunRPC) == 0x10, "Size mismatch!");

} // namespace end def Photon::Pun
