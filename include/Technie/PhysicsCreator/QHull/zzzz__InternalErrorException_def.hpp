#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/QHull/InternalErrorException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(InternalErrorException)
// Forward declare root types
namespace Technie::PhysicsCreator::QHull {
class InternalErrorException;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::QHull::InternalErrorException*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::QHull::InternalErrorException*, "Technie.PhysicsCreator.QHull", "InternalErrorException");
// Dependencies System.SystemException
namespace Technie::PhysicsCreator::QHull {
// Is value type: false
// CS Name: Technie.PhysicsCreator.QHull.InternalErrorException
class CORDL_TYPE InternalErrorException : public ::System::SystemException {
public:
// Declarations
static inline ::Technie::PhysicsCreator::QHull::InternalErrorException* New_ctor(::StringW  msg) ;

/// @brief Method .ctor, addr 0xaddcac0, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  msg) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InternalErrorException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InternalErrorException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InternalErrorException(InternalErrorException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InternalErrorException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InternalErrorException(InternalErrorException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30539};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Technie::PhysicsCreator::QHull::InternalErrorException) == 0x90, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator::QHull
