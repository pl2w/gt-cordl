#pragma once
// IWYU pragma private; include "GorillaTag/Shared/Scripts/Cosmetics/ActionRestrictions/ZoneStateEventBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ZoneStateEventBase)
namespace GlobalNamespace {
class VRRig;
}
// Forward declare root types
namespace GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions {
class ZoneStateEventBase;
}
// Write type traits
MARK_REF_T(::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ZoneStateEventBase*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ZoneStateEventBase*, "GorillaTag.Shared.Scripts.Cosmetics.ActionRestrictions", "ZoneStateEventBase");
// Dependencies System.Object
namespace GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions {
// Is value type: false
// CS Name: GorillaTag.Shared.Scripts.Cosmetics.ActionRestrictions.ZoneStateEventBase
class CORDL_TYPE ZoneStateEventBase : public ::System::Object {
public:
// Declarations
/// @brief Method IsRestricted, addr 0x5d4e740, size 0x54, virtual false, abstract: false, final false
inline bool IsRestricted(::GlobalNamespace::VRRig*  vrRig) ;

static inline ::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ZoneStateEventBase* New_ctor() ;

/// @brief Method .ctor, addr 0x5d4e794, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZoneStateEventBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZoneStateEventBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZoneStateEventBase(ZoneStateEventBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZoneStateEventBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZoneStateEventBase(ZoneStateEventBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4775};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::ZoneStateEventBase) == 0x10, "Size mismatch!");

} // namespace end def GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions
