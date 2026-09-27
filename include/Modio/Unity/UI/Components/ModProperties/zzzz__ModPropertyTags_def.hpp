#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyTags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ModPropertyTags)
namespace Modio::Mods {
class ModTag;
}
namespace Modio::Mods {
class Mod;
}
namespace Modio::Unity::UI::Components::ModProperties {
class IModProperty;
}
namespace Modio::Unity::UI::Components::ModProperties {
class ModPropertyTags___c;
}
namespace Modio::Unity::UI::Components {
class ModioUITag;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::ModProperties {
class ModPropertyTags;
}
namespace Modio::Unity::UI::Components::ModProperties {
class ModPropertyTags___c;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModProperties::ModPropertyTags*);
MARK_REF_T(::Modio::Unity::UI::Components::ModProperties::ModPropertyTags___c*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModProperties::ModPropertyTags*, "Modio.Unity.UI.Components.ModProperties", "ModPropertyTags");
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModProperties::ModPropertyTags___c*, "Modio.Unity.UI.Components.ModProperties", "ModPropertyTags/<>c");
// Dependencies System.Object
namespace Modio::Unity::UI::Components::ModProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModProperties.ModPropertyTags
class CORDL_TYPE ModPropertyTags : public ::System::Object {
public:
// Declarations
using __c = ::Modio::Unity::UI::Components::ModProperties::ModPropertyTags___c;

/// @brief Field _noTagsActive, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__noTagsActive, put=__cordl_internal_set__noTagsActive)) ::UnityW<::UnityEngine::GameObject>  _noTagsActive;

/// @brief Field _tagTemplate, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__tagTemplate, put=__cordl_internal_set__tagTemplate)) ::UnityW<::Modio::Unity::UI::Components::ModioUITag>  _tagTemplate;

/// @brief Field _tags, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__tags, put=__cordl_internal_set__tags)) ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUITag>>*  _tags;

/// @brief Field _tagsActive, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__tagsActive, put=__cordl_internal_set__tagsActive)) ::UnityW<::UnityEngine::GameObject>  _tagsActive;

/// @brief Convert operator to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr operator  ::Modio::Unity::UI::Components::ModProperties::IModProperty*() noexcept;

static inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyTags* New_ctor() ;

/// @brief Method OnModUpdate, addr 0x9fc86c8, size 0x538, virtual true, abstract: false, final true
inline void OnModUpdate(::Modio::Mods::Mod*  mod) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__noTagsActive() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__noTagsActive() ;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUITag> const& __cordl_internal_get__tagTemplate() const;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUITag>& __cordl_internal_get__tagTemplate() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUITag>>* const& __cordl_internal_get__tags() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUITag>>*& __cordl_internal_get__tags() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__tagsActive() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__tagsActive() ;

constexpr void __cordl_internal_set__noTagsActive(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__tagTemplate(::UnityW<::Modio::Unity::UI::Components::ModioUITag>  value) ;

constexpr void __cordl_internal_set__tags(::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUITag>>*  value) ;

constexpr void __cordl_internal_set__tagsActive(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9fc8c00, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Unity::UI::Components::ModProperties::IModProperty"
constexpr ::Modio::Unity::UI::Components::ModProperties::IModProperty* i___Modio__Unity__UI__Components__ModProperties__IModProperty() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModPropertyTags() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyTags", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModPropertyTags(ModPropertyTags && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyTags", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModPropertyTags(ModPropertyTags const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27246};

/// [SerializeField]
/// @brief Field _tagTemplate, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::ModioUITag>  ____tagTemplate;

/// [SerializeField]
/// @brief Field _noTagsActive, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____noTagsActive;

/// [SerializeField]
/// @brief Field _tagsActive, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____tagsActive;

/// @brief Field _tags, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Modio::Unity::UI::Components::ModioUITag>>*  ____tags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyTags, ____tagTemplate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyTags, ____noTagsActive) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyTags, ____tagsActive) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModProperties::ModPropertyTags, ____tags) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModProperties::ModPropertyTags) == 0x30, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::ModProperties
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio::Unity::UI::Components::ModProperties {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModProperties.ModPropertyTags/<>c
class CORDL_TYPE ModPropertyTags___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Modio::Unity::UI::Components::ModProperties::ModPropertyTags___c*  __9;

/// @brief Field <>9__4_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_0, put=setStaticF___9__4_0)) ::System::Func_2<::Modio::Mods::ModTag*,bool>*  __9__4_0;

static inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyTags___c* New_ctor() ;

/// @brief Method <OnModUpdate>b__4_0, addr 0x9fc8cf8, size 0x14, virtual false, abstract: false, final false
inline bool _OnModUpdate_b__4_0(::Modio::Mods::ModTag*  tag) ;

/// @brief Method .ctor, addr 0x9fc8cf0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyTags___c* getStaticF___9() ;

static inline ::System::Func_2<::Modio::Mods::ModTag*,bool>* getStaticF___9__4_0() ;

static inline void setStaticF___9(::Modio::Unity::UI::Components::ModProperties::ModPropertyTags___c*  value) ;

static inline void setStaticF___9__4_0(::System::Func_2<::Modio::Mods::ModTag*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModPropertyTags___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyTags___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModPropertyTags___c(ModPropertyTags___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModPropertyTags___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModPropertyTags___c(ModPropertyTags___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27245};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::UI::Components::ModProperties::ModPropertyTags___c) == 0x10, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::ModProperties
