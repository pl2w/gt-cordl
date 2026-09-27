#pragma once
// IWYU pragma private; include "Liv/Lck/LckModuleLoader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LckModuleLoader)
namespace Liv::Lck::DependencyInjection {
class LckDiContainer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Liv::Lck {
class LckModuleLoader;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckModuleLoader*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckModuleLoader*, "Liv.Lck", "LckModuleLoader");
// Dependencies System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckModuleLoader
class CORDL_TYPE LckModuleLoader : public ::System::Object {
public:
// Declarations
/// @brief Field _moduleConfigurators, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__moduleConfigurators, put=setStaticF__moduleConfigurators)) ::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>>*>*  _moduleConfigurators;

/// @brief Method Configure, addr 0x9cef4f0, size 0x170, virtual false, abstract: false, final false
static inline void Configure(::Liv::Lck::DependencyInjection::LckDiContainer*  container) ;

/// @brief Method RegisterModule, addr 0x9cef374, size 0x17c, virtual false, abstract: false, final false
static inline void RegisterModule(::System::Action_1<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>>*  configure, ::StringW  name) ;

static inline ::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>>*>* getStaticF__moduleConfigurators() ;

static inline void setStaticF__moduleConfigurators(::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::Liv::Lck::DependencyInjection::LckDiContainer>>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckModuleLoader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckModuleLoader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckModuleLoader(LckModuleLoader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckModuleLoader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckModuleLoader(LckModuleLoader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24774};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::LckModuleLoader) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck
