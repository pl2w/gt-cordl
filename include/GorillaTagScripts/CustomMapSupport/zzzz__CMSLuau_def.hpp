#pragma once
// IWYU pragma private; include "GorillaTagScripts/CustomMapSupport/CMSLuau.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/CustomMapSupport/zzzz__CMSTrigger_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CMSLuau)
// Forward declare root types
namespace GorillaTagScripts::CustomMapSupport {
class CMSLuau;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::CustomMapSupport::CMSLuau*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::CustomMapSupport::CMSLuau*, "GorillaTagScripts.CustomMapSupport", "CMSLuau");
// Dependencies GorillaTagScripts.CustomMapSupport.CMSTrigger
namespace GorillaTagScripts::CustomMapSupport {
// Is value type: false
// CS Name: GorillaTagScripts.CustomMapSupport.CMSLuau
class CORDL_TYPE CMSLuau : public ::GorillaTagScripts::CustomMapSupport::CMSTrigger {
public:
// Declarations
static inline ::GorillaTagScripts::CustomMapSupport::CMSLuau* New_ctor() ;

/// @brief Method Trigger, addr 0x5bd83ec, size 0xd8, virtual true, abstract: false, final false
inline void Trigger(double_t  triggerTime, bool  originatedLocally, bool  ignoreTriggerCount) ;

/// @brief Method .ctor, addr 0x5bd8658, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CMSLuau() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CMSLuau", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CMSLuau(CMSLuau && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CMSLuau", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CMSLuau(CMSLuau const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4026};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTagScripts::CustomMapSupport::CMSLuau) == 0x70, "Size mismatch!");

} // namespace end def GorillaTagScripts::CustomMapSupport
