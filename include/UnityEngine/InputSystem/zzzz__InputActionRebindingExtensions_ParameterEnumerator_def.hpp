#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionRebindingExtensions_ParameterEnumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionRebindingExtensions_ParameterEnumerator)
namespace GlobalNamespace {
struct InputActionRebindingExtensions_ParameterOverride;
}
namespace GlobalNamespace {
struct InputActionRebindingExtensions_Parameter;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Reflection {
class FieldInfo;
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
namespace UnityEngine::InputSystem {
class InputActionState;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputActionRebindingExtensions_ParameterEnumerator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerator);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerator, "UnityEngine.InputSystem", "InputActionRebindingExtensions/ParameterEnumerator");
// Dependencies UnityEngine.InputSystem.InputBinding
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterEnumerator
struct CORDL_TYPE InputActionRebindingExtensions_ParameterEnumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) ::GlobalNamespace::InputActionRebindingExtensions_Parameter  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputActionRebindingExtensions_Parameter>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputActionRebindingExtensions_Parameter>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xaf1c1d8, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method FindParameter, addr 0xaf1c02c, size 0xdc, virtual false, abstract: false, final false
inline bool FindParameter(::System::Object*  instance) ;

/// @brief Method MoveNext, addr 0xaf16658, size 0xb4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method MoveToNextBinding, addr 0xaf1be0c, size 0x1b0, virtual false, abstract: false, final false
inline bool MoveToNextBinding() ;

/// @brief Method MoveToNextInteraction, addr 0xaf1bfbc, size 0x70, virtual false, abstract: false, final false
inline bool MoveToNextInteraction() ;

/// @brief Method MoveToNextProcessor, addr 0xaf1c108, size 0x70, virtual false, abstract: false, final false
inline bool MoveToNextProcessor() ;

/// @brief Method Reset, addr 0xaf1bd24, size 0xe8, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xaf1c178, size 0x60, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method .ctor, addr 0xaf1b8b4, size 0x26c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::InputSystem::InputActionState*  state, ::GlobalNamespace::InputActionRebindingExtensions_ParameterOverride  parameter, int32_t  mapIndex) ;

/// @brief Method get_Current, addr 0xaf165f4, size 0x64, virtual true, abstract: false, final true
inline ::GlobalNamespace::InputActionRebindingExtensions_Parameter get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputActionRebindingExtensions_Parameter>"
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::InputActionRebindingExtensions_Parameter>* i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__InputActionRebindingExtensions_Parameter_() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputActionRebindingExtensions_ParameterEnumerator() ;

// Ctor Parameters [CppParam { name: "m_State", ty: "::UnityEngine::InputSystem::InputActionState*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_MapIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_BindingCurrentIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_BindingEndIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_InteractionCurrentIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_InteractionEndIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ProcessorCurrentIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ProcessorEndIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_BindingMask", ty: "::UnityEngine::InputSystem::InputBinding", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ObjectType", ty: "::System::Type*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ParameterName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_MayBeInteraction", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_MayBeProcessor", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_MayBeComposite", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CurrentBindingIsComposite", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CurrentObject", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CurrentParameter", ty: "::System::Reflection::FieldInfo*", modifiers: "", def_value: None, comment: None }]
constexpr InputActionRebindingExtensions_ParameterEnumerator(::UnityEngine::InputSystem::InputActionState*  m_State, int32_t  m_MapIndex, int32_t  m_BindingCurrentIndex, int32_t  m_BindingEndIndex, int32_t  m_InteractionCurrentIndex, int32_t  m_InteractionEndIndex, int32_t  m_ProcessorCurrentIndex, int32_t  m_ProcessorEndIndex, ::UnityEngine::InputSystem::InputBinding  m_BindingMask, ::System::Type*  m_ObjectType, ::StringW  m_ParameterName, bool  m_MayBeInteraction, bool  m_MayBeProcessor, bool  m_MayBeComposite, bool  m_CurrentBindingIsComposite, ::System::Object*  m_CurrentObject, ::System::Reflection::FieldInfo*  m_CurrentParameter) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13365};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xa8};

/// @brief Field m_State, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputActionState*  m_State;

/// @brief Field m_MapIndex, offset: 0x8, size: 0x4, def value: None
 int32_t  m_MapIndex;

/// @brief Field m_BindingCurrentIndex, offset: 0xc, size: 0x4, def value: None
 int32_t  m_BindingCurrentIndex;

/// @brief Field m_BindingEndIndex, offset: 0x10, size: 0x4, def value: None
 int32_t  m_BindingEndIndex;

/// @brief Field m_InteractionCurrentIndex, offset: 0x14, size: 0x4, def value: None
 int32_t  m_InteractionCurrentIndex;

/// @brief Field m_InteractionEndIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  m_InteractionEndIndex;

/// @brief Field m_ProcessorCurrentIndex, offset: 0x1c, size: 0x4, def value: None
 int32_t  m_ProcessorCurrentIndex;

/// @brief Field m_ProcessorEndIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  m_ProcessorEndIndex;

/// @brief Field m_BindingMask, offset: 0x28, size: 0x58, def value: None
 ::UnityEngine::InputSystem::InputBinding  m_BindingMask;

/// @brief Field m_ObjectType, offset: 0x80, size: 0x8, def value: None
 ::System::Type*  m_ObjectType;

/// @brief Field m_ParameterName, offset: 0x88, size: 0x8, def value: None
 ::StringW  m_ParameterName;

/// @brief Field m_MayBeInteraction, offset: 0x90, size: 0x1, def value: None
 bool  m_MayBeInteraction;

/// @brief Field m_MayBeProcessor, offset: 0x91, size: 0x1, def value: None
 bool  m_MayBeProcessor;

/// @brief Field m_MayBeComposite, offset: 0x92, size: 0x1, def value: None
 bool  m_MayBeComposite;

/// @brief Field m_CurrentBindingIsComposite, offset: 0x93, size: 0x1, def value: None
 bool  m_CurrentBindingIsComposite;

/// @brief Field m_CurrentObject, offset: 0x98, size: 0x8, def value: None
 ::System::Object*  m_CurrentObject;

/// @brief Field m_CurrentParameter, offset: 0xa0, size: 0x8, def value: None
 ::System::Reflection::FieldInfo*  m_CurrentParameter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerator, m_State) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerator, m_MapIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerator, m_BindingCurrentIndex) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerator, m_BindingEndIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerator, m_InteractionCurrentIndex) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerator, m_InteractionEndIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerator, m_ProcessorCurrentIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerator, m_ProcessorEndIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerator, m_BindingMask) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerator, m_ObjectType) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerator, m_ParameterName) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerator, m_MayBeInteraction) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerator, m_MayBeProcessor) == 0x91, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerator, m_MayBeComposite) == 0x92, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerator, m_CurrentBindingIsComposite) == 0x93, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerator, m_CurrentObject) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerator, m_CurrentParameter) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputActionRebindingExtensions_ParameterEnumerator) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace
