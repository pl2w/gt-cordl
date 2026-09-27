#pragma once
// IWYU pragma private; include "System/ComponentModel/MarshalByValueComponent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MarshalByValueComponent)
namespace System::ComponentModel {
class EventHandlerList;
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
class EventHandler;
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
class MarshalByValueComponent;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::MarshalByValueComponent*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::MarshalByValueComponent*, "System.ComponentModel", "MarshalByValueComponent");
// [TypeConverter(typeof(System.ComponentModel.ComponentConverter))]
// [DesignerCategory("Component")]
// Dependencies System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.MarshalByValueComponent
class CORDL_TYPE MarshalByValueComponent : public ::System::Object {
public:
// Declarations
/// [Browsable(false)]
/// @brief [DesignerSerializationVisibility((System.ComponentModel.DesignerSerializationVisibility)0)]
 __declspec(property(get=get_Container)) ::System::ComponentModel::IContainer*  Container;

/// [DesignerSerializationVisibility((System.ComponentModel.DesignerSerializationVisibility)0)]
/// @brief [Browsable(false)]
 __declspec(property(get=get_DesignMode)) bool  DesignMode;

 __declspec(property(get=get_Events)) ::System::ComponentModel::EventHandlerList*  Events;

/// [Browsable(false)]
/// @brief [DesignerSerializationVisibility((System.ComponentModel.DesignerSerializationVisibility)0)]
 __declspec(property(get=get_Site, put=set_Site)) ::System::ComponentModel::ISite*  Site;

/// @brief Field _events, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::System::ComponentModel::EventHandlerList*  _events;

/// @brief Field _site, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__site, put=__cordl_internal_set__site)) ::System::ComponentModel::ISite*  _site;

/// @brief Field s_eventDisposed, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_eventDisposed, put=setStaticF_s_eventDisposed)) ::System::Object*  s_eventDisposed;

/// @brief Convert operator to "::System::ComponentModel::IComponent"
constexpr operator  ::System::ComponentModel::IComponent*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert operator to "::System::IServiceProvider"
constexpr operator  ::System::IServiceProvider*() noexcept;

/// @brief Method Dispose, addr 0xad5bd7c, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0xad5bde8, size 0x29c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0xad5bb54, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetService, addr 0xad5c134, size 0xb4, virtual true, abstract: false, final false
inline ::System::Object* GetService(::System::Type*  service) ;

static inline ::System::ComponentModel::MarshalByValueComponent* New_ctor() ;

/// @brief Method ToString, addr 0xad5c298, size 0x130, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::ComponentModel::EventHandlerList* const& __cordl_internal_get__events() const;

constexpr ::System::ComponentModel::EventHandlerList*& __cordl_internal_get__events() ;

constexpr ::System::ComponentModel::ISite* const& __cordl_internal_get__site() const;

constexpr ::System::ComponentModel::ISite*& __cordl_internal_get__site() ;

constexpr void __cordl_internal_set__events(::System::ComponentModel::EventHandlerList*  value) ;

constexpr void __cordl_internal_set__site(::System::ComponentModel::ISite*  value) ;

/// @brief Method .ctor, addr 0xad5bb4c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_Disposed, addr 0xad5bbe4, size 0x8c, virtual true, abstract: false, final true
inline void add_Disposed(::System::EventHandler*  value) ;

static inline ::System::Object* getStaticF_s_eventDisposed() ;

/// @brief Method get_Container, addr 0xad5c084, size 0xb0, virtual true, abstract: false, final false
inline ::System::ComponentModel::IContainer* get_Container() ;

/// @brief Method get_DesignMode, addr 0xad5c1e8, size 0xb0, virtual true, abstract: false, final false
inline bool get_DesignMode() ;

/// @brief Method get_Events, addr 0xad5bc70, size 0x70, virtual false, abstract: false, final false
inline ::System::ComponentModel::EventHandlerList* get_Events() ;

/// @brief Method get_Site, addr 0xad5bd6c, size 0x8, virtual true, abstract: false, final false
inline ::System::ComponentModel::ISite* get_Site() ;

/// @brief Convert to "::System::ComponentModel::IComponent"
constexpr ::System::ComponentModel::IComponent* i___System__ComponentModel__IComponent() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Convert to "::System::IServiceProvider"
constexpr ::System::IServiceProvider* i___System__IServiceProvider() noexcept;

/// @brief Method remove_Disposed, addr 0xad5bce0, size 0x8c, virtual true, abstract: false, final true
inline void remove_Disposed(::System::EventHandler*  value) ;

static inline void setStaticF_s_eventDisposed(::System::Object*  value) ;

/// @brief Method set_Site, addr 0xad5bd74, size 0x8, virtual true, abstract: false, final false
inline void set_Site(::System::ComponentModel::ISite*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MarshalByValueComponent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MarshalByValueComponent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MarshalByValueComponent(MarshalByValueComponent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MarshalByValueComponent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MarshalByValueComponent(MarshalByValueComponent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10204};

/// @brief Field _site, offset: 0x10, size: 0x8, def value: None
 ::System::ComponentModel::ISite*  ____site;

/// @brief Field _events, offset: 0x18, size: 0x8, def value: None
 ::System::ComponentModel::EventHandlerList*  ____events;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::MarshalByValueComponent, ____site) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::MarshalByValueComponent, ____events) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::MarshalByValueComponent) == 0x20, "Size mismatch!");

} // namespace end def System::ComponentModel
