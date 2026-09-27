#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/StructWrapping/StructWrapperUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(StructWrapperUtility)
namespace System {
class Object;
}
// Forward declare root types
namespace ExitGames::Client::Photon::StructWrapping {
class StructWrapperUtility;
}
// Write type traits
MARK_REF_T(::ExitGames::Client::Photon::StructWrapping::StructWrapperUtility*);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::StructWrapping::StructWrapperUtility*, "ExitGames.Client.Photon.StructWrapping", "StructWrapperUtility");
// [Extension]
// Dependencies System.Object
namespace ExitGames::Client::Photon::StructWrapping {
// Is value type: false
// CS Name: ExitGames.Client.Photon.StructWrapping.StructWrapperUtility
class CORDL_TYPE StructWrapperUtility : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Get(::System::Object*  obj) ;

/// [Extension]
/// @brief Method IsType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool IsType(::System::Object*  obj) ;

/// [Extension]
/// @brief Method Unwrap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Unwrap(::System::Object*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StructWrapperUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StructWrapperUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StructWrapperUtility(StructWrapperUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StructWrapperUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StructWrapperUtility(StructWrapperUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26496};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ExitGames::Client::Photon::StructWrapping::StructWrapperUtility) == 0x10, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon::StructWrapping
