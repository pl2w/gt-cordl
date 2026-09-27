#pragma once
// IWYU pragma private; include "Liv/Lck/DependencyInjection/LckDiCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LckDiCollection)
namespace Liv::Lck::DependencyInjection {
template<typename TService>
class LckDiCollection___c__DisplayClass2_0_1;
}
namespace Liv::Lck::DependencyInjection {
template<typename TService>
class LckDiCollection___c__DisplayClass4_0_1;
}
namespace Liv::Lck::DependencyInjection {
class LckDiServiceRegistration;
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
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Liv::Lck::DependencyInjection {
class LckDiCollection;
}
namespace Liv::Lck::DependencyInjection {
template<typename TService>
class LckDiCollection___c__DisplayClass2_0_1;
}
namespace Liv::Lck::DependencyInjection {
template<typename TService>
class LckDiCollection___c__DisplayClass4_0_1;
}
// Write type traits
MARK_REF_T(::Liv::Lck::DependencyInjection::LckDiCollection*);
MARK_GEN_REF_T_PTR(::Liv::Lck::DependencyInjection::LckDiCollection___c__DisplayClass2_0_1);
MARK_GEN_REF_T_PTR(::Liv::Lck::DependencyInjection::LckDiCollection___c__DisplayClass4_0_1);
DEFINE_IL2CPP_CLASS(::Liv::Lck::DependencyInjection::LckDiCollection*, "Liv.Lck.DependencyInjection", "LckDiCollection");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Liv::Lck::DependencyInjection::LckDiCollection___c__DisplayClass2_0_1, "Liv.Lck.DependencyInjection", "LckDiCollection/<>c__DisplayClass2_0`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Liv::Lck::DependencyInjection::LckDiCollection___c__DisplayClass4_0_1, "Liv.Lck.DependencyInjection", "LckDiCollection/<>c__DisplayClass4_0`1");
// Dependencies System.Object
namespace Liv::Lck::DependencyInjection {
// Is value type: false
// CS Name: Liv.Lck.DependencyInjection.LckDiCollection
class CORDL_TYPE LckDiCollection : public ::System::Object {
public:
// Declarations
template<typename TService>
using __c__DisplayClass2_0_1 = ::Liv::Lck::DependencyInjection::LckDiCollection___c__DisplayClass2_0_1<TService>;

template<typename TService>
using __c__DisplayClass4_0_1 = ::Liv::Lck::DependencyInjection::LckDiCollection___c__DisplayClass4_0_1<TService>;

/// @brief Field _registrations, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__registrations, put=__cordl_internal_set__registrations)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::DependencyInjection::LckDiServiceRegistration*>*  _registrations;

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

/// @brief Method Build, addr 0x9d34778, size 0x134, virtual false, abstract: false, final false
inline ::Liv::Lck::DependencyInjection::LckServiceProvider* Build() ;

/// @brief Method GetRegistration, addr 0x9d34708, size 0x70, virtual false, abstract: false, final false
inline ::Liv::Lck::DependencyInjection::LckDiServiceRegistration* GetRegistration(::System::Type*  serviceType) ;

/// @brief Method GetRegistrations, addr 0x9d34700, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::DependencyInjection::LckDiServiceRegistration*>* GetRegistrations() ;

static inline ::Liv::Lck::DependencyInjection::LckDiCollection* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::DependencyInjection::LckDiServiceRegistration*>* const& __cordl_internal_get__registrations() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::DependencyInjection::LckDiServiceRegistration*>*& __cordl_internal_get__registrations() ;

constexpr void __cordl_internal_set__registrations(::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::DependencyInjection::LckDiServiceRegistration*>*  value) ;

/// @brief Method .ctor, addr 0x9d348dc, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckDiCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckDiCollection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckDiCollection(LckDiCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckDiCollection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckDiCollection(LckDiCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24810};

/// @brief Field _registrations, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::DependencyInjection::LckDiServiceRegistration*>*  ____registrations;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::DependencyInjection::LckDiCollection, ____registrations) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::DependencyInjection::LckDiCollection) == 0x18, "Size mismatch!");

} // namespace end def Liv::Lck::DependencyInjection
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::DependencyInjection {
// cpp template
template<typename TService>
// Is value type: false
// CS Name: Liv.Lck.DependencyInjection.LckDiCollection/<>c__DisplayClass4_0`1<TService>
class CORDL_TYPE LckDiCollection___c__DisplayClass4_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field factory, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_factory, put=__cordl_internal_set_factory)) ::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,TService>*  factory;

static inline ::Liv::Lck::DependencyInjection::LckDiCollection___c__DisplayClass4_0_1<TService>* New_ctor() ;

/// @brief Method <AddSingletonFactory>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Object* _AddSingletonFactory_b__0(::Liv::Lck::DependencyInjection::LckServiceProvider*  p) ;

constexpr ::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,TService>* const& __cordl_internal_get_factory() const;

constexpr ::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,TService>*& __cordl_internal_get_factory() ;

constexpr void __cordl_internal_set_factory(::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,TService>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckDiCollection___c__DisplayClass4_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckDiCollection___c__DisplayClass4_0_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckDiCollection___c__DisplayClass4_0_1(LckDiCollection___c__DisplayClass4_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckDiCollection___c__DisplayClass4_0_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckDiCollection___c__DisplayClass4_0_1(LckDiCollection___c__DisplayClass4_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24809};

/// @brief Field factory, offset: 0x10, size: 0x8, def value: None
 ::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,TService>*  ___factory;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck::DependencyInjection
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::DependencyInjection {
// cpp template
template<typename TService>
// Is value type: false
// CS Name: Liv.Lck.DependencyInjection.LckDiCollection/<>c__DisplayClass2_0`1<TService>
class CORDL_TYPE LckDiCollection___c__DisplayClass2_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field factory, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_factory, put=__cordl_internal_set_factory)) ::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,TService>*  factory;

static inline ::Liv::Lck::DependencyInjection::LckDiCollection___c__DisplayClass2_0_1<TService>* New_ctor() ;

/// @brief Method <AddTransientFactory>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Object* _AddTransientFactory_b__0(::Liv::Lck::DependencyInjection::LckServiceProvider*  p) ;

constexpr ::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,TService>* const& __cordl_internal_get_factory() const;

constexpr ::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,TService>*& __cordl_internal_get_factory() ;

constexpr void __cordl_internal_set_factory(::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,TService>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckDiCollection___c__DisplayClass2_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckDiCollection___c__DisplayClass2_0_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckDiCollection___c__DisplayClass2_0_1(LckDiCollection___c__DisplayClass2_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckDiCollection___c__DisplayClass2_0_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckDiCollection___c__DisplayClass2_0_1(LckDiCollection___c__DisplayClass2_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24808};

/// @brief Field factory, offset: 0x10, size: 0x8, def value: None
 ::System::Func_2<::Liv::Lck::DependencyInjection::LckServiceProvider*,TService>*  ___factory;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck::DependencyInjection
