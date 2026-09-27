#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/ComponentLocatorUtility_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ComponentLocatorUtility_1)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template<typename T>
class ComponentLocatorUtility_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::XR::Interaction::Toolkit::Utilities::ComponentLocatorUtility_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::XR::Interaction::Toolkit::Utilities::ComponentLocatorUtility_1, "UnityEngine.XR.Interaction.Toolkit.Utilities", "ComponentLocatorUtility`1");
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.ComponentLocatorUtility`1<T>
class CORDL_TYPE ComponentLocatorUtility_1 : public ::System::Object {
public:
// Declarations
/// @brief Field s_ComponentCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ComponentCache, put=setStaticF_s_ComponentCache)) T  s_ComponentCache;

/// @brief Field s_LastTryFindFrame, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_LastTryFindFrame, put=setStaticF_s_LastTryFindFrame)) int32_t  s_LastTryFindFrame;

/// @brief Method Find, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline T Find() ;

/// @brief Method FindComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline T FindComponent() ;

/// @brief Method FindOrCreateComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline T FindOrCreateComponent() ;

/// @brief Method FindWasPerformedThisFrame, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool FindWasPerformedThisFrame() ;

/// @brief Method TryFindComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool TryFindComponent(::by_ref<T>  component) ;

/// @brief Method TryFindComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool TryFindComponent(::by_ref<T>  component, bool  limitTryFindPerFrame) ;

static inline T getStaticF_s_ComponentCache() ;

static inline int32_t getStaticF_s_LastTryFindFrame() ;

/// @brief Method get_componentCache, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline T get_componentCache() ;

static inline void setStaticF_s_ComponentCache(T  value) ;

static inline void setStaticF_s_LastTryFindFrame(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ComponentLocatorUtility_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ComponentLocatorUtility_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ComponentLocatorUtility_1(ComponentLocatorUtility_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ComponentLocatorUtility_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ComponentLocatorUtility_1(ComponentLocatorUtility_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11201};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
