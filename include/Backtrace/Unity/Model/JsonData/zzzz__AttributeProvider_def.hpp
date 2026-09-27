#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/JsonData/AttributeProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AttributeProvider)
namespace Backtrace::Unity::Model::Attributes {
class IDynamicAttributeProvider;
}
namespace Backtrace::Unity::Model::Attributes {
class IScopeAttributeProvider;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
// Forward declare root types
namespace Backtrace::Unity::Model::JsonData {
class AttributeProvider;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::JsonData::AttributeProvider*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::JsonData::AttributeProvider*, "Backtrace.Unity.Model.JsonData", "AttributeProvider");
// [DefaultMember("Item")]
// Dependencies System.Object
namespace Backtrace::Unity::Model::JsonData {
// Is value type: false
// CS Name: Backtrace.Unity.Model.JsonData.AttributeProvider
class CORDL_TYPE AttributeProvider : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ApplicationGuid)) ::StringW  ApplicationGuid;

 __declspec(property(get=get_ApplicationSessionKey)) ::StringW  ApplicationSessionKey;

 __declspec(property(get=get_ApplicationVersion)) ::StringW  ApplicationVersion;

 __declspec(property(get=get_Item, put=set_Item)) ::StringW  Item[];

/// @brief Field _attributes, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__attributes, put=__cordl_internal_set__attributes)) ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  _attributes;

/// @brief Field _dynamicAttributeProvider, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__dynamicAttributeProvider, put=__cordl_internal_set__dynamicAttributeProvider)) ::System::Collections::Generic::IList_1<::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*>*  _dynamicAttributeProvider;

/// @brief Method AddAttributes, addr 0x5f1a170, size 0x5e4, virtual false, abstract: false, final false
inline void AddAttributes(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  source, bool  includeDynamic) ;

/// @brief Method AddDynamicAttributeProvider, addr 0x5f1a004, size 0xbc, virtual false, abstract: false, final false
inline void AddDynamicAttributeProvider(::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*  attributeProvider) ;

/// @brief Method AddScopedAttributeProvider, addr 0x5f1a0c0, size 0xb0, virtual false, abstract: false, final false
inline void AddScopedAttributeProvider(::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider*  attributeProvider) ;

/// @brief Method Count, addr 0x5f19f64, size 0xa0, virtual false, abstract: false, final false
inline int32_t Count() ;

/// @brief Method GenerateAttributes, addr 0x5f16d90, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* GenerateAttributes(bool  includeDynamic) ;

static inline ::Backtrace::Unity::Model::JsonData::AttributeProvider* New_ctor() ;

static inline ::Backtrace::Unity::Model::JsonData::AttributeProvider* New_ctor(::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider*>*  scopeAttributeProvider, ::System::Collections::Generic::IList_1<::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*>*  dynamicAttributeProvider) ;

constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* const& __cordl_internal_get__attributes() const;

constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*& __cordl_internal_get__attributes() ;

constexpr ::System::Collections::Generic::IList_1<::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*>* const& __cordl_internal_get__dynamicAttributeProvider() const;

constexpr ::System::Collections::Generic::IList_1<::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*>*& __cordl_internal_get__dynamicAttributeProvider() ;

constexpr void __cordl_internal_set__attributes(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set__dynamicAttributeProvider(::System::Collections::Generic::IList_1<::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*>*  value) ;

/// @brief Method .ctor, addr 0x5f195f8, size 0x408, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5f19a94, size 0x414, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider*>*  scopeAttributeProvider, ::System::Collections::Generic::IList_1<::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*>*  dynamicAttributeProvider) ;

/// @brief Method get_ApplicationGuid, addr 0x5f195b0, size 0x48, virtual false, abstract: false, final false
inline ::StringW get_ApplicationGuid() ;

/// @brief Method get_ApplicationSessionKey, addr 0x5f194d8, size 0xd8, virtual false, abstract: false, final false
inline ::StringW get_ApplicationSessionKey() ;

/// @brief Method get_ApplicationVersion, addr 0x5f193e8, size 0x48, virtual false, abstract: false, final false
inline ::StringW get_ApplicationVersion() ;

/// @brief Method get_Item, addr 0x5f19430, size 0xa8, virtual false, abstract: false, final false
inline ::StringW get_Item(::StringW  index) ;

/// @brief Method set_Item, addr 0x5f19ea8, size 0xbc, virtual false, abstract: false, final false
inline void set_Item(::StringW  index, ::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AttributeProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AttributeProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AttributeProvider(AttributeProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AttributeProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AttributeProvider(AttributeProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27625};

/// @brief Field _attributes, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  ____attributes;

/// @brief Field _dynamicAttributeProvider, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*>*  ____dynamicAttributeProvider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::JsonData::AttributeProvider, ____attributes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::JsonData::AttributeProvider, ____dynamicAttributeProvider) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::JsonData::AttributeProvider) == 0x20, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model::JsonData
