#pragma once
// IWYU pragma private; include "GorillaNetworking/CreditsSection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CreditsSection)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GorillaNetworking {
class CreditsSection;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::CreditsSection*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::CreditsSection*, "GorillaNetworking", "CreditsSection");
// Dependencies System.Object
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.CreditsSection
class CORDL_TYPE CreditsSection : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Entries, put=set_Entries)) ::System::Collections::Generic::List_1<::StringW>*  Entries;

 __declspec(property(get=get_Title, put=set_Title)) ::StringW  Title;

/// @brief Field <Entries>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Entries_k__BackingField, put=__cordl_internal_set__Entries_k__BackingField)) ::System::Collections::Generic::List_1<::StringW>*  _Entries_k__BackingField;

/// @brief Field <Title>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Title_k__BackingField, put=__cordl_internal_set__Title_k__BackingField)) ::StringW  _Title_k__BackingField;

static inline ::GorillaNetworking::CreditsSection* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__Entries_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__Entries_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Title_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Title_k__BackingField() ;

constexpr void __cordl_internal_set__Entries_k__BackingField(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__Title_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x5c725e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Entries, addr 0x5c725d4, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* get_Entries() ;

/// [CompilerGenerated]
/// @brief Method get_Title, addr 0x5c725c4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Title() ;

/// [CompilerGenerated]
/// @brief Method set_Entries, addr 0x5c725dc, size 0x8, virtual false, abstract: false, final false
inline void set_Entries(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Title, addr 0x5c725cc, size 0x8, virtual false, abstract: false, final false
inline void set_Title(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CreditsSection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CreditsSection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CreditsSection(CreditsSection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreditsSection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreditsSection(CreditsSection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4316};

/// [CompilerGenerated]
/// @brief Field <Title>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Title_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Entries>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____Entries_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::CreditsSection, ____Title_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::CreditsSection, ____Entries_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::CreditsSection) == 0x20, "Size mismatch!");

} // namespace end def GorillaNetworking
