#pragma once
// IWYU pragma private; include "GlobalNamespace/SIResourceHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SIResourceHelper)
namespace GlobalNamespace {
struct SIResource_ResourceCategoryCost;
}
namespace GlobalNamespace {
struct SIResource_ResourceCost;
}
namespace GlobalNamespace {
struct SIResource_ResourceType;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SIResourceHelper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIResourceHelper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIResourceHelper*, "", "SIResourceHelper");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIResourceHelper
class CORDL_TYPE SIResourceHelper : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method AddResourceCost, addr 0x5ae9c74, size 0x44, virtual false, abstract: false, final false
static inline void AddResourceCost(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  baseCost, ::GlobalNamespace::SIResource_ResourceCategoryCost  additiveCost) ;

/// [Extension]
/// @brief Method AddResourceCost, addr 0x5ae6830, size 0x13c, virtual false, abstract: false, final false
static inline void AddResourceCost(::System::Collections::Generic::List_1<::GlobalNamespace::SIResource_ResourceCost>*  baseCost, ::GlobalNamespace::SIResource_ResourceCost  additiveCost) ;

/// [Extension]
/// @brief Method AddResourceCost, addr 0x5ae8f8c, size 0x2a0, virtual false, abstract: false, final false
static inline void AddResourceCost(::System::Collections::Generic::List_1<::GlobalNamespace::SIResource_ResourceCost>*  baseCost, ::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  additiveCost) ;

/// [Extension]
/// @brief Method GetAmount, addr 0x5ae6cdc, size 0x2ac, virtual false, abstract: false, final false
static inline int32_t GetAmount(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  costs, ::GlobalNamespace::SIResource_ResourceType  resourceType) ;

/// [Extension]
/// @brief Method GetCategoryCosts, addr 0x5ae70fc, size 0x2bc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SIResource_ResourceCategoryCost GetCategoryCosts(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  costs) ;

/// [Extension]
/// @brief Method GetMax, addr 0x5ae8c18, size 0x374, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::GlobalNamespace::SIResource_ResourceCost>* GetMax(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  baseCost, ::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  additiveCosts) ;

/// [Extension]
/// @brief Method GetMiscCost, addr 0x5ae94cc, size 0x2a0, virtual false, abstract: false, final false
static inline int32_t GetMiscCost(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  costs) ;

/// [Extension]
/// @brief Method GetTechPointCost, addr 0x5ae922c, size 0x2a0, virtual false, abstract: false, final false
static inline int32_t GetTechPointCost(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  costs) ;

/// [Extension]
/// @brief Method GetTotalResourceCost, addr 0x5ae88c8, size 0x350, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::GlobalNamespace::SIResource_ResourceCost>* GetTotalResourceCost(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  baseCost, ::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  additiveCosts) ;

/// [Extension]
/// @brief Method IsInOrder, addr 0x5ae7fa4, size 0x2ac, virtual false, abstract: false, final false
static inline bool IsInOrder(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  cost) ;

/// [Extension]
/// @brief Method IsValid, addr 0x5ae8250, size 0x340, virtual false, abstract: false, final false
static inline bool IsValid(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  cost) ;

/// [Extension]
/// @brief Method IsValid_AllowZero, addr 0x5ae8590, size 0x338, virtual false, abstract: false, final false
static inline bool IsValid_AllowZero(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  cost) ;

/// [Extension]
/// @brief Method SetAmount, addr 0x5ae6f88, size 0x144, virtual false, abstract: false, final false
static inline void SetAmount(::System::Collections::Generic::List_1<::GlobalNamespace::SIResource_ResourceCost>*  costs, ::GlobalNamespace::SIResource_ResourceType  resourceType, int32_t  amount) ;

/// [Extension]
/// @brief Method SetMiscCost, addr 0x5ae999c, size 0x2d8, virtual false, abstract: false, final false
static inline void SetMiscCost(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  baseCost, int32_t  desiredCost) ;

/// [Extension]
/// @brief Method SetResourceCost, addr 0x5ae976c, size 0x28, virtual false, abstract: false, final false
static inline void SetResourceCost(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  costs, ::GlobalNamespace::SIResource_ResourceCategoryCost  desiredCosts) ;

/// [Extension]
/// @brief Method SetTechPointCost, addr 0x5ae9794, size 0x208, virtual false, abstract: false, final false
static inline void SetTechPointCost(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  baseCost, int32_t  desiredCost) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIResourceHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIResourceHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIResourceHelper(SIResourceHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIResourceHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIResourceHelper(SIResourceHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{343};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SIResourceHelper) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
