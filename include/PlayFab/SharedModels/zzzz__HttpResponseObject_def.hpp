#pragma once
// IWYU pragma private; include "PlayFab/SharedModels/HttpResponseObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpResponseObject)
namespace System {
class Object;
}
// Forward declare root types
namespace PlayFab::SharedModels {
class HttpResponseObject;
}
// Write type traits
MARK_REF_T(::PlayFab::SharedModels::HttpResponseObject*);
DEFINE_IL2CPP_CLASS(::PlayFab::SharedModels::HttpResponseObject*, "PlayFab.SharedModels", "HttpResponseObject");
// Dependencies System.Object
namespace PlayFab::SharedModels {
// Is value type: false
// CS Name: PlayFab.SharedModels.HttpResponseObject
class CORDL_TYPE HttpResponseObject : public ::System::Object {
public:
// Declarations
/// @brief Field code, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_code, put=__cordl_internal_set_code)) int32_t  code;

/// @brief Field data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::System::Object*  data;

/// @brief Field status, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_status, put=__cordl_internal_set_status)) ::StringW  status;

static inline ::PlayFab::SharedModels::HttpResponseObject* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_code() const;

constexpr int32_t& __cordl_internal_get_code() ;

constexpr ::System::Object* const& __cordl_internal_get_data() const;

constexpr ::System::Object*& __cordl_internal_get_data() ;

constexpr ::StringW const& __cordl_internal_get_status() const;

constexpr ::StringW& __cordl_internal_get_status() ;

constexpr void __cordl_internal_set_code(int32_t  value) ;

constexpr void __cordl_internal_set_data(::System::Object*  value) ;

constexpr void __cordl_internal_set_status(::StringW  value) ;

/// @brief Method .ctor, addr 0xa7dee44, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpResponseObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpResponseObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpResponseObject(HttpResponseObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpResponseObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpResponseObject(HttpResponseObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19529};

/// @brief Field code, offset: 0x10, size: 0x4, def value: None
 int32_t  ___code;

/// @brief Field status, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___status;

/// @brief Field data, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ___data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::SharedModels::HttpResponseObject, ___code) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::SharedModels::HttpResponseObject, ___status) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::SharedModels::HttpResponseObject, ___data) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::SharedModels::HttpResponseObject) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::SharedModels
