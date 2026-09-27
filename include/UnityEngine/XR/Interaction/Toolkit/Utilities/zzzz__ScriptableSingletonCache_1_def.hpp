#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/ScriptableSingletonCache_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ScriptableSingletonCache_1)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class ScriptableObject;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template<typename T>
class ScriptableSingletonCache_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::XR::Interaction::Toolkit::Utilities::ScriptableSingletonCache_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::XR::Interaction::Toolkit::Utilities::ScriptableSingletonCache_1, "UnityEngine.XR.Interaction.Toolkit.Utilities", "ScriptableSingletonCache`1");
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.ScriptableSingletonCache`1<T>
class CORDL_TYPE ScriptableSingletonCache_1 : public ::System::Object {
public:
// Declarations
/// @brief Field s_Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Instance, put=setStaticF_s_Instance)) T  s_Instance;

/// @brief Field s_UsersPerInstance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_UsersPerInstance, put=setStaticF_s_UsersPerInstance)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::ScriptableObject>,::System::Collections::Generic::HashSet_1<::System::Object*>*>*  s_UsersPerInstance;

/// @brief Method GetInstance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline T GetInstance(::System::Object*  user) ;

/// @brief Method ReleaseInstance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void ReleaseInstance(::System::Object*  user) ;

static inline T getStaticF_s_Instance() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::ScriptableObject>,::System::Collections::Generic::HashSet_1<::System::Object*>*>* getStaticF_s_UsersPerInstance() ;

static inline void setStaticF_s_Instance(T  value) ;

static inline void setStaticF_s_UsersPerInstance(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::ScriptableObject>,::System::Collections::Generic::HashSet_1<::System::Object*>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScriptableSingletonCache_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScriptableSingletonCache_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScriptableSingletonCache_1(ScriptableSingletonCache_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableSingletonCache_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScriptableSingletonCache_1(ScriptableSingletonCache_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11215};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
