#pragma once
// IWYU pragma private; include "Modio/Mods/GameTagCategory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Mods/zzzz__ModTag_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GameTagCategory)
namespace GlobalNamespace {
struct GameTagCategory__GetGameTagOptions_d__9;
}
namespace Modio::API::SchemaDefinitions {
struct GameTagOptionObject;
}
namespace Modio::Mods {
class GameTagCategory___c;
}
namespace Modio::Mods {
class ModTag;
}
namespace Modio {
class Error;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Modio::Mods {
class GameTagCategory;
}
namespace Modio::Mods {
class GameTagCategory___c;
}
// Write type traits
MARK_REF_T(::Modio::Mods::GameTagCategory*);
MARK_REF_T(::Modio::Mods::GameTagCategory___c*);
DEFINE_IL2CPP_CLASS(::Modio::Mods::GameTagCategory*, "Modio.Mods", "GameTagCategory");
DEFINE_IL2CPP_CLASS(::Modio::Mods::GameTagCategory___c*, "Modio.Mods", "GameTagCategory/<>c");
// Dependencies Modio.Mods.ModTag, System.Object
namespace Modio::Mods {
// Is value type: false
// CS Name: Modio.Mods.GameTagCategory
class CORDL_TYPE GameTagCategory : public ::System::Object {
public:
// Declarations
using _GetGameTagOptions_d__9 = ::GlobalNamespace::GameTagCategory__GetGameTagOptions_d__9;

using __c = ::Modio::Mods::GameTagCategory___c;

/// @brief Field Hidden, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_Hidden, put=__cordl_internal_set_Hidden)) bool  Hidden;

/// @brief Field Locked, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_Locked, put=__cordl_internal_set_Locked)) bool  Locked;

/// @brief Field MultiSelect, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_MultiSelect, put=__cordl_internal_set_MultiSelect)) bool  MultiSelect;

/// @brief Field Name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::StringW  Name;

/// @brief Field Tags, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Tags, put=__cordl_internal_set_Tags)) ::ArrayW<::Modio::Mods::ModTag*>  Tags;

/// @brief Field _cachedTags, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__cachedTags, put=setStaticF__cachedTags)) ::ArrayW<::Modio::Mods::GameTagCategory*>  _cachedTags;

/// [AsyncStateMachine(typeof(Modio.Mods.GameTagCategory::<GetGameTagOptions>d__9))]
/// @brief Method GetGameTagOptions, addr 0xa026f6c, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<::Modio::Mods::GameTagCategory*>>>* GetGameTagOptions() ;

/// @brief [JsonConstructor]
static inline ::Modio::Mods::GameTagCategory* New_ctor(::StringW  name, bool  multiSelect, ::ArrayW<::Modio::Mods::ModTag*>  tags, bool  hidden, bool  locked) ;

static inline ::Modio::Mods::GameTagCategory* New_ctor(::Modio::API::SchemaDefinitions::GameTagOptionObject  tagObject) ;

constexpr bool const& __cordl_internal_get_Hidden() const;

constexpr bool& __cordl_internal_get_Hidden() ;

constexpr bool const& __cordl_internal_get_Locked() const;

constexpr bool& __cordl_internal_get_Locked() ;

constexpr bool const& __cordl_internal_get_MultiSelect() const;

constexpr bool& __cordl_internal_get_MultiSelect() ;

constexpr ::StringW const& __cordl_internal_get_Name() const;

constexpr ::StringW& __cordl_internal_get_Name() ;

constexpr ::ArrayW<::Modio::Mods::ModTag*> const& __cordl_internal_get_Tags() const;

constexpr ::ArrayW<::Modio::Mods::ModTag*>& __cordl_internal_get_Tags() ;

constexpr void __cordl_internal_set_Hidden(bool  value) ;

constexpr void __cordl_internal_set_Locked(bool  value) ;

constexpr void __cordl_internal_set_MultiSelect(bool  value) ;

constexpr void __cordl_internal_set_Name(::StringW  value) ;

constexpr void __cordl_internal_set_Tags(::ArrayW<::Modio::Mods::ModTag*>  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0xa02691c, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, bool  multiSelect, ::ArrayW<::Modio::Mods::ModTag*>  tags, bool  hidden, bool  locked) ;

/// @brief Method .ctor, addr 0xa02698c, size 0x338, virtual false, abstract: false, final false
inline void _ctor(::Modio::API::SchemaDefinitions::GameTagOptionObject  tagObject) ;

static inline ::ArrayW<::Modio::Mods::GameTagCategory*> getStaticF__cachedTags() ;

static inline void setStaticF__cachedTags(::ArrayW<::Modio::Mods::GameTagCategory*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameTagCategory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameTagCategory", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameTagCategory(GameTagCategory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameTagCategory", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameTagCategory(GameTagCategory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17569};

/// @brief Field Name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Name;

/// @brief Field MultiSelect, offset: 0x18, size: 0x1, def value: None
 bool  ___MultiSelect;

/// @brief Field Tags, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::Modio::Mods::ModTag*>  ___Tags;

/// @brief Field Hidden, offset: 0x28, size: 0x1, def value: None
 bool  ___Hidden;

/// @brief Field Locked, offset: 0x29, size: 0x1, def value: None
 bool  ___Locked;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Mods::GameTagCategory, ___Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::GameTagCategory, ___MultiSelect) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::GameTagCategory, ___Tags) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::GameTagCategory, ___Hidden) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::GameTagCategory, ___Locked) == 0x29, "Offset mismatch!");

static_assert(sizeof(::Modio::Mods::GameTagCategory) == 0x30, "Size mismatch!");

} // namespace end def Modio::Mods
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio::Mods {
// Is value type: false
// CS Name: Modio.Mods.GameTagCategory/<>c
class CORDL_TYPE GameTagCategory___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Modio::Mods::GameTagCategory___c*  __9;

/// @brief Field <>9__9_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_0, put=setStaticF___9__9_0)) ::System::Func_2<::Modio::API::SchemaDefinitions::GameTagOptionObject,::Modio::Mods::GameTagCategory*>*  __9__9_0;

static inline ::Modio::Mods::GameTagCategory___c* New_ctor() ;

/// @brief Method <GetGameTagOptions>b__9_0, addr 0xa02712c, size 0x78, virtual false, abstract: false, final false
inline ::Modio::Mods::GameTagCategory* _GetGameTagOptions_b__9_0(::Modio::API::SchemaDefinitions::GameTagOptionObject  options) ;

/// @brief Method <.cctor>b__8_0, addr 0xa0270c8, size 0x64, virtual false, abstract: false, final false
inline void __cctor_b__8_0() ;

/// @brief Method .ctor, addr 0xa0270c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Modio::Mods::GameTagCategory___c* getStaticF___9() ;

static inline ::System::Func_2<::Modio::API::SchemaDefinitions::GameTagOptionObject,::Modio::Mods::GameTagCategory*>* getStaticF___9__9_0() ;

static inline void setStaticF___9(::Modio::Mods::GameTagCategory___c*  value) ;

static inline void setStaticF___9__9_0(::System::Func_2<::Modio::API::SchemaDefinitions::GameTagOptionObject,::Modio::Mods::GameTagCategory*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameTagCategory___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameTagCategory___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameTagCategory___c(GameTagCategory___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameTagCategory___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameTagCategory___c(GameTagCategory___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17567};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Mods::GameTagCategory___c) == 0x10, "Size mismatch!");

} // namespace end def Modio::Mods
