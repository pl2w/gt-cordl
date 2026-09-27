#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDDefaultSession.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "KID/Model/zzzz__AgeStatusType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KIDDefaultSession)
namespace KID::Model {
struct AgeStatusType;
}
namespace KID::Model {
class Permission;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class KIDDefaultSession;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDDefaultSession*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDDefaultSession*, "", "KIDDefaultSession");
// Dependencies KID.Model.AgeStatusType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDDefaultSession
class CORDL_TYPE KIDDefaultSession : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Age, put=set_Age)) int32_t  Age;

 __declspec(property(get=get_AgeStatus, put=set_AgeStatus)) ::KID::Model::AgeStatusType  AgeStatus;

 __declspec(property(get=get_Permissions, put=set_Permissions)) ::System::Collections::Generic::List_1<::KID::Model::Permission*>*  Permissions;

/// @brief Field <AgeStatus>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__AgeStatus_k__BackingField, put=__cordl_internal_set__AgeStatus_k__BackingField)) ::KID::Model::AgeStatusType  _AgeStatus_k__BackingField;

/// @brief Field <Age>k__BackingField, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Age_k__BackingField, put=__cordl_internal_set__Age_k__BackingField)) int32_t  _Age_k__BackingField;

/// @brief Field <Permissions>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Permissions_k__BackingField, put=__cordl_internal_set__Permissions_k__BackingField)) ::System::Collections::Generic::List_1<::KID::Model::Permission*>*  _Permissions_k__BackingField;

static inline ::GlobalNamespace::KIDDefaultSession* New_ctor() ;

constexpr ::KID::Model::AgeStatusType const& __cordl_internal_get__AgeStatus_k__BackingField() const;

constexpr ::KID::Model::AgeStatusType& __cordl_internal_get__AgeStatus_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__Age_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Age_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::KID::Model::Permission*>* const& __cordl_internal_get__Permissions_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::KID::Model::Permission*>*& __cordl_internal_get__Permissions_k__BackingField() ;

constexpr void __cordl_internal_set__AgeStatus_k__BackingField(::KID::Model::AgeStatusType  value) ;

constexpr void __cordl_internal_set__Age_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Permissions_k__BackingField(::System::Collections::Generic::List_1<::KID::Model::Permission*>*  value) ;

/// @brief Method .ctor, addr 0x5a26104, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Age, addr 0x5a260f4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Age() ;

/// [CompilerGenerated]
/// @brief Method get_AgeStatus, addr 0x5a260e4, size 0x8, virtual false, abstract: false, final false
inline ::KID::Model::AgeStatusType get_AgeStatus() ;

/// [CompilerGenerated]
/// @brief Method get_Permissions, addr 0x5a260d4, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::KID::Model::Permission*>* get_Permissions() ;

/// [CompilerGenerated]
/// @brief Method set_Age, addr 0x5a260fc, size 0x8, virtual false, abstract: false, final false
inline void set_Age(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_AgeStatus, addr 0x5a260ec, size 0x8, virtual false, abstract: false, final false
inline void set_AgeStatus(::KID::Model::AgeStatusType  value) ;

/// [CompilerGenerated]
/// @brief Method set_Permissions, addr 0x5a260dc, size 0x8, virtual false, abstract: false, final false
inline void set_Permissions(::System::Collections::Generic::List_1<::KID::Model::Permission*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDDefaultSession() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDDefaultSession", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDDefaultSession(KIDDefaultSession && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDDefaultSession", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDDefaultSession(KIDDefaultSession const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2864};

/// [CompilerGenerated]
/// @brief Field <Permissions>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::KID::Model::Permission*>*  ____Permissions_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AgeStatus>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::KID::Model::AgeStatusType  ____AgeStatus_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Age>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____Age_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDDefaultSession, ____Permissions_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDDefaultSession, ____AgeStatus_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDDefaultSession, ____Age_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDDefaultSession) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
