#pragma once
// IWYU pragma private; include "KID/Model/AgeRangeV2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AgeRangeV2)
namespace System {
struct Decimal;
}
// Forward declare root types
namespace KID::Model {
class AgeRangeV2;
}
// Write type traits
MARK_REF_T(::KID::Model::AgeRangeV2*);
DEFINE_IL2CPP_CLASS(::KID::Model::AgeRangeV2*, "KID.Model", "AgeRangeV2");
// [DataContract(Name = "AgeRangeV2")]
// Dependencies System.Decimal, System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.AgeRangeV2
class CORDL_TYPE AgeRangeV2 : public ::System::Object {
public:
// Declarations
/// @brief [DataMember(Name = "confidence", EmitDefaultValue = false)]
 __declspec(property(get=get_Confidence, put=set_Confidence)) ::System::Decimal  Confidence;

/// @brief [DataMember(Name = "high", EmitDefaultValue = false)]
 __declspec(property(get=get_High, put=set_High)) int32_t  High;

/// @brief [DataMember(Name = "low", EmitDefaultValue = false)]
 __declspec(property(get=get_Low, put=set_Low)) int32_t  Low;

/// @brief Field <Confidence>k__BackingField, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get__Confidence_k__BackingField, put=__cordl_internal_set__Confidence_k__BackingField)) ::System::Decimal  _Confidence_k__BackingField;

/// @brief Field <High>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__High_k__BackingField, put=__cordl_internal_set__High_k__BackingField)) int32_t  _High_k__BackingField;

/// @brief Field <Low>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Low_k__BackingField, put=__cordl_internal_set__Low_k__BackingField)) int32_t  _Low_k__BackingField;

static inline ::KID::Model::AgeRangeV2* New_ctor(int32_t  low, int32_t  high, /* [DecimalConstant(0, 0, 0, 0, 0)] */ ::System::Decimal  confidence) ;

/// @brief Method ToJson, addr 0x9cd3528, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cd3390, size 0x198, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Decimal const& __cordl_internal_get__Confidence_k__BackingField() const;

constexpr ::System::Decimal& __cordl_internal_get__Confidence_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__High_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__High_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Low_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Low_k__BackingField() ;

constexpr void __cordl_internal_set__Confidence_k__BackingField(::System::Decimal  value) ;

constexpr void __cordl_internal_set__High_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Low_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x9cd331c, size 0x40, virtual false, abstract: false, final false
inline void _ctor(int32_t  low, int32_t  high, /* [DecimalConstant(0, 0, 0, 0, 0)] */ ::System::Decimal  confidence) ;

/// [CompilerGenerated]
/// @brief Method get_Confidence, addr 0x9cd337c, size 0xc, virtual false, abstract: false, final false
inline ::System::Decimal get_Confidence() ;

/// [CompilerGenerated]
/// @brief Method get_High, addr 0x9cd336c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_High() ;

/// [CompilerGenerated]
/// @brief Method get_Low, addr 0x9cd335c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Low() ;

/// [CompilerGenerated]
/// @brief Method set_Confidence, addr 0x9cd3388, size 0x8, virtual false, abstract: false, final false
inline void set_Confidence(::System::Decimal  value) ;

/// [CompilerGenerated]
/// @brief Method set_High, addr 0x9cd3374, size 0x8, virtual false, abstract: false, final false
inline void set_High(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Low, addr 0x9cd3364, size 0x8, virtual false, abstract: false, final false
inline void set_Low(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AgeRangeV2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AgeRangeV2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AgeRangeV2(AgeRangeV2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AgeRangeV2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AgeRangeV2(AgeRangeV2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31057};

/// [CompilerGenerated]
/// @brief Field <Low>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____Low_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <High>k__BackingField, offset: 0x14, size: 0x4, def value: None
 int32_t  ____High_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Confidence>k__BackingField, offset: 0x18, size: 0x10, def value: None
 ::System::Decimal  ____Confidence_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::AgeRangeV2, ____Low_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::KID::Model::AgeRangeV2, ____High_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::KID::Model::AgeRangeV2, ____Confidence_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::KID::Model::AgeRangeV2) == 0x28, "Size mismatch!");

} // namespace end def KID::Model
