#pragma once
// IWYU pragma private; include "KID/Model/AgeRange.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AgeRange)
namespace System {
struct Decimal;
}
// Forward declare root types
namespace KID::Model {
class AgeRange;
}
// Write type traits
MARK_REF_T(::KID::Model::AgeRange*);
DEFINE_IL2CPP_CLASS(::KID::Model::AgeRange*, "KID.Model", "AgeRange");
// [DataContract(Name = "AgeRange")]
// Dependencies System.Decimal, System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.AgeRange
class CORDL_TYPE AgeRange : public ::System::Object {
public:
// Declarations
/// @brief [DataMember(Name = "confidence", EmitDefaultValue = false)]
 __declspec(property(get=get_Confidence, put=set_Confidence)) ::System::Decimal  Confidence;

/// @brief [DataMember(Name = "maxAge", EmitDefaultValue = false)]
 __declspec(property(get=get_MaxAge, put=set_MaxAge)) int32_t  MaxAge;

/// @brief [DataMember(Name = "minAge", EmitDefaultValue = false)]
 __declspec(property(get=get_MinAge, put=set_MinAge)) int32_t  MinAge;

/// @brief Field <Confidence>k__BackingField, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get__Confidence_k__BackingField, put=__cordl_internal_set__Confidence_k__BackingField)) ::System::Decimal  _Confidence_k__BackingField;

/// @brief Field <MaxAge>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaxAge_k__BackingField, put=__cordl_internal_set__MaxAge_k__BackingField)) int32_t  _MaxAge_k__BackingField;

/// @brief Field <MinAge>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__MinAge_k__BackingField, put=__cordl_internal_set__MinAge_k__BackingField)) int32_t  _MinAge_k__BackingField;

static inline ::KID::Model::AgeRange* New_ctor(int32_t  minAge, int32_t  maxAge, /* [DecimalConstant(0, 0, 0, 0, 0)] */ ::System::Decimal  confidence) ;

/// @brief Method ToJson, addr 0x9cd32c0, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cd3128, size 0x198, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Decimal const& __cordl_internal_get__Confidence_k__BackingField() const;

constexpr ::System::Decimal& __cordl_internal_get__Confidence_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__MaxAge_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__MaxAge_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__MinAge_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__MinAge_k__BackingField() ;

constexpr void __cordl_internal_set__Confidence_k__BackingField(::System::Decimal  value) ;

constexpr void __cordl_internal_set__MaxAge_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__MinAge_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x9cd30b4, size 0x40, virtual false, abstract: false, final false
inline void _ctor(int32_t  minAge, int32_t  maxAge, /* [DecimalConstant(0, 0, 0, 0, 0)] */ ::System::Decimal  confidence) ;

/// [CompilerGenerated]
/// @brief Method get_Confidence, addr 0x9cd3114, size 0xc, virtual false, abstract: false, final false
inline ::System::Decimal get_Confidence() ;

/// [CompilerGenerated]
/// @brief Method get_MaxAge, addr 0x9cd3104, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MaxAge() ;

/// [CompilerGenerated]
/// @brief Method get_MinAge, addr 0x9cd30f4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MinAge() ;

/// [CompilerGenerated]
/// @brief Method set_Confidence, addr 0x9cd3120, size 0x8, virtual false, abstract: false, final false
inline void set_Confidence(::System::Decimal  value) ;

/// [CompilerGenerated]
/// @brief Method set_MaxAge, addr 0x9cd310c, size 0x8, virtual false, abstract: false, final false
inline void set_MaxAge(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_MinAge, addr 0x9cd30fc, size 0x8, virtual false, abstract: false, final false
inline void set_MinAge(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AgeRange() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AgeRange", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AgeRange(AgeRange && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AgeRange", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AgeRange(AgeRange const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31056};

/// [CompilerGenerated]
/// @brief Field <MinAge>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____MinAge_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MaxAge>k__BackingField, offset: 0x14, size: 0x4, def value: None
 int32_t  ____MaxAge_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Confidence>k__BackingField, offset: 0x18, size: 0x10, def value: None
 ::System::Decimal  ____Confidence_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::AgeRange, ____MinAge_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::KID::Model::AgeRange, ____MaxAge_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::KID::Model::AgeRange, ____Confidence_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::KID::Model::AgeRange) == 0x28, "Size mismatch!");

} // namespace end def KID::Model
