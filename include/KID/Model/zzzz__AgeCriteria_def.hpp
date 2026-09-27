#pragma once
// IWYU pragma private; include "KID/Model/AgeCriteria.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "KID/Model/zzzz__AgeCategory_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AgeCriteria)
namespace KID::Model {
struct AgeCategory;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace KID::Model {
class AgeCriteria;
}
// Write type traits
MARK_REF_T(::KID::Model::AgeCriteria*);
DEFINE_IL2CPP_CLASS(::KID::Model::AgeCriteria*, "KID.Model", "AgeCriteria");
// [DataContract(Name = "AgeCriteria")]
// Dependencies KID.Model.AgeCategory, System.Nullable`1<T>, System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.AgeCriteria
class CORDL_TYPE AgeCriteria : public ::System::Object {
public:
// Declarations
/// @brief [DataMember(Name = "age", EmitDefaultValue = false)]
 __declspec(property(get=get_Age, put=set_Age)) int32_t  Age;

/// @brief [DataMember(Name = "ageCategory", EmitDefaultValue = false)]
 __declspec(property(get=get_AgeCategory, put=set_AgeCategory)) ::System::Nullable_1<::KID::Model::AgeCategory>  AgeCategory;

/// @brief Field <AgeCategory>k__BackingField, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get__AgeCategory_k__BackingField, put=__cordl_internal_set__AgeCategory_k__BackingField)) ::System::Nullable_1<::KID::Model::AgeCategory>  _AgeCategory_k__BackingField;

/// @brief Field <Age>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__Age_k__BackingField, put=__cordl_internal_set__Age_k__BackingField)) int32_t  _Age_k__BackingField;

static inline ::KID::Model::AgeCriteria* New_ctor(int32_t  age, ::System::Nullable_1<::KID::Model::AgeCategory>  ageCategory) ;

/// @brief Method ToJson, addr 0x9cd3058, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cd2ec8, size 0x190, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Nullable_1<::KID::Model::AgeCategory> const& __cordl_internal_get__AgeCategory_k__BackingField() const;

constexpr ::System::Nullable_1<::KID::Model::AgeCategory>& __cordl_internal_get__AgeCategory_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Age_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Age_k__BackingField() ;

constexpr void __cordl_internal_set__AgeCategory_k__BackingField(::System::Nullable_1<::KID::Model::AgeCategory>  value) ;

constexpr void __cordl_internal_set__Age_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x9cd2e88, size 0x30, virtual false, abstract: false, final false
inline void _ctor(int32_t  age, ::System::Nullable_1<::KID::Model::AgeCategory>  ageCategory) ;

/// [CompilerGenerated]
/// @brief Method get_Age, addr 0x9cd2eb8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Age() ;

/// [CompilerGenerated]
/// @brief Method get_AgeCategory, addr 0x9cd2e78, size 0x8, virtual false, abstract: false, final false
inline ::System::Nullable_1<::KID::Model::AgeCategory> get_AgeCategory() ;

/// [CompilerGenerated]
/// @brief Method set_Age, addr 0x9cd2ec0, size 0x8, virtual false, abstract: false, final false
inline void set_Age(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_AgeCategory, addr 0x9cd2e80, size 0x8, virtual false, abstract: false, final false
inline void set_AgeCategory(::System::Nullable_1<::KID::Model::AgeCategory>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AgeCriteria() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AgeCriteria", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AgeCriteria(AgeCriteria && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AgeCriteria", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AgeCriteria(AgeCriteria const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31055};

/// [CompilerGenerated]
/// @brief Field <AgeCategory>k__BackingField, offset: 0x10, size: 0x10, def value: None
 ::System::Nullable_1<::KID::Model::AgeCategory>  ____AgeCategory_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Age>k__BackingField, offset: 0x20, size: 0x4, def value: None
 int32_t  ____Age_k__BackingField;

/// @brief Size padding 0x20 - 0x28 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::AgeCriteria, ____AgeCategory_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::KID::Model::AgeCriteria, ____Age_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::KID::Model::AgeCriteria) == 0x20, "Size mismatch!");

} // namespace end def KID::Model
