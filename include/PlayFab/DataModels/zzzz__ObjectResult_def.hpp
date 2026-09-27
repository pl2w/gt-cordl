#pragma once
// IWYU pragma private; include "PlayFab/DataModels/ObjectResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ObjectResult)
namespace System {
class Object;
}
// Forward declare root types
namespace PlayFab::DataModels {
class ObjectResult;
}
// Write type traits
MARK_REF_T(::PlayFab::DataModels::ObjectResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::DataModels::ObjectResult*, "PlayFab.DataModels", "ObjectResult");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::DataModels {
// Is value type: false
// CS Name: PlayFab.DataModels.ObjectResult
class CORDL_TYPE ObjectResult : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field DataObject, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_DataObject, put=__cordl_internal_set_DataObject)) ::System::Object*  DataObject;

/// @brief Field EscapedDataObject, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_EscapedDataObject, put=__cordl_internal_set_EscapedDataObject)) ::StringW  EscapedDataObject;

/// @brief Field ObjectName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ObjectName, put=__cordl_internal_set_ObjectName)) ::StringW  ObjectName;

static inline ::PlayFab::DataModels::ObjectResult* New_ctor() ;

constexpr ::System::Object* const& __cordl_internal_get_DataObject() const;

constexpr ::System::Object*& __cordl_internal_get_DataObject() ;

constexpr ::StringW const& __cordl_internal_get_EscapedDataObject() const;

constexpr ::StringW& __cordl_internal_get_EscapedDataObject() ;

constexpr ::StringW const& __cordl_internal_get_ObjectName() const;

constexpr ::StringW& __cordl_internal_get_ObjectName() ;

constexpr void __cordl_internal_set_DataObject(::System::Object*  value) ;

constexpr void __cordl_internal_set_EscapedDataObject(::StringW  value) ;

constexpr void __cordl_internal_set_ObjectName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa842ee4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectResult(ObjectResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectResult(ObjectResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19863};

/// @brief Field DataObject, offset: 0x10, size: 0x8, def value: None
 ::System::Object*  ___DataObject;

/// @brief Field EscapedDataObject, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___EscapedDataObject;

/// @brief Field ObjectName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___ObjectName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::DataModels::ObjectResult, ___DataObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::DataModels::ObjectResult, ___EscapedDataObject) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::DataModels::ObjectResult, ___ObjectName) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::DataModels::ObjectResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::DataModels
