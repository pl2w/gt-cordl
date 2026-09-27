#pragma once
// IWYU pragma private; include "GlobalNamespace/GRBonusSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GRBonusSystem)
namespace GlobalNamespace {
struct GRAttributeType;
}
namespace GlobalNamespace {
class GRAttributes;
}
namespace GlobalNamespace {
class GRBonusEntry;
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
class GRBonusSystem;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRBonusSystem*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRBonusSystem*, "", "GRBonusSystem");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRBonusSystem
class CORDL_TYPE GRBonusSystem : public ::System::Object {
public:
// Declarations
/// @brief Field currentAdditiveBonuses, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentAdditiveBonuses, put=__cordl_internal_set_currentAdditiveBonuses)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRAttributeType,::System::Collections::Generic::List_1<::GlobalNamespace::GRBonusEntry*>*>*  currentAdditiveBonuses;

/// @brief Field currentMultiplicativeBonuses, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentMultiplicativeBonuses, put=__cordl_internal_set_currentMultiplicativeBonuses)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRAttributeType,::System::Collections::Generic::List_1<::GlobalNamespace::GRBonusEntry*>*>*  currentMultiplicativeBonuses;

/// @brief Field defaultAttributes, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultAttributes, put=__cordl_internal_set_defaultAttributes)) ::UnityW<::GlobalNamespace::GRAttributes>  defaultAttributes;

/// @brief Method AddBonus, addr 0x58709a4, size 0x22c, virtual false, abstract: false, final false
inline void AddBonus(::GlobalNamespace::GRBonusEntry*  entry) ;

/// @brief Method CalculateFinalValueForAttribute, addr 0x5870e38, size 0x5b4, virtual false, abstract: false, final false
inline int32_t CalculateFinalValueForAttribute(::GlobalNamespace::GRAttributeType  attributeType) ;

/// @brief Method GetDefaultAttributes, addr 0x587345c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GRAttributes> GetDefaultAttributes() ;

/// @brief Method HasValueForAttribute, addr 0x587143c, size 0xb8, virtual false, abstract: false, final false
inline bool HasValueForAttribute(::GlobalNamespace::GRAttributeType  attributeType) ;

/// @brief Method Init, addr 0x5873454, size 0x8, virtual false, abstract: false, final false
inline void Init(::GlobalNamespace::GRAttributes*  attributes) ;

static inline ::GlobalNamespace::GRBonusSystem* New_ctor() ;

/// @brief Method RemoveBonus, addr 0x5870be4, size 0x254, virtual false, abstract: false, final false
inline void RemoveBonus(::GlobalNamespace::GRBonusEntry*  entry) ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRAttributeType,::System::Collections::Generic::List_1<::GlobalNamespace::GRBonusEntry*>*>* const& __cordl_internal_get_currentAdditiveBonuses() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRAttributeType,::System::Collections::Generic::List_1<::GlobalNamespace::GRBonusEntry*>*>*& __cordl_internal_get_currentAdditiveBonuses() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRAttributeType,::System::Collections::Generic::List_1<::GlobalNamespace::GRBonusEntry*>*>* const& __cordl_internal_get_currentMultiplicativeBonuses() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRAttributeType,::System::Collections::Generic::List_1<::GlobalNamespace::GRBonusEntry*>*>*& __cordl_internal_get_currentMultiplicativeBonuses() ;

constexpr ::UnityW<::GlobalNamespace::GRAttributes> const& __cordl_internal_get_defaultAttributes() const;

constexpr ::UnityW<::GlobalNamespace::GRAttributes>& __cordl_internal_get_defaultAttributes() ;

constexpr void __cordl_internal_set_currentAdditiveBonuses(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRAttributeType,::System::Collections::Generic::List_1<::GlobalNamespace::GRBonusEntry*>*>*  value) ;

constexpr void __cordl_internal_set_currentMultiplicativeBonuses(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRAttributeType,::System::Collections::Generic::List_1<::GlobalNamespace::GRBonusEntry*>*>*  value) ;

constexpr void __cordl_internal_set_defaultAttributes(::UnityW<::GlobalNamespace::GRAttributes>  value) ;

/// @brief Method .ctor, addr 0x58715b0, size 0xac, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRBonusSystem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRBonusSystem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRBonusSystem(GRBonusSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRBonusSystem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRBonusSystem(GRBonusSystem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1892};

/// @brief Field defaultAttributes, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRAttributes>  ___defaultAttributes;

/// @brief Field currentAdditiveBonuses, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRAttributeType,::System::Collections::Generic::List_1<::GlobalNamespace::GRBonusEntry*>*>*  ___currentAdditiveBonuses;

/// @brief Field currentMultiplicativeBonuses, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRAttributeType,::System::Collections::Generic::List_1<::GlobalNamespace::GRBonusEntry*>*>*  ___currentMultiplicativeBonuses;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRBonusSystem, ___defaultAttributes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBonusSystem, ___currentAdditiveBonuses) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBonusSystem, ___currentMultiplicativeBonuses) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRBonusSystem) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
