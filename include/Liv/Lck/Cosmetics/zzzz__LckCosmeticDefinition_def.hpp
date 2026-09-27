#pragma once
// IWYU pragma private; include "Liv/Lck/Cosmetics/LckCosmeticDefinition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LckCosmeticDefinition)
namespace Liv::Lck::Cosmetics {
class LckCosmeticType;
}
namespace Liv::Lck::Cosmetics {
class RootCosmetic;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Liv::Lck::Cosmetics {
class LckCosmeticDefinition;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Cosmetics::LckCosmeticDefinition*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Cosmetics::LckCosmeticDefinition*, "Liv.Lck.Cosmetics", "LckCosmeticDefinition");
// [CreateAssetMenu(fileName = "NewCosmetic", menuName = "LIV/LCK/LCK Cosmetics/Cosmetic Definition")]
// Dependencies UnityEngine.ScriptableObject
namespace Liv::Lck::Cosmetics {
// Is value type: false
// CS Name: Liv.Lck.Cosmetics.LckCosmeticDefinition
class CORDL_TYPE LckCosmeticDefinition : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field CosmeticId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CosmeticId, put=__cordl_internal_set_CosmeticId)) ::StringW  CosmeticId;

/// @brief Field CosmeticName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CosmeticName, put=__cordl_internal_set_CosmeticName)) ::StringW  CosmeticName;

/// @brief Field CosmeticType, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_CosmeticType, put=__cordl_internal_set_CosmeticType)) ::UnityW<::Liv::Lck::Cosmetics::LckCosmeticType>  CosmeticType;

/// @brief Field RootCosmetics, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_RootCosmetics, put=__cordl_internal_set_RootCosmetics)) ::System::Collections::Generic::List_1<::Liv::Lck::Cosmetics::RootCosmetic*>*  RootCosmetics;

static inline ::Liv::Lck::Cosmetics::LckCosmeticDefinition* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_CosmeticId() const;

constexpr ::StringW& __cordl_internal_get_CosmeticId() ;

constexpr ::StringW const& __cordl_internal_get_CosmeticName() const;

constexpr ::StringW& __cordl_internal_get_CosmeticName() ;

constexpr ::UnityW<::Liv::Lck::Cosmetics::LckCosmeticType> const& __cordl_internal_get_CosmeticType() const;

constexpr ::UnityW<::Liv::Lck::Cosmetics::LckCosmeticType>& __cordl_internal_get_CosmeticType() ;

constexpr ::System::Collections::Generic::List_1<::Liv::Lck::Cosmetics::RootCosmetic*>* const& __cordl_internal_get_RootCosmetics() const;

constexpr ::System::Collections::Generic::List_1<::Liv::Lck::Cosmetics::RootCosmetic*>*& __cordl_internal_get_RootCosmetics() ;

constexpr void __cordl_internal_set_CosmeticId(::StringW  value) ;

constexpr void __cordl_internal_set_CosmeticName(::StringW  value) ;

constexpr void __cordl_internal_set_CosmeticType(::UnityW<::Liv::Lck::Cosmetics::LckCosmeticType>  value) ;

constexpr void __cordl_internal_set_RootCosmetics(::System::Collections::Generic::List_1<::Liv::Lck::Cosmetics::RootCosmetic*>*  value) ;

/// @brief Method .ctor, addr 0x9d64f30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCosmeticDefinition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCosmeticDefinition", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCosmeticDefinition(LckCosmeticDefinition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCosmeticDefinition", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCosmeticDefinition(LckCosmeticDefinition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24977};

/// [Tooltip("The unique ID for this cosmetic. This will be used as the main asset\'s name inside the bundle.")]
/// @brief Field CosmeticId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___CosmeticId;

/// [Tooltip("The readable name for this cosmetic.")]
/// @brief Field CosmeticName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___CosmeticName;

/// [Tooltip("The type of this cosmetic, as defined by its LckCosmeticType SO.")]
/// @brief Field CosmeticType, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::Cosmetics::LckCosmeticType>  ___CosmeticType;

/// [Space(10)]
/// [Tooltip("The list of assets that are the primary resources when applying this cosmetic.")]
/// @brief Field RootCosmetics, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Liv::Lck::Cosmetics::RootCosmetic*>*  ___RootCosmetics;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Cosmetics::LckCosmeticDefinition, ___CosmeticId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Cosmetics::LckCosmeticDefinition, ___CosmeticName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Cosmetics::LckCosmeticDefinition, ___CosmeticType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Cosmetics::LckCosmeticDefinition, ___RootCosmetics) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Cosmetics::LckCosmeticDefinition) == 0x38, "Size mismatch!");

} // namespace end def Liv::Lck::Cosmetics
