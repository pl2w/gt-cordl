#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAttributes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRAttributes)
namespace GlobalNamespace {
struct GRAttributeType;
}
namespace GlobalNamespace {
struct GRAttributes_GRAttributePair;
}
namespace GlobalNamespace {
class GRBonusEntry;
}
namespace GlobalNamespace {
class GRBonusSystem;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GRAttributes;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRAttributes*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRAttributes*, "", "GRAttributes");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRAttributes
class CORDL_TYPE GRAttributes : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using GRAttributePair = ::GlobalNamespace::GRAttributes_GRAttributePair;

/// @brief Field bonusSystem, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_bonusSystem, put=__cordl_internal_set_bonusSystem)) ::GlobalNamespace::GRBonusSystem*  bonusSystem;

/// @brief Field defaultAttributes, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultAttributes, put=__cordl_internal_set_defaultAttributes)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRAttributeType,int32_t>*  defaultAttributes;

/// @brief Field startingAttributes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_startingAttributes, put=__cordl_internal_set_startingAttributes)) ::System::Collections::Generic::List_1<::GlobalNamespace::GRAttributes_GRAttributePair>*  startingAttributes;

/// @brief Method AddAttribute, addr 0x5870908, size 0x88, virtual false, abstract: false, final false
inline void AddAttribute(::GlobalNamespace::GRAttributeType  type, float_t  value) ;

/// @brief Method AddBonus, addr 0x5870990, size 0x14, virtual false, abstract: false, final false
inline void AddBonus(::GlobalNamespace::GRBonusEntry*  entry) ;

/// @brief Method Awake, addr 0x5870700, size 0x19c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CalculateFinalFloatValueForAttribute, addr 0x5868684, size 0x3c, virtual false, abstract: false, final false
inline float_t CalculateFinalFloatValueForAttribute(::GlobalNamespace::GRAttributeType  attributeType) ;

/// @brief Method CalculateFinalValueForAttribute, addr 0x58713ec, size 0x3c, virtual false, abstract: false, final false
inline int32_t CalculateFinalValueForAttribute(::GlobalNamespace::GRAttributeType  attributeType) ;

/// @brief Method HasBeenInitialized, addr 0x587089c, size 0x6c, virtual false, abstract: false, final false
inline bool HasBeenInitialized() ;

/// @brief Method HasValueForAttribute, addr 0x5871428, size 0x14, virtual false, abstract: false, final false
inline bool HasValueForAttribute(::GlobalNamespace::GRAttributeType  attributeType) ;

static inline ::GlobalNamespace::GRAttributes* New_ctor() ;

/// @brief Method RemoveBonus, addr 0x5870bd0, size 0x14, virtual false, abstract: false, final false
inline void RemoveBonus(::GlobalNamespace::GRBonusEntry*  entry) ;

constexpr ::GlobalNamespace::GRBonusSystem* const& __cordl_internal_get_bonusSystem() const;

constexpr ::GlobalNamespace::GRBonusSystem*& __cordl_internal_get_bonusSystem() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRAttributeType,int32_t>* const& __cordl_internal_get_defaultAttributes() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRAttributeType,int32_t>*& __cordl_internal_get_defaultAttributes() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRAttributes_GRAttributePair>* const& __cordl_internal_get_startingAttributes() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRAttributes_GRAttributePair>*& __cordl_internal_get_startingAttributes() ;

constexpr void __cordl_internal_set_bonusSystem(::GlobalNamespace::GRBonusSystem*  value) ;

constexpr void __cordl_internal_set_defaultAttributes(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRAttributeType,int32_t>*  value) ;

constexpr void __cordl_internal_set_startingAttributes(::System::Collections::Generic::List_1<::GlobalNamespace::GRAttributes_GRAttributePair>*  value) ;

/// @brief Method .ctor, addr 0x58714f4, size 0xbc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRAttributes() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRAttributes", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRAttributes(GRAttributes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRAttributes", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRAttributes(GRAttributes const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1882};

/// [SerializeField]
/// @brief Field startingAttributes, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GRAttributes_GRAttributePair>*  ___startingAttributes;

/// @brief Field bonusSystem, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::GRBonusSystem*  ___bonusSystem;

/// @brief Field defaultAttributes, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRAttributeType,int32_t>*  ___defaultAttributes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRAttributes, ___startingAttributes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAttributes, ___bonusSystem) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAttributes, ___defaultAttributes) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRAttributes) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
