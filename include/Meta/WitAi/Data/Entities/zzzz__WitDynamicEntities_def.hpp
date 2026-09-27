#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Entities/WitDynamicEntities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WitDynamicEntities)
namespace Meta::WitAi::Data::Entities {
class WitDynamicEntities___c__DisplayClass14_0;
}
namespace Meta::WitAi::Data::Entities {
class WitDynamicEntities___c__DisplayClass15_0;
}
namespace Meta::WitAi::Data::Entities {
class WitDynamicEntity;
}
namespace Meta::WitAi::Data::Info {
struct WitEntityKeywordInfo;
}
namespace Meta::WitAi::Interfaces {
class IDynamicEntitiesProvider;
}
namespace Meta::WitAi::Json {
class WitResponseClass;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace Meta::WitAi::Data::Entities {
class WitDynamicEntities;
}
namespace Meta::WitAi::Data::Entities {
class WitDynamicEntities___c__DisplayClass14_0;
}
namespace Meta::WitAi::Data::Entities {
class WitDynamicEntities___c__DisplayClass15_0;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Data::Entities::WitDynamicEntities*);
MARK_REF_T(::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass14_0*);
MARK_REF_T(::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass15_0*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Data::Entities::WitDynamicEntities*, "Meta.WitAi.Data.Entities", "WitDynamicEntities");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass14_0*, "Meta.WitAi.Data.Entities", "WitDynamicEntities/<>c__DisplayClass14_0");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass15_0*, "Meta.WitAi.Data.Entities", "WitDynamicEntities/<>c__DisplayClass15_0");
// Dependencies System.Object
namespace Meta::WitAi::Data::Entities {
// Is value type: false
// CS Name: Meta.WitAi.Data.Entities.WitDynamicEntities
class CORDL_TYPE WitDynamicEntities : public ::System::Object {
public:
// Declarations
using __c__DisplayClass14_0 = ::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass14_0;

using __c__DisplayClass15_0 = ::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass15_0;

 __declspec(property(get=get_AsJson)) ::Meta::WitAi::Json::WitResponseClass*  AsJson;

/// @brief Field entities, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_entities, put=__cordl_internal_set_entities)) ::System::Collections::Generic::List_1<::Meta::WitAi::Data::Entities::WitDynamicEntity*>*  entities;

/// @brief Convert operator to "::Meta::WitAi::Interfaces::IDynamicEntitiesProvider"
constexpr operator  ::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Data::Entities::WitDynamicEntity*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Data::Entities::WitDynamicEntity*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method AddKeyword, addr 0x9e9b118, size 0x2b4, virtual false, abstract: false, final false
inline void AddKeyword(::StringW  entityName, ::Meta::WitAi::Data::Info::WitEntityKeywordInfo  keyword) ;

/// @brief Method GetDynamicEntities, addr 0x9e9ba80, size 0x4, virtual true, abstract: false, final true
inline ::Meta::WitAi::Data::Entities::WitDynamicEntities* GetDynamicEntities() ;

/// @brief Method GetEnumerator, addr 0x9e9b9ec, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Meta::WitAi::Data::Entities::WitDynamicEntity*>* GetEnumerator() ;

/// @brief Method Merge, addr 0x9e9ae24, size 0xd8, virtual false, abstract: false, final false
inline void Merge(::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*  provider) ;

static inline ::Meta::WitAi::Data::Entities::WitDynamicEntities* New_ctor() ;

static inline ::Meta::WitAi::Data::Entities::WitDynamicEntities* New_ctor(/* [ParamArray] */ ::ArrayW<::Meta::WitAi::Data::Entities::WitDynamicEntity*>  entity) ;

/// @brief Method RemoveKeyword, addr 0x9e9b3e0, size 0x1c4, virtual false, abstract: false, final false
inline void RemoveKeyword(::StringW  entityName, ::Meta::WitAi::Data::Info::WitEntityKeywordInfo  keyword) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x9e9ba7c, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ToString, addr 0x9e9b9cc, size 0x20, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Collections::Generic::List_1<::Meta::WitAi::Data::Entities::WitDynamicEntity*>* const& __cordl_internal_get_entities() const;

constexpr ::System::Collections::Generic::List_1<::Meta::WitAi::Data::Entities::WitDynamicEntity*>*& __cordl_internal_get_entities() ;

constexpr void __cordl_internal_set_entities(::System::Collections::Generic::List_1<::Meta::WitAi::Data::Entities::WitDynamicEntity*>*  value) ;

/// @brief Method .ctor, addr 0x9e9ad9c, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9e9b784, size 0xbc, virtual false, abstract: false, final false
inline void _ctor(/* [ParamArray] */ ::ArrayW<::Meta::WitAi::Data::Entities::WitDynamicEntity*>  entity) ;

/// @brief Method get_AsJson, addr 0x9e9b840, size 0x18c, virtual false, abstract: false, final false
inline ::Meta::WitAi::Json::WitResponseClass* get_AsJson() ;

/// @brief Convert to "::Meta::WitAi::Interfaces::IDynamicEntitiesProvider"
constexpr ::Meta::WitAi::Interfaces::IDynamicEntitiesProvider* i___Meta__WitAi__Interfaces__IDynamicEntitiesProvider() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Data::Entities::WitDynamicEntity*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Data::Entities::WitDynamicEntity*>* i___System__Collections__Generic__IEnumerable_1___Meta__WitAi__Data__Entities__WitDynamicEntity__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitDynamicEntities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitDynamicEntities", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitDynamicEntities(WitDynamicEntities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitDynamicEntities", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitDynamicEntities(WitDynamicEntities const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25714};

/// @brief Field entities, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Meta::WitAi::Data::Entities::WitDynamicEntity*>*  ___entities;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Data::Entities::WitDynamicEntities, ___entities) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Data::Entities::WitDynamicEntities) == 0x18, "Size mismatch!");

} // namespace end def Meta::WitAi::Data::Entities
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::Data::Entities {
// Is value type: false
// CS Name: Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass15_0
class CORDL_TYPE WitDynamicEntities___c__DisplayClass15_0 : public ::System::Object {
public:
// Declarations
/// @brief Field entityName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_entityName, put=__cordl_internal_set_entityName)) ::StringW  entityName;

static inline ::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass15_0* New_ctor() ;

/// @brief Method <RemoveKeyword>b__0, addr 0x9e9bab0, size 0x20, virtual false, abstract: false, final false
inline bool _RemoveKeyword_b__0(::Meta::WitAi::Data::Entities::WitDynamicEntity*  e) ;

constexpr ::StringW const& __cordl_internal_get_entityName() const;

constexpr ::StringW& __cordl_internal_get_entityName() ;

constexpr void __cordl_internal_set_entityName(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e9baa8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitDynamicEntities___c__DisplayClass15_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitDynamicEntities___c__DisplayClass15_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitDynamicEntities___c__DisplayClass15_0(WitDynamicEntities___c__DisplayClass15_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitDynamicEntities___c__DisplayClass15_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitDynamicEntities___c__DisplayClass15_0(WitDynamicEntities___c__DisplayClass15_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25713};

/// @brief Field entityName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___entityName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass15_0, ___entityName) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass15_0) == 0x18, "Size mismatch!");

} // namespace end def Meta::WitAi::Data::Entities
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::Data::Entities {
// Is value type: false
// CS Name: Meta.WitAi.Data.Entities.WitDynamicEntities/<>c__DisplayClass14_0
class CORDL_TYPE WitDynamicEntities___c__DisplayClass14_0 : public ::System::Object {
public:
// Declarations
/// @brief Field entityName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_entityName, put=__cordl_internal_set_entityName)) ::StringW  entityName;

static inline ::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass14_0* New_ctor() ;

/// @brief Method <AddKeyword>b__0, addr 0x9e9ba8c, size 0x1c, virtual false, abstract: false, final false
inline bool _AddKeyword_b__0(::Meta::WitAi::Data::Entities::WitDynamicEntity*  e) ;

constexpr ::StringW const& __cordl_internal_get_entityName() const;

constexpr ::StringW& __cordl_internal_get_entityName() ;

constexpr void __cordl_internal_set_entityName(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e9ba84, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitDynamicEntities___c__DisplayClass14_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitDynamicEntities___c__DisplayClass14_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitDynamicEntities___c__DisplayClass14_0(WitDynamicEntities___c__DisplayClass14_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitDynamicEntities___c__DisplayClass14_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitDynamicEntities___c__DisplayClass14_0(WitDynamicEntities___c__DisplayClass14_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25712};

/// @brief Field entityName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___entityName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass14_0, ___entityName) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Data::Entities::WitDynamicEntities___c__DisplayClass14_0) == 0x18, "Size mismatch!");

} // namespace end def Meta::WitAi::Data::Entities
