#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/CollectionFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
CORDL_MODULE_EXPORT(CollectionFilter)
namespace PlayFab::ClientModels {
class Container_Dictionary_String_String;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class CollectionFilter;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::CollectionFilter*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::CollectionFilter*, "PlayFab.ClientModels", "CollectionFilter");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.CollectionFilter
class CORDL_TYPE CollectionFilter : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Excludes, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Excludes, put=__cordl_internal_set_Excludes)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::Container_Dictionary_String_String*>*  Excludes;

/// @brief Field Includes, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Includes, put=__cordl_internal_set_Includes)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::Container_Dictionary_String_String*>*  Includes;

static inline ::PlayFab::ClientModels::CollectionFilter* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::Container_Dictionary_String_String*>* const& __cordl_internal_get_Excludes() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::Container_Dictionary_String_String*>*& __cordl_internal_get_Excludes() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::Container_Dictionary_String_String*>* const& __cordl_internal_get_Includes() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::Container_Dictionary_String_String*>*& __cordl_internal_get_Includes() ;

constexpr void __cordl_internal_set_Excludes(::System::Collections::Generic::List_1<::PlayFab::ClientModels::Container_Dictionary_String_String*>*  value) ;

constexpr void __cordl_internal_set_Includes(::System::Collections::Generic::List_1<::PlayFab::ClientModels::Container_Dictionary_String_String*>*  value) ;

/// @brief Method .ctor, addr 0xa84dac8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CollectionFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CollectionFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CollectionFilter(CollectionFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CollectionFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CollectionFilter(CollectionFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19970};

/// @brief Field Excludes, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::Container_Dictionary_String_String*>*  ___Excludes;

/// @brief Field Includes, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::Container_Dictionary_String_String*>*  ___Includes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::CollectionFilter, ___Excludes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::CollectionFilter, ___Includes) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::CollectionFilter) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
