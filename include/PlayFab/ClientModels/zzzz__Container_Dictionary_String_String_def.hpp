#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/Container_Dictionary_String_String.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Container_Dictionary_String_String)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class Container_Dictionary_String_String;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::Container_Dictionary_String_String*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::Container_Dictionary_String_String*, "PlayFab.ClientModels", "Container_Dictionary_String_String");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.Container_Dictionary_String_String
class CORDL_TYPE Container_Dictionary_String_String : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  Data;

static inline ::PlayFab::ClientModels::Container_Dictionary_String_String* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get_Data() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get_Data() ;

constexpr void __cordl_internal_set_Data(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

/// @brief Method .ctor, addr 0xa84db18, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Container_Dictionary_String_String() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Container_Dictionary_String_String", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Container_Dictionary_String_String(Container_Dictionary_String_String && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Container_Dictionary_String_String", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Container_Dictionary_String_String(Container_Dictionary_String_String const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19980};

/// @brief Field Data, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ___Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::Container_Dictionary_String_String, ___Data) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::Container_Dictionary_String_String) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
