#pragma once
// IWYU pragma private; include "GorillaTag/Shared/Scripts/Cosmetics/ActionRestrictions/CosmeticExclusionZoneRegistryUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CosmeticExclusionZoneRegistryUtility)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions {
class CosmeticExclusionZoneRegistryUtility;
}
// Write type traits
MARK_REF_T(::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistryUtility*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistryUtility*, "GorillaTag.Shared.Scripts.Cosmetics.ActionRestrictions", "CosmeticExclusionZoneRegistryUtility");
// Dependencies System.Object
namespace GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions {
// Is value type: false
// CS Name: GorillaTag.Shared.Scripts.Cosmetics.ActionRestrictions.CosmeticExclusionZoneRegistryUtility
class CORDL_TYPE CosmeticExclusionZoneRegistryUtility : public ::System::Object {
public:
// Declarations
/// @brief Field exclusionZones, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_exclusionZones, put=setStaticF_exclusionZones)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  exclusionZones;

/// @brief Method IsPositionRestricted, addr 0x5d4de10, size 0x18c, virtual false, abstract: false, final false
static inline bool IsPositionRestricted(::UnityEngine::Vector3  worldPos) ;

/// @brief Method RegisterZone, addr 0x5d4e044, size 0x15c, virtual false, abstract: false, final false
static inline void RegisterZone(::UnityEngine::Collider*  zone) ;

/// @brief Method UnregisterZone, addr 0x5d4e1f8, size 0x80, virtual false, abstract: false, final false
static inline void UnregisterZone(::UnityEngine::Collider*  zone) ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* getStaticF_exclusionZones() ;

static inline void setStaticF_exclusionZones(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticExclusionZoneRegistryUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticExclusionZoneRegistryUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticExclusionZoneRegistryUtility(CosmeticExclusionZoneRegistryUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticExclusionZoneRegistryUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticExclusionZoneRegistryUtility(CosmeticExclusionZoneRegistryUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4774};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions::CosmeticExclusionZoneRegistryUtility) == 0x10, "Size mismatch!");

} // namespace end def GorillaTag::Shared::Scripts::Cosmetics::ActionRestrictions
