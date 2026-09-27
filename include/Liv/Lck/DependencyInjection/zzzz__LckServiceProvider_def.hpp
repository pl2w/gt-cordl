#pragma once
// IWYU pragma private; include "Liv/Lck/DependencyInjection/LckServiceProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LckServiceProvider)
namespace Liv::Lck::DependencyInjection {
class LckDiServiceRegistration;
}
namespace Liv::Lck::DependencyInjection {
class LckServiceProvider___c;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Liv::Lck::DependencyInjection {
class LckServiceProvider;
}
namespace Liv::Lck::DependencyInjection {
class LckServiceProvider___c;
}
// Write type traits
MARK_REF_T(::Liv::Lck::DependencyInjection::LckServiceProvider*);
MARK_REF_T(::Liv::Lck::DependencyInjection::LckServiceProvider___c*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::DependencyInjection::LckServiceProvider*, "Liv.Lck.DependencyInjection", "LckServiceProvider");
DEFINE_IL2CPP_CLASS(::Liv::Lck::DependencyInjection::LckServiceProvider___c*, "Liv.Lck.DependencyInjection", "LckServiceProvider/<>c");
// Dependencies System.Object
namespace Liv::Lck::DependencyInjection {
// Is value type: false
// CS Name: Liv.Lck.DependencyInjection.LckServiceProvider
class CORDL_TYPE LckServiceProvider : public ::System::Object {
public:
// Declarations
using __c = ::Liv::Lck::DependencyInjection::LckServiceProvider___c;

/// @brief Field _disposed, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposed, put=__cordl_internal_set__disposed)) bool  _disposed;

/// @brief Field _registrations, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__registrations, put=__cordl_internal_set__registrations)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::DependencyInjection::LckDiServiceRegistration*>*  _registrations;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method CreateInstance, addr 0x9d35fec, size 0x70c, virtual false, abstract: false, final false
inline ::System::Object* CreateInstance(::ArrayW<::System::Reflection::ConstructorInfo*>  constructors, ::Liv::Lck::DependencyInjection::LckDiServiceRegistration*  registration) ;

/// @brief Method Dispose, addr 0x9d350c0, size 0x44c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetService, addr 0x9d35878, size 0x14c, virtual false, abstract: false, final false
inline ::System::Object* GetService(::System::Type*  serviceType) ;

/// @brief Method GetService, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
inline T GetService() ;

static inline ::Liv::Lck::DependencyInjection::LckServiceProvider* New_ctor(::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::DependencyInjection::LckDiServiceRegistration*>*  registrations) ;

/// @brief Method ProvideService, addr 0x9d35b3c, size 0x4b0, virtual false, abstract: false, final false
inline ::System::Object* ProvideService(::System::Type*  serviceType) ;

constexpr bool const& __cordl_internal_get__disposed() const;

constexpr bool& __cordl_internal_get__disposed() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::DependencyInjection::LckDiServiceRegistration*>* const& __cordl_internal_get__registrations() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::DependencyInjection::LckDiServiceRegistration*>*& __cordl_internal_get__registrations() ;

constexpr void __cordl_internal_set__disposed(bool  value) ;

constexpr void __cordl_internal_set__registrations(::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::DependencyInjection::LckDiServiceRegistration*>*  value) ;

/// @brief Method .ctor, addr 0x9d348ac, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::DependencyInjection::LckDiServiceRegistration*>*  registrations) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckServiceProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckServiceProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckServiceProvider(LckServiceProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckServiceProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckServiceProvider(LckServiceProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24819};

/// @brief Field _registrations, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Type*,::Liv::Lck::DependencyInjection::LckDiServiceRegistration*>*  ____registrations;

/// @brief Field _disposed, offset: 0x18, size: 0x1, def value: None
 bool  ____disposed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::DependencyInjection::LckServiceProvider, ____registrations) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::DependencyInjection::LckServiceProvider, ____disposed) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::DependencyInjection::LckServiceProvider) == 0x20, "Size mismatch!");

} // namespace end def Liv::Lck::DependencyInjection
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::DependencyInjection {
// Is value type: false
// CS Name: Liv.Lck.DependencyInjection.LckServiceProvider/<>c
class CORDL_TYPE LckServiceProvider___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Liv::Lck::DependencyInjection::LckServiceProvider___c*  __9;

/// @brief Field <>9__6_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__6_0, put=setStaticF___9__6_0)) ::System::Func_2<::System::Reflection::ConstructorInfo*,int32_t>*  __9__6_0;

static inline ::Liv::Lck::DependencyInjection::LckServiceProvider___c* New_ctor() ;

/// @brief Method <CreateInstance>b__6_0, addr 0x9d36768, size 0x34, virtual false, abstract: false, final false
inline int32_t _CreateInstance_b__6_0(::System::Reflection::ConstructorInfo*  c) ;

/// @brief Method .ctor, addr 0x9d36760, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Liv::Lck::DependencyInjection::LckServiceProvider___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Reflection::ConstructorInfo*,int32_t>* getStaticF___9__6_0() ;

static inline void setStaticF___9(::Liv::Lck::DependencyInjection::LckServiceProvider___c*  value) ;

static inline void setStaticF___9__6_0(::System::Func_2<::System::Reflection::ConstructorInfo*,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckServiceProvider___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckServiceProvider___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckServiceProvider___c(LckServiceProvider___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckServiceProvider___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckServiceProvider___c(LckServiceProvider___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24818};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::DependencyInjection::LckServiceProvider___c) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::DependencyInjection
