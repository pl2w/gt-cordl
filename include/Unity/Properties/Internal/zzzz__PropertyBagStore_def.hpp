#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/PropertyBagStore.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PropertyBagStore)
namespace GlobalNamespace {
template<typename TContainer>
struct PropertyBagStore_TypedStore_1;
}
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class ConcurrentDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Type;
}
namespace Unity::Properties::Internal {
class ReflectedPropertyBagProvider;
}
namespace Unity::Properties {
template<typename TContainer>
class IPropertyBag_1;
}
namespace Unity::Properties {
class IPropertyBag;
}
// Forward declare root types
namespace Unity::Properties::Internal {
class PropertyBagStore;
}
// Write type traits
MARK_REF_T(::Unity::Properties::Internal::PropertyBagStore*);
DEFINE_IL2CPP_CLASS(::Unity::Properties::Internal::PropertyBagStore*, "Unity.Properties.Internal", "PropertyBagStore");
// Dependencies System.Object
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.PropertyBagStore
class CORDL_TYPE PropertyBagStore : public ::System::Object {
public:
// Declarations
template<typename TContainer>
using TypedStore_1 = ::GlobalNamespace::PropertyBagStore_TypedStore_1<TContainer>;

/// @brief Field s_PropertyBagProvider, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_PropertyBagProvider, put=setStaticF_s_PropertyBagProvider)) ::Unity::Properties::Internal::ReflectedPropertyBagProvider*  s_PropertyBagProvider;

/// @brief Field s_PropertyBags, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_PropertyBags, put=setStaticF_s_PropertyBags)) ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*,::Unity::Properties::IPropertyBag*>*  s_PropertyBags;

/// @brief Field s_RegisteredTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_RegisteredTypes, put=setStaticF_s_RegisteredTypes)) ::System::Collections::Generic::List_1<::System::Type*>*  s_RegisteredTypes;

/// @brief Method AddPropertyBag, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TContainer>
static inline void AddPropertyBag(::Unity::Properties::IPropertyBag_1<TContainer>*  propertyBag) ;

/// @brief Method CreatePropertyBagProvider, addr 0xb6a85c8, size 0x80, virtual false, abstract: false, final false
static inline void CreatePropertyBagProvider() ;

/// @brief Method GetPropertyBag, addr 0xb6982b4, size 0x1f4, virtual false, abstract: false, final false
static inline ::Unity::Properties::IPropertyBag* GetPropertyBag(::System::Type*  type) ;

/// @brief Method GetPropertyBag, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TContainer>
static inline ::Unity::Properties::IPropertyBag_1<TContainer>* GetPropertyBag() ;

/// @brief Method TryGetPropertyBagForValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
static inline bool TryGetPropertyBagForValue(::by_ref<TValue>  value, ::by_ref<::Unity::Properties::IPropertyBag*>  propertyBag) ;

static inline ::Unity::Properties::Internal::ReflectedPropertyBagProvider* getStaticF_s_PropertyBagProvider() ;

static inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*,::Unity::Properties::IPropertyBag*>* getStaticF_s_PropertyBags() ;

static inline ::System::Collections::Generic::List_1<::System::Type*>* getStaticF_s_RegisteredTypes() ;

/// @brief Method get_ReflectedPropertyBagProvider, addr 0xb6aaa58, size 0xa8, virtual false, abstract: false, final false
static inline ::Unity::Properties::Internal::ReflectedPropertyBagProvider* get_ReflectedPropertyBagProvider() ;

static inline void setStaticF_s_PropertyBagProvider(::Unity::Properties::Internal::ReflectedPropertyBagProvider*  value) ;

static inline void setStaticF_s_PropertyBags(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*,::Unity::Properties::IPropertyBag*>*  value) ;

static inline void setStaticF_s_RegisteredTypes(::System::Collections::Generic::List_1<::System::Type*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropertyBagStore() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropertyBagStore", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PropertyBagStore(PropertyBagStore && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropertyBagStore", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropertyBagStore(PropertyBagStore const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29576};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Properties::Internal::PropertyBagStore) == 0x10, "Size mismatch!");

} // namespace end def Unity::Properties::Internal
