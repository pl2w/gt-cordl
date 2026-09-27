#pragma once
// IWYU pragma private; include "GlobalNamespace/TMPPermission.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ManagedBy_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TMPPermission)
namespace GlobalNamespace {
struct ManagedBy;
}
// Forward declare root types
namespace GlobalNamespace {
class TMPPermission;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TMPPermission*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TMPPermission*, "", "TMPPermission");
// Dependencies ManagedBy, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TMPPermission
class CORDL_TYPE TMPPermission : public ::System::Object {
public:
// Declarations
/// @brief [JsonProperty("enabled")]
 __declspec(property(get=get_Enabled, put=set_Enabled)) bool  Enabled;

/// @brief [JsonProperty("managedBy")]
 __declspec(property(get=get_ManagedBy, put=set_ManagedBy)) ::GlobalNamespace::ManagedBy  ManagedBy;

/// @brief [JsonProperty("name")]
 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

/// @brief Field <Enabled>k__BackingField, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__Enabled_k__BackingField, put=__cordl_internal_set__Enabled_k__BackingField)) bool  _Enabled_k__BackingField;

/// @brief Field <ManagedBy>k__BackingField, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__ManagedBy_k__BackingField, put=__cordl_internal_set__ManagedBy_k__BackingField)) ::GlobalNamespace::ManagedBy  _ManagedBy_k__BackingField;

/// @brief Field <Name>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Name_k__BackingField, put=__cordl_internal_set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

static inline ::GlobalNamespace::TMPPermission* New_ctor() ;

constexpr bool const& __cordl_internal_get__Enabled_k__BackingField() const;

constexpr bool& __cordl_internal_get__Enabled_k__BackingField() ;

constexpr ::GlobalNamespace::ManagedBy const& __cordl_internal_get__ManagedBy_k__BackingField() const;

constexpr ::GlobalNamespace::ManagedBy& __cordl_internal_get__ManagedBy_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Name_k__BackingField() ;

constexpr void __cordl_internal_set__Enabled_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__ManagedBy_k__BackingField(::GlobalNamespace::ManagedBy  value) ;

constexpr void __cordl_internal_set__Name_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x5a2613c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Enabled, addr 0x5a2611c, size 0x8, virtual false, abstract: false, final false
inline bool get_Enabled() ;

/// [CompilerGenerated]
/// @brief Method get_ManagedBy, addr 0x5a2612c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::ManagedBy get_ManagedBy() ;

/// [CompilerGenerated]
/// @brief Method get_Name, addr 0x5a2610c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// [CompilerGenerated]
/// @brief Method set_Enabled, addr 0x5a26124, size 0x8, virtual false, abstract: false, final false
inline void set_Enabled(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_ManagedBy, addr 0x5a26134, size 0x8, virtual false, abstract: false, final false
inline void set_ManagedBy(::GlobalNamespace::ManagedBy  value) ;

/// [CompilerGenerated]
/// @brief Method set_Name, addr 0x5a26114, size 0x8, virtual false, abstract: false, final false
inline void set_Name(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TMPPermission() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TMPPermission", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TMPPermission(TMPPermission && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TMPPermission", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TMPPermission(TMPPermission const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2873};

/// [CompilerGenerated]
/// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Name_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Enabled>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  ____Enabled_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ManagedBy>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::ManagedBy  ____ManagedBy_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TMPPermission, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TMPPermission, ____Enabled_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TMPPermission, ____ManagedBy_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TMPPermission) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
