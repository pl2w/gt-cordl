#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Info/WitTraitInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Data/Info/zzzz__WitTraitValueInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WitTraitInfo)
// Forward declare root types
namespace Meta::WitAi::Data::Info {
class WitTraitInfo;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Data::Info::WitTraitInfo*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Data::Info::WitTraitInfo*, "Meta.WitAi.Data.Info", "WitTraitInfo");
// Dependencies Meta.WitAi.Data.Info.WitTraitValueInfo, System.Object
namespace Meta::WitAi::Data::Info {
// Is value type: false
// CS Name: Meta.WitAi.Data.Info.WitTraitInfo
class CORDL_TYPE WitTraitInfo : public ::System::Object {
public:
// Declarations
/// @brief Field id, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) ::StringW  id;

/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field values, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_values, put=__cordl_internal_set_values)) ::ArrayW<::Meta::WitAi::Data::Info::WitTraitValueInfo>  values;

static inline ::Meta::WitAi::Data::Info::WitTraitInfo* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_id() const;

constexpr ::StringW& __cordl_internal_get_id() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr ::ArrayW<::Meta::WitAi::Data::Info::WitTraitValueInfo> const& __cordl_internal_get_values() const;

constexpr ::ArrayW<::Meta::WitAi::Data::Info::WitTraitValueInfo>& __cordl_internal_get_values() ;

constexpr void __cordl_internal_set_id(::StringW  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_values(::ArrayW<::Meta::WitAi::Data::Info::WitTraitValueInfo>  value) ;

/// @brief Method .ctor, addr 0x9e47d88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitTraitInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitTraitInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitTraitInfo(WitTraitInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitTraitInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitTraitInfo(WitTraitInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31045};

/// [SerializeField]
/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

/// [SerializeField]
/// @brief Field id, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___id;

/// [SerializeField]
/// @brief Field values, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::Meta::WitAi::Data::Info::WitTraitValueInfo>  ___values;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Data::Info::WitTraitInfo, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Info::WitTraitInfo, ___id) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::Info::WitTraitInfo, ___values) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Data::Info::WitTraitInfo) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi::Data::Info
