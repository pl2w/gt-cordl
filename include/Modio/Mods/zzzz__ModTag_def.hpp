#pragma once
// IWYU pragma private; include "Modio/Mods/ModTag.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModTag)
namespace Modio::API::SchemaDefinitions {
struct ModTagObject;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Modio::Mods {
class ModTag;
}
// Write type traits
MARK_REF_T(::Modio::Mods::ModTag*);
DEFINE_IL2CPP_CLASS(::Modio::Mods::ModTag*, "Modio.Mods", "ModTag");
// Dependencies System.Object
namespace Modio::Mods {
// Is value type: false
// CS Name: Modio.Mods.ModTag
class CORDL_TYPE ModTag : public ::System::Object {
public:
// Declarations
/// @brief Field ApiName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ApiName, put=__cordl_internal_set_ApiName)) ::StringW  ApiName;

 __declspec(property(get=get_Count, put=set_Count)) int32_t  Count;

 __declspec(property(get=get_IsVisible, put=set_IsVisible)) bool  IsVisible;

 __declspec(property(get=get_NameLocalized, put=set_NameLocalized)) ::StringW  NameLocalized;

/// @brief Field Tags, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Tags, put=setStaticF_Tags)) ::System::Collections::Generic::Dictionary_2<::StringW,::Modio::Mods::ModTag*>*  Tags;

/// @brief Field <Count>k__BackingField, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Count_k__BackingField, put=__cordl_internal_set__Count_k__BackingField)) int32_t  _Count_k__BackingField;

/// @brief Field <IsVisible>k__BackingField, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsVisible_k__BackingField, put=__cordl_internal_set__IsVisible_k__BackingField)) bool  _IsVisible_k__BackingField;

/// @brief Field <NameLocalized>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__NameLocalized_k__BackingField, put=__cordl_internal_set__NameLocalized_k__BackingField)) ::StringW  _NameLocalized_k__BackingField;

/// @brief Field _translations, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__translations, put=__cordl_internal_set__translations)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _translations;

/// @brief Method Get, addr 0xa031970, size 0x134, virtual false, abstract: false, final false
static inline ::Modio::Mods::ModTag* Get(::Modio::API::SchemaDefinitions::ModTagObject  modTag) ;

/// @brief Method Get, addr 0xa026cc4, size 0x118, virtual false, abstract: false, final false
static inline ::Modio::Mods::ModTag* Get(::StringW  tagName) ;

static inline ::Modio::Mods::ModTag* New_ctor(::StringW  apiName) ;

/// @brief [JsonConstructor]
static inline ::Modio::Mods::ModTag* New_ctor(::StringW  apiName, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  translations, ::StringW  nameLocalized, bool  isVisible, int32_t  count) ;

/// @brief Method SetLocalizations, addr 0xa026ddc, size 0xec, virtual false, abstract: false, final false
inline void SetLocalizations(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  translations) ;

constexpr ::StringW const& __cordl_internal_get_ApiName() const;

constexpr ::StringW& __cordl_internal_get_ApiName() ;

constexpr int32_t const& __cordl_internal_get__Count_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Count_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsVisible_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsVisible_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__NameLocalized_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__NameLocalized_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get__translations() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get__translations() ;

constexpr void __cordl_internal_set_ApiName(::StringW  value) ;

constexpr void __cordl_internal_set__Count_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__IsVisible_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__NameLocalized_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__translations(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

/// @brief Method .ctor, addr 0xa0318c4, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  apiName) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0xa0318f4, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::StringW  apiName, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  translations, ::StringW  nameLocalized, bool  isVisible, int32_t  count) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::Modio::Mods::ModTag*>* getStaticF_Tags() ;

/// [CompilerGenerated]
/// @brief Method get_Count, addr 0xa0318b4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// [CompilerGenerated]
/// @brief Method get_IsVisible, addr 0xa0318a4, size 0x8, virtual false, abstract: false, final false
inline bool get_IsVisible() ;

/// [CompilerGenerated]
/// @brief Method get_NameLocalized, addr 0xa031894, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_NameLocalized() ;

static inline void setStaticF_Tags(::System::Collections::Generic::Dictionary_2<::StringW,::Modio::Mods::ModTag*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Count, addr 0xa0318bc, size 0x8, virtual false, abstract: false, final false
inline void set_Count(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsVisible, addr 0xa0318ac, size 0x8, virtual false, abstract: false, final false
inline void set_IsVisible(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_NameLocalized, addr 0xa03189c, size 0x8, virtual false, abstract: false, final false
inline void set_NameLocalized(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModTag() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModTag", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModTag(ModTag && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModTag", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModTag(ModTag const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17603};

/// @brief Field ApiName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___ApiName;

/// @brief Field _translations, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ____translations;

/// [CompilerGenerated]
/// @brief Field <NameLocalized>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____NameLocalized_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsVisible>k__BackingField, offset: 0x28, size: 0x1, def value: None
 bool  ____IsVisible_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Count>k__BackingField, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____Count_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Mods::ModTag, ___ApiName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::ModTag, ____translations) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::ModTag, ____NameLocalized_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::ModTag, ____IsVisible_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::ModTag, ____Count_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Modio::Mods::ModTag) == 0x30, "Size mismatch!");

} // namespace end def Modio::Mods
