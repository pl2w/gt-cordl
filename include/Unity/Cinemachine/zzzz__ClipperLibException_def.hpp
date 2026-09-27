#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ClipperLibException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ClipperLibException)
// Forward declare root types
namespace Unity::Cinemachine {
class ClipperLibException;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::ClipperLibException*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::ClipperLibException*, "Unity.Cinemachine", "ClipperLibException");
// Dependencies System.Exception
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.ClipperLibException
class CORDL_TYPE ClipperLibException : public ::System::Exception {
public:
// Declarations
/// @brief [NullableContext(1)]
static inline ::Unity::Cinemachine::ClipperLibException* New_ctor(::StringW  description) ;

/// [NullableContext(1)]
/// @brief Method .ctor, addr 0xaefa5c0, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::StringW  description) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClipperLibException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClipperLibException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ClipperLibException(ClipperLibException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClipperLibException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClipperLibException(ClipperLibException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22524};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::ClipperLibException) == 0x90, "Size mismatch!");

} // namespace end def Unity::Cinemachine
