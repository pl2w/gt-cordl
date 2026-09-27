#pragma once
// IWYU pragma private; include "Fusion/StartGameException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__ShutdownReason_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StartGameException)
namespace Fusion {
struct ShutdownReason;
}
// Forward declare root types
namespace Fusion {
class StartGameException;
}
// Write type traits
MARK_REF_T(::Fusion::StartGameException*);
DEFINE_IL2CPP_CLASS(::Fusion::StartGameException*, "Fusion", "StartGameException");
// Dependencies Fusion.ShutdownReason, System.Exception
namespace Fusion {
// Is value type: false
// CS Name: Fusion.StartGameException
class CORDL_TYPE StartGameException : public ::System::Exception {
public:
// Declarations
 __declspec(property(get=get_ShutdownReason, put=set_ShutdownReason)) ::Fusion::ShutdownReason  ShutdownReason;

/// @brief Field <ShutdownReason>k__BackingField, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__ShutdownReason_k__BackingField, put=__cordl_internal_set__ShutdownReason_k__BackingField)) ::Fusion::ShutdownReason  _ShutdownReason_k__BackingField;

static inline ::Fusion::StartGameException* New_ctor(::Fusion::ShutdownReason  shutdownReason, ::StringW  customMsg) ;

/// @brief Method ToString, addr 0x5fdca6c, size 0x210, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::Fusion::ShutdownReason const& __cordl_internal_get__ShutdownReason_k__BackingField() const;

constexpr ::Fusion::ShutdownReason& __cordl_internal_get__ShutdownReason_k__BackingField() ;

constexpr void __cordl_internal_set__ShutdownReason_k__BackingField(::Fusion::ShutdownReason  value) ;

/// @brief Method .ctor, addr 0x5fd447c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::Fusion::ShutdownReason  shutdownReason, ::StringW  customMsg) ;

/// [CompilerGenerated]
/// @brief Method get_ShutdownReason, addr 0x5fdca5c, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::ShutdownReason get_ShutdownReason() ;

/// [CompilerGenerated]
/// @brief Method set_ShutdownReason, addr 0x5fdca64, size 0x8, virtual false, abstract: false, final false
inline void set_ShutdownReason(::Fusion::ShutdownReason  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StartGameException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StartGameException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StartGameException(StartGameException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StartGameException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StartGameException(StartGameException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19275};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <ShutdownReason>k__BackingField, offset: 0x8c, size: 0x4, def value: None
 ::Fusion::ShutdownReason  ____ShutdownReason_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::StartGameException, ____ShutdownReason_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(sizeof(::Fusion::StartGameException) == 0x90, "Size mismatch!");

} // namespace end def Fusion
