#pragma once
// IWYU pragma private; include "GlobalNamespace/GRBonusEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRAttributeType_def.hpp"
#include "GlobalNamespace/zzzz__GRBonusEntry_GRBonusType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRBonusEntry)
namespace GlobalNamespace {
struct GRBonusEntry_GRBonusType;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
// Forward declare root types
namespace GlobalNamespace {
class GRBonusEntry;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRBonusEntry*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRBonusEntry*, "", "GRBonusEntry");
// Dependencies GRAttributeType, GRBonusEntry::GRBonusType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRBonusEntry
class CORDL_TYPE GRBonusEntry : public ::System::Object {
public:
// Declarations
using GRBonusType = ::GlobalNamespace::GRBonusEntry_GRBonusType;

/// @brief Field <id>k__BackingField, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__id_k__BackingField, put=__cordl_internal_set__id_k__BackingField)) int32_t  _id_k__BackingField;

/// @brief Field attributeType, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_attributeType, put=__cordl_internal_set_attributeType)) ::GlobalNamespace::GRAttributeType  attributeType;

/// @brief Field bonusType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_bonusType, put=__cordl_internal_set_bonusType)) ::GlobalNamespace::GRBonusEntry_GRBonusType  bonusType;

/// @brief Field bonusValue, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_bonusValue, put=__cordl_internal_set_bonusValue)) float_t  bonusValue;

/// @brief Field customBonus, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_customBonus, put=__cordl_internal_set_customBonus)) ::System::Func_3<int32_t,::GlobalNamespace::GRBonusEntry*,int32_t>*  customBonus;

 __declspec(property(get=get_id, put=set_id)) int32_t  id;

/// @brief Field idCounter, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_idCounter, put=setStaticF_idCounter)) int32_t  idCounter;

/// @brief Method GetBonusValue, addr 0x58731dc, size 0x2c, virtual false, abstract: false, final false
inline int32_t GetBonusValue() ;

static inline ::GlobalNamespace::GRBonusEntry* New_ctor() ;

/// @brief Method ToString, addr 0x5873208, size 0x24c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get__id_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__id_k__BackingField() ;

constexpr ::GlobalNamespace::GRAttributeType const& __cordl_internal_get_attributeType() const;

constexpr ::GlobalNamespace::GRAttributeType& __cordl_internal_get_attributeType() ;

constexpr ::GlobalNamespace::GRBonusEntry_GRBonusType const& __cordl_internal_get_bonusType() const;

constexpr ::GlobalNamespace::GRBonusEntry_GRBonusType& __cordl_internal_get_bonusType() ;

constexpr float_t const& __cordl_internal_get_bonusValue() const;

constexpr float_t& __cordl_internal_get_bonusValue() ;

constexpr ::System::Func_3<int32_t,::GlobalNamespace::GRBonusEntry*,int32_t>* const& __cordl_internal_get_customBonus() const;

constexpr ::System::Func_3<int32_t,::GlobalNamespace::GRBonusEntry*,int32_t>*& __cordl_internal_get_customBonus() ;

constexpr void __cordl_internal_set__id_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_attributeType(::GlobalNamespace::GRAttributeType  value) ;

constexpr void __cordl_internal_set_bonusType(::GlobalNamespace::GRBonusEntry_GRBonusType  value) ;

constexpr void __cordl_internal_set_bonusValue(float_t  value) ;

constexpr void __cordl_internal_set_customBonus(::System::Func_3<int32_t,::GlobalNamespace::GRBonusEntry*,int32_t>*  value) ;

/// @brief Method .ctor, addr 0x5873168, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_idCounter() ;

/// [CompilerGenerated]
/// @brief Method get_id, addr 0x58731cc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_id() ;

static inline void setStaticF_idCounter(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_id, addr 0x58731d4, size 0x8, virtual false, abstract: false, final false
inline void set_id(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRBonusEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRBonusEntry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRBonusEntry(GRBonusEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRBonusEntry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRBonusEntry(GRBonusEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1891};

/// @brief Field bonusType, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::GRBonusEntry_GRBonusType  ___bonusType;

/// @brief Field attributeType, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::GRAttributeType  ___attributeType;

/// [SerializeField]
/// @brief Field bonusValue, offset: 0x18, size: 0x4, def value: None
 float_t  ___bonusValue;

/// [CompilerGenerated]
/// @brief Field <id>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____id_k__BackingField;

/// @brief Field customBonus, offset: 0x20, size: 0x8, def value: None
 ::System::Func_3<int32_t,::GlobalNamespace::GRBonusEntry*,int32_t>*  ___customBonus;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRBonusEntry, ___bonusType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBonusEntry, ___attributeType) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBonusEntry, ___bonusValue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBonusEntry, ____id_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBonusEntry, ___customBonus) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRBonusEntry) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
