#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/EntityDataObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(EntityDataObject)
namespace System {
class Object;
}
// Forward declare root types
namespace PlayFab::ProfilesModels {
class EntityDataObject;
}
// Write type traits
MARK_REF_T(::PlayFab::ProfilesModels::EntityDataObject*);
DEFINE_IL2CPP_CLASS(::PlayFab::ProfilesModels::EntityDataObject*, "PlayFab.ProfilesModels", "EntityDataObject");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ProfilesModels {
// Is value type: false
// CS Name: PlayFab.ProfilesModels.EntityDataObject
class CORDL_TYPE EntityDataObject : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field DataObject, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_DataObject, put=__cordl_internal_set_DataObject)) ::System::Object*  DataObject;

/// @brief Field EscapedDataObject, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_EscapedDataObject, put=__cordl_internal_set_EscapedDataObject)) ::StringW  EscapedDataObject;

/// @brief Field ObjectName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ObjectName, put=__cordl_internal_set_ObjectName)) ::StringW  ObjectName;

static inline ::PlayFab::ProfilesModels::EntityDataObject* New_ctor() ;

constexpr ::System::Object* const& __cordl_internal_get_DataObject() const;

constexpr ::System::Object*& __cordl_internal_get_DataObject() ;

constexpr ::StringW const& __cordl_internal_get_EscapedDataObject() const;

constexpr ::StringW& __cordl_internal_get_EscapedDataObject() ;

constexpr ::StringW const& __cordl_internal_get_ObjectName() const;

constexpr ::StringW& __cordl_internal_get_ObjectName() ;

constexpr void __cordl_internal_set_DataObject(::System::Object*  value) ;

constexpr void __cordl_internal_set_EscapedDataObject(::StringW  value) ;

constexpr void __cordl_internal_set_ObjectName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa8406e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EntityDataObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EntityDataObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EntityDataObject(EntityDataObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EntityDataObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EntityDataObject(EntityDataObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19558};

/// @brief Field DataObject, offset: 0x10, size: 0x8, def value: None
 ::System::Object*  ___DataObject;

/// @brief Field EscapedDataObject, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___EscapedDataObject;

/// @brief Field ObjectName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___ObjectName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ProfilesModels::EntityDataObject, ___DataObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::EntityDataObject, ___EscapedDataObject) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::EntityDataObject, ___ObjectName) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ProfilesModels::EntityDataObject) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ProfilesModels
