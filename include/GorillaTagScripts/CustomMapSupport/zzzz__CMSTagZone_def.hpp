#pragma once
// IWYU pragma private; include "GorillaTagScripts/CustomMapSupport/CMSTagZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/CustomMapSupport/zzzz__CMSTrigger_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CMSTagZone)
// Forward declare root types
namespace GorillaTagScripts::CustomMapSupport {
class CMSTagZone;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::CustomMapSupport::CMSTagZone*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::CustomMapSupport::CMSTagZone*, "GorillaTagScripts.CustomMapSupport", "CMSTagZone");
// Dependencies GorillaTagScripts.CustomMapSupport.CMSTrigger
namespace GorillaTagScripts::CustomMapSupport {
// Is value type: false
// CS Name: GorillaTagScripts.CustomMapSupport.CMSTagZone
class CORDL_TYPE CMSTagZone : public ::GorillaTagScripts::CustomMapSupport::CMSTrigger {
public:
// Declarations
static inline ::GorillaTagScripts::CustomMapSupport::CMSTagZone* New_ctor() ;

/// @brief Method Trigger, addr 0x5bdc9ac, size 0x9c, virtual true, abstract: false, final false
inline void Trigger(double_t  triggerTime, bool  originatedLocally, bool  ignoreTriggerCount) ;

/// @brief Method .ctor, addr 0x5bdca48, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CMSTagZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CMSTagZone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CMSTagZone(CMSTagZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CMSTagZone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CMSTagZone(CMSTagZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4031};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTagScripts::CustomMapSupport::CMSTagZone) == 0x70, "Size mismatch!");

} // namespace end def GorillaTagScripts::CustomMapSupport
