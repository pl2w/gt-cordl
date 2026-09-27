#pragma once
// IWYU pragma private; include "GorillaTag/Shared/Scripts/Cosmetics/ActionRestrictions/CosmeticExclusionZoneRegistry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CosmeticExclusionZoneRegistry)
namespace GlobalNamespace {
class VRRig;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions {
class CosmeticExclusionZoneRegistry;
}
// Write type traits
MARK_REF_T(::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistry*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistry*, "GorillaTag.Shared.Scripts.Cosmetics.ActionRestrictions", "CosmeticExclusionZoneRegistry");
// Dependencies System.Object
namespace GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions {
// Is value type: false
// CS Name: GorillaTag.Shared.Scripts.Cosmetics.ActionRestrictions.CosmeticExclusionZoneRegistry
class CORDL_TYPE CosmeticExclusionZoneRegistry : public ::System::Object {
public:
// Declarations
/// @brief Field restrictedRigs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_restrictedRigs, put=setStaticF_restrictedRigs)) ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::VRRig>>*  restrictedRigs;

/// @brief Method Enter, addr 0x5d4e340, size 0xc4, virtual false, abstract: false, final false
static inline void Enter(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method Exit, addr 0x5d4e4cc, size 0xc4, virtual false, abstract: false, final false
static inline void Exit(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method IsRestricted, addr 0x5d4dcb4, size 0xc8, virtual false, abstract: false, final false
static inline bool IsRestricted(::GlobalNamespace::VRRig*  rig) ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)4)]
/// @brief Method Reset, addr 0x5d4e598, size 0x78, virtual false, abstract: false, final false
static inline void Reset() ;

static inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::VRRig>>* getStaticF_restrictedRigs() ;

static inline void setStaticF_restrictedRigs(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticExclusionZoneRegistry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticExclusionZoneRegistry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticExclusionZoneRegistry(CosmeticExclusionZoneRegistry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticExclusionZoneRegistry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticExclusionZoneRegistry(CosmeticExclusionZoneRegistry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4773};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistry) == 0x10, "Size mismatch!");

} // namespace end def GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions
