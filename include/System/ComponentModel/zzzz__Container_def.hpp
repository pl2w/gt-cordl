#pragma once
// IWYU pragma private; include "System/ComponentModel/Container.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__ISite_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Container)
namespace System::ComponentModel {
class ComponentCollection;
}
namespace System::ComponentModel {
class ContainerFilterService;
}
namespace System::ComponentModel {
class Container_Site;
}
namespace System::ComponentModel {
class IComponent;
}
namespace System::ComponentModel {
class IContainer;
}
namespace System::ComponentModel {
class ISite;
}
namespace System {
class IDisposable;
}
namespace System {
class IServiceProvider;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class Container;
}
namespace System::ComponentModel {
class Container_Site;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::Container*);
MARK_REF_T(::System::ComponentModel::Container_Site*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::Container*, "System.ComponentModel", "Container");
DEFINE_IL2CPP_CLASS(::System::ComponentModel::Container_Site*, "System.ComponentModel", "Container/Site");
// Dependencies System.ComponentModel.ISite, System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.Container
class CORDL_TYPE Container : public ::System::Object {
public:
// Declarations
using Site = ::System::ComponentModel::Container_Site;

 __declspec(property(get=get_Components)) ::System::ComponentModel::ComponentCollection*  Components;

/// @brief Field checkedFilter, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_checkedFilter, put=__cordl_internal_set_checkedFilter)) bool  checkedFilter;

/// @brief Field components, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_components, put=__cordl_internal_set_components)) ::System::ComponentModel::ComponentCollection*  components;

/// @brief Field filter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_filter, put=__cordl_internal_set_filter)) ::System::ComponentModel::ContainerFilterService*  filter;

/// @brief Field siteCount, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_siteCount, put=__cordl_internal_set_siteCount)) int32_t  siteCount;

/// @brief Field sites, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_sites, put=__cordl_internal_set_sites)) ::ArrayW<::System::ComponentModel::ISite*>  sites;

/// @brief Field syncObj, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_syncObj, put=__cordl_internal_set_syncObj)) ::System::Object*  syncObj;

/// @brief Convert operator to "::System::ComponentModel::IContainer"
constexpr operator  ::System::ComponentModel::IContainer*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Add, addr 0xad6e7f8, size 0x10, virtual true, abstract: false, final false
inline void Add(::System::ComponentModel::IComponent*  component) ;

/// @brief Method Add, addr 0xad6e808, size 0x494, virtual true, abstract: false, final false
inline void Add(::System::ComponentModel::IComponent*  component, ::StringW  name) ;

/// @brief Method CreateSite, addr 0xad6ec9c, size 0x70, virtual true, abstract: false, final false
inline ::System::ComponentModel::ISite* CreateSite(::System::ComponentModel::IComponent*  component, ::StringW  name) ;

/// @brief Method Dispose, addr 0xad6ed6c, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0xad6edd8, size 0x328, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0xad6e768, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetService, addr 0xad6f100, size 0x8c, virtual true, abstract: false, final false
inline ::System::Object* GetService(::System::Type*  service) ;

static inline ::System::ComponentModel::Container* New_ctor() ;

/// @brief Method Remove, addr 0xad6f558, size 0x8, virtual true, abstract: false, final false
inline void Remove(::System::ComponentModel::IComponent*  component) ;

/// @brief Method Remove, addr 0xad6f560, size 0x2f8, virtual false, abstract: false, final false
inline void Remove(::System::ComponentModel::IComponent*  component, bool  preserveSite) ;

/// @brief Method RemoveWithoutUnsiting, addr 0xad6f858, size 0x8, virtual false, abstract: false, final false
inline void RemoveWithoutUnsiting(::System::ComponentModel::IComponent*  component) ;

/// @brief Method ValidateName, addr 0xad6f860, size 0x414, virtual true, abstract: false, final false
inline void ValidateName(::System::ComponentModel::IComponent*  component, ::StringW  name) ;

constexpr bool const& __cordl_internal_get_checkedFilter() const;

constexpr bool& __cordl_internal_get_checkedFilter() ;

constexpr ::System::ComponentModel::ComponentCollection* const& __cordl_internal_get_components() const;

constexpr ::System::ComponentModel::ComponentCollection*& __cordl_internal_get_components() ;

constexpr ::System::ComponentModel::ContainerFilterService* const& __cordl_internal_get_filter() const;

constexpr ::System::ComponentModel::ContainerFilterService*& __cordl_internal_get_filter() ;

constexpr int32_t const& __cordl_internal_get_siteCount() const;

constexpr int32_t& __cordl_internal_get_siteCount() ;

constexpr ::ArrayW<::System::ComponentModel::ISite*> const& __cordl_internal_get_sites() const;

constexpr ::ArrayW<::System::ComponentModel::ISite*>& __cordl_internal_get_sites() ;

constexpr ::System::Object* const& __cordl_internal_get_syncObj() const;

constexpr ::System::Object*& __cordl_internal_get_syncObj() ;

constexpr void __cordl_internal_set_checkedFilter(bool  value) ;

constexpr void __cordl_internal_set_components(::System::ComponentModel::ComponentCollection*  value) ;

constexpr void __cordl_internal_set_filter(::System::ComponentModel::ContainerFilterService*  value) ;

constexpr void __cordl_internal_set_siteCount(int32_t  value) ;

constexpr void __cordl_internal_set_sites(::ArrayW<::System::ComponentModel::ISite*>  value) ;

constexpr void __cordl_internal_set_syncObj(::System::Object*  value) ;

/// @brief Method .ctor, addr 0xad6fccc, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Components, addr 0xad6f18c, size 0x3cc, virtual true, abstract: false, final false
inline ::System::ComponentModel::ComponentCollection* get_Components() ;

/// @brief Convert to "::System::ComponentModel::IContainer"
constexpr ::System::ComponentModel::IContainer* i___System__ComponentModel__IContainer() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Container() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Container", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Container(Container && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Container", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Container(Container const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10264};

/// @brief Field sites, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::System::ComponentModel::ISite*>  ___sites;

/// @brief Field siteCount, offset: 0x18, size: 0x4, def value: None
 int32_t  ___siteCount;

/// @brief Field components, offset: 0x20, size: 0x8, def value: None
 ::System::ComponentModel::ComponentCollection*  ___components;

/// @brief Field filter, offset: 0x28, size: 0x8, def value: None
 ::System::ComponentModel::ContainerFilterService*  ___filter;

/// @brief Field checkedFilter, offset: 0x30, size: 0x1, def value: None
 bool  ___checkedFilter;

/// @brief Field syncObj, offset: 0x38, size: 0x8, def value: None
 ::System::Object*  ___syncObj;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::Container, ___sites) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::Container, ___siteCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::Container, ___components) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::Container, ___filter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::Container, ___checkedFilter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::Container, ___syncObj) == 0x38, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::Container) == 0x40, "Size mismatch!");

} // namespace end def System::ComponentModel
// Dependencies System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.Container/Site
class CORDL_TYPE Container_Site : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Component)) ::System::ComponentModel::IComponent*  Component;

 __declspec(property(get=get_Container)) ::System::ComponentModel::IContainer*  Container;

 __declspec(property(get=get_DesignMode)) bool  DesignMode;

 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

/// @brief Field component, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_component, put=__cordl_internal_set_component)) ::System::ComponentModel::IComponent*  component;

/// @brief Field container, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_container, put=__cordl_internal_set_container)) ::System::ComponentModel::Container*  container;

/// @brief Field name, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Convert operator to "::System::ComponentModel::ISite"
constexpr operator  ::System::ComponentModel::ISite*() noexcept;

/// @brief Convert operator to "::System::IServiceProvider"
constexpr operator  ::System::IServiceProvider*() noexcept;

/// @brief Method GetService, addr 0xad6fd48, size 0xb8, virtual true, abstract: false, final true
inline ::System::Object* GetService(::System::Type*  service) ;

static inline ::System::ComponentModel::Container_Site* New_ctor(::System::ComponentModel::IComponent*  component, ::System::ComponentModel::Container*  container, ::StringW  name) ;

constexpr ::System::ComponentModel::IComponent* const& __cordl_internal_get_component() const;

constexpr ::System::ComponentModel::IComponent*& __cordl_internal_get_component() ;

constexpr ::System::ComponentModel::Container* const& __cordl_internal_get_container() const;

constexpr ::System::ComponentModel::Container*& __cordl_internal_get_container() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr void __cordl_internal_set_component(::System::ComponentModel::IComponent*  value) ;

constexpr void __cordl_internal_set_container(::System::ComponentModel::Container*  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

/// @brief Method .ctor, addr 0xad6ed0c, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::ComponentModel::IComponent*  component, ::System::ComponentModel::Container*  container, ::StringW  name) ;

/// @brief Method get_Component, addr 0xad6fd38, size 0x8, virtual true, abstract: false, final true
inline ::System::ComponentModel::IComponent* get_Component() ;

/// @brief Method get_Container, addr 0xad6fd40, size 0x8, virtual true, abstract: false, final true
inline ::System::ComponentModel::IContainer* get_Container() ;

/// @brief Method get_DesignMode, addr 0xad6fe00, size 0x8, virtual true, abstract: false, final true
inline bool get_DesignMode() ;

/// @brief Method get_Name, addr 0xad6fe08, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_Name() ;

/// @brief Convert to "::System::ComponentModel::ISite"
constexpr ::System::ComponentModel::ISite* i___System__ComponentModel__ISite() noexcept;

/// @brief Convert to "::System::IServiceProvider"
constexpr ::System::IServiceProvider* i___System__IServiceProvider() noexcept;

/// @brief Method set_Name, addr 0xad6fe10, size 0x74, virtual true, abstract: false, final true
inline void set_Name(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Container_Site() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Container_Site", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Container_Site(Container_Site && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Container_Site", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Container_Site(Container_Site const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10263};

/// @brief Field component, offset: 0x10, size: 0x8, def value: None
 ::System::ComponentModel::IComponent*  ___component;

/// @brief Field container, offset: 0x18, size: 0x8, def value: None
 ::System::ComponentModel::Container*  ___container;

/// @brief Field name, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___name;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::Container_Site, ___component) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::Container_Site, ___container) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::Container_Site, ___name) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::Container_Site) == 0x28, "Size mismatch!");

} // namespace end def System::ComponentModel
