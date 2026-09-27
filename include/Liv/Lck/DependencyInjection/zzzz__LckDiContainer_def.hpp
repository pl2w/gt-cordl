#pragma once
// IWYU pragma private; include "Liv/Lck/DependencyInjection/LckDiContainer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LckDiContainer)
namespace Liv::Lck::DependencyInjection {
class LckMonoBehaviourDependencyInjector;
}
namespace Liv::Lck::DependencyInjection {
class LckServiceProvider;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Liv::Lck::DependencyInjection {
class LckDiContainer;
}
// Write type traits
MARK_REF_T(::Liv::Lck::DependencyInjection::LckDiContainer*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::DependencyInjection::LckDiContainer*, "Liv.Lck.DependencyInjection", "LckDiContainer");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::DependencyInjection {
// Is value type: false
// CS Name: Liv.Lck.DependencyInjection.LckDiContainer
class CORDL_TYPE LckDiContainer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>  _instance;

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

/// @brief Method Awake, addr 0x9d34964, size 0x140, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Build, addr 0x9d32bcc, size 0x18, virtual false, abstract: false, final false
inline void Build() ;

/// @brief Method GetInjector, addr 0x9d33d68, size 0x1c, virtual false, abstract: false, final false
inline ::Liv::Lck::DependencyInjection::LckMonoBehaviourDependencyInjector* GetInjector() ;

/// @brief Method GetService, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
inline T GetService() ;

/// @brief Method HasService, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
inline bool HasService() ;

static inline ::Liv::Lck::DependencyInjection::LckDiContainer* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9d34b1c, size 0xc4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method .ctor, addr 0x9d35000, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer> getStaticF__instance() ;

/// @brief Method get_Instance, addr 0x9d32430, size 0x214, virtual false, abstract: false, final false
static inline ::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer> get_Instance() ;

static inline void setStaticF__instance(::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckDiContainer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckDiContainer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckDiContainer(LckDiContainer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckDiContainer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckDiContainer(LckDiContainer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24811};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::DependencyInjection::LckDiContainer) == 0x20, "Size mismatch!");

} // namespace end def Liv::Lck::DependencyInjection
