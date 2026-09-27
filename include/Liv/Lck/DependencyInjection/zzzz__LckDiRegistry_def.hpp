#pragma once
// IWYU pragma private; include "Liv/Lck/DependencyInjection/LckDiRegistry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LckDiRegistry)
namespace Liv::Lck::DependencyInjection {
class LckDiCollection;
}
namespace Liv::Lck::DependencyInjection {
class LckDiServiceRegistration;
}
namespace Liv::Lck::DependencyInjection {
class LckMonoBehaviourDependencyInjector;
}
namespace Liv::Lck::DependencyInjection {
class LckServiceProvider;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Liv::Lck::DependencyInjection {
class LckDiRegistry;
}
// Write type traits
MARK_REF_T(::Liv::Lck::DependencyInjection::LckDiRegistry*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::DependencyInjection::LckDiRegistry*, "Liv.Lck.DependencyInjection", "LckDiRegistry");
// Dependencies System.Object
namespace Liv::Lck::DependencyInjection {
// Is value type: false
// CS Name: Liv.Lck.DependencyInjection.LckDiRegistry
class CORDL_TYPE LckDiRegistry : public ::System::Object {
public:
// Declarations
/// @brief Field _collection, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__collection, put=__cordl_internal_set__collection)) ::Liv::Lck::DependencyInjection::LckDiCollection*  _collection;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::Liv::Lck::DependencyInjection::LckDiRegistry*  _instance;

/// @brief Field _lckMonoBehaviourDependencyInjector, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckMonoBehaviourDependencyInjector, put=__cordl_internal_set__lckMonoBehaviourDependencyInjector)) ::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector*  _lckMonoBehaviourDependencyInjector;

/// @brief Field _provider, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__provider, put=__cordl_internal_set__provider)) ::Liv::Lck::DependencyInjection::LckServiceProvider*  _provider;

/// @brief Method AddSingleton, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TService,typename TImplementation>
requires(::cordl_internals::reference_type_constraint<TService> && ::cordl_internals::type_constraint<TImplementation, TService>)
inline void AddSingleton() ;

/// @brief Method AddSingleton, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TService>
requires(::cordl_internals::reference_type_constraint<TService>)
inline void AddSingleton(TService  instance) ;

/// @brief Method AddSingletonFactory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TService>
requires(::cordl_internals::reference_type_constraint<TService>)
inline void AddSingletonFactory(::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,TService>*  factory) ;

/// @brief Method AddSingletonForward, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TService,typename TForwardTo>
requires(::cordl_internals::reference_type_constraint<TService> && ::cordl_internals::type_constraint<TForwardTo, TService> && ::cordl_internals::reference_type_constraint<TForwardTo>)
inline void AddSingletonForward() ;

/// @brief Method AddTransient, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TService,typename TImplementation>
requires(::cordl_internals::reference_type_constraint<TService> && ::cordl_internals::type_constraint<TImplementation, TService>)
inline void AddTransient() ;

/// @brief Method AddTransientFactory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TService>
requires(::cordl_internals::reference_type_constraint<TService>)
inline void AddTransientFactory(::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,TService>*  factory) ;

/// @brief Method Build, addr 0x9d34de8, size 0x218, virtual false, abstract: false, final false
inline void Build() ;

/// @brief Method GetInjector, addr 0x9d35070, size 0x8, virtual false, abstract: false, final false
inline ::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector* GetInjector() ;

/// @brief Method GetRegistrations, addr 0x9d350a8, size 0x18, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::DependencyInjection::LckDiServiceRegistration*>* GetRegistrations() ;

/// @brief Method GetService, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
inline T GetService() ;

/// @brief Method HasService, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
inline bool HasService() ;

static inline ::Liv::Lck::DependencyInjection::LckDiRegistry* New_ctor() ;

/// @brief Method Reset, addr 0x9d34be0, size 0x208, virtual false, abstract: false, final false
inline void Reset() ;

constexpr ::Liv::Lck::DependencyInjection::LckDiCollection* const& __cordl_internal_get__collection() const;

constexpr ::Liv::Lck::DependencyInjection::LckDiCollection*& __cordl_internal_get__collection() ;

constexpr ::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector* const& __cordl_internal_get__lckMonoBehaviourDependencyInjector() const;

constexpr ::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector*& __cordl_internal_get__lckMonoBehaviourDependencyInjector() ;

constexpr ::Liv::Lck::DependencyInjection::LckServiceProvider* const& __cordl_internal_get__provider() const;

constexpr ::Liv::Lck::DependencyInjection::LckServiceProvider*& __cordl_internal_get__provider() ;

constexpr void __cordl_internal_set__collection(::Liv::Lck::DependencyInjection::LckDiCollection*  value) ;

constexpr void __cordl_internal_set__lckMonoBehaviourDependencyInjector(::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector*  value) ;

constexpr void __cordl_internal_set__provider(::Liv::Lck::DependencyInjection::LckServiceProvider*  value) ;

/// @brief Method .ctor, addr 0x9d35008, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Liv::Lck::DependencyInjection::LckDiRegistry* getStaticF__instance() ;

/// @brief Method get_Instance, addr 0x9d34aa4, size 0x78, virtual false, abstract: false, final false
static inline ::Liv::Lck::DependencyInjection::LckDiRegistry* get_Instance() ;

static inline void setStaticF__instance(::Liv::Lck::DependencyInjection::LckDiRegistry*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckDiRegistry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckDiRegistry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckDiRegistry(LckDiRegistry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckDiRegistry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckDiRegistry(LckDiRegistry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24812};

/// @brief Field _collection, offset: 0x10, size: 0x8, def value: None
 ::Liv::Lck::DependencyInjection::LckDiCollection*  ____collection;

/// @brief Field _provider, offset: 0x18, size: 0x8, def value: None
 ::Liv::Lck::DependencyInjection::LckServiceProvider*  ____provider;

/// @brief Field _lckMonoBehaviourDependencyInjector, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector*  ____lckMonoBehaviourDependencyInjector;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::DependencyInjection::LckDiRegistry, ____collection) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::DependencyInjection::LckDiRegistry, ____provider) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::DependencyInjection::LckDiRegistry, ____lckMonoBehaviourDependencyInjector) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::DependencyInjection::LckDiRegistry) == 0x28, "Size mismatch!");

} // namespace end def Liv::Lck::DependencyInjection
