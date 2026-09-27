#pragma once
// IWYU pragma private; include "System/ComponentModel/ComponentResourceManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Resources/zzzz__ResourceManager_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ComponentResourceManager)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class SortedList_2;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Resources {
class ResourceSet;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class ComponentResourceManager;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::ComponentResourceManager*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::ComponentResourceManager*, "System.ComponentModel", "ComponentResourceManager");
// Dependencies System.Resources.ResourceManager
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.ComponentResourceManager
class CORDL_TYPE ComponentResourceManager : public ::System::Resources::ResourceManager {
public:
// Declarations
 __declspec(property(get=get_NeutralResourcesCulture)) ::System::Globalization::CultureInfo*  NeutralResourcesCulture;

/// @brief Field _neutralResourcesCulture, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__neutralResourcesCulture, put=__cordl_internal_set__neutralResourcesCulture)) ::System::Globalization::CultureInfo*  _neutralResourcesCulture;

/// @brief Field _resourceSets, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__resourceSets, put=__cordl_internal_set__resourceSets)) ::System::Collections::Hashtable*  _resourceSets;

/// @brief Method ApplyResources, addr 0xad4bc90, size 0x10, virtual false, abstract: false, final false
inline void ApplyResources(::System::Object*  value, ::StringW  objectName) ;

/// @brief Method ApplyResources, addr 0xad4bca0, size 0xa6c, virtual true, abstract: false, final false
inline void ApplyResources(::System::Object*  value, ::StringW  objectName, ::System::Globalization::CultureInfo*  culture) ;

/// @brief Method FillResources, addr 0xad4c70c, size 0x4c0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::SortedList_2<::StringW,::System::Object*>* FillResources(::System::Globalization::CultureInfo*  culture, ::by_ref<::System::Resources::ResourceSet*>  resourceSet) ;

static inline ::System::ComponentModel::ComponentResourceManager* New_ctor() ;

static inline ::System::ComponentModel::ComponentResourceManager* New_ctor(::System::Type*  t) ;

constexpr ::System::Globalization::CultureInfo* const& __cordl_internal_get__neutralResourcesCulture() const;

constexpr ::System::Globalization::CultureInfo*& __cordl_internal_get__neutralResourcesCulture() ;

constexpr ::System::Collections::Hashtable* const& __cordl_internal_get__resourceSets() const;

constexpr ::System::Collections::Hashtable*& __cordl_internal_get__resourceSets() ;

constexpr void __cordl_internal_set__neutralResourcesCulture(::System::Globalization::CultureInfo*  value) ;

constexpr void __cordl_internal_set__resourceSets(::System::Collections::Hashtable*  value) ;

/// @brief Method .ctor, addr 0xad4bb3c, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xad4bb94, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  t) ;

/// @brief Method get_NeutralResourcesCulture, addr 0xad4bbfc, size 0x94, virtual false, abstract: false, final false
inline ::System::Globalization::CultureInfo* get_NeutralResourcesCulture() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ComponentResourceManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ComponentResourceManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ComponentResourceManager(ComponentResourceManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ComponentResourceManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ComponentResourceManager(ComponentResourceManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10134};

/// @brief Field _resourceSets, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Hashtable*  ____resourceSets;

/// @brief Field _neutralResourcesCulture, offset: 0x90, size: 0x8, def value: None
 ::System::Globalization::CultureInfo*  ____neutralResourcesCulture;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::ComponentResourceManager, ____resourceSets) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ComponentResourceManager, ____neutralResourcesCulture) == 0x90, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::ComponentResourceManager) == 0x98, "Size mismatch!");

} // namespace end def System::ComponentModel
