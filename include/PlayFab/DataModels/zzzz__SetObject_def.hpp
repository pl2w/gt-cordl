#pragma once
// IWYU pragma private; include "PlayFab/DataModels/SetObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SetObject)
namespace System {
class Object;
}
// Forward declare root types
namespace PlayFab::DataModels {
class SetObject;
}
// Write type traits
MARK_REF_T(::PlayFab::DataModels::SetObject*);
DEFINE_IL2CPP_CLASS(::PlayFab::DataModels::SetObject*, "PlayFab.DataModels", "SetObject");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel, System.Nullable`1<T>
namespace PlayFab::DataModels {
// Is value type: false
// CS Name: PlayFab.DataModels.SetObject
class CORDL_TYPE SetObject : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field DataObject, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_DataObject, put=__cordl_internal_set_DataObject)) ::System::Object*  DataObject;

/// @brief Field DeleteObject, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_DeleteObject, put=__cordl_internal_set_DeleteObject)) ::System::Nullable_1<bool>  DeleteObject;

/// @brief Field EscapedDataObject, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_EscapedDataObject, put=__cordl_internal_set_EscapedDataObject)) ::StringW  EscapedDataObject;

/// @brief Field ObjectName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ObjectName, put=__cordl_internal_set_ObjectName)) ::StringW  ObjectName;

static inline ::PlayFab::DataModels::SetObject* New_ctor() ;

constexpr ::System::Object* const& __cordl_internal_get_DataObject() const;

constexpr ::System::Object*& __cordl_internal_get_DataObject() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_DeleteObject() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_DeleteObject() ;

constexpr ::StringW const& __cordl_internal_get_EscapedDataObject() const;

constexpr ::StringW& __cordl_internal_get_EscapedDataObject() ;

constexpr ::StringW const& __cordl_internal_get_ObjectName() const;

constexpr ::StringW& __cordl_internal_get_ObjectName() ;

constexpr void __cordl_internal_set_DataObject(::System::Object*  value) ;

constexpr void __cordl_internal_set_DeleteObject(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set_EscapedDataObject(::StringW  value) ;

constexpr void __cordl_internal_set_ObjectName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa842eec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SetObject(SetObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetObject(SetObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19865};

/// @brief Field DataObject, offset: 0x10, size: 0x8, def value: None
 ::System::Object*  ___DataObject;

/// @brief Field DeleteObject, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ___DeleteObject;

/// @brief Field EscapedDataObject, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___EscapedDataObject;

/// @brief Field ObjectName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___ObjectName;

/// @brief Size padding 0x30 - 0x38 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::DataModels::SetObject, ___DataObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::DataModels::SetObject, ___DeleteObject) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::DataModels::SetObject, ___EscapedDataObject) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::DataModels::SetObject, ___ObjectName) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::DataModels::SetObject) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::DataModels
