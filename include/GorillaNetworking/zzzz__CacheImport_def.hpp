#pragma once
// IWYU pragma private; include "GorillaNetworking/CacheImport.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CacheImport)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GorillaNetworking {
class CacheImport;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::CacheImport*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CacheImport*, "GorillaNetworking", "CacheImport");
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CacheImport
class CORDL_TYPE CacheImport : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_DeploymentId, put=set_DeploymentId)) ::StringW  DeploymentId;

 __declspec(property(get=get_TitleData, put=set_TitleData)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*  TitleData;

/// @brief Field <DeploymentId>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__DeploymentId_k__BackingField, put=__cordl_internal_set__DeploymentId_k__BackingField)) ::StringW  _DeploymentId_k__BackingField;

/// @brief Field <TitleData>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__TitleData_k__BackingField, put=__cordl_internal_set__TitleData_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*  _TitleData_k__BackingField;

static inline ::GorillaNetworking::CacheImport* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__DeploymentId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__DeploymentId_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>* const& __cordl_internal_get__TitleData_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*& __cordl_internal_get__TitleData_k__BackingField() ;

constexpr void __cordl_internal_set__DeploymentId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__TitleData_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*  value) ;

/// @brief Method .ctor, addr 0x5c9c14c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_DeploymentId, addr 0x5c9df70, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_DeploymentId() ;

/// [CompilerGenerated]
/// @brief Method get_TitleData, addr 0x5c9df80, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>* get_TitleData() ;

/// [CompilerGenerated]
/// @brief Method set_DeploymentId, addr 0x5c9df78, size 0x8, virtual false, abstract: false, final false
inline void set_DeploymentId(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_TitleData, addr 0x5c9df88, size 0x8, virtual false, abstract: false, final false
inline void set_TitleData(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CacheImport() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CacheImport", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CacheImport(CacheImport && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CacheImport", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CacheImport(CacheImport const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4400};

/// [CompilerGenerated]
/// @brief Field <DeploymentId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____DeploymentId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <TitleData>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*  ____TitleData_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::CacheImport, ____DeploymentId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CacheImport, ____TitleData_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::CacheImport) == 0x20, "Size mismatch!");

} // namespace end def GorillaNetworking
