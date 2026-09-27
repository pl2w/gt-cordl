#pragma once
// IWYU pragma private; include "Meta/Conduit/ConduitDispatcherFactory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ConduitDispatcherFactory)
namespace Meta::Conduit {
class IConduitDispatcher;
}
namespace Meta::Conduit {
class IInstanceResolver;
}
// Forward declare root types
namespace Meta::Conduit {
class ConduitDispatcherFactory;
}
// Write type traits
MARK_REF_T(::Meta::Conduit::ConduitDispatcherFactory*);
DEFINE_IL2CPP_CLASS(::Meta::Conduit::ConduitDispatcherFactory*, "Meta.Conduit", "ConduitDispatcherFactory");
// Dependencies System.Object
namespace Meta::Conduit {
// Is value type: false
// CS Name: Meta.Conduit.ConduitDispatcherFactory
class CORDL_TYPE ConduitDispatcherFactory : public ::System::Object {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::Meta::Conduit::IConduitDispatcher*  Instance;

/// @brief Field _instanceResolver, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__instanceResolver, put=__cordl_internal_set__instanceResolver)) ::Meta::Conduit::IInstanceResolver*  _instanceResolver;

/// @brief Method GetDispatcher, addr 0x9e1e898, size 0xcc, virtual false, abstract: false, final false
inline ::Meta::Conduit::IConduitDispatcher* GetDispatcher() ;

static inline ::Meta::Conduit::ConduitDispatcherFactory* New_ctor(::Meta::Conduit::IInstanceResolver*  instanceResolver) ;

constexpr ::Meta::Conduit::IInstanceResolver* const& __cordl_internal_get__instanceResolver() const;

constexpr ::Meta::Conduit::IInstanceResolver*& __cordl_internal_get__instanceResolver() ;

constexpr void __cordl_internal_set__instanceResolver(::Meta::Conduit::IInstanceResolver*  value) ;

/// @brief Method .ctor, addr 0x9e1e868, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Meta::Conduit::IInstanceResolver*  instanceResolver) ;

static inline ::Meta::Conduit::IConduitDispatcher* getStaticF_Instance() ;

static inline void setStaticF_Instance(::Meta::Conduit::IConduitDispatcher*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConduitDispatcherFactory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConduitDispatcherFactory", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConduitDispatcherFactory(ConduitDispatcherFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConduitDispatcherFactory", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConduitDispatcherFactory(ConduitDispatcherFactory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25409};

/// @brief Field _instanceResolver, offset: 0x10, size: 0x8, def value: None
 ::Meta::Conduit::IInstanceResolver*  ____instanceResolver;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Conduit::ConduitDispatcherFactory, ____instanceResolver) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Meta::Conduit::ConduitDispatcherFactory) == 0x18, "Size mismatch!");

} // namespace end def Meta::Conduit
