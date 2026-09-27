#pragma once
// IWYU pragma private; include "System/ComponentModel/AttributeCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__AttributeCollection_AttributeEntry_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AttributeCollection)
namespace GlobalNamespace {
struct AttributeCollection_AttributeEntry;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Array;
}
namespace System {
class Attribute;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class AttributeCollection;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::AttributeCollection*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::AttributeCollection*, "System.ComponentModel", "AttributeCollection");
// [DefaultMember("Item")]
// Dependencies System.Attribute, System.ComponentModel.AttributeCollection::AttributeEntry, System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.AttributeCollection
class CORDL_TYPE AttributeCollection : public ::System::Object {
public:
// Declarations
using AttributeEntry = ::GlobalNamespace::AttributeCollection_AttributeEntry;

 __declspec(property(get=get_Attributes)) ::ArrayW<::System::Attribute*>  Attributes;

 __declspec(property(get=get_Count)) int32_t  Count;

/// @brief Field Empty, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Empty, put=setStaticF_Empty)) ::System::ComponentModel::AttributeCollection*  Empty;

 __declspec(property(get=get_Item)) ::System::Attribute*  Item[];

 __declspec(property(get=get_Item)) ::System::Attribute*  Item[];

 __declspec(property(get=System_Collections_ICollection_get_Count)) int32_t  System_Collections_ICollection_Count;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

/// @brief Field _attributes, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__attributes, put=__cordl_internal_set__attributes)) ::ArrayW<::System::Attribute*>  _attributes;

/// @brief Field _foundAttributeTypes, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__foundAttributeTypes, put=__cordl_internal_set__foundAttributeTypes)) ::ArrayW<::GlobalNamespace::AttributeCollection_AttributeEntry>  _foundAttributeTypes;

/// @brief Field _index, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__index, put=__cordl_internal_set__index)) int32_t  _index;

/// @brief Field s_defaultAttributes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_defaultAttributes, put=setStaticF_s_defaultAttributes)) ::System::Collections::Hashtable*  s_defaultAttributes;

/// @brief Field s_internalSyncObject, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_internalSyncObject, put=setStaticF_s_internalSyncObject)) ::System::Object*  s_internalSyncObject;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Contains, addr 0xad49f38, size 0x60, virtual false, abstract: false, final false
inline bool Contains(::System::Attribute*  attribute) ;

/// @brief Method Contains, addr 0xad49f98, size 0x78, virtual false, abstract: false, final false
inline bool Contains(::ArrayW<::System::Attribute*>  attributes) ;

/// @brief Method CopyTo, addr 0xad49418, size 0x6c, virtual true, abstract: false, final true
inline void CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method FromExisting, addr 0xad49064, size 0x390, virtual false, abstract: false, final false
static inline ::System::ComponentModel::AttributeCollection* FromExisting(::System::ComponentModel::AttributeCollection*  existing, /* [ParamArray] */ ::ArrayW<::System::Attribute*>  newAttributes) ;

/// @brief Method GetDefaultAttribute, addr 0xad499bc, size 0x57c, virtual false, abstract: false, final false
inline ::System::Attribute* GetDefaultAttribute(::System::Type*  attributeType) ;

/// @brief Method GetEnumerator, addr 0xad4a010, size 0x24, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* GetEnumerator() ;

/// @brief Method Matches, addr 0xad4a034, size 0xb0, virtual false, abstract: false, final false
inline bool Matches(::System::Attribute*  attribute) ;

/// @brief Method Matches, addr 0xad4a0e4, size 0x7c, virtual false, abstract: false, final false
inline bool Matches(::ArrayW<::System::Attribute*>  attributes) ;

static inline ::System::ComponentModel::AttributeCollection* New_ctor() ;

static inline ::System::ComponentModel::AttributeCollection* New_ctor(/* [ParamArray] */ ::ArrayW<::System::Attribute*>  attributes) ;

/// @brief Method System.Collections.ICollection.get_Count, addr 0xad4a170, size 0x24, virtual true, abstract: false, final true
inline int32_t System_Collections_ICollection_get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0xad4a160, size 0x8, virtual true, abstract: false, final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0xad4a168, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xad4a194, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

constexpr ::ArrayW<::System::Attribute*> const& __cordl_internal_get__attributes() const;

constexpr ::ArrayW<::System::Attribute*>& __cordl_internal_get__attributes() ;

constexpr ::ArrayW<::GlobalNamespace::AttributeCollection_AttributeEntry> const& __cordl_internal_get__foundAttributeTypes() const;

constexpr ::ArrayW<::GlobalNamespace::AttributeCollection_AttributeEntry>& __cordl_internal_get__foundAttributeTypes() ;

constexpr int32_t const& __cordl_internal_get__index() const;

constexpr int32_t& __cordl_internal_get__index() ;

constexpr void __cordl_internal_set__attributes(::ArrayW<::System::Attribute*>  value) ;

constexpr void __cordl_internal_set__foundAttributeTypes(::ArrayW<::GlobalNamespace::AttributeCollection_AttributeEntry>  value) ;

constexpr void __cordl_internal_set__index(int32_t  value) ;

/// @brief Method .ctor, addr 0xad4905c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xad48f10, size 0x14c, virtual false, abstract: false, final false
inline void _ctor(/* [ParamArray] */ ::ArrayW<::System::Attribute*>  attributes) ;

static inline ::System::ComponentModel::AttributeCollection* getStaticF_Empty() ;

static inline ::System::Collections::Hashtable* getStaticF_s_defaultAttributes() ;

static inline ::System::Object* getStaticF_s_internalSyncObject() ;

/// @brief Method get_Attributes, addr 0xad49484, size 0x8, virtual true, abstract: false, final false
inline ::ArrayW<::System::Attribute*> get_Attributes() ;

/// @brief Method get_Count, addr 0xad493f4, size 0x24, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0xad494cc, size 0x4f0, virtual true, abstract: false, final false
inline ::System::Attribute* get_Item(::System::Type*  attributeType) ;

/// @brief Method get_Item, addr 0xad4948c, size 0x40, virtual true, abstract: false, final false
inline ::System::Attribute* get_Item(int32_t  index) ;

/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

static inline void setStaticF_Empty(::System::ComponentModel::AttributeCollection*  value) ;

static inline void setStaticF_s_defaultAttributes(::System::Collections::Hashtable*  value) ;

static inline void setStaticF_s_internalSyncObject(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AttributeCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AttributeCollection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AttributeCollection(AttributeCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AttributeCollection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AttributeCollection(AttributeCollection const& ) = delete;

/// @brief Field FOUND_TYPES_LIMIT offset 0xffffffff size 0x4
static constexpr int32_t  FOUND_TYPES_LIMIT{static_cast<int32_t>(0x5)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10118};

/// @brief Field _attributes, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::System::Attribute*>  ____attributes;

/// @brief Field _foundAttributeTypes, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::AttributeCollection_AttributeEntry>  ____foundAttributeTypes;

/// @brief Field _index, offset: 0x20, size: 0x4, def value: None
 int32_t  ____index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::AttributeCollection, ____attributes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::AttributeCollection, ____foundAttributeTypes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::AttributeCollection, ____index) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::AttributeCollection) == 0x28, "Size mismatch!");

} // namespace end def System::ComponentModel
