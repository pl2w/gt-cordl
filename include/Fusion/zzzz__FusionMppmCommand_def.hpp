#pragma once
// IWYU pragma private; include "Fusion/FusionMppmCommand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FusionMppmCommand)
// Forward declare root types
namespace Fusion {
class FusionMppmCommand;
}
// Write type traits
MARK_REF_T(::Fusion::FusionMppmCommand*);
DEFINE_IL2CPP_CLASS(::Fusion::FusionMppmCommand*, "Fusion", "FusionMppmCommand");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FusionMppmCommand
class CORDL_TYPE FusionMppmCommand : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_NeedsAck)) bool  NeedsAck;

 __declspec(property(get=get_PersistentKey)) ::StringW  PersistentKey;

/// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Execute() ;

static inline ::Fusion::FusionMppmCommand* New_ctor() ;

/// @brief Method .ctor, addr 0x60e3848, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_NeedsAck, addr 0x60e3838, size 0x8, virtual true, abstract: false, final false
inline bool get_NeedsAck() ;

/// @brief Method get_PersistentKey, addr 0x60e3840, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_PersistentKey() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionMppmCommand() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionMppmCommand", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionMppmCommand(FusionMppmCommand && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionMppmCommand", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionMppmCommand(FusionMppmCommand const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23437};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::FusionMppmCommand) == 0x10, "Size mismatch!");

} // namespace end def Fusion
