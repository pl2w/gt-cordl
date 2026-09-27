#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputProcessor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__TypeTable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InputProcessor)
namespace GlobalNamespace {
struct InputProcessor_CachingPolicy;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputProcessor;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::InputProcessor*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputProcessor*, "UnityEngine.InputSystem", "InputProcessor");
// Dependencies System.Object, UnityEngine.InputSystem.Utilities.TypeTable
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputProcessor
class CORDL_TYPE InputProcessor : public ::System::Object {
public:
// Declarations
using CachingPolicy = ::GlobalNamespace::InputProcessor_CachingPolicy;

 __declspec(property(get=get_cachingPolicy)) ::GlobalNamespace::InputProcessor_CachingPolicy  cachingPolicy;

/// @brief Field s_Processors, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Processors, put=setStaticF_s_Processors)) ::UnityEngine::InputSystem::Utilities::TypeTable  s_Processors;

/// @brief Method GetValueTypeFromType, addr 0xaf5a534, size 0xe4, virtual false, abstract: false, final false
static inline ::System::Type* GetValueTypeFromType(::System::Type*  processorType) ;

static inline ::UnityEngine::InputSystem::InputProcessor* New_ctor() ;

/// @brief Method Process, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Process(void*  buffer, int32_t  bufferSize, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method ProcessAsObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* ProcessAsObject(::System::Object*  value, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method .ctor, addr 0xaf5a620, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::InputSystem::Utilities::TypeTable getStaticF_s_Processors() ;

/// @brief Method get_cachingPolicy, addr 0xaf5a618, size 0x8, virtual true, abstract: false, final false
inline ::GlobalNamespace::InputProcessor_CachingPolicy get_cachingPolicy() ;

static inline void setStaticF_s_Processors(::UnityEngine::InputSystem::Utilities::TypeTable  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputProcessor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputProcessor(InputProcessor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputProcessor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputProcessor(InputProcessor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13446};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::InputProcessor) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
